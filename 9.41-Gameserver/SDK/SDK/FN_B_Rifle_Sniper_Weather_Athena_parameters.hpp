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

// 0xEC (0xEC - 0x0)
// Function B_Rifle_Sniper_Weather_Athena.B_Rifle_Sniper_Weather_Athena_C.UpdateNextNextCircleDisplay
struct AB_Rifle_Sniper_Weather_Athena_C_UpdateNextNextCircleDisplay_Params
{
public:
	struct FVector_NetQuantize100                NextNextCircleLoc;                                 // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetCameraRotation_ReturnValue;            // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_2;                          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_2;                          // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_2;                          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x88(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakVector2D_X;                          // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_DegAtan2_ReturnValue;                     // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeToRange_ReturnValue;             // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0xBC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X_1;                        // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_DegAtan2_ReturnValue_1;                   // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_1;                           // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeToRange_ReturnValue_1;           // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function B_Rifle_Sniper_Weather_Athena.B_Rifle_Sniper_Weather_Athena_C.UserConstructionScript
struct AB_Rifle_Sniper_Weather_Athena_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Rifle_Sniper_Weather_Athena.B_Rifle_Sniper_Weather_Athena_C.OnAimPassLocation
struct AB_Rifle_Sniper_Weather_Athena_C_OnAimPassLocation_Params
{
public:
	bool                                         AimDownsights;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function B_Rifle_Sniper_Weather_Athena.B_Rifle_Sniper_Weather_Athena_C.ReceiveTick
struct AB_Rifle_Sniper_Weather_Athena_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function B_Rifle_Sniper_Weather_Athena.B_Rifle_Sniper_Weather_Athena_C.ExecuteUbergraph_B_Rifle_Sniper_Weather_Athena
struct AB_Rifle_Sniper_Weather_Athena_C_ExecuteUbergraph_B_Rifle_Sniper_Weather_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_AimDownSights;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_GameState_C*                   K2Node_DynamicCast_AsAthena_Game_State;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortSafeZoneIndicator*                CallFunc_GetSafeZoneIndicator_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAthena_GameState_C*                   K2Node_DynamicCast_AsAthena_Game_State_1;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortInGameMapManager*                 CallFunc_GetUIMapManager_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortSafeZoneIndicator*                CallFunc_GetSafeZoneIndicator_ReturnValue_1;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x64(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_BPWorldLocationToMapLocation_ReturnValue; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


