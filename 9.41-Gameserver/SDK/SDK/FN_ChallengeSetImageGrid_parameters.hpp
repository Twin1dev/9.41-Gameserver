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

// 0x1 (0x1 - 0x0)
// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.ChangeSortFunction
struct UChallengeSetImageGrid_C_ChangeSortFunction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.GetWidgetForFramingViewedItem
struct UChallengeSetImageGrid_C_GetWidgetForFramingViewedItem_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.SetDynamicColors
struct UChallengeSetImageGrid_C_SetDynamicColors_Params
{
public:
	class UImage*                                DetailsDynamicMaterialTarget;                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortChallengeSetStyle                FortChallengeSetStyle;                             // 0x8(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.HandleBack
struct UChallengeSetImageGrid_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CD2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.OnChallengeSetEstablished
struct UChallengeSetImageGrid_C_OnChallengeSetEstablished_Params
{
public:
	struct FFortChallengeSetStyle                DisplayStyle;                                      // 0x0(0x80)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsComplete;                                       // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UChallengeSetImageGrid_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13B (0x13B - 0x0)
// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.ExecuteUbergraph_ChallengeSetImageGrid
struct UChallengeSetImageGrid_C_ExecuteUbergraph_ChallengeSetImageGrid_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CE6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortChallengeSetStyle                K2Node_Event_DisplayStyle;                         // 0x8(0x80)(ConstParm)
	bool                                         K2Node_Event_bIsComplete;                          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetChallengeStyleLightAccentColor_ReturnValue; // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CE9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCircleArrowButton_C*                  K2Node_DynamicCast_AsCircle_Arrow_Button;          // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CEB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCircleArrowButton_C*                  K2Node_DynamicCast_AsCircle_Arrow_Button_1;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CED[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCircleArrowButton_C*                  K2Node_DynamicCast_AsCircle_Arrow_Button_2;        // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CEE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpProfileAthena*                 CallFunc_GetAthenaProfile_ReturnValue;             // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasPurchasedSeasonBook_ReturnValue;       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xEB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBack_Passthrough;                   // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CEF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0xF0(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x100(0x10)(ZeroConstructor, NoDestructor)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0x118(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x128(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsConsolePlatform_ReturnValue;            // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


