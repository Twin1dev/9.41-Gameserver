#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C
// (Actor)

class UClass* AB_BGA_AppleSauce_RocketSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_BGA_AppleSauce_RocketSpawner_C");

	return Clss;
}


// B_BGA_AppleSauce_RocketSpawner_C B_BGA_AppleSauce_RocketSpawner.Default__B_BGA_AppleSauce_RocketSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_BGA_AppleSauce_RocketSpawner_C* AB_BGA_AppleSauce_RocketSpawner_C::GetDefaultObj()
{
	static class AB_BGA_AppleSauce_RocketSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_BGA_AppleSauce_RocketSpawner_C*>(AB_BGA_AppleSauce_RocketSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnRep_StartedDestroying
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_AppleSauce_RocketSpawner_C::OnRep_StartedDestroying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "OnRep_StartedDestroying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnRep_bResumeSimulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_AppleSauce_RocketSpawner_C::OnRep_bResumeSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "OnRep_bResumeSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.HandleBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_AppleSauce_RocketSpawner_C::HandleBinding(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "HandleBinding");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_HandleBinding_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.DestroyClusterSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_AppleSauce_RocketSpawner_C::DestroyClusterSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "DestroyClusterSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnBuildingActorInitialized
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortBuildingInitializationReasonInitializationReason                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingPersistentStateBuildingPersistentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_AppleSauce_RocketSpawner_C::OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "OnBuildingActorInitialized");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_OnBuildingActorInitialized_Params Parms{};

	Parms.InitializationReason = InitializationReason;
	Parms.BuildingPersistentState = BuildingPersistentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.AirBlast_Incoming_Audio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_AppleSauce_RocketSpawner_C::AirBlast_Incoming_Audio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "AirBlast_Incoming_Audio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// enum class EFortBuildingInitializationReasonK2Node_Event_InitializationReason                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingPersistentStateK2Node_Event_BuildingPersistentState                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_AppleSauce_RocketSpawner_C::ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner(int32 EntryPoint, class AActor* K2Node_CustomEvent_Actor, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, enum class EFortBuildingInitializationReason K2Node_Event_InitializationReason, enum class EFortBuildingPersistentState K2Node_Event_BuildingPersistentState, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_Event_InitializationReason = K2Node_Event_InitializationReason;
	Parms.K2Node_Event_BuildingPersistentState = K2Node_Event_BuildingPersistentState;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


