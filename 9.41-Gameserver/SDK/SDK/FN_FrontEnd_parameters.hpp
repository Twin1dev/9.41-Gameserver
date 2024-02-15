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

// 0x19 (0x19 - 0x0)
// Function FrontEnd.FrontEnd_C.GetPlayerSurveyDispatcher
struct UFrontEnd_C_GetPlayerSurveyDispatcher_Params
{
public:
	class UFortPlayerSurveyDispatcher*           Result;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIManager_C*                          K2Node_DynamicCast_AsUIManager;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function FrontEnd.FrontEnd_C.LoadTrailer
struct UFrontEnd_C_LoadTrailer_Params
{
public:
	class UFortActivatableVideoPanel*            ActivatableMovieWidget;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        VideoIndex;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadVideo_ReturnValue;                    // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function FrontEnd.FrontEnd_C.SetupSafeZones
struct UFrontEnd_C_SetupSafeZones_Params
{
public:
	class UAthenaTabsScreen_C*                   AthenaTabsScreen;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function FrontEnd.FrontEnd_C.PlayTrailer
struct UFrontEnd_C_PlayTrailer_Params
{
public:
	int32                                        VideoIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActivatableMovieWidget_C*             CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTrailer_Return_Value;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FrontEnd.FrontEnd_C.InitChatVisibilityButton
struct UFrontEnd_C_InitChatVisibilityButton_Params
{
public:
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x240 (0x240 - 0x0)
// Function FrontEnd.FrontEnd_C.UpdatePttVisibility
struct UFrontEnd_C_UpdatePttVisibility_Params
{
public:
	enum class EPTTState                         PTTState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCanPTT_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x18(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0xA0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x128(0x88)(None)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPTTState                         Temp_byte_Variable;                                // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E1D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x1B8(0x88)(None)
};

// 0x1 (0x1 - 0x0)
// Function FrontEnd.FrontEnd_C.SetOverlayTitleBarVisibility
struct UFrontEnd_C_SetOverlayTitleBarVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function FrontEnd.FrontEnd_C.SetChatWidgetVisibility
struct UFrontEnd_C_SetChatWidgetVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function FrontEnd.FrontEnd_C.InitForSubGame
struct UFrontEnd_C_InitForSubGame_Params
{
public:
	class UFortMainTabsScreenBase*               StwTabsScreen;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaTabsScreen_C*                   AthenaTabsScreen;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaTabsScreen_C*                   CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function FrontEnd.FrontEnd_C.PopContentWidgetInternal
struct UFrontEnd_C_PopContentWidgetInternal_Params
{
public:
	struct FContentPushState                     State;                                             // 0x0(0x3)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_5E20[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_PopWidget_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FrontEnd.FrontEnd_C.HandleEnterFrontend
struct UFrontEnd_C_HandleEnterFrontend_Params
{
public:
	enum class EFortUIState                      UIState;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIState                      LocalUIState;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E21[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function FrontEnd.FrontEnd_C.PushContentWidgetInternal
struct UFrontEnd_C_PushContentWidgetInternal_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                     State;                                             // 0x8(0x3)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function FrontEnd.FrontEnd_C.OnFrontEndVisibilityUpdated
struct UFrontEnd_C_OnFrontEndVisibilityUpdated_Params
{
public:
	bool                                         bHideHeader;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bHideFooter;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bHideChatWidget;                                   // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function FrontEnd.FrontEnd_C.Loading Screen Changed
struct UFrontEnd_C_Loading_Screen_Changed_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function FrontEnd.FrontEnd_C.BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature
struct UFrontEnd_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function FrontEnd.FrontEnd_C.OnEnterState
struct UFrontEnd_C_OnEnterState_Params
{
public:
	enum class EFortUIState                      PreviousUIState;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17A (0x17A - 0x0)
// Function FrontEnd.FrontEnd_C.ExecuteUbergraph_FrontEnd
struct UFrontEnd_C_ExecuteUbergraph_FrontEnd_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	enum class EPTTState                         Temp_byte_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         Temp_byte_Variable_1;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         Temp_byte_Variable_2;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         Temp_byte_Variable_3;                              // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_2;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	enum class EPTTState                         CallFunc_GetPTTState_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_3;                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_4;                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         CallFunc_GetPTTState_ReturnValue_1;                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowSocialImport_ReturnValue;       // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E23[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_5;                 // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_6;                 // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSocialImportPanel*                CallFunc_ShowSocialImport_ReturnValue;             // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x90(0x10)(ZeroConstructor, NoDestructor)
	class UAsyncAction_WaitForScriptedActions*   CallFunc_WaitForScriptedAction_ReturnValue;        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xA8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Event_Widget;                               // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                     K2Node_Event_State;                                // 0xC8(0x3)(NoDestructor)
	uint8                                        Pad_5E27[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xCC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bHideHeader;                          // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bHideFooter;                          // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bHideChatWidget;                      // 0xDE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E28[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_7;                 // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsVisible;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPTTState                         CallFunc_GetPTTState_ReturnValue_2;                // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E29[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         K2Node_Select_Default;                             // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Selected;               // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable_1;                             // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E2C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default_1;                           // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIState                      K2Node_Event_PreviousUIState;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x12C(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckForGifts_ReturnValue;                // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x13E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x13F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NeedSeeTrailerMovie_ReturnValue;          // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_8;                 // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShowInitialCrossplayDialog_ReturnValue;   // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_9;                 // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerSurveyDispatcher*           CallFunc_GetPlayerSurveyDispatcher_Result;         // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue; // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncAction_FortPlayerSurveyDispatcherDisplaySurveys* CallFunc_DisplaySurveys_ReturnValue;               // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowInitialCrossplayDialog_ReturnValue_1; // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


