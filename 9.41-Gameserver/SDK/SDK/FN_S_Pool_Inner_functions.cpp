#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_Pool_Inner.S_Pool_Inner_C
// (Actor)

class UClass* AS_Pool_Inner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_Pool_Inner_C");

	return Clss;
}


// S_Pool_Inner_C S_Pool_Inner.Default__S_Pool_Inner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS_Pool_Inner_C* AS_Pool_Inner_C::GetDefaultObj()
{
	static class AS_Pool_Inner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS_Pool_Inner_C*>(AS_Pool_Inner_C::StaticClass()->DefaultObject);

	return Default;
}

}


