#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_BattlePass_Body_BG.Border_BattlePass_Body_BG_C
// (None)

class UClass* UBorder_BattlePass_Body_BG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_BattlePass_Body_BG_C");

	return Clss;
}


// Border_BattlePass_Body_BG_C Border_BattlePass_Body_BG.Default__Border_BattlePass_Body_BG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_BattlePass_Body_BG_C* UBorder_BattlePass_Body_BG_C::GetDefaultObj()
{
	static class UBorder_BattlePass_Body_BG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_BattlePass_Body_BG_C*>(UBorder_BattlePass_Body_BG_C::StaticClass()->DefaultObject);

	return Default;
}

}


