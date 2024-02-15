#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x968 - 0x940)
// BlueprintGeneratedClass GA_ApplySmokeBomb.GA_ApplySmokeBomb_C
class UGA_ApplySmokeBomb_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_ApplySmokeBomb;                                 // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          SmokeBombMontage;                                  // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BlockEquipement;                                   // 0x960(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ApplySmokeBomb_C* GetDefaultObj();

	void Completed_FBFA2E1D4AB925F4E31BC0B264798026(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_FBFA2E1D4AB925F4E31BC0B264798026(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_FBFA2E1D4AB925F4E31BC0B264798026(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ApplyShroud();
	void FailsafeEnd();
	void CleanupShadowbomb(class UFortWorldItem* ItemDropped);
	void ExecuteUbergraph_GA_ApplySmokeBomb(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortWorldItem* K2Node_CustomEvent_ItemDropped, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess);
};

}


