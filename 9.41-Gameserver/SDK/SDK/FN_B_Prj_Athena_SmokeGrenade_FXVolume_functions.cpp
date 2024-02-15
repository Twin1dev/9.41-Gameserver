#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C
// (Actor)

class UClass* AB_Prj_Athena_SmokeGrenade_FXVolume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Athena_SmokeGrenade_FXVolume_C");

	return Clss;
}


// B_Prj_Athena_SmokeGrenade_FXVolume_C B_Prj_Athena_SmokeGrenade_FXVolume.Default__B_Prj_Athena_SmokeGrenade_FXVolume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Athena_SmokeGrenade_FXVolume_C* AB_Prj_Athena_SmokeGrenade_FXVolume_C::GetDefaultObj()
{
	static class AB_Prj_Athena_SmokeGrenade_FXVolume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Athena_SmokeGrenade_FXVolume_C*>(AB_Prj_Athena_SmokeGrenade_FXVolume_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "UserConstructionScript");

	Params::AB_Prj_Athena_SmokeGrenade_FXVolume_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.FadeSmokeTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::FadeSmokeTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "FadeSmokeTL__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.FadeSmokeTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::FadeSmokeTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "FadeSmokeTL__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume");

	Params::AB_Prj_Athena_SmokeGrenade_FXVolume_C_ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_2 = CallFunc_FMax_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


