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

// 0x20 (0x20 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnSpectateMatch
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnSpectateMatch_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSpectateMatchModal_C*           CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetScrollWidget
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetScrollWidget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnCustomMatchmaking
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnCustomMatchmaking_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomMatchmakingKeyModal_C*          CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileOutroAnim
struct UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileOutroAnim_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D97[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         CallFunc_GetButtonAtIndex_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchmakingTile_C*              K2Node_DynamicCast_AsAthena_Matchmaking_Tile;      // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileIntroAnim
struct UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileIntroAnim_Params
{
public:
	class UCommonButton*                         CallFunc_GetButtonAtIndex_ReturnValue;             // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMatchmakingTile_C*              K2Node_DynamicCast_AsAthena_Matchmaking_Tile;      // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5D9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B0 (0x3B0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Touch To Close
struct UAthenaMatchmakingOptionsDisplay_v2_C_Touch_To_Close_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x160(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_PointerEvent_IsTouchEvent_ReturnValue;    // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x17A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x180(0xB8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x240(0xB8)(None)
	struct FEventReply                           K2Node_Select_Default;                             // 0x2F8(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel
struct UAthenaMatchmakingOptionsDisplay_v2_C_Handle_InputAction_Cancel_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetupInput_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetSquadFillText
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetSquadFillText_Params
{
public:
	enum class ESquadFillSetting                 InSquadFillSetting;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.RepresentedPlaylistChanged
struct UAthenaMatchmakingOptionsDisplay_v2_C_RepresentedPlaylistChanged_Params
{
public:
	struct FPlaylistFrontEndData                 NewRepresentedPlaylist;                            // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnTileDoubleClicked
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnTileDoubleClicked_Params
{
public:
	class UCommonButton*                         ButtonClicked;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateMMButtonStatusBP
struct UAthenaMatchmakingOptionsDisplay_v2_C_UpdateMMButtonStatusBP_Params
{
public:
	bool                                         bPlaylistIsEnabled;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFillDisableReason                FillDisableReason;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetServerAccessText
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetServerAccessText_Params
{
public:
	enum class EServerAccessSetting              InServerAccessSetting;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetSpectatorButtonText
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetSpectatorButtonText_Params
{
public:
	enum class ESpectatorQueueType               InSpectatorQueueType;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__SupportAffliateButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__SupportAffliateButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnAffiliateUpdated
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnAffiliateUpdated_Params
{
public:
	class FString                                AffiliateName;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateShowSupportAffiliateButton
struct UAthenaMatchmakingOptionsDisplay_v2_C_UpdateShowSupportAffiliateButton_Params
{
public:
	bool                                         bIsCreativeLTM;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x640 (0x640 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2
struct UAthenaMatchmakingOptionsDisplay_v2_C_ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_1;                             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable_2;                             // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_3;                             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x9C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0xAC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable_2;                              // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable_3;                              // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DA3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue; // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadFillSetting                 Temp_byte_Variable_6;                              // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0xF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_8;                              // 0xF7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_9;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_10;                             // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DA4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_4;                              // 0x100(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x118(0x18)(None)
	enum class EServerAccessSetting              Temp_byte_Variable_7;                              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_11;                             // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_12;                             // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_13;                             // 0x133(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESpectatorQueueType               Temp_byte_Variable_8;                              // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_6;                              // 0x138(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0x150(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0x168(0x18)(None)
	bool                                         Temp_bool_Variable_14;                             // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_10;                             // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_15;                             // 0x183(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable_11;                             // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable_12;                             // 0x185(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DA6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue_1;                 // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_16;                             // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLiveSpectatingEnabled_ReturnValue;      // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_13;                             // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default_1;                           // 0x193(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_14;                             // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_17;                             // 0x195(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_15;                             // 0x196(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_16;                             // 0x197(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue_2;                 // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetAffiliateName_ReturnValue;             // 0x1A0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Len_ReturnValue;                          // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESquadFillSetting                 K2Node_Event_InSquadFillSetting;                   // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default_3;                           // 0x1CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_9;                              // 0x1D0(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x1E8(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x200(0x18)(None)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_3;               // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x220(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x230(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x240(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x250(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x268(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x270(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FPlaylistFrontEndData                 K2Node_Event_NewRepresentedPlaylist;               // 0x278(0x28)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x2B0(0x88)(None)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue_1;       // 0x338(0x88)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x3C0(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x3E0(0x18)(None)
	class UCommonButton*                         K2Node_Event_ButtonClicked;                        // 0x3F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x408(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DAE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Len_ReturnValue_2;                        // 0x42C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x430(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Len_ReturnValue_3;                        // 0x44C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x450(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue_2;                // 0x470(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x488(0x18)(None)
	enum class EFillDisableReason                Temp_byte_Variable_17;                             // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bPlaylistIsEnabled;                   // 0x4A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFillDisableReason                K2Node_Event_FillDisableReason;                    // 0x4A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_5;                           // 0x4A8(0x18)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_6;                           // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DB2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default_7;                           // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default_8;                           // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_9;                           // 0x4D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default_10;                          // 0x4EC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x4FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x4FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DB4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Temp_object_Variable;                              // 0x500(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_11;                          // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMatchmakingTileStyle         Temp_byte_Variable_18;                             // 0x509(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DB5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default_12;                          // 0x510(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_19;                             // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_20;                             // 0x519(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_18;                             // 0x51A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_21;                             // 0x51B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_13;                          // 0x51C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_22;                             // 0x51D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_19;                             // 0x51E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_14;                          // 0x51F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EServerAccessSetting              K2Node_Event_InServerAccessSetting;                // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x521(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default_15;                          // 0x522(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DB6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button_1;           // 0x528(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_16;                          // 0x538(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_23;                             // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button_2;           // 0x558(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_24;                             // 0x561(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpectatorQueueType               K2Node_Event_InSpectatorQueueType;                 // 0x562(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x563(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_17;                          // 0x568(0x18)(None)
	bool                                         Temp_bool_Variable_20;                             // 0x580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x588(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Handle_InputAction_Cancel_PassThrough;    // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_18;                          // 0x591(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x592(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DBB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x598(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_19;                          // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x5B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x5B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue_4;                        // 0x5C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x5C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x5C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DBD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_AffiliateName;                        // 0x5D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UAffiliateKeyModal_C*                  CallFunc_Create_ReturnValue;                       // 0x5E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue_1;          // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_13;                             // 0x5F8(0x18)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue_2;          // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsCreativeLTM;                       // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x621(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x622(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue_1;               // 0x623(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_21;                             // 0x624(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_20;                          // 0x628(0x18)(None)
};

}
}


