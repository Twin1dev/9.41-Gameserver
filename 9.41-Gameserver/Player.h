#pragma once
void ServerAcknowlegePossessionHook(APlayerController* Controller, APawn* Pawn)
{
	Controller->AcknowledgedPawn = Pawn;
}

namespace Player {
	void HookAll()
	{
		auto FortPlayerControllerAthenaDefault = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");
		auto FortPawnAthenaDefault = StaticFindObject<AFortPlayerPawnAthena>("/Game/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C");

		VirtualHook(FortPlayerControllerAthenaDefault->Vft, 264, ServerAcknowlegePossessionHook);
	}
}