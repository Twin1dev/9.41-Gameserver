#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamShake_Shadow_Bomb.CamShake_Shadow_Bomb_C
// (None)

class UClass* UCamShake_Shadow_Bomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamShake_Shadow_Bomb_C");

	return Clss;
}


// CamShake_Shadow_Bomb_C CamShake_Shadow_Bomb.Default__CamShake_Shadow_Bomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamShake_Shadow_Bomb_C* UCamShake_Shadow_Bomb_C::GetDefaultObj()
{
	static class UCamShake_Shadow_Bomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamShake_Shadow_Bomb_C*>(UCamShake_Shadow_Bomb_C::StaticClass()->DefaultObject);

	return Default;
}

}


