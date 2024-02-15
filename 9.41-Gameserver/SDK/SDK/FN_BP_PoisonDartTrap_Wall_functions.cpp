#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PoisonDartTrap_Wall.BP_PoisonDartTrap_Wall_C
// (Actor)

class UClass* ABP_PoisonDartTrap_Wall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PoisonDartTrap_Wall_C");

	return Clss;
}


// BP_PoisonDartTrap_Wall_C BP_PoisonDartTrap_Wall.Default__BP_PoisonDartTrap_Wall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PoisonDartTrap_Wall_C* ABP_PoisonDartTrap_Wall_C::GetDefaultObj()
{
	static class ABP_PoisonDartTrap_Wall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PoisonDartTrap_Wall_C*>(ABP_PoisonDartTrap_Wall_C::StaticClass()->DefaultObject);

	return Default;
}

}


