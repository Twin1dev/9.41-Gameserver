#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ShadowBOmbLoop.GE_ShadowBombLoop_C
// (None)

class UClass* UGE_ShadowBombLoop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ShadowBombLoop_C");

	return Clss;
}


// GE_ShadowBombLoop_C GE_ShadowBOmbLoop.Default__GE_ShadowBombLoop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ShadowBombLoop_C* UGE_ShadowBombLoop_C::GetDefaultObj()
{
	static class UGE_ShadowBombLoop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ShadowBombLoop_C*>(UGE_ShadowBombLoop_C::StaticClass()->DefaultObject);

	return Default;
}

}


