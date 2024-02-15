#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C
// (None)

class UClass* UGA_AthenaSmokeBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AthenaSmokeBomb_C");

	return Clss;
}


// GA_AthenaSmokeBomb_C GA_AthenaSmokeBomb.Default__GA_AthenaSmokeBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AthenaSmokeBomb_C* UGA_AthenaSmokeBomb_C::GetDefaultObj()
{
	static class UGA_AthenaSmokeBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AthenaSmokeBomb_C*>(UGA_AthenaSmokeBomb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.OnChange_4A1A478E4376E5A5D263F4998B9D8EA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMovementMode           NewMovementMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AthenaSmokeBomb_C::OnChange_4A1A478E4376E5A5D263F4998B9D8EA8(enum class EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AthenaSmokeBomb_C", "OnChange_4A1A478E4376E5A5D263F4998B9D8EA8");

	Params::UGA_AthenaSmokeBomb_C_OnChange_4A1A478E4376E5A5D263F4998B9D8EA8_Params Parms{};

	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.Added_5FDF159F4919399394625CABCDD5B209
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_AthenaSmokeBomb_C::Added_5FDF159F4919399394625CABCDD5B209()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AthenaSmokeBomb_C", "Added_5FDF159F4919399394625CABCDD5B209");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.EventReceived_A7EC17F44B4F26BDC8AB7CA0FC590072
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_AthenaSmokeBomb_C::EventReceived_A7EC17F44B4F26BDC8AB7CA0FC590072(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AthenaSmokeBomb_C", "EventReceived_A7EC17F44B4F26BDC8AB7CA0FC590072");

	Params::UGA_AthenaSmokeBomb_C_EventReceived_A7EC17F44B4F26BDC8AB7CA0FC590072_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_AthenaSmokeBomb_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AthenaSmokeBomb_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_AthenaSmokeBomb_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AthenaSmokeBomb_C", "K2_OnEndAbility");

	Params::UGA_AthenaSmokeBomb_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.InAirCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_AthenaSmokeBomb_C::InAirCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AthenaSmokeBomb_C", "InAirCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.EnteredZiplineAfterExpiration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsZiplining                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_AthenaSmokeBomb_C::EnteredZiplineAfterExpiration(bool bIsZiplining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AthenaSmokeBomb_C", "EnteredZiplineAfterExpiration");

	Params::UGA_AthenaSmokeBomb_C_EnteredZiplineAfterExpiration_Params Parms{};

	Parms.bIsZiplining = bIsZiplining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.OnPlayerStartDBNO_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_AthenaSmokeBomb_C::OnPlayerStartDBNO_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AthenaSmokeBomb_C", "OnPlayerStartDBNO_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.ExecuteUbergraph_GA_AthenaSmokeBomb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_K2_RemoveItemFromPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsZiplining                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitMovementModeChange*CallFunc_CreateWaitMovementModeChange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMovementMode           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_MakeStruct_GameplayEffectContextHandle                    (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// enum class EMovementMode           K2Node_CustomEvent_NewMovementMode                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInSkyTube_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_AthenaSmokeBomb_C::ExecuteUbergraph_GA_AthenaSmokeBomb(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool K2Node_Event_bWasCancelled, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetValueAtLevel_ReturnValue, bool K2Node_CustomEvent_bIsZiplining, class UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, enum class EMovementMode Temp_byte_Variable, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsInSkyTube_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AthenaSmokeBomb_C", "ExecuteUbergraph_GA_AthenaSmokeBomb");

	Params::UGA_AthenaSmokeBomb_C_ExecuteUbergraph_GA_AthenaSmokeBomb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.K2Node_CustomEvent_bIsZiplining = K2Node_CustomEvent_bIsZiplining;
	Parms.CallFunc_CreateWaitMovementModeChange_ReturnValue = CallFunc_CreateWaitMovementModeChange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.K2Node_MakeStruct_GameplayEffectContextHandle = K2Node_MakeStruct_GameplayEffectContextHandle;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NewMovementMode = K2Node_CustomEvent_NewMovementMode;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsInSkyTube_ReturnValue = CallFunc_IsInSkyTube_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


