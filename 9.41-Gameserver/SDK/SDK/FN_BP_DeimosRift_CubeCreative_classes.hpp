#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xDAC - 0xD7B)
// BlueprintGeneratedClass BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C
class ABP_DeimosRift_CubeCreative_C : public ABP_CreativeDeimosRift_C
{
public:
	uint8                                        Pad_130[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        LifeTime;                                          // 0xD88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_131[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          LifeTimeTimerHandle;                               // 0xD90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        TimeLastSetLifeTimeTimer;                          // 0xD98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ThrottleTime;                                      // 0xD9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_LifeTimeLapsed;                                 // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ServerSpawnTime;                                   // 0xDA8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeimosRift_CubeCreative_C* GetDefaultObj();

	void OnRep_ServerSpawnTime();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void SetLifeTimeTimer();
	void LifeTimeExpired();
	void BP_Cosmetic_Intro();
	void BP_Cosmetic_Idle();
	void BP_Cosmetic_RampUp();
	void BP_Cosmetic_ShouldDie();
	void HideSpawner();
	void BlueprintHideRift();
	void BlueprintHideVFX();
	void OnStartedEncounterSpawn(class AFortAIPawn* SpawnedAI);
	void ExecuteUbergraph_BP_DeimosRift_CubeCreative(int32 EntryPoint, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetTimeSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USphereComponent* K2Node_DynamicCast_AsSphere_Collision, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, class AFortAIPawn* K2Node_Event_SpawnedAI, bool CallFunc_Not_PreBool_ReturnValue_4);
};

}


