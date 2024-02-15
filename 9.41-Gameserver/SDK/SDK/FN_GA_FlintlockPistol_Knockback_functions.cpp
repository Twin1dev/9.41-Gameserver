#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_FlintlockPistol_Knockback.GA_FlintlockPistol_Knockback_C
// (None)

class UClass* UGA_FlintlockPistol_Knockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_FlintlockPistol_Knockback_C");

	return Clss;
}


// GA_FlintlockPistol_Knockback_C GA_FlintlockPistol_Knockback.Default__GA_FlintlockPistol_Knockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_FlintlockPistol_Knockback_C* UGA_FlintlockPistol_Knockback_C::GetDefaultObj()
{
	static class UGA_FlintlockPistol_Knockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_FlintlockPistol_Knockback_C*>(UGA_FlintlockPistol_Knockback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_FlintlockPistol_Knockback.GA_FlintlockPistol_Knockback_C.KnockPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue                   (None)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DistanceBetweenTwoVectors_Distance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FlintlockPistol_Knockback_C::KnockPlayer(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_DistanceBetweenTwoVectors_Distance, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FlintlockPistol_Knockback_C", "KnockPlayer");

	Params::UGA_FlintlockPistol_Knockback_C_KnockPlayer_Params Parms{};

	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_4 = CallFunc_GetValueAtLevel_ReturnValue_4;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_5 = CallFunc_GetValueAtLevel_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue = CallFunc_GetGrantedByEffectContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue = CallFunc_EffectContextGetEffectCauser_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_DistanceBetweenTwoVectors_Distance = CallFunc_DistanceBetweenTwoVectors_Distance;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput_1 = CallFunc_HasMatchingGameplayTag_self_CastInput_1;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_1 = CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_FlintlockPistol_Knockback.GA_FlintlockPistol_Knockback_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_FlintlockPistol_Knockback_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FlintlockPistol_Knockback_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_FlintlockPistol_Knockback.GA_FlintlockPistol_Knockback_C.CheckVel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_FlintlockPistol_Knockback_C::CheckVel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FlintlockPistol_Knockback_C", "CheckVel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_FlintlockPistol_Knockback.GA_FlintlockPistol_Knockback_C.ExecuteUbergraph_GA_FlintlockPistol_Knockback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FlintlockPistol_Knockback_C::ExecuteUbergraph_GA_FlintlockPistol_Knockback(int32 EntryPoint, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FlintlockPistol_Knockback_C", "ExecuteUbergraph_GA_FlintlockPistol_Knockback");

	Params::UGA_FlintlockPistol_Knockback_C_ExecuteUbergraph_GA_FlintlockPistol_Knockback_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


