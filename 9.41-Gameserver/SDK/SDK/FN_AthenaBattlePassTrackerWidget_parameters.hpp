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

// 0x34 (0x34 - 0x0)
// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.OnAccountInfoChanged
struct UAthenaBattlePassTrackerWidget_C_OnAccountInfoChanged_Params
{
public:
	struct FFortPublicAccountInfo                Result;                                            // 0x0(0x34)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x160 (0x160 - 0x0)
// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.ExecuteUbergraph_AthenaBattlePassTrackerWidget
struct UAthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FFortPublicAccountInfo                K2Node_Event_Result;                               // 0x30(0x34)(ConstParm, NoDestructor)
	uint8                                        Pad_4BBC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpProfileAthena*                 CallFunc_GetAthenaProfile_ReturnValue;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasPurchasedSeasonBook_ReturnValue;       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x80(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xC0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD0(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xE8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x110(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x138(0x28)(None)
};

}
}


