#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_AppleSauce_GrenadeWithTrajectory.GA_Athena_AppleSauce_GrenadeWithTrajectory_C
// (None)

class UClass* UGA_Athena_AppleSauce_GrenadeWithTrajectory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_AppleSauce_GrenadeWithTrajectory_C");

	return Clss;
}


// GA_Athena_AppleSauce_GrenadeWithTrajectory_C GA_Athena_AppleSauce_GrenadeWithTrajectory.Default__GA_Athena_AppleSauce_GrenadeWithTrajectory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_AppleSauce_GrenadeWithTrajectory_C* UGA_Athena_AppleSauce_GrenadeWithTrajectory_C::GetDefaultObj()
{
	static class UGA_Athena_AppleSauce_GrenadeWithTrajectory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_AppleSauce_GrenadeWithTrajectory_C*>(UGA_Athena_AppleSauce_GrenadeWithTrajectory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_AppleSauce_GrenadeWithTrajectory.GA_Athena_AppleSauce_GrenadeWithTrajectory_C.SetBalanceValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_AppleSauce_GrenadeWithTrajectory_C::SetBalanceValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_AppleSauce_GrenadeWithTrajectory_C", "SetBalanceValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_AppleSauce_GrenadeWithTrajectory.GA_Athena_AppleSauce_GrenadeWithTrajectory_C.AthenaProjectileSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         ProjectileReference                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_AppleSauce_GrenadeWithTrajectory_C::AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_AppleSauce_GrenadeWithTrajectory_C", "AthenaProjectileSpawned");

	Params::UGA_Athena_AppleSauce_GrenadeWithTrajectory_C_AthenaProjectileSpawned_Params Parms{};

	Parms.ProjectileReference = ProjectileReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_AppleSauce_GrenadeWithTrajectory.GA_Athena_AppleSauce_GrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_AppleSauce_GrenadeWithTrajectory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         K2Node_Event_ProjectileReference                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Prj_Athena_AppleSauce_Grenade_C*K2Node_DynamicCast_AsB_Prj_Athena_Apple_Sauce_Grenade            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             (None)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpecFromAbility_ReturnValue  (None)

void UGA_Athena_AppleSauce_GrenadeWithTrajectory_C::ExecuteUbergraph_GA_Athena_AppleSauce_GrenadeWithTrajectory(int32 EntryPoint, class AFortProjectileBase* K2Node_Event_ProjectileReference, class AB_Prj_Athena_AppleSauce_Grenade_C* K2Node_DynamicCast_AsB_Prj_Athena_Apple_Sauce_Grenade, bool K2Node_DynamicCast_bSuccess, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpecFromAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_AppleSauce_GrenadeWithTrajectory_C", "ExecuteUbergraph_GA_Athena_AppleSauce_GrenadeWithTrajectory");

	Params::UGA_Athena_AppleSauce_GrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSauce_GrenadeWithTrajectory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ProjectileReference = K2Node_Event_ProjectileReference;
	Parms.K2Node_DynamicCast_AsB_Prj_Athena_Apple_Sauce_Grenade = K2Node_DynamicCast_AsB_Prj_Athena_Apple_Sauce_Grenade;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpecFromAbility_ReturnValue = CallFunc_MakeGameplayEffectContainerSpecFromAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


