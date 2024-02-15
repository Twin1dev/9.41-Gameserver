#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_FlintlockPistol_Damage.GA_FlintlockPistol_Damage_C
// (None)

class UClass* UGA_FlintlockPistol_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_FlintlockPistol_Damage_C");

	return Clss;
}


// GA_FlintlockPistol_Damage_C GA_FlintlockPistol_Damage.Default__GA_FlintlockPistol_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_FlintlockPistol_Damage_C* UGA_FlintlockPistol_Damage_C::GetDefaultObj()
{
	static class UGA_FlintlockPistol_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_FlintlockPistol_Damage_C*>(UGA_FlintlockPistol_Damage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_FlintlockPistol_Damage.GA_FlintlockPistol_Damage_C.K2_CommitExecute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_FlintlockPistol_Damage_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FlintlockPistol_Damage_C", "K2_CommitExecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_FlintlockPistol_Damage.GA_FlintlockPistol_Damage_C.ExecuteUbergraph_GA_FlintlockPistol_Damage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_FlintlockPistol_Damage_C::ExecuteUbergraph_GA_FlintlockPistol_Damage(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FlintlockPistol_Damage_C", "ExecuteUbergraph_GA_FlintlockPistol_Damage");

	Params::UGA_FlintlockPistol_Damage_C_ExecuteUbergraph_GA_FlintlockPistol_Damage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


