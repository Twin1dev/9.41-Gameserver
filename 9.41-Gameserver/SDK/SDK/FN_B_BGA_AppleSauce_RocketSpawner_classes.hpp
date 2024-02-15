#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x7B0 - 0x6F8)
// BlueprintGeneratedClass B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C
class AB_BGA_AppleSauce_RocketSpawner_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_AirBlast;                                        // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBottleRockets;                                // 0x710(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxSlope;                                          // 0x714(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Impact_Loc;                                        // 0x718(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitNormal;                                         // 0x724(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bResumeSimulation;                                 // 0x730(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_5297[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        FoundBuildingOnDied;                               // 0x738(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class USoundBase*                            PlacementSound;                                    // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              MeshLandRotation;                                  // 0x750(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        ArrowPlacementPitch;                               // 0x75C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseGroundRotOffset;                                // 0x760(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5298[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeathDelay;                                        // 0x764(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        YawOffset;                                         // 0x768(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5299[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  ForceFeedbackNear;                                 // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ForceFeedbackFar;                                  // 0x778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeathHiddenDelay;                                  // 0x780(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ApplyRotation;                                     // 0x784(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         StartedDestroying;                                 // 0x785(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_529A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Rocket_HideParam_Names;                            // 0x788(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        RocketCounter;                                     // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_529B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            LaunchSound;                                       // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SpawnClusterTag;                                   // 0x7A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_BGA_AppleSauce_RocketSpawner_C* GetDefaultObj();

	void OnRep_StartedDestroying();
	void OnRep_bResumeSimulation();
	void HandleBinding(class AActor* Actor);
	void DestroyClusterSpawner();
	void OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState);
	void AirBlast_Incoming_Audio();
	void ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner(int32 EntryPoint, class AActor* K2Node_CustomEvent_Actor, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, enum class EFortBuildingInitializationReason K2Node_Event_InitializationReason, enum class EFortBuildingPersistentState K2Node_Event_BuildingPersistentState, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


