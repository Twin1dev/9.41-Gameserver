#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FlintlockPistol_KnockbackSelf.GE_FlintlockPistol_KnockbackSelf_C
// (None)

class UClass* UGE_FlintlockPistol_KnockbackSelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FlintlockPistol_KnockbackSelf_C");

	return Clss;
}


// GE_FlintlockPistol_KnockbackSelf_C GE_FlintlockPistol_KnockbackSelf.Default__GE_FlintlockPistol_KnockbackSelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FlintlockPistol_KnockbackSelf_C* UGE_FlintlockPistol_KnockbackSelf_C::GetDefaultObj()
{
	static class UGE_FlintlockPistol_KnockbackSelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FlintlockPistol_KnockbackSelf_C*>(UGE_FlintlockPistol_KnockbackSelf_C::StaticClass()->DefaultObject);

	return Default;
}

}


