#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C
// (None)

class UClass* UGA_Trap_FloorFreeze_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Trap_FloorFreeze_Athena_C");

	return Clss;
}


// GA_Trap_FloorFreeze_Athena_C GA_Trap_FloorFreeze_Athena.Default__GA_Trap_FloorFreeze_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Trap_FloorFreeze_Athena_C* UGA_Trap_FloorFreeze_Athena_C::GetDefaultObj()
{
	static class UGA_Trap_FloorFreeze_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Trap_FloorFreeze_Athena_C*>(UGA_Trap_FloorFreeze_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.Cancelled_4882FEAA4B32D70FE53C06A619E266D1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Trap_FloorFreeze_Athena_C::Cancelled_4882FEAA4B32D70FE53C06A619E266D1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_FloorFreeze_Athena_C", "Cancelled_4882FEAA4B32D70FE53C06A619E266D1");

	Params::UGA_Trap_FloorFreeze_Athena_C_Cancelled_4882FEAA4B32D70FE53C06A619E266D1_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.Targeted_4882FEAA4B32D70FE53C06A619E266D1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Trap_FloorFreeze_Athena_C::Targeted_4882FEAA4B32D70FE53C06A619E266D1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_FloorFreeze_Athena_C", "Targeted_4882FEAA4B32D70FE53C06A619E266D1");

	Params::UGA_Trap_FloorFreeze_Athena_C_Targeted_4882FEAA4B32D70FE53C06A619E266D1_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Trap_FloorFreeze_Athena_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_FloorFreeze_Athena_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.GA_LifeTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Trap_FloorFreeze_Athena_C::GA_LifeTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_FloorFreeze_Athena_C", "GA_LifeTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.ExecuteUbergraph_GA_Trap_FloorFreeze_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           (None)
// class UFortAbilityTask_WaitTargetSelection*CallFunc_WaitTargetSelection_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamageDelay_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActivateTrapGameplayCueTag_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFireDelay_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDelayBeginGameplayCueTag_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAbilityLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                CallFunc_GetReloadBeginGameplayCueTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Trap_FloorFreeze_Athena_C::ExecuteUbergraph_GA_Trap_FloorFreeze_Athena(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, float CallFunc_GetDamageDelay_ReturnValue, const struct FGameplayTag& CallFunc_GetActivateTrapGameplayCueTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, const struct FGameplayTag& CallFunc_GetDelayBeginGameplayCueTag_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_FloorFreeze_Athena_C", "ExecuteUbergraph_GA_Trap_FloorFreeze_Athena");

	Params::UGA_Trap_FloorFreeze_Athena_C_ExecuteUbergraph_GA_Trap_FloorFreeze_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_WaitTargetSelection_ReturnValue = CallFunc_WaitTargetSelection_ReturnValue;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Trap = K2Node_DynamicCast_AsBuilding_Trap;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.CallFunc_GetDamageDelay_ReturnValue = CallFunc_GetDamageDelay_ReturnValue;
	Parms.CallFunc_GetActivateTrapGameplayCueTag_ReturnValue = CallFunc_GetActivateTrapGameplayCueTag_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFireDelay_ReturnValue = CallFunc_GetFireDelay_ReturnValue;
	Parms.CallFunc_GetDelayBeginGameplayCueTag_ReturnValue = CallFunc_GetDelayBeginGameplayCueTag_ReturnValue;
	Parms.CallFunc_GetAbilityLevel_ReturnValue = CallFunc_GetAbilityLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBuilding_Trap_1 = K2Node_DynamicCast_AsBuilding_Trap_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetReloadBeginGameplayCueTag_ReturnValue = CallFunc_GetReloadBeginGameplayCueTag_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


