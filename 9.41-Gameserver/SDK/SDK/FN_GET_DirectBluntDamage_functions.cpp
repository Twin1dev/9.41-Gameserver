#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectBluntDamage.GET_DirectBluntDamage_C
// (None)

class UClass* UGET_DirectBluntDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectBluntDamage_C");

	return Clss;
}


// GET_DirectBluntDamage_C GET_DirectBluntDamage.Default__GET_DirectBluntDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectBluntDamage_C* UGET_DirectBluntDamage_C::GetDefaultObj()
{
	static class UGET_DirectBluntDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectBluntDamage_C*>(UGET_DirectBluntDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


