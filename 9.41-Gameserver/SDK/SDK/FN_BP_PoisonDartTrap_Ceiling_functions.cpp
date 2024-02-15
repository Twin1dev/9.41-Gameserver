#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PoisonDartTrap_Ceiling.BP_PoisonDartTrap_Ceiling_C
// (Actor)

class UClass* ABP_PoisonDartTrap_Ceiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PoisonDartTrap_Ceiling_C");

	return Clss;
}


// BP_PoisonDartTrap_Ceiling_C BP_PoisonDartTrap_Ceiling.Default__BP_PoisonDartTrap_Ceiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PoisonDartTrap_Ceiling_C* ABP_PoisonDartTrap_Ceiling_C::GetDefaultObj()
{
	static class ABP_PoisonDartTrap_Ceiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PoisonDartTrap_Ceiling_C*>(ABP_PoisonDartTrap_Ceiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


