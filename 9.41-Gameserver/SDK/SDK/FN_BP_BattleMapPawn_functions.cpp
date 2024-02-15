#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapPawn.BP_BattleMapPawn_C
// (Actor, Pawn)

class UClass* ABP_BattleMapPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapPawn_C");

	return Clss;
}


// BP_BattleMapPawn_C BP_BattleMapPawn.Default__BP_BattleMapPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapPawn_C* ABP_BattleMapPawn_C::GetDefaultObj()
{
	static class ABP_BattleMapPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapPawn_C*>(ABP_BattleMapPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


