#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplySmokeBomb.GE_ApplySmokeBomb_C
// (None)

class UClass* UGE_ApplySmokeBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplySmokeBomb_C");

	return Clss;
}


// GE_ApplySmokeBomb_C GE_ApplySmokeBomb.Default__GE_ApplySmokeBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplySmokeBomb_C* UGE_ApplySmokeBomb_C::GetDefaultObj()
{
	static class UGE_ApplySmokeBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplySmokeBomb_C*>(UGE_ApplySmokeBomb_C::StaticClass()->DefaultObject);

	return Default;
}

}


