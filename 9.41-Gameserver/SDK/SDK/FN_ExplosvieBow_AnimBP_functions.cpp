#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C
// (None)

class UClass* UExplosvieBow_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosvieBow_AnimBP_C");

	return Clss;
}


// ExplosvieBow_AnimBP_C ExplosvieBow_AnimBP.Default__ExplosvieBow_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosvieBow_AnimBP_C* UExplosvieBow_AnimBP_C::GetDefaultObj()
{
	static class UExplosvieBow_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosvieBow_AnimBP_C*>(UExplosvieBow_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UExplosvieBow_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "AnimGraph");

	Params::UExplosvieBow_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.ExecuteUbergraph_ExplosvieBow_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExplosvieBow_AnimBP_C::ExecuteUbergraph_ExplosvieBow_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosvieBow_AnimBP_C", "ExecuteUbergraph_ExplosvieBow_AnimBP");

	Params::UExplosvieBow_AnimBP_C_ExecuteUbergraph_ExplosvieBow_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


