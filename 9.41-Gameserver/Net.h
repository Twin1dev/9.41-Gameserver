#pragma once

// https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/ENetMode/
enum ENetMode
{
	NM_Standalone,
	NM_DedicatedServer,
	NM_ListenServer,
	NM_Client,
	NM_MAX,
};

constexpr ENetMode NetMode = ENetMode::NM_DedicatedServer;

static ENetMode GetNetModeWorld()
{
	return NetMode;
}

static ENetMode GetNetModeActor()
{
	return NetMode;
}

float GetMaxTickrateHook() { return 30.f; };

// For Listening
inline UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld* InWorld, FName NetDriverDefinition);
inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World);
inline void (*ServerReplicateActors)(UReplicationDriver* ReplicationDriver);

void (*TickFlush)(UNetDriver*);
void TickFlushHook(UNetDriver* NetDriver)
{
	if (auto ReplicationDriver = NetDriver->ReplicationDriver)
		ServerReplicateActors(ReplicationDriver);

	return TickFlush(NetDriver);
}