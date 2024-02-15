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

// 0x38 (0x38 - 0x0)
// Function B_Prj_Arrow_ExplodeOnImpact_Athena.B_Prj_Arrow_ExplodeOnImpact_Athena_C.OnRep_HitLocation
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_C_OnRep_HitLocation_Params
{
public:
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F60[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_NegateRotator_ReturnValue;                // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<enum class EFortTeamAffiliation>      K2Node_MakeArray_Array;                            // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDecalComponent*                       CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function B_Prj_Arrow_ExplodeOnImpact_Athena.B_Prj_Arrow_ExplodeOnImpact_Athena_C.ExplosiveBowReference
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_C_ExplosiveBowReference_Params
{
public:
	class AB_ExplosiveBow_Athena_C*              ExplosiveBow;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_ExplosiveBow_Athena_C*              K2Node_DynamicCast_AsB_Explosive_Bow_Athena;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function B_Prj_Arrow_ExplodeOnImpact_Athena.B_Prj_Arrow_ExplodeOnImpact_Athena_C.OnTouched
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_C_OnTouched_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x10(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         bIsOverlap;                                        // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19C (0x19C - 0x0)
// Function B_Prj_Arrow_ExplodeOnImpact_Athena.B_Prj_Arrow_ExplodeOnImpact_Athena_C.ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_C_ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4F63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OtherActor;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_OtherComp;                            // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitResult;                            // 0x28(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         K2Node_Event_bIsOverlap;                           // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xB8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F65[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0xD8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0xE4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x128(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x134(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingKilled_ReturnValue;                // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue;                 // 0x154(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetMuzzleLocation_ReturnValue;            // 0x178(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x184(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_VSize_ReturnValue;                        // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


