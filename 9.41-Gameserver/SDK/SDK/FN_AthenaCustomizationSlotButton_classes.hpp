#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x230 (0xD90 - 0xB60)
// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
class UAthenaCustomizationSlotButton_C : public UAthenaCustomizationSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnBackedOutFromSelection;                          // 0xB68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnConfirmedSelection;                              // 0xB70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelected;                                        // 0xB78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0xB80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionFlash;                             // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionShine;                             // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EmptyImage;                                        // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSlotType;                                     // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SlotImageOverlay;                                  // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TooltipBody;                                       // 0xBB8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TooltipHeader;                                     // 0xBD0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ShowSubTypeIcon;                                   // 0xBE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_6007[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SubTypeIcon;                                       // 0xBF0(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bSuppressTooltip;                                  // 0xC78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_6008[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TypeIconVerticalOffset;                            // 0xC7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateBrush                           EmptyImage_M;                                      // 0xC80(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           EmptyImage_S;                                      // 0xD08(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAthenaCustomizationSlotButton_C* GetDefaultObj();

	void SetCardSizeAndSlotImage(enum class EFortItemCardSize CardSize, const struct FSlateBrush& SlotImage, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, enum class EFortItemCardSize Temp_byte_Variable, const struct FVector2D& Temp_struct_Variable_5, const struct FVector2D& Temp_struct_Variable_6, const struct FVector2D& Temp_struct_Variable_7, const struct FVector2D& Temp_struct_Variable_8, const struct FVector2D& Temp_struct_Variable_9, const struct FVector2D& Temp_struct_Variable_10, const struct FVector2D& Temp_struct_Variable_11, enum class EFortItemCardSize Temp_byte_Variable_1, const struct FVector2D& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FVector2D& Temp_struct_Variable_12, const struct FVector2D& Temp_struct_Variable_13, enum class EFortItemCardSize Temp_byte_Variable_2, const struct FVector2D& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


