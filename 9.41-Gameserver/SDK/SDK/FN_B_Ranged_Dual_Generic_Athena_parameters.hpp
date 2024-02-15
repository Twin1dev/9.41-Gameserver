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

// 0xC (0xC - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetPostProcessParams
struct AB_Ranged_Dual_Generic_Athena_C_SetPostProcessParams_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F8A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetActiveAlterationIdleParticles
struct AB_Ranged_Dual_Generic_Athena_C_SetActiveAlterationIdleParticles_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Reset;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowReticle
struct AB_Ranged_Dual_Generic_Athena_C_ShowReticle_Params
{
public:
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideReticle
struct AB_Ranged_Dual_Generic_Athena_C_HideReticle_Params
{
public:
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateOrDeactivateWindParticle
struct AB_Ranged_Dual_Generic_Athena_C_ActivateOrDeactivateWindParticle_Params
{
public:
	bool                                         bNewActive;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateReloadSmokeFX
struct AB_Ranged_Dual_Generic_Athena_C_DeactivateReloadSmokeFX_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateReloadSmokeFX
struct AB_Ranged_Dual_Generic_Athena_C_ActivateReloadSmokeFX_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateShellsFX
struct AB_Ranged_Dual_Generic_Athena_C_ActivateShellsFX_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OffHand;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetupShellFX
struct AB_Ranged_Dual_Generic_Athena_C_SetupShellFX_Params
{
public:
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F8B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue;           // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UpdateShellEmittersFX
struct AB_Ranged_Dual_Generic_Athena_C_UpdateShellEmittersFX_Params
{
public:
	class UParticleSystemComponent*              PS;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Muzzle Play Reload FX
struct AB_Ranged_Dual_Generic_Athena_C_Muzzle_Play_Reload_FX_Params
{
public:
	enum class EFortReloadFXState                Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Muzzle Flash FX
struct AB_Ranged_Dual_Generic_Athena_C_Muzzle_Flash_FX_Params
{
public:
	bool                                         Persistent_Fire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OffHand;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingScope_ReturnValue;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AddRandomScale
struct AB_Ranged_Dual_Generic_Athena_C_AddRandomScale_Params
{
public:
	bool                                         OffHand;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue_4;         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_3;                 // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4B (0x4B - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UserConstructionScript
struct AB_Ranged_Dual_Generic_Athena_C_UserConstructionScript_Params
{
public:
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*              CallFunc_AddComponent_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_3;       // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_468C8A744AA43D411B8A218EDC703167
struct AB_Ranged_Dual_Generic_Athena_C_OnLoaded_468C8A744AA43D411B8A218EDC703167_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_A20154E74163905534EAA7A226A4D20B
struct AB_Ranged_Dual_Generic_Athena_C_OnLoaded_A20154E74163905534EAA7A226A4D20B_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_3B6C2F134D7C48D715B2EB8E0CE9B045
struct AB_Ranged_Dual_Generic_Athena_C_OnLoaded_3B6C2F134D7C48D715B2EB8E0CE9B045_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_DB8A0F544A576B8684A07E865C728884
struct AB_Ranged_Dual_Generic_Athena_C_OnLoaded_DB8A0F544A576B8684A07E865C728884_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnPlayWeaponFireFX
struct AB_Ranged_Dual_Generic_Athena_C_OnPlayWeaponFireFX_Params
{
public:
	bool                                         bPersistentFire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSecondaryFire;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnPlayReloadFX
struct AB_Ranged_Dual_Generic_Athena_C_OnPlayReloadFX_Params
{
public:
	enum class EFortReloadFXState                ReloadStage;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnSetTargeting
struct AB_Ranged_Dual_Generic_Athena_C_OnSetTargeting_Params
{
public:
	bool                                         bNewIsTargeting;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Update Enemy Custom Depths
struct AB_Ranged_Dual_Generic_Athena_C_Update_Enemy_Custom_Depths_Params
{
public:
	bool                                         Enable_Or_Disable;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StencilBufferValue;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnInitAlteration
struct AB_Ranged_Dual_Generic_Athena_C_OnInitAlteration_Params
{
public:
	class UFortAlterationItemDefinition*         NewAlteration;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnInitCosmeticAlterations
struct AB_Ranged_Dual_Generic_Athena_C_OnInitCosmeticAlterations_Params
{
public:
	struct FFortCosmeticModification             CosmeticMod;                                       // 0x0(0x558)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWeaponPierceThrough
struct AB_Ranged_Dual_Generic_Athena_C_SetWeaponPierceThrough_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetLimit;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWeaponPierceThrough_ClientRep
struct AB_Ranged_Dual_Generic_Athena_C_SetWeaponPierceThrough_ClientRep_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetLimit;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnWeaponVisibilityChanged
struct AB_Ranged_Dual_Generic_Athena_C_OnWeaponVisibilityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HandFired
struct AB_Ranged_Dual_Generic_Athena_C_HandFired_Params
{
public:
	enum class EDualWeaponHand                   Hand;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPersistantFire;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB17 (0xB17 - 0x0)
// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ExecuteUbergraph_B_Ranged_Dual_Generic_Athena
struct AB_Ranged_Dual_Generic_Athena_C_ExecuteUbergraph_B_Ranged_Dual_Generic_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetPI_ReturnValue;                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortReloadFXState                K2Node_Event_ReloadStage;                          // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MathExpression_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MathExpression_ReturnValue_1;               // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bNewIsTargeting;                      // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F95[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortAIPawn*>                   CallFunc_GetAllActorsOfClass_OutActors;            // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIPawn*                           CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable_Or_Disable;              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_StencilBufferValue;             // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F98[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAlterationItemDefinition*         K2Node_Event_NewAlteration;                        // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortCosmeticModification             K2Node_Event_CosmeticMod;                          // 0x88(0x558)(None)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_1;                // 0x5E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_2;                // 0x5E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_3;                // 0x5E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLocalMagazineAmmoCount_ReturnValue;    // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x5EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UseScopeTargeting_ReturnValue;            // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_1;            // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x60C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x618(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x628(0x28)(HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetOrLoadSynchronously_ReturnValue;       // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Enable_1;                       // 0x669(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F9C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TargetLimit_1;                  // 0x66C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x670(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x678(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_2;                            // 0x688(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable;                         // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TargetLimit;                    // 0x694(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_2;            // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x6A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue_1;                  // 0x6A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_2;                       // 0x6A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingFirstPersonCamera_ReturnValue;     // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x6B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortWindManager*                      CallFunc_GetWindManager_ReturnValue;               // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_1;              // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UseScopeTargeting_ReturnValue_1;          // 0x6E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_2;              // 0x700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_2;                  // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_3;              // 0x718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_1; // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_3;                  // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_4;              // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_4;                  // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x749(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_2; // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x75C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x768(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_2;          // 0x778(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x784(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x794(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UseScopeTargeting_ReturnValue_2;          // 0x7A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bVisible;                             // 0x7A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRenderingDetailMode_ReturnValue;       // 0x7A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x7A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x7AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x7AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x7AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x7AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FAA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x7B0(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_GetFiringRate_ReturnValue;                // 0x7C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x7C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x7C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x7CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x7D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x7D8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x7E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x7E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_3;                            // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_3;            // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_5;              // 0x808(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_5;                  // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x81C(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x82C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4FAE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_6;              // 0x840(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_6;                  // 0x848(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x851(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDualWeaponHand                   K2Node_CustomEvent_Hand;                           // 0x852(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bPersistantFire;                // 0x853(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded_3;                       // 0x858(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue; // 0x860(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRenderingDetailMode_ReturnValue_1;     // 0x864(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x868(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x869(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x86A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x86B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x86C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4FB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedBlendables                   K2Node_MakeStruct_WeightedBlendables;              // 0x880(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x8A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB3[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x8B0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                            Temp_struct_Variable_1;                            // 0x8E0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x910(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue_1;               // 0x918(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x920(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x930(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x931(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x932(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x933(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB4[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x940(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x970(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x97C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x988(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FB5[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0x9A0(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakVector_X;                            // 0x9D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x9D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x9D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x9DC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x9E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x9F4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0xA00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0xA04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0xA08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0xA0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0xA10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_3;          // 0xA14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0xA20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_4;          // 0xA24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0xA30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xA38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0xA44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_VSize_ReturnValue;                        // 0xA50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0xA54(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0xADC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0xAE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0xAE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xAE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_4;          // 0xAF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_5;          // 0xAF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xAFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0xB08(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0xB14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_1;            // 0xB15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xB16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


