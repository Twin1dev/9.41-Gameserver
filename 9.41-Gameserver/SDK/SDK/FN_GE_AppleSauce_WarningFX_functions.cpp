#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AppleSauce_WarningFX.GE_AppleSauce_WarningFX_C
// (None)

class UClass* UGE_AppleSauce_WarningFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AppleSauce_WarningFX_C");

	return Clss;
}


// GE_AppleSauce_WarningFX_C GE_AppleSauce_WarningFX.Default__GE_AppleSauce_WarningFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AppleSauce_WarningFX_C* UGE_AppleSauce_WarningFX_C::GetDefaultObj()
{
	static class UGE_AppleSauce_WarningFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AppleSauce_WarningFX_C*>(UGE_AppleSauce_WarningFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


