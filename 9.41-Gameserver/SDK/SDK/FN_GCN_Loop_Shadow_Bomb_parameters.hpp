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

// 0x40 (0x40 - 0x0)
// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.GetSkeletalMeshes
struct AGCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6093[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6095[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6097[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ReceiveTick
struct AGCN_Loop_Shadow_Bomb_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnRemoval
struct AGCN_Loop_Shadow_Bomb_C_OnRemoval_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      ParticleComponents;                                // 0xC0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xD0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                          BurstCameraShakeInstance;                          // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnLoopingStart
struct AGCN_Loop_Shadow_Bomb_C_OnLoopingStart_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      ParticleComponents;                                // 0xC0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xD0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnFinishedCharacterCustomization_Bind
struct AGCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B5 (0x3B5 - 0x0)
// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ExecuteUbergraph_GCN_Loop_Shadow_Bomb
struct AGCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_CustomEvent_Pawn;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Abs_ReturnValue;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x80(0x8)(NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                K2Node_Event_MyTarget_1;                           // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters_1;                         // 0xC8(0xB8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      K2Node_Event_ParticleComponents_1;                 // 0x180(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents_1;                    // 0x190(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                          K2Node_Event_BurstCameraShakeInstance;             // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           K2Node_Event_BurstDecalInstance;                   // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_MyTarget;                             // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x1B8(0xB8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      K2Node_Event_ParticleComponents;                   // 0x270(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents;                      // 0x280(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_Array_Get_Item_1;                         // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2B4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x2C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsPlayingReplay_ReturnValue;           // 0x2C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsPlayingReplay_ReturnValue_1;         // 0x2C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2C7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_Array_Get_Item_2;                         // 0x2F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x30C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x314(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_3;            // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsBroadcastClient_ReturnValue;         // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60AB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_Array_Get_Item_3;                         // 0x328(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_4;            // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x334(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_Array_Get_Item_4;                         // 0x338(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x340(0x8)(NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_Array_Get_Item_5;                         // 0x348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x354(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x35C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x35D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_OnSameTeam_ReturnValue;                   // 0x35E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60AC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x360(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x370(0x8)(NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_Array_Get_Item_6;                         // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_Array_Get_Item_7;                         // 0x388(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_Array_Get_Item_8;                         // 0x390(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x3A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_Array_Get_Item_9;                         // 0x3A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsPlayingReplay_ReturnValue_2;         // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_2;        // 0x3B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsBroadcastClient_ReturnValue_1;       // 0x3B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x3B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x3B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


