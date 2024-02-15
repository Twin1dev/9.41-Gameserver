#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Military_Launcher_Sk_animBP.Military_Launcher_Sk_animBP_C
// (None)

class UClass* UMilitary_Launcher_Sk_animBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Military_Launcher_Sk_animBP_C");

	return Clss;
}


// Military_Launcher_Sk_animBP_C Military_Launcher_Sk_animBP.Default__Military_Launcher_Sk_animBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilitary_Launcher_Sk_animBP_C* UMilitary_Launcher_Sk_animBP_C::GetDefaultObj()
{
	static class UMilitary_Launcher_Sk_animBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilitary_Launcher_Sk_animBP_C*>(UMilitary_Launcher_Sk_animBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Military_Launcher_Sk_animBP.Military_Launcher_Sk_animBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMilitary_Launcher_Sk_animBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Military_Launcher_Sk_animBP_C", "AnimGraph");

	Params::UMilitary_Launcher_Sk_animBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Military_Launcher_Sk_animBP.Military_Launcher_Sk_animBP_C.ExecuteUbergraph_Military_Launcher_Sk_animBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMilitary_Launcher_Sk_animBP_C::ExecuteUbergraph_Military_Launcher_Sk_animBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Military_Launcher_Sk_animBP_C", "ExecuteUbergraph_Military_Launcher_Sk_animBP");

	Params::UMilitary_Launcher_Sk_animBP_C_ExecuteUbergraph_Military_Launcher_Sk_animBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


