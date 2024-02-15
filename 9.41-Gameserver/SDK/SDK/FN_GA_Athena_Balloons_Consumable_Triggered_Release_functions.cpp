#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C
// (None)

class UClass* UGA_Athena_Balloons_Consumable_Triggered_Release_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Balloons_Consumable_Triggered_Release_C");

	return Clss;
}


// GA_Athena_Balloons_Consumable_Triggered_Release_C GA_Athena_Balloons_Consumable_Triggered_Release.Default__GA_Athena_Balloons_Consumable_Triggered_Release_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Balloons_Consumable_Triggered_Release_C* UGA_Athena_Balloons_Consumable_Triggered_Release_C::GetDefaultObj()
{
	static class UGA_Athena_Balloons_Consumable_Triggered_Release_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Balloons_Consumable_Triggered_Release_C*>(UGA_Athena_Balloons_Consumable_Triggered_Release_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumActiveBalloons_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Athena_Balloons_Consumable_Triggered_Release_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumActiveBalloons_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_Triggered_Release_C", "K2_CanActivateAbility");

	Params::UGA_Athena_Balloons_Consumable_Triggered_Release_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNumActiveBalloons_ReturnValue = CallFunc_GetNumActiveBalloons_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Balloons_Consumable_Triggered_Release_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_Triggered_Release_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_Balloons_Consumable_Triggered_Release_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C.ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGA_Athena_Balloons_Consumable_Triggered_Release_C::ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_Triggered_Release_C", "ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release");

	Params::UGA_Athena_Balloons_Consumable_Triggered_Release_C_ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


