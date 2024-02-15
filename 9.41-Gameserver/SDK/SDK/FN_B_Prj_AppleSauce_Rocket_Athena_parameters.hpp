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

// 0x8 (0x8 - 0x0)
// Function B_Prj_AppleSauce_Rocket_Athena.B_Prj_AppleSauce_Rocket_Athena_C.UserConstructionScript
struct AB_Prj_AppleSauce_Rocket_Athena_C_UserConstructionScript_Params
{
public:
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function B_Prj_AppleSauce_Rocket_Athena.B_Prj_AppleSauce_Rocket_Athena_C.OnBounce
struct AB_Prj_AppleSauce_Rocket_Athena_C_OnBounce_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x88 (0x88 - 0x0)
// Function B_Prj_AppleSauce_Rocket_Athena.B_Prj_AppleSauce_Rocket_Athena_C.OnStop
struct AB_Prj_AppleSauce_Rocket_Athena_C_OnStop_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x20 (0x20 - 0x0)
// Function B_Prj_AppleSauce_Rocket_Athena.B_Prj_AppleSauce_Rocket_Athena_C.OnExploded
struct AB_Prj_AppleSauce_Rocket_Athena_C_OnExploded_Params
{
public:
	TArray<class AActor*>                        HitActors;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                    HitResults;                                        // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function B_Prj_AppleSauce_Rocket_Athena.B_Prj_AppleSauce_Rocket_Athena_C.ReceiveTick
struct AB_Prj_AppleSauce_Rocket_Athena_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5E1 (0x5E1 - 0x0)
// Function B_Prj_AppleSauce_Rocket_Athena.B_Prj_AppleSauce_Rocket_Athena_C.ExecuteUbergraph_B_Prj_AppleSauce_Rocket_Athena
struct AB_Prj_AppleSauce_Rocket_Athena_C_ExecuteUbergraph_B_Prj_AppleSauce_Rocket_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_529C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerController*>         Temp_object_Variable;                              // 0x10(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0x20(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FHitResult                            K2Node_Event_Hit_1;                                // 0x30(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            K2Node_Event_Hit;                                  // 0xB8(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_529D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x14C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x158(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x164(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x170(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_529E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x1A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x1B4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotFromZ_ReturnValue;                 // 0x1C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_529F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x1D0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingKilled_ReturnValue;                // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_Event_HitActors;                            // 0x1E0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                    K2Node_Event_HitResults;                           // 0x1F0(0x10)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x21C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x228(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x234(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x2BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x2CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x2D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x2E4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x2F0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x378(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x388(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_AddLocalRotation_SweepHitResult_1;     // 0x394(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x41C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x41D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_2;     // 0x420(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x438(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x444(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x454(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x455(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x456(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52A4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x458(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x464(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x470(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x47C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x488(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x494(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x4A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitResult>                    CallFunc_BoxTraceMultiForObjects_OutHits;          // 0x4B0(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_BoxTraceMultiForObjects_ReturnValue;      // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x4C4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_1;            // 0x54C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x54D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_1;                    // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_1;                // 0x554(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_1;                // 0x558(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_1;             // 0x564(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_1;                  // 0x570(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_1;            // 0x57C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_1;                 // 0x588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_1;                // 0x590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_1;            // 0x598(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_1;             // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_1;                 // 0x5A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_1;               // 0x5AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_1;              // 0x5B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_1;                // 0x5BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue; // 0x5C8(0x8)(NoDestructor, HasGetValueTypeHash)
	class ABP_DeimosRift_C*                      K2Node_DynamicCast_AsBP_Deimos_Rift;               // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


