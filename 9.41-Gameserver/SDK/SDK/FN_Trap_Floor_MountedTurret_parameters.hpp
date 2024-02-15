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

// 0x3A (0x3A - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.CanDestroySurroundingBuildings
struct ATrap_Floor_MountedTurret_C_CanDestroySurroundingBuildings_Params
{
public:
	bool                                         Allowed;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortVolumeManager*                    CallFunc_GetVolumeManager_OutVolumeManager;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVolumeValidityResult             CallFunc_GetVolumeManager_OutIsValid;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortVolume*                           CallFunc_GetVolumeForLocation_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsReady_ReturnValue;                      // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A13[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortMinigame*                         CallFunc_GetMinigameForVolume_ReturnValue;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInProgress_ReturnValue;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.UnHideFloorAndKillTurret
struct ATrap_Floor_MountedTurret_C_UnHideFloorAndKillTurret_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.OnModifyTrapIncomingDamage
struct ATrap_Floor_MountedTurret_C_OnModifyTrapIncomingDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           EventInstigator;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutDamage;                                         // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOutConsumeEvent;                                  // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_MountedTurretAthena_C*              K2Node_DynamicCast_AsB_Mounted_Turret_Athena;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortMountedWeaponInterface> CallFunc_GetHostVehicleCached_self_CastInput;      // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_GetHostVehicleCached_ReturnValue;         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.CalculateLaunch
struct ATrap_Floor_MountedTurret_C_CalculateLaunch_Params
{
public:
	class AActor*                                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x5C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x189 (0x189 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.BumpPlayerAndDestroyBuildings
struct ATrap_Floor_MountedTurret_C_BumpPlayerAndDestroyBuildings_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanDestroySurroundingBuildings_Allowed;   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x20(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array_1;                          // 0x58(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x70(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0x80(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                        CallFunc_BoxOverlapActors_OutActors;               // 0x90(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_BoxOverlapActors_ReturnValue;             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_BoxOverlapActors_OutActors_1;             // 0xA8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_BoxOverlapActors_ReturnValue_1;           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATiered_Chest_Athena_C*                K2Node_DynamicCast_AsTiered_Chest_Athena;          // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_CalculateLaunch_Velocity;                 // 0xEC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBuildingGridActorFilter              K2Node_MakeStruct_BuildingGridActorFilter;         // 0x102(0x4)(NoDestructor)
	uint8                                        Pad_5A2B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBuildingStructuralSupportSystem*      CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem; // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x110(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBuildingNeighboringActorInfo         CallFunc_K2_GetBuildingActorsInGridCell_OutActorsInGridCell; // 0x120(0x30)(None)
	bool                                         CallFunc_K2_GetBuildingActorsInGridCell_ReturnValue; // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNeighboringCenterCellInfo            CallFunc_Array_Get_Item_2;                         // 0x158(0x14)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingRoof*                         K2Node_DynamicCast_AsBuilding_Roof;                // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingStairs*                       K2Node_DynamicCast_AsBuilding_Stairs;              // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.HideAttachedFloor
struct ATrap_Floor_MountedTurret_C_HideAttachedFloor_Params
{
public:
	class ABuildingSMActor*                      BuildingAttachedTo;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.DestroyedTurret
struct ATrap_Floor_MountedTurret_C_DestroyedTurret_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.Turn off Tick
struct ATrap_Floor_MountedTurret_C_Turn_off_Tick_Params
{
public:
	class ABuildingSMActor*                      BuildingSMActor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.ReceiveEndPlay
struct ATrap_Floor_MountedTurret_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.OnAttachToBuilding
struct ATrap_Floor_MountedTurret_C_OnAttachToBuilding_Params
{
public:
	class ABuildingSMActor*                      AttachedToBuilding;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.OnDeathServer
struct ATrap_Floor_MountedTurret_C_OnDeathServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x34(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_5A43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x79A (0x79A - 0x0)
// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.ExecuteUbergraph_Trap_Floor_MountedTurret
struct ATrap_Floor_MountedTurret_C_ExecuteUbergraph_Trap_Floor_MountedTurret_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A4A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam;                // 0x10(0x80)(IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A4B[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_1;              // 0xA0(0x80)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A4C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x124(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A4D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x13C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x15D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A4F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x160(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x174(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x180(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A51[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x198(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x1A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x1C0(0x30)(IsPlainOldData, NoDestructor)
	class ABuildingSMActor*                      K2Node_CustomEvent_BuildingAttachedTo;             // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A53[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_DestroyedActor;                 // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingSMActor*                      K2Node_CustomEvent_BuildingSMActor;                // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x210(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      CallFunc_GetOwningPlayerState_ReturnValue;         // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMountedTurret_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortVehicleInterface> CallFunc_SetActorBase_self_CastInput;              // 0x240(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A56[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetDriver_self_CastInput;                 // 0x258(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue;                    // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x270(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortVehicleInterface> CallFunc_HasDriver_self_CastInput;                 // 0x278(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasDriver_ReturnValue;                    // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RemoveActiveEffectsWithTags_ReturnValue;  // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X;                            // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x2A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x2B4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x2C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_3;      // 0x2CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A59[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_2;              // 0x2E0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_3;              // 0x360(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_4;              // 0x3E0(0x80)(IsPlainOldData, NoDestructor)
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_5;              // 0x460(0x80)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x4E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortTeamAffiliation>      K2Node_MakeArray_Array;                            // 0x4F0(0x10)(ZeroConstructor, ReferenceParm)
	uint8                                        CallFunc_GetActorTeam_ReturnValue_1;               // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A5B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetDriver_self_CastInput_1;               // 0x508(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue_1;                  // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x520(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortVehicleInterface> CallFunc_HasDriver_self_CastInput_1;               // 0x528(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasDriver_ReturnValue_1;                  // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1; // 0x53C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x540(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingSMActor*                      K2Node_Event_AttachedToBuilding;                   // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x55C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x564(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_2;                          // 0x570(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_2;                          // 0x574(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_2;                          // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x57C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x588(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A5E[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParticleSysParam                     K2Node_MakeStruct_ParticleSysParam_6;              // 0x620(0x80)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>             K2Node_MakeArray_Array_1;                          // 0x6A0(0x10)(ZeroConstructor, ReferenceParm)
	float                                        K2Node_Event_Damage;                               // 0x6B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x6B8(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x6D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x6E4(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_5A60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x770(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x778(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x780(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0x799(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


