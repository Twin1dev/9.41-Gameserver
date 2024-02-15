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

// 0x10 (0x10 - 0x0)
// Function SK_Weapon_Flotation_Balloon_Skeleton_AnimBP.SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C.AnimGraph
struct USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function SK_Weapon_Flotation_Balloon_Skeleton_AnimBP.SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C.BlueprintUpdateAnimation
struct USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCC (0xCC - 0x0)
// Function SK_Weapon_Flotation_Balloon_Skeleton_AnimBP.SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C.ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP
struct USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C_ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Temp_struct_Variable;                              // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B01[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Temp_struct_Variable_1;                            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_2;                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B02[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              K2Node_Select_Default;                             // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B03[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetDeltaTransformFromRefPose_ReturnValue; // 0x50(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


