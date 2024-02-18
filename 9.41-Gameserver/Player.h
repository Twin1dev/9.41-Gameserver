#pragma once
#include "Globals.h"
#include "Includes.h"

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

static inline void (*ServerEditBuildingActor)(UObject*, FFrame&, void*);
static void ServerEditBuildingActorHook(UObject* Context, FFrame& Stack, void* Ret)
{
	auto PC = (AFortPlayerController*)Context;

	auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;

	auto Params = (AFortPlayerController_ServerEditBuildingActor_Params*)Stack.Locals;

	if (!Params->BuildingActorToEdit || !Params->NewBuildingClass.Get() || Params->BuildingActorToEdit->bDestroyed || Params->BuildingActorToEdit->EditingPlayer != PlayerState)
	{
		LOG("shaboing!");
		return ServerEditBuildingActor(Context, Stack, Ret);
	}


	Params->BuildingActorToEdit->EditingPlayer = nullptr;


	static ABuildingSMActor* (*BuildingSMActorReplaceBuildingActor)(ABuildingSMActor*, __int64, UClass*, int, int, uint8_t, AFortPlayerController*) =
		decltype(BuildingSMActorReplaceBuildingActor)(BaseAddress() + 0x1782040);

	if (auto BuildingActor = BuildingSMActorReplaceBuildingActor(Params->BuildingActorToEdit, 1, Params->NewBuildingClass.Get(), Params->BuildingActorToEdit->CurrentBuildingLevel, Params->RotationIterations, Params->bMirrored, PC))
	{
		BuildingActor->bPlayerPlaced = true;

		BuildingActor->SetTeam(PlayerState->TeamIndex);
		BuildingActor->OnRep_Team();
	}

	return ServerEditBuildingActor(Context, Stack, Ret);
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

		static auto ServerCreateBuildingActorFn = StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor");
		static auto ServerEditBuildingActorFn = StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerEditBuildingActor");
		auto FortPlayerControllerAthenaDefault = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");
		auto FortPawnAthenaDefault = StaticFindObject<AFortPlayerPawnAthena>("/Game/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C");

		VirtualHook(FortPlayerControllerAthenaDefault->Vft, 264, ServerAcknowlegePossessionHook);
		VirtualHook(FortPlayerControllerAthenaDefault->Vft, 509, ServerExecuteInventoryItemHook);
	}
}