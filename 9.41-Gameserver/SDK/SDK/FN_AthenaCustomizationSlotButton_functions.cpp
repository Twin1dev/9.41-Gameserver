#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
// (None)

class UClass* UAthenaCustomizationSlotButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCustomizationSlotButton_C");

	return Clss;
}


// AthenaCustomizationSlotButton_C AthenaCustomizationSlotButton.Default__AthenaCustomizationSlotButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaCustomizationSlotButton_C* UAthenaCustomizationSlotButton_C::GetDefaultObj()
{
	static class UAthenaCustomizationSlotButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCustomizationSlotButton_C*>(UAthenaCustomizationSlotButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.SetCardSizeAndSlotImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemCardSize       CardSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 SlotImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FVector2D                   Temp_struct_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Select_Default_2                                          (ConstParm)

void UAthenaCustomizationSlotButton_C::SetCardSizeAndSlotImage(enum class EFortItemCardSize CardSize, const struct FSlateBrush& SlotImage, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, enum class EFortItemCardSize Temp_byte_Variable, const struct FVector2D& Temp_struct_Variable_5, const struct FVector2D& Temp_struct_Variable_6, const struct FVector2D& Temp_struct_Variable_7, const struct FVector2D& Temp_struct_Variable_8, const struct FVector2D& Temp_struct_Variable_9, const struct FVector2D& Temp_struct_Variable_10, const struct FVector2D& Temp_struct_Variable_11, enum class EFortItemCardSize Temp_byte_Variable_1, const struct FVector2D& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FVector2D& Temp_struct_Variable_12, const struct FVector2D& Temp_struct_Variable_13, enum class EFortItemCardSize Temp_byte_Variable_2, const struct FVector2D& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "SetCardSizeAndSlotImage");

	Params::UAthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage_Params Parms{};

	Parms.CardSize = CardSize;
	Parms.SlotImage = SlotImage;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationSlotButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "PreConstruct");

	Params::UAthenaCustomizationSlotButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationSlotButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationSlotButton_C::ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationSlotButton_C", "ExecuteUbergraph_AthenaCustomizationSlotButton");

	Params::UAthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


