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

// 0x19 (0x19 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HandlePawnAndWeaponVisFor1PTargeting
struct AB_Ranged_Generic_Athena_C_HandlePawnAndWeaponVisFor1PTargeting_Params
{
public:
	bool                                         IsTargeting;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42B4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowReticle
struct AB_Ranged_Generic_Athena_C_ShowReticle_Params
{
public:
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideReticle
struct AB_Ranged_Generic_Athena_C_HideReticle_Params
{
public:
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateOrDeactivateWindParticle
struct AB_Ranged_Generic_Athena_C_ActivateOrDeactivateWindParticle_Params
{
public:
	bool                                         bNewActive;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateReloadSmokeFX
struct AB_Ranged_Generic_Athena_C_DeactivateReloadSmokeFX_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateReloadSmokeFX
struct AB_Ranged_Generic_Athena_C_ActivateReloadSmokeFX_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateShellsFX
struct AB_Ranged_Generic_Athena_C_ActivateShellsFX_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateShellsFX
struct AB_Ranged_Generic_Athena_C_DeactivateShellsFX_Params
{
public:
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetupShellFX
struct AB_Ranged_Generic_Athena_C_SetupShellFX_Params
{
public:
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue;           // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x17 (0x17 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.UpdateShellEmittersFX
struct AB_Ranged_Generic_Athena_C_UpdateShellEmittersFX_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42B6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Max_ReturnValue;                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Muzzle Play Reload FX
struct AB_Ranged_Generic_Athena_C_Muzzle_Play_Reload_FX_Params
{
public:
	enum class EFortReloadFXState                Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Muzzle Flash FX
struct AB_Ranged_Generic_Athena_C_Muzzle_Flash_FX_Params
{
public:
	bool                                         Persistent_Fire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetMuzzleLocation_ReturnValue;            // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UseFirstPersonTargeting_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingScope_ReturnValue;                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x50(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AddRandomScale
struct AB_Ranged_Generic_Athena_C_AddRandomScale_Params
{
public:
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.UserConstructionScript
struct AB_Ranged_Generic_Athena_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42BB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_43F549264BB135D3D385D4BB5846412A
struct AB_Ranged_Generic_Athena_C_OnLoaded_43F549264BB135D3D385D4BB5846412A_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_109F12F046377B483CA7FF92A795CBD2
struct AB_Ranged_Generic_Athena_C_OnLoaded_109F12F046377B483CA7FF92A795CBD2_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_65280D504DA982E453E39BA22D9D1643
struct AB_Ranged_Generic_Athena_C_OnLoaded_65280D504DA982E453E39BA22D9D1643_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_351A9D71483BD9CF417705946595CB08
struct AB_Ranged_Generic_Athena_C_OnLoaded_351A9D71483BD9CF417705946595CB08_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnPlayWeaponFireFX
struct AB_Ranged_Generic_Athena_C_OnPlayWeaponFireFX_Params
{
public:
	bool                                         bPersistentFire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSecondaryFire;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnPlayReloadFX
struct AB_Ranged_Generic_Athena_C_OnPlayReloadFX_Params
{
public:
	enum class EFortReloadFXState                ReloadStage;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnSetTargeting
struct AB_Ranged_Generic_Athena_C_OnSetTargeting_Params
{
public:
	bool                                         bNewIsTargeting;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Update Enemy Custom Depths
struct AB_Ranged_Generic_Athena_C_Update_Enemy_Custom_Depths_Params
{
public:
	bool                                         Enable_Or_Disable;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StencilBufferValue;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnInitAlteration
struct AB_Ranged_Generic_Athena_C_OnInitAlteration_Params
{
public:
	class UFortAlterationItemDefinition*         NewAlteration;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnInitCosmeticAlterations
struct AB_Ranged_Generic_Athena_C_OnInitCosmeticAlterations_Params
{
public:
	struct FFortCosmeticModification             CosmeticMod;                                       // 0x0(0x558)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWeaponPierceThrough
struct AB_Ranged_Generic_Athena_C_SetWeaponPierceThrough_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetLimit;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWeaponPierceThrough_ClientRep
struct AB_Ranged_Generic_Athena_C_SetWeaponPierceThrough_ClientRep_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetLimit;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnWeaponVisibilityChanged
struct AB_Ranged_Generic_Athena_C_OnWeaponVisibilityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9FE (0x9FE - 0x0)
// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ExecuteUbergraph_B_Ranged_Generic_Athena
struct AB_Ranged_Generic_Athena_C_ExecuteUbergraph_B_Ranged_Generic_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetPI_ReturnValue;                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetADSTransitionInTime_ReturnValue;       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UseFirstPersonTargeting_ReturnValue;      // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortReloadFXState                K2Node_Event_ReloadStage;                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MathExpression_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MathExpression_ReturnValue_1;               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bNewIsTargeting;                      // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortAIPawn*>                   CallFunc_GetAllActorsOfClass_OutActors;            // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         K2Node_CustomEvent_Enable_Or_Disable;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_StencilBufferValue;             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48(0x10)(ZeroConstructor, NoDestructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAlterationItemDefinition*         K2Node_Event_NewAlteration;                        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortCosmeticModification             K2Node_Event_CosmeticMod;                          // 0x70(0x558)(None)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_1;                // 0x5C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_2;                // 0x5CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_3;                // 0x5CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimeToNextFire_ReturnValue;            // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLocalMagazineAmmoCount_ReturnValue;    // 0x5D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x5D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x5DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x5E0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UseScopeTargeting_ReturnValue;            // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x5EC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x5F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x608(0x28)(HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System;              // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetOrLoadSynchronously_ReturnValue;       // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Enable_1;                       // 0x661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TargetLimit_1;                  // 0x664(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x668(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x670(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable;                         // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TargetLimit;                    // 0x684(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x688(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue_1;                  // 0x690(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_1;            // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x6A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingFirstPersonCamera_ReturnValue;     // 0x6A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue; // 0x6A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x6A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x6A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x6B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortWindManager*                      CallFunc_GetWindManager_ReturnValue;               // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_1;              // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6D0(0x10)(ZeroConstructor, NoDestructor)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UseScopeTargeting_ReturnValue_1;          // 0x701(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_2;              // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_2;                  // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x71C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_1; // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x728(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x72C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_3;              // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_4;              // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_3;                  // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_4;                  // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_2; // 0x760(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x769(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x76C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_2;          // 0x778(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x784(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x794(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UseScopeTargeting_ReturnValue_2;          // 0x7A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bVisible;                             // 0x7A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x7A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRenderingDetailMode_ReturnValue;       // 0x7A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRenderingDetailMode_ReturnValue_1;     // 0x7AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x7B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x7B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x7B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable_2;                            // 0x7B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_2;                       // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_2;            // 0x7C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x7D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable_3;                            // 0x7D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_3;            // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x7E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded_3;                       // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x7F8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x808(0x10)(ZeroConstructor, NoDestructor)
	class AFortAIPawn*                           CallFunc_Array_Get_Item;                           // 0x818(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x821(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x824(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x829(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x82A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42D9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x82C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x830(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0x860(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x890(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x89C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x8A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x8B4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x8C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x8CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x8D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x8DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x8E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x8E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x8EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x8F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_3;          // 0x8F4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_4;          // 0x904(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x914(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x920(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x928(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x934(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x9BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x9C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x9C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x9CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x9D0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x9DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_4;          // 0x9E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x9E4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x9F0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_1;            // 0x9FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x9FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


