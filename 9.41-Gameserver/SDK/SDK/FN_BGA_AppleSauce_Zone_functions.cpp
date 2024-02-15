#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_AppleSauce_Zone.BGA_AppleSauce_Zone_C
// (Actor)

class UClass* ABGA_AppleSauce_Zone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_AppleSauce_Zone_C");

	return Clss;
}


// BGA_AppleSauce_Zone_C BGA_AppleSauce_Zone.Default__BGA_AppleSauce_Zone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_AppleSauce_Zone_C* ABGA_AppleSauce_Zone_C::GetDefaultObj()
{
	static class ABGA_AppleSauce_Zone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_AppleSauce_Zone_C*>(ABGA_AppleSauce_Zone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_AppleSauce_Zone.BGA_AppleSauce_Zone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABGA_AppleSauce_Zone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_AppleSauce_Zone_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_AppleSauce_Zone.BGA_AppleSauce_Zone_C.ExecuteUbergraph_BGA_AppleSauce_Zone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_AppleSauce_Zone_C::ExecuteUbergraph_BGA_AppleSauce_Zone(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_AppleSauce_Zone_C", "ExecuteUbergraph_BGA_AppleSauce_Zone");

	Params::ABGA_AppleSauce_Zone_C_ExecuteUbergraph_BGA_AppleSauce_Zone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


