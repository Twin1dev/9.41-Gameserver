#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HVAC_StructureDamage.GE_HVAC_StructureDamage_C
// (None)

class UClass* UGE_HVAC_StructureDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HVAC_StructureDamage_C");

	return Clss;
}


// GE_HVAC_StructureDamage_C GE_HVAC_StructureDamage.Default__GE_HVAC_StructureDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HVAC_StructureDamage_C* UGE_HVAC_StructureDamage_C::GetDefaultObj()
{
	static class UGE_HVAC_StructureDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HVAC_StructureDamage_C*>(UGE_HVAC_StructureDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


