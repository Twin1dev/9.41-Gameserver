#pragma once

static bool bRTSM = false;

bool (*ReadyToStartMatch)(AFortGameModeAthena*);
bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
{
	TArray<AActor*> WarmupActors;
	UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

	int WarmupSpots = WarmupActors.Num();

	WarmupActors.Free();

	if (WarmupSpots == 0)
	{
		return false;
	}

	if (!bRTSM)
	{
		bRTSM = true;

		UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

		GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();
		GetGameState()->OnRep_CurrentPlaylistInfo();

		CreateNetDriver = decltype(CreateNetDriver)(SigScan(Sigs::CreateNetDriver));
		SetWorld = decltype(SetWorld)(BaseAddress() + 0x3096230);
		InitListen = decltype(InitListen)(BaseAddress() + 0x6c7460);

		// ???
		GameMode->StartMatch();
		GameMode->StartPlay();

		UWorld::GetWorld()->NetDriver = CreateNetDriver(UFortEngine::GetEngine(), UWorld::GetWorld(), UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver"));

		if (UWorld::GetWorld()->NetDriver)
		{
			UWorld::GetWorld()->NetDriver->World = UWorld::GetWorld();
			UWorld::GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver");

			FString Err;
			auto URL = FURL();
			URL.Port = 7777;

			InitListen(UWorld::GetWorld()->NetDriver, UWorld::GetWorld(), URL, true, Err);
			SetWorld(UWorld::GetWorld()->NetDriver, UWorld::GetWorld());

			ServerReplicateActors = decltype(ServerReplicateActors)(UWorld::GetWorld()->NetDriver->ReplicationDriver->Vft[0x56]);

			GetGameMode()->GameSession->MaxPlayers = 100;

			UWorld::GetWorld()->LevelCollections[0].NetDriver = UWorld::GetWorld()->NetDriver;
			UWorld::GetWorld()->LevelCollections[1].NetDriver = UWorld::GetWorld()->NetDriver;

			LOG("Listening on Port 7777!");
			SetConsoleTitleA("9.41 Gameserver | Listening on Port 7777");
		}

		GetGameState()->PlayersLeft--;
		GetGameState()->OnRep_PlayersLeft();
		GetGameMode()->bWorldIsReady = true;

		GetGameMode()->WarmupRequiredPlayerCount = 1;
	}

	bool ret = ReadyToStartMatch(GameMode);
	return ret;
}

APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
{
	auto Transform = StartSpot->GetTransform();

	auto NewPawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

	return NewPawn;
}



namespace GameMode {
	void HookAll()
	{
		auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

		VirtualHook(GameModeDefault->Vft, 252, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
		VirtualHook(GameModeDefault->Vft, 195, SpawnDefaultPawnForHook);
	}
}