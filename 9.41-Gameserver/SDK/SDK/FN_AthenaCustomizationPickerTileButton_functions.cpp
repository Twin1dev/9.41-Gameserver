#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C
// (None)

class UClass* UAthenaCustomizationPickerTileButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCustomizationPickerTileButton_C");

	return Clss;
}


// AthenaCustomizationPickerTileButton_C AthenaCustomizationPickerTileButton.Default__AthenaCustomizationPickerTileButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaCustomizationPickerTileButton_C* UAthenaCustomizationPickerTileButton_C::GetDefaultObj()
{
	static class UAthenaCustomizationPickerTileButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCustomizationPickerTileButton_C*>(UAthenaCustomizationPickerTileButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnTileSizeOverrideCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EFortItemType           TypeIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       SizeIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       SizeOut                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPickerTileButton_C::OnTileSizeOverrideCheck(enum class EFortItemType TypeIn, enum class EFortItemCardSize SizeIn, enum class EFortItemCardSize* SizeOut, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsMobilePlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "OnTileSizeOverrideCheck");

	Params::UAthenaCustomizationPickerTileButton_C_OnTileSizeOverrideCheck_Params Parms{};

	Parms.TypeIn = TypeIn;
	Parms.SizeIn = SizeIn;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SizeOut != nullptr)
		*SizeOut = Parms.SizeOut;

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.MarkCosmeticAsSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPickerTileButton_C::MarkCosmeticAsSeen(class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "MarkCosmeticAsSeen");

	Params::UAthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.UpdateBangState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPickerTileButton_C::UpdateBangState(class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "UpdateBangState");

	Params::UAthenaCustomizationPickerTileButton_C_UpdateBangState_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPickerTileButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "OnListItemObjectSet");

	Params::UAthenaCustomizationPickerTileButton_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPickerTileButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPickerTileButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPickerTileButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPickerTileButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.CheckIfHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetSwitcher*             WidgetSwitcher                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPickerTileButton_C::CheckIfHovered(class UWidgetSwitcher* WidgetSwitcher)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "CheckIfHovered");

	Params::UAthenaCustomizationPickerTileButton_C_CheckIfHovered_Params Parms{};

	Parms.WidgetSwitcher = WidgetSwitcher;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPickerTileButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNullItem_Is_Null_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetSwitcher*             K2Node_CustomEvent_WidgetSwitcher                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPickerTileButton_C::ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_Event_ListItemObject, bool CallFunc_IsNullItem_Is_Null_Item, class UWidget* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UWidgetSwitcher* K2Node_CustomEvent_WidgetSwitcher, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "ExecuteUbergraph_AthenaCustomizationPickerTileButton");

	Params::UAthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.CallFunc_IsNullItem_Is_Null_Item = CallFunc_IsNullItem_Is_Null_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_CustomEvent_WidgetSwitcher = K2Node_CustomEvent_WidgetSwitcher;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.PickedButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetSwitcher*             WidgetSwitcher                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPickerTileButton_C::PickedButtonHovered__DelegateSignature(class UWidgetSwitcher* WidgetSwitcher)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "PickedButtonHovered__DelegateSignature");

	Params::UAthenaCustomizationPickerTileButton_C_PickedButtonHovered__DelegateSignature_Params Parms{};

	Parms.WidgetSwitcher = WidgetSwitcher;

	UObject::ProcessEvent(Func, &Parms);

}

}


