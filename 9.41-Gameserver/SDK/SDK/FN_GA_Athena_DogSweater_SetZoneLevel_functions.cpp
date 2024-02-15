#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_DogSweater_SetZoneLevel.GA_Athena_DogSweater_SetZoneLevel_C
// (None)

class UClass* UGA_Athena_DogSweater_SetZoneLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_DogSweater_SetZoneLevel_C");

	return Clss;
}


// GA_Athena_DogSweater_SetZoneLevel_C GA_Athena_DogSweater_SetZoneLevel.Default__GA_Athena_DogSweater_SetZoneLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_DogSweater_SetZoneLevel_C* UGA_Athena_DogSweater_SetZoneLevel_C::GetDefaultObj()
{
	static class UGA_Athena_DogSweater_SetZoneLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_DogSweater_SetZoneLevel_C*>(UGA_Athena_DogSweater_SetZoneLevel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_DogSweater_SetZoneLevel.GA_Athena_DogSweater_SetZoneLevel_C.OnApplied_EEC759094DD504BE642901B2846E8C98
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_DogSweater_SetZoneLevel_C::OnApplied_EEC759094DD504BE642901B2846E8C98(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_DogSweater_SetZoneLevel_C", "OnApplied_EEC759094DD504BE642901B2846E8C98");

	Params::UGA_Athena_DogSweater_SetZoneLevel_C_OnApplied_EEC759094DD504BE642901B2846E8C98_Params Parms{};

	Parms.Source = Source;
	Parms.SpecHandle = SpecHandle;
	Parms.ActiveHandle = ActiveHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_DogSweater_SetZoneLevel.GA_Athena_DogSweater_SetZoneLevel_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_DogSweater_SetZoneLevel_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_DogSweater_SetZoneLevel_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_DogSweater_SetZoneLevel.GA_Athena_DogSweater_SetZoneLevel_C.SafeZoneUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_DogSweater_SetZoneLevel_C::SafeZoneUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_DogSweater_SetZoneLevel_C", "SafeZoneUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_DogSweater_SetZoneLevel.GA_Athena_DogSweater_SetZoneLevel_C.ExecuteUbergraph_GA_Athena_DogSweater_SetZoneLevel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagRequirements    K2Node_MakeStruct_GameplayTagRequirements                        (None)
// class UAbilityTask_WaitGameplayEffectApplied_Self*CallFunc_WaitGameplayEffectAppliedToSelf_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Source                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   K2Node_CustomEvent_SpecHandle                                    (None)
// struct FActiveGameplayEffectHandle K2Node_CustomEvent_ActiveHandle                                  (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   Temp_struct_Variable_1                                           (None)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameModeAthena*         K2Node_DynamicCast_AsFort_Game_Mode_Athena                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_DogSweater_SetZoneLevel_C::ExecuteUbergraph_GA_Athena_DogSweater_SetZoneLevel(int32 EntryPoint, const struct FGameplayTagRequirements& K2Node_MakeStruct_GameplayTagRequirements, class UAbilityTask_WaitGameplayEffectApplied_Self* CallFunc_WaitGameplayEffectAppliedToSelf_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_Source, const struct FGameplayEffectSpecHandle& K2Node_CustomEvent_SpecHandle, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_ActiveHandle, const struct FActiveGameplayEffectHandle& Temp_struct_Variable, const struct FGameplayEffectSpecHandle& Temp_struct_Variable_1, class AActor* Temp_object_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AFortGameModeAthena* K2Node_DynamicCast_AsFort_Game_Mode_Athena, bool K2Node_DynamicCast_bSuccess_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_DogSweater_SetZoneLevel_C", "ExecuteUbergraph_GA_Athena_DogSweater_SetZoneLevel");

	Params::UGA_Athena_DogSweater_SetZoneLevel_C_ExecuteUbergraph_GA_Athena_DogSweater_SetZoneLevel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GameplayTagRequirements = K2Node_MakeStruct_GameplayTagRequirements;
	Parms.CallFunc_WaitGameplayEffectAppliedToSelf_ReturnValue = CallFunc_WaitGameplayEffectAppliedToSelf_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Source = K2Node_CustomEvent_Source;
	Parms.K2Node_CustomEvent_SpecHandle = K2Node_CustomEvent_SpecHandle;
	Parms.K2Node_CustomEvent_ActiveHandle = K2Node_CustomEvent_ActiveHandle;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_Mode_Athena = K2Node_DynamicCast_AsFort_Game_Mode_Athena;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


