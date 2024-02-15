#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraShake.B_CameraShake_C
// (None)

class UClass* UB_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraShake_C");

	return Clss;
}


// B_CameraShake_C B_CameraShake.Default__B_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_CameraShake_C* UB_CameraShake_C::GetDefaultObj()
{
	static class UB_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_CameraShake_C*>(UB_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


