#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_AppleSauce_RocketSpawn_InAir.GA_Athena_AppleSauce_RocketSpawn_InAir_C
// (None)

class UClass* UGA_Athena_AppleSauce_RocketSpawn_InAir_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_AppleSauce_RocketSpawn_InAir_C");

	return Clss;
}


// GA_Athena_AppleSauce_RocketSpawn_InAir_C GA_Athena_AppleSauce_RocketSpawn_InAir.Default__GA_Athena_AppleSauce_RocketSpawn_InAir_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_AppleSauce_RocketSpawn_InAir_C* UGA_Athena_AppleSauce_RocketSpawn_InAir_C::GetDefaultObj()
{
	static class UGA_Athena_AppleSauce_RocketSpawn_InAir_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_AppleSauce_RocketSpawn_InAir_C*>(UGA_Athena_AppleSauce_RocketSpawn_InAir_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_AppleSauce_RocketSpawn_InAir.GA_Athena_AppleSauce_RocketSpawn_InAir_C.SetBalance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_AppleSauce_RocketSpawn_InAir_C::SetBalance(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_AppleSauce_RocketSpawn_InAir_C", "SetBalance");

	Params::UGA_Athena_AppleSauce_RocketSpawn_InAir_C_SetBalance_Params Parms{};

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_4 = CallFunc_GetValueAtLevel_ReturnValue_4;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_5 = CallFunc_GetValueAtLevel_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_AppleSauce_RocketSpawn_InAir.GA_Athena_AppleSauce_RocketSpawn_InAir_C.AddVariance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Default                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Variance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RandomFloat                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_AppleSauce_RocketSpawn_InAir_C::AddVariance(float Default, float Variance, float* RandomFloat, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_AppleSauce_RocketSpawn_InAir_C", "AddVariance");

	Params::UGA_Athena_AppleSauce_RocketSpawn_InAir_C_AddVariance_Params Parms{};

	Parms.Default = Default;
	Parms.Variance = Variance;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RandomFloat != nullptr)
		*RandomFloat = Parms.RandomFloat;

}


// Function GA_Athena_AppleSauce_RocketSpawn_InAir.GA_Athena_AppleSauce_RocketSpawn_InAir_C.SpawnClusters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UForceFeedbackEffect*        ForceFeedbackFar                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UForceFeedbackEffect*        ForceFeedbackNear                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BottleRocketGravity                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_AppleSauce_RocketSpawn_InAir_C::SpawnClusters(class UForceFeedbackEffect* ForceFeedbackFar, class UForceFeedbackEffect* ForceFeedbackNear, float BottleRocketGravity, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_AppleSauce_RocketSpawn_InAir_C", "SpawnClusters");

	Params::UGA_Athena_AppleSauce_RocketSpawn_InAir_C_SpawnClusters_Params Parms{};

	Parms.ForceFeedbackFar = ForceFeedbackFar;
	Parms.ForceFeedbackNear = ForceFeedbackNear;
	Parms.BottleRocketGravity = BottleRocketGravity;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_AppleSauce_RocketSpawn_InAir.GA_Athena_AppleSauce_RocketSpawn_InAir_C.FinishedSpawning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_AppleSauce_RocketSpawn_InAir_C::FinishedSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_AppleSauce_RocketSpawn_InAir_C", "FinishedSpawning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_AppleSauce_RocketSpawn_InAir.GA_Athena_AppleSauce_RocketSpawn_InAir_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_AppleSauce_RocketSpawn_InAir_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_AppleSauce_RocketSpawn_InAir_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_AppleSauce_RocketSpawn_InAir_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_AppleSauce_RocketSpawn_InAir.GA_Athena_AppleSauce_RocketSpawn_InAir_C.ExecuteUbergraph_GA_Athena_AppleSauce_RocketSpawn_InAir
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             (None)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1           (None)
// class AB_BGA_AppleSauce_RocketSpawner_C*K2Node_DynamicCast_AsB_BGA_Apple_Sauce_Rocket_Spawner            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Prj_AppleSauce_DrunkRocket_C*K2Node_DynamicCast_AsB_Prj_Apple_Sauce_Drunk_Rocket              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_AppleSauce_RocketSpawn_InAir_C::ExecuteUbergraph_GA_Athena_AppleSauce_RocketSpawn_InAir(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1, class AB_BGA_AppleSauce_RocketSpawner_C* K2Node_DynamicCast_AsB_BGA_Apple_Sauce_Rocket_Spawner, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloatInRange_ReturnValue_5, float CallFunc_RandomFloatInRange_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_7, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_8, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_GetValueAtLevel_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_5, class AB_Prj_AppleSauce_DrunkRocket_C* K2Node_DynamicCast_AsB_Prj_Apple_Sauce_Drunk_Rocket, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_RandomFloatInRange_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_AppleSauce_RocketSpawn_InAir_C", "ExecuteUbergraph_GA_Athena_AppleSauce_RocketSpawn_InAir");

	Params::UGA_Athena_AppleSauce_RocketSpawn_InAir_C_ExecuteUbergraph_GA_Athena_AppleSauce_RocketSpawn_InAir_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1 = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsB_BGA_Apple_Sauce_Rocket_Spawner = K2Node_DynamicCast_AsB_BGA_Apple_Sauce_Rocket_Spawner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_5 = CallFunc_RandomFloatInRange_ReturnValue_5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_6 = CallFunc_RandomFloatInRange_ReturnValue_6;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_7 = CallFunc_RandomFloatInRange_ReturnValue_7;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_8 = CallFunc_RandomFloatInRange_ReturnValue_8;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_4 = CallFunc_GetValueAtLevel_ReturnValue_4;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_5 = CallFunc_GetValueAtLevel_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsB_Prj_Apple_Sauce_Drunk_Rocket = K2Node_DynamicCast_AsB_Prj_Apple_Sauce_Drunk_Rocket;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_9 = CallFunc_RandomFloatInRange_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}

}


