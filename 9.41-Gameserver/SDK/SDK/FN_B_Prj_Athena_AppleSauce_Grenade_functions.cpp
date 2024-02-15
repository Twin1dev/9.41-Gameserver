#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C
// (Actor)

class UClass* AB_Prj_Athena_AppleSauce_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Athena_AppleSauce_Grenade_C");

	return Clss;
}


// B_Prj_Athena_AppleSauce_Grenade_C B_Prj_Athena_AppleSauce_Grenade.Default__B_Prj_Athena_AppleSauce_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Athena_AppleSauce_Grenade_C* AB_Prj_Athena_AppleSauce_Grenade_C::GetDefaultObj()
{
	static class AB_Prj_Athena_AppleSauce_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Athena_AppleSauce_Grenade_C*>(AB_Prj_Athena_AppleSauce_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.CalcSpawnRotForAllRockets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    SpawnRot                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Athena_AppleSauce_Grenade_C::CalcSpawnRotForAllRockets(struct FRotator* SpawnRot, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "CalcSpawnRotForAllRockets");

	Params::AB_Prj_Athena_AppleSauce_Grenade_C_CalcSpawnRotForAllRockets_Params Parms{};

	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnRot != nullptr)
		*SpawnRot = std::move(Parms.SpawnRot);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.CalcSpawnLocOfNextRocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     StartingLoc                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_AppleSauce_Grenade_C::CalcSpawnLocOfNextRocket(struct FVector* StartingLoc, bool Temp_bool_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_2, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "CalcSpawnLocOfNextRocket");

	Params::AB_Prj_Athena_AppleSauce_Grenade_C_CalcSpawnLocOfNextRocket_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_4 = CallFunc_GetValueAtLevel_ReturnValue_4;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_5 = CallFunc_GetValueAtLevel_ReturnValue_5;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_RotateAngleAxis_ReturnValue_1 = CallFunc_RotateAngleAxis_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (StartingLoc != nullptr)
		*StartingLoc = std::move(Parms.StartingLoc);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.FireAirStrikeRocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartLoc                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    StartRot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecECRocket                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              InitialSpeed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GravityScale                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_AppleSauce_Grenade_C::FireAirStrikeRocket(const struct FVector& StartLoc, const struct FRotator& StartRot, const struct FFortGameplayEffectContainerSpec& ECRocket, float InitialSpeed, float GravityScale, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "FireAirStrikeRocket");

	Params::AB_Prj_Athena_AppleSauce_Grenade_C_FireAirStrikeRocket_Params Parms{};

	Parms.StartLoc = StartLoc;
	Parms.StartRot = StartRot;
	Parms.ECRocket = ECRocket;
	Parms.InitialSpeed = InitialSpeed;
	Parms.GravityScale = GravityScale;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.OnRep_StoredHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_AppleSauce_Grenade_C::OnRep_StoredHit(bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "OnRep_StoredHit");

	Params::AB_Prj_Athena_AppleSauce_Grenade_C_OnRep_StoredHit_Params Parms{};

	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_Athena_AppleSauce_Grenade_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_Athena_AppleSauce_Grenade_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.RefireAirStrikeRocket
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_AppleSauce_Grenade_C::RefireAirStrikeRocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "RefireAirStrikeRocket");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_AppleSauce_Grenade_C::BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AB_Prj_Athena_AppleSauce_Grenade_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              HitActors                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>          HitResults                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Athena_AppleSauce_Grenade_C::OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "OnExploded");

	Params::AB_Prj_Athena_AppleSauce_Grenade_C_OnExploded_Params Parms{};

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_AppleSauce_Grenade_C::OnStop(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "OnStop");

	Params::AB_Prj_Athena_AppleSauce_Grenade_C_OnStop_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_AppleSauce_Grenade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.ReSpawnReticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_AppleSauce_Grenade_C::ReSpawnReticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "ReSpawnReticle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.StartRockets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_AppleSauce_Grenade_C::StartRockets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "StartRockets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_AppleSauce_Grenade_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_AppleSauce_Grenade.B_Prj_Athena_AppleSauce_Grenade_C.ExecuteUbergraph_B_Prj_Athena_AppleSauce_Grenade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_Event_HitActors                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>          K2Node_Event_HitResults                                          (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_CalcSpawnRotForAllRockets_SpawnRot                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalcSpawnLocOfNextRocket_StartingLoc                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingGameplayActor*      CallFunc_SpawnBuildingGameplayActor_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class ABuildingGameplayActor*      CallFunc_SpawnBuildingGameplayActor_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_AppleSauce_Grenade_C::ExecuteUbergraph_B_Prj_Athena_AppleSauce_Grenade(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float Temp_float_Variable, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_CalcSpawnRotForAllRockets_SpawnRot, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, const struct FVector& CallFunc_CalcSpawnLocOfNextRocket_StartingLoc, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_5, int32 CallFunc_FTrunc_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_6, float CallFunc_GetValueAtLevel_ReturnValue_7, int32 CallFunc_FTrunc_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class ABuildingGameplayActor* CallFunc_SpawnBuildingGameplayActor_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_8, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class ABuildingGameplayActor* CallFunc_SpawnBuildingGameplayActor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_AppleSauce_Grenade_C", "ExecuteUbergraph_B_Prj_Athena_AppleSauce_Grenade");

	Params::AB_Prj_Athena_AppleSauce_Grenade_C_ExecuteUbergraph_B_Prj_Athena_AppleSauce_Grenade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_Event_HitActors = K2Node_Event_HitActors;
	Parms.K2Node_Event_HitResults = K2Node_Event_HitResults;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_CalcSpawnRotForAllRockets_SpawnRot = CallFunc_CalcSpawnRotForAllRockets_SpawnRot;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_CalcSpawnLocOfNextRocket_StartingLoc = CallFunc_CalcSpawnLocOfNextRocket_StartingLoc;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_4 = CallFunc_GetValueAtLevel_ReturnValue_4;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_5 = CallFunc_GetValueAtLevel_ReturnValue_5;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_6 = CallFunc_GetValueAtLevel_ReturnValue_6;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_7 = CallFunc_GetValueAtLevel_ReturnValue_7;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.CallFunc_SpawnBuildingGameplayActor_ReturnValue = CallFunc_SpawnBuildingGameplayActor_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_8 = CallFunc_GetValueAtLevel_ReturnValue_8;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_SpawnBuildingGameplayActor_ReturnValue_1 = CallFunc_SpawnBuildingGameplayActor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


