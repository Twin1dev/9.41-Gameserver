#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_FlintlockPistol_KnockbackSelf.GCN_FlintlockPistol_KnockbackSelf_C
// (None)

class UClass* UGCN_FlintlockPistol_KnockbackSelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_FlintlockPistol_KnockbackSelf_C");

	return Clss;
}


// GCN_FlintlockPistol_KnockbackSelf_C GCN_FlintlockPistol_KnockbackSelf.Default__GCN_FlintlockPistol_KnockbackSelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_FlintlockPistol_KnockbackSelf_C* UGCN_FlintlockPistol_KnockbackSelf_C::GetDefaultObj()
{
	static class UGCN_FlintlockPistol_KnockbackSelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_FlintlockPistol_KnockbackSelf_C*>(UGCN_FlintlockPistol_KnockbackSelf_C::StaticClass()->DefaultObject);

	return Default;
}

}


