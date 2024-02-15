#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BattlePass-PurchaseButton-MoreInfoText.TextStyle-BattlePass-PurchaseButton-MoreInfoText_C
// (None)

class UClass* UTextStyleMinusBattlePassMinusPurchaseButtonMinusMoreInfoText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BattlePass-PurchaseButton-MoreInfoText_C");

	return Clss;
}


// TextStyle-BattlePass-PurchaseButton-MoreInfoText_C TextStyle-BattlePass-PurchaseButton-MoreInfoText.Default__TextStyle-BattlePass-PurchaseButton-MoreInfoText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBattlePassMinusPurchaseButtonMinusMoreInfoText_C* UTextStyleMinusBattlePassMinusPurchaseButtonMinusMoreInfoText_C::GetDefaultObj()
{
	static class UTextStyleMinusBattlePassMinusPurchaseButtonMinusMoreInfoText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBattlePassMinusPurchaseButtonMinusMoreInfoText_C*>(UTextStyleMinusBattlePassMinusPurchaseButtonMinusMoreInfoText_C::StaticClass()->DefaultObject);

	return Default;
}

}


