#pragma once
#include "Globals.h"


static inline void (*ServerCreateBuildingActor)(UObject* Context, FFrame* Stack, void* Ret);
void ServerCreateBuildingActorHook(UObject* Context, FFrame* Stack, void* Ret)
{
	auto PC = (AFortPlayerControllerAthena*)Context;

	if (!PC)
		return ServerCreateBuildingActor(Context, Stack, Ret);

	auto CreateBuildingData = (FCreateBuildingActorData*)Stack->Locals;


	if (!PC->BroadcastRemoteClientInfo->RemoteBuildableClass)
		return ServerCreateBuildingActor(Context, Stack, Ret);

	static __int64 (*CantBuild)(UObject*, UObject*, FVector, FRotator, char, TArray<ABuildingSMActor*>*, char*) = decltype(CantBuild)(BaseAddress() + 0x19ee0e0);

	TArray<ABuildingSMActor*> ExistingBuildings;
	char Gangster;

	bool bCanBuild = !CantBuild(UWorld::GetWorld(), PC->BroadcastRemoteClientInfo->RemoteBuildableClass, CreateBuildingData->BuildLoc, CreateBuildingData->BuildRot, CreateBuildingData->bMirrored, &ExistingBuildings, &Gangster);

	if (bCanBuild)
	{
		for (int i = 0; i < ExistingBuildings.Num(); i++)
		{
			auto ExistingBuilding = ExistingBuildings[i];

			ExistingBuilding->K2_DestroyActor();
		}

		auto NewBuilding = SpawnActor<ABuildingSMActor>(CreateBuildingData->BuildLoc, CreateBuildingData->BuildRot, PC->BroadcastRemoteClientInfo->RemoteBuildableClass);
		
		if (NewBuilding)
		{
			ExistingBuildings.Free();

			NewBuilding->bPlayerPlaced = true;
			NewBuilding->SetTeam(((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex);
			NewBuilding->OnRep_Team();

			NewBuilding->InitializeKismetSpawnedBuildingActor(NewBuilding, PC, true);
		}
	}
	else {
		ExistingBuildings.Free();
		return ServerCreateBuildingActor(Context, Stack, Ret);
	}

	return ServerCreateBuildingActor(Context, Stack, Ret);
}

void ServerAcknowlegePossessionHook(APlayerController* Controller, APawn* Pawn) { Controller->AcknowledgedPawn = Pawn; }

void ServerExecuteInventoryItemHook(AFortPlayerControllerAthena* Controller, FGuid ItemGuid)
{
	if (Controller->IsInAircraft() || !Controller)
		return;

	UFortItemDefinition* ItemDef = FindItemDefByGUID(Controller, ItemGuid);

	if (!ItemDef)
		return;

	if (auto GadgetItemDefinition = Cast<UFortGadgetItemDefinition>(ItemDef))
	{
		ItemDef = GadgetItemDefinition->GetWeaponItemDefinition();
	}

	if (auto DecoItemDefinition = Cast<UFortDecoItemDefinition>(ItemDef))
	{
		auto Pawn = Cast<AFortPlayerPawn>(Controller->Pawn);

		if (!Pawn)
			return;

		Pawn->PickUpActor(nullptr, DecoItemDefinition);

		auto RepEntry = FindItemEntryByGUID(Controller, ItemGuid);

		Pawn->CurrentWeapon->ItemEntryGuid = RepEntry->ItemGuid;

		if (Pawn->CurrentWeapon->IsA(AFortDecoTool_ContextTrap::StaticClass()))
		{
			auto Trap = (AFortDecoTool_ContextTrap*)Pawn->CurrentWeapon;
			Trap->ContextTrapItemDefinition = (UFortContextTrapItemDefinition*)ItemDef;
		}

		ItemDef = nullptr;
	}

	if (auto Weapon = Cast<UFortWeaponItemDefinition>(ItemDef))
	{
		auto Pawn = Cast<AFortPlayerPawn>(Controller->Pawn);

		if (!Pawn) // probably should check for itemguid
			return;

		Pawn->EquipWeaponDefinition(Weapon, ItemGuid);
	}


}

namespace Player {
	void HookAll()
	{
		auto FortPlayerControllerAthenaDefault = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");
		auto FortPawnAthenaDefault = StaticFindObject<AFortPlayerPawnAthena>("/Game/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C");

		VirtualHook(FortPlayerControllerAthenaDefault->Vft, 264, ServerAcknowlegePossessionHook);
		VirtualHook(FortPlayerControllerAthenaDefault->Vft, 509, ServerExecuteInventoryItemHook);
	}
}
