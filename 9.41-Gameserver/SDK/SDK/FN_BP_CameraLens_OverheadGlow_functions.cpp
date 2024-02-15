#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraLens_OverheadGlow.BP_CameraLens_OverheadGlow_C
// (Actor)

class UClass* ABP_CameraLens_OverheadGlow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraLens_OverheadGlow_C");

	return Clss;
}


// BP_CameraLens_OverheadGlow_C BP_CameraLens_OverheadGlow.Default__BP_CameraLens_OverheadGlow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CameraLens_OverheadGlow_C* ABP_CameraLens_OverheadGlow_C::GetDefaultObj()
{
	static class ABP_CameraLens_OverheadGlow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CameraLens_OverheadGlow_C*>(ABP_CameraLens_OverheadGlow_C::StaticClass()->DefaultObject);

	return Default;
}

}


