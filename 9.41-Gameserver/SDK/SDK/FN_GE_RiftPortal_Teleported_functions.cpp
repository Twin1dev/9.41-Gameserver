#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RiftPortal_Teleported.GE_RiftPortal_Teleported_C
// (None)

class UClass* UGE_RiftPortal_Teleported_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RiftPortal_Teleported_C");

	return Clss;
}


// GE_RiftPortal_Teleported_C GE_RiftPortal_Teleported.Default__GE_RiftPortal_Teleported_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RiftPortal_Teleported_C* UGE_RiftPortal_Teleported_C::GetDefaultObj()
{
	static class UGE_RiftPortal_Teleported_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RiftPortal_Teleported_C*>(UGE_RiftPortal_Teleported_C::StaticClass()->DefaultObject);

	return Default;
}

}


