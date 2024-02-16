#pragma once

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