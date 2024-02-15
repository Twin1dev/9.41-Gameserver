#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ApplySmokeBomb.GA_ApplySmokeBomb_C
// (None)

class UClass* UGA_ApplySmokeBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ApplySmokeBomb_C");

	return Clss;
}


// GA_ApplySmokeBomb_C GA_ApplySmokeBomb.Default__GA_ApplySmokeBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ApplySmokeBomb_C* UGA_ApplySmokeBomb_C::GetDefaultObj()
{
	static class UGA_ApplySmokeBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ApplySmokeBomb_C*>(UGA_ApplySmokeBomb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ApplySmokeBomb.GA_ApplySmokeBomb_C.Completed_FBFA2E1D4AB925F4E31BC0B264798026
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_ApplySmokeBomb_C::Completed_FBFA2E1D4AB925F4E31BC0B264798026(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplySmokeBomb_C", "Completed_FBFA2E1D4AB925F4E31BC0B264798026");

	Params::UGA_ApplySmokeBomb_C_Completed_FBFA2E1D4AB925F4E31BC0B264798026_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ApplySmokeBomb.GA_ApplySmokeBomb_C.Cancelled_FBFA2E1D4AB925F4E31BC0B264798026
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_ApplySmokeBomb_C::Cancelled_FBFA2E1D4AB925F4E31BC0B264798026(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplySmokeBomb_C", "Cancelled_FBFA2E1D4AB925F4E31BC0B264798026");

	Params::UGA_ApplySmokeBomb_C_Cancelled_FBFA2E1D4AB925F4E31BC0B264798026_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ApplySmokeBomb.GA_ApplySmokeBomb_C.Triggered_FBFA2E1D4AB925F4E31BC0B264798026
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_ApplySmokeBomb_C::Triggered_FBFA2E1D4AB925F4E31BC0B264798026(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplySmokeBomb_C", "Triggered_FBFA2E1D4AB925F4E31BC0B264798026");

	Params::UGA_ApplySmokeBomb_C_Triggered_FBFA2E1D4AB925F4E31BC0B264798026_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ApplySmokeBomb.GA_ApplySmokeBomb_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_ApplySmokeBomb_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplySmokeBomb_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ApplySmokeBomb.GA_ApplySmokeBomb_C.ApplyShroud
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ApplySmokeBomb_C::ApplyShroud()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplySmokeBomb_C", "ApplyShroud");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ApplySmokeBomb.GA_ApplySmokeBomb_C.FailsafeEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ApplySmokeBomb_C::FailsafeEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplySmokeBomb_C", "FailsafeEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ApplySmokeBomb.GA_ApplySmokeBomb_C.CleanupShadowbomb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              ItemDropped                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ApplySmokeBomb_C::CleanupShadowbomb(class UFortWorldItem* ItemDropped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplySmokeBomb_C", "CleanupShadowbomb");

	Params::UGA_ApplySmokeBomb_C_CleanupShadowbomb_Params Parms{};

	Parms.ItemDropped = ItemDropped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ApplySmokeBomb.GA_ApplySmokeBomb_C.ExecuteUbergraph_GA_ApplySmokeBomb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_2                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_2                              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItem*              K2Node_CustomEvent_ItemDropped                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_K2_RemoveItemFromPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ApplySmokeBomb_C::ExecuteUbergraph_GA_ApplySmokeBomb(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortWorldItem* K2Node_CustomEvent_ItemDropped, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplySmokeBomb_C", "ExecuteUbergraph_GA_ApplySmokeBomb");

	Params::UGA_ApplySmokeBomb_C_ExecuteUbergraph_GA_ApplySmokeBomb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetData_2 = K2Node_CustomEvent_TargetData_2;
	Parms.K2Node_CustomEvent_ApplicationTag_2 = K2Node_CustomEvent_ApplicationTag_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_ItemDropped = K2Node_CustomEvent_ItemDropped;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


