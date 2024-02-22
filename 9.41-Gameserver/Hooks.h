#pragma once

namespace Hooks {
	char __fastcall RetZeroHook() { LOG("CallToZero"); return 0; }
	bool ReturnTrueHook() { return true; }

	void (*ProcessEvent)(UObject*, UFunction*, void*);
	void ProcessEventHook(UObject* pObject, UFunction* pFunction, void* pParams)
	{
		return ProcessEvent(pObject, pFunction, pParams);
	}

	void StartServer()
	{
		CREATEHOOK(BaseAddress() + 0x33725c0, GetNetModeWorld, nullptr);

		CREATEHOOK(BaseAddress() + 0xb7d2b0, DispatchRequestHook, &DispatchRequest);

		// We need to remove noreserve and maybe validationfailure for PROPER teams, but its backend related.
		CREATEHOOK(SigScan("40 55 53 41 54 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 45 33 E4 48 8B DA 44 89 65 50"), RetZeroHook, nullptr); // ValidationFailure
		CREATEHOOK(SigScan("48 89 5C 24 ? 48 89 6C 24 ?? 56 41 56 41 57 48 81 EC"), RetZeroHook, nullptr); // NoReserve

		CREATEHOOK(BaseAddress() + 0x2cef6c0, GetNetModeActor, nullptr);

		UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

		UKismetSystemLibrary::GetDefaultObj()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Athena_Terrain", nullptr); // looks skunked but holy shit does using switchlevel crash on this season

		MemoryUtils::NullFunction(BaseAddress() + 0x15231c0);

		GameMode::HookAll();
		Player::HookAll();
		Abilities::HookAll();

		CREATEHOOK(BaseAddress() + 0x8fd560, ReturnTrueHook, nullptr); // CanActivateAbility

		CREATEHOOK(BaseAddress() + 0x3323740, GetMaxTickrateHook, nullptr);

		CREATEHOOK(BaseAddress() + 0x3096fa0, TickFlushHook, &TickFlush);

		MH_EnableHook(MH_ALL_HOOKS);
	}
}
