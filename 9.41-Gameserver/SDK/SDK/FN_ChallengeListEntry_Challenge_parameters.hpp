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

// 0x4 (0x4 - 0x0)
// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.OnChallengeInfoSet
struct UChallengeListEntry_Challenge_C_OnChallengeInfoSet_Params
{
public:
	bool                                         bIsComplete;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsLocked;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bCompact;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideRewards;                                       // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.OnPartyAssistEnabledChanged
struct UChallengeListEntry_Challenge_C_OnPartyAssistEnabledChanged_Params
{
public:
	bool                                         bIsPartyAssistEnabled;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UChallengeListEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_3_CommonSelectedStateChanged__DelegateSignature
struct UChallengeListEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_3_CommonSelectedStateChanged__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA2 (0xA2 - 0x0)
// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.ExecuteUbergraph_ChallengeListEntry_Challenge
struct UChallengeListEntry_Challenge_C_ExecuteUbergraph_ChallengeListEntry_Challenge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_614A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_614B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_2;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_614C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsComplete;                          // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsLocked;                            // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bCompact;                             // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_HideRewards;                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_614D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_614E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_2;                           // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_3;                           // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_614F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsPartyAssistEnabled;                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_10;                             // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_5;                           // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6150[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_6;                           // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_7;                           // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6151[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_11;                             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6152[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Selected;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6153[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_8;                           // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


