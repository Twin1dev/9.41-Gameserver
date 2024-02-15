#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SwitchToNextItemInOffer
struct UAthenaDirectAquisitionStyleScreen_C_SwitchToNextItemInOffer_Params
{
public:
	int32                                        Direction;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4B (0x4B - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ScanOfferForVariants
struct UAthenaDirectAquisitionStyleScreen_C_ScanOfferForVariants_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D3C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D3D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*            CallFunc_GetGrantedItemDefinition_ReturnValue;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumGrantedItems_ReturnValue;           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaCosmeticItemDefinition*         K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasModifiableVariants_ReturnValue;        // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdateFromVariant
struct UAthenaDirectAquisitionStyleScreen_C_UpdateFromVariant_Params
{
public:
	struct FGameplayTag                          VariantChannelTag;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          VariantTag;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOwned;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D46[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            GrantedItemDef;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaCosmeticItemDefinition*         K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D48[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaCosmeticItemDefinition*         K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition_1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCosmeticVariant*                  CallFunc_GetVariantChannel_ReturnValue;            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetVariantUnlockRequirement_ReturnValue;  // 0x58(0x18)(None)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*            CallFunc_GetGrantedItemDefinition_ReturnValue;     // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetWidgetForFramingViewedItem
struct UAthenaDirectAquisitionStyleScreen_C_GetWidgetForFramingViewedItem_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack
struct UAthenaDirectAquisitionStyleScreen_C_HandleBack_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature
struct UAthenaDirectAquisitionStyleScreen_C_BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature_Params
{
public:
	struct FGameplayTag                          VariantChannel;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          VariantTag;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOwned;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAquisitionStyleScreen_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9A (0x9A - 0x0)
// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen
struct UAthenaDirectAquisitionStyleScreen_C_ExecuteUbergraph_AthenaDirectAquisitionStyleScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x8(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortStoreFrontOfferInfo*              CallFunc_GetOfferInfo_ReturnValue;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_ComponentBoundEvent_VariantChannel;         // 0x34(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_ComponentBoundEvent_VariantTag;             // 0x3C(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsOwned;                // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D55[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            CallFunc_GetGrantedItemDefinition_ReturnValue;     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaCosmeticItemDefinition*         K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMcpVariantChannelInfo>        CallFunc_GetDefaultVariantChannels_OutDefaultVariantData; // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D58[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleBack_bPassThrough;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


