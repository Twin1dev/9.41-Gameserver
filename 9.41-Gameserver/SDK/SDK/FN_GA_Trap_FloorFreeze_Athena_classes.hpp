#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x9B0 - 0x970)
// BlueprintGeneratedClass GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C
class UGA_Trap_FloorFreeze_Athena_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x970(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFortTargetFilter                     TargetFilter;                                      // 0x978(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Trap_FloorFreeze_Athena_C* GetDefaultObj();

	void Cancelled_4882FEAA4B32D70FE53C06A619E266D1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_4882FEAA4B32D70FE53C06A619E266D1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void GA_LifeTimer();
	void ExecuteUbergraph_GA_Trap_FloorFreeze_Athena(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, float CallFunc_GetDamageDelay_ReturnValue, const struct FGameplayTag& CallFunc_GetActivateTrapGameplayCueTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, const struct FGameplayTag& CallFunc_GetDelayBeginGameplayCueTag_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}


