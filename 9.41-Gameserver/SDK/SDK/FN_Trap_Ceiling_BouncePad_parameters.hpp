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
// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.ApplyGameplayEffects
struct ATrap_Ceiling_BouncePad_C_ApplyGameplayEffects_Params
{
public:
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1; // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2; // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_3; // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_4; // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.PlayerLaunch
struct ATrap_Ceiling_BouncePad_C_PlayerLaunch_Params
{
public:
	class AFortPlayerPawnAthena*                 Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MirrorVectorByNormal_ReturnValue;         // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x5C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_ClampVectorSize_ReturnValue;              // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_ClampVectorSize_ReturnValue_1;            // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCC (0xCC - 0x0)
// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.VehicleLaunch
struct ATrap_Ceiling_BouncePad_C_VehicleLaunch_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetVehicleVelocity_ReturnValue;           // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetVehicleActorPtr_ReturnValue;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMass_ReturnValue;                      // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0x6C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MirrorVectorByNormal_ReturnValue;         // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0xB4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_ClampVectorSize_ReturnValue;              // 0xC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ATrap_Ceiling_BouncePad_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0xC0 (0xC0 - 0x0)
// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Ceiling_BouncePad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x679 (0x679 - 0x0)
// Function Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C.ExecuteUbergraph_Trap_Ceiling_BouncePad
struct ATrap_Ceiling_BouncePad_C_ExecuteUbergraph_Trap_Ceiling_BouncePad_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam;                // 0x20(0x80)(IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X;                            // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xC4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0xD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_3;      // 0xDC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AFB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_1;              // 0xF0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_2;              // 0x170(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_3;              // 0x1F0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_4;              // 0x270(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_5;              // 0x2F0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_6;              // 0x370(0x80)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FParticleSysParam>             K2Node_MakeArray_Array;                            // 0x3F8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x409(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B02[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x40C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x418(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x438(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x444(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x448(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x4D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x4E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType;                 // 0x4EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters;                // 0x4F0(0xB8)(ContainsInstancedReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x5A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B0A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x5BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x5C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x5DC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x5E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x5F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;       // 0x608(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;         // 0x620(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaSKVehicle*                  K2Node_DynamicCast_AsFort_Athena_SKVehicle;        // 0x638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1;    // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x658(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x660(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x674(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x678(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


