#pragma once
#include "../9.41-Gameserver/SDK/SDK/FN_Engine_functions.cpp"
#include "Globals.h"
#include "Memory.h"


class UWorld* UWorld::GetWorld()
{
	if (UEngine* Engine = UEngine::GetEngine())
	{
		if (!Engine->GameViewport)
			return nullptr;

		return Engine->GameViewport->World;
	}

	return nullptr;
}

struct AFortPlayerController_ServerEditBuildingActor_Params
{
public:
	class ABuildingSMActor* BuildingActorToEdit;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABuildingSMActor>          NewBuildingClass;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RotationIterations;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrored;                                         // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2825[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

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

static inline void (*ServerCreateBuildingActor)(UObject* Context, FFrame* Stack, void* Ret);
void ServerCreateBuildingActorHook(UObject* Context, FFrame* Stack, void* Ret)
{
	auto PC = (AFortPlayerControllerAthena*)Context;

	if (!PC)
		return ServerCreateBuildingActor(Context, Stack, Ret);

	auto CreateBuildingData = (FCreateBuildingActorData*)Stack->Locals;

	if (!PC->BroadcastRemoteClientInfo->RemoteBuildableClass.Get())
		return ServerCreateBuildingActor(Context, Stack, Ret);

	static __int64 (*CantBuild)(UObject*, UObject*, FVector, FRotator, char, TArray<ABuildingSMActor*>*, char*) = decltype(CantBuild)(BaseAddress() + 0x19ee0e0);

	TArray<ABuildingSMActor*> ExistingBuildings;
	char Gangster;

	static bool bCanBuild = true;

	if (bCanBuild)
	{
		for (int i = 0; i < ExistingBuildings.Num(); i++)
		{
			auto ExistingBuilding = ExistingBuildings[i];

			ExistingBuilding->K2_DestroyActor();
		}

		auto NewBuilding = SpawnActor<ABuildingSMActor>(CreateBuildingData->BuildLoc, CreateBuildingData->BuildRot, PC->BroadcastRemoteClientInfo->RemoteBuildableClass.Get());

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

// holy frickin proper!
static void ServerBeginEditingBuildingActorHook(AFortPlayerController* PlayerController, ABuildingSMActor* BuildingActorToEdit)
{
	// for some reason this happens where i cant edit the building anymore
	if (!BuildingActorToEdit || !BuildingActorToEdit->bPlayerPlaced)
	{
		LOG("buh??");
		return;
	}

	auto Pawn = PlayerController->MyFortPawn;

	if (!Pawn)
	{
		LOG("no pawn???????");
		return;
	}

	auto PlayerState = Cast<AFortPlayerStateZone>(Pawn->PlayerState);

	if (!PlayerState)
	{
		LOG("no playerstaet");
		return;
	}

	if (!BuildingActorToEdit->EditingPlayer)
	{
		BuildingActorToEdit->SetNetDormancy((ENetDormancy)(2 - (PlayerState != 0)));
		BuildingActorToEdit->EditingPlayer = PlayerState;
	}

	static auto EditToolDef = StaticFindObject<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

	auto ToolInstance = FindItemInstanceByDef(PlayerController, EditToolDef);

	if (!ToolInstance)
	{
		LOG("No ToolInstance");
		return;
	}

	Pawn->EquipWeaponDefinition(EditToolDef, ToolInstance->ItemEntry.ItemGuid);

	auto EditTool = Cast<AFortWeap_EditingTool>(Pawn->CurrentWeapon);

	if (!EditTool)
	{
		LOG("No EditTool");
		return;
	}

	EditTool->EditActor = BuildingActorToEdit;
	EditTool->OnRep_EditActor();
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

static void ServerEndEditingBuildingActor(AFortPlayerController* PlayerController, ABuildingSMActor* BuildingActorToStopEditing)
{
	auto Pawn = PlayerController->MyFortPawn;
	if (!BuildingActorToStopEditing || !Pawn || BuildingActorToStopEditing->EditingPlayer != (AFortPlayerStateZone*)PlayerController->PlayerState || BuildingActorToStopEditing->bDestroyed)
	{
		LOG("boing");
		return;
	}

	static auto EditToolDef = StaticFindObject<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

	auto ToolInstance = FindItemInstanceByDef(PlayerController, EditToolDef);

	if (!ToolInstance)
	{
		LOG("no toolinstanceend");
		return;
	}

	Pawn->EquipWeaponDefinition(EditToolDef, ToolInstance->ItemEntry.ItemGuid);

	// smart guy!
	auto EditTool = Cast<AFortWeap_EditingTool>(Pawn->CurrentWeapon);

	BuildingActorToStopEditing->EditingPlayer = nullptr;
	//BuildingActorToStopEditing->OnRep_EditingPlayer();

	if (EditTool)
	{
		EditTool->EditActor = nullptr;
		EditTool->OnRep_EditActor();
	}


}

namespace Player {
	void HookAll()
	{
		auto DefaultFortPlayerController = StaticFindObject<AFortPlayerController>("/Script/FortniteGame.Default__FortPlayerControllerAthena");
		auto FortPlayerControllerAthenaDefault = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");
		auto FortPawnAthenaDefault = StaticFindObject<AFortPlayerPawnAthena>("/Game/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C");

		VirtualHook(FortPlayerControllerAthenaDefault->Vft, 264, ServerAcknowlegePossessionHook);
		VirtualHook(FortPlayerControllerAthenaDefault->Vft, 509, ServerExecuteInventoryItemHook);

		static auto ServerCreateBuildingActorFn = StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor");
		HookExec(ServerCreateBuildingActorFn, ServerCreateBuildingActorHook, (PVOID*)&ServerCreateBuildingActor);

		VirtualHook(DefaultFortPlayerController->Vft, 567, ServerBeginEditingBuildingActorHook);

		static auto ServerEditBuildingActorFn = StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerEditBuildingActor");
		HookExec(ServerEditBuildingActorFn, ServerEditBuildingActorHook, (PVOID*)&ServerEditBuildingActor);

		VirtualHook(DefaultFortPlayerController->Vft, 565, ServerEndEditingBuildingActor);
	}
}