#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCL_ToxicDingo.GCL_ToxicDingo_C
// (Actor)

class UClass* AGCL_ToxicDingo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCL_ToxicDingo_C");

	return Clss;
}


// GCL_ToxicDingo_C GCL_ToxicDingo.Default__GCL_ToxicDingo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCL_ToxicDingo_C* AGCL_ToxicDingo_C::GetDefaultObj()
{
	static class AGCL_ToxicDingo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCL_ToxicDingo_C*>(AGCL_ToxicDingo_C::StaticClass()->DefaultObject);

	return Default;
}

}


