#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_BattlePassTab_TopFrame.Border_BattlePassTab_TopFrame_C
// (None)

class UClass* UBorder_BattlePassTab_TopFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_BattlePassTab_TopFrame_C");

	return Clss;
}


// Border_BattlePassTab_TopFrame_C Border_BattlePassTab_TopFrame.Default__Border_BattlePassTab_TopFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_BattlePassTab_TopFrame_C* UBorder_BattlePassTab_TopFrame_C::GetDefaultObj()
{
	static class UBorder_BattlePassTab_TopFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_BattlePassTab_TopFrame_C*>(UBorder_BattlePassTab_TopFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


