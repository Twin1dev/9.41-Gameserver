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
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetPostProcessParams
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetPostProcessParams_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54C8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetActiveAlterationIdleParticles
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetActiveAlterationIdleParticles_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Reset;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ShowReticle
struct AB_Ranged_Dual_Generic_MountedTurret_C_ShowReticle_Params
{
public:
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HideReticle
struct AB_Ranged_Dual_Generic_MountedTurret_C_HideReticle_Params
{
public:
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ActivateOrDeactivateWindParticle
struct AB_Ranged_Dual_Generic_MountedTurret_C_ActivateOrDeactivateWindParticle_Params
{
public:
	bool                                         bNewActive;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.DeactivateReloadSmokeFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_DeactivateReloadSmokeFX_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ActivateReloadSmokeFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_ActivateReloadSmokeFX_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ActivateShellsFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_ActivateShellsFX_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OffHand;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetupShellFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetupShellFX_Params
{
public:
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue;           // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.UpdateShellEmittersFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_UpdateShellEmittersFX_Params
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
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Muzzle Play Reload FX
struct AB_Ranged_Dual_Generic_MountedTurret_C_Muzzle_Play_Reload_FX_Params
{
public:
	enum class EFortReloadFXState                Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Muzzle Flash FX
struct AB_Ranged_Dual_Generic_MountedTurret_C_Muzzle_Flash_FX_Params
{
public:
	bool                                         Persistent_Fire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OffHand;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingScope_ReturnValue;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.AddRandomScale
struct AB_Ranged_Dual_Generic_MountedTurret_C_AddRandomScale_Params
{
public:
	bool                                         OffHand;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue_4;         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_3;                 // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4B (0x4B - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.UserConstructionScript
struct AB_Ranged_Dual_Generic_MountedTurret_C_UserConstructionScript_Params
{
public:
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*              CallFunc_AddComponent_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_3;       // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_A62EBF3C40D050102770839C33BDCD2B
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnLoaded_A62EBF3C40D050102770839C33BDCD2B_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_8E55310B48630E205569E8A245229E05
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnLoaded_8E55310B48630E205569E8A245229E05_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_BCE7AA6D424444D979EECCB29BA62459
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnLoaded_BCE7AA6D424444D979EECCB29BA62459_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_1E63D17A42E49E043370B58CD8F301C5
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnLoaded_1E63D17A42E49E043370B58CD8F301C5_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnPlayWeaponFireFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnPlayWeaponFireFX_Params
{
public:
	bool                                         bPersistentFire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSecondaryFire;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnPlayReloadFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnPlayReloadFX_Params
{
public:
	enum class EFortReloadFXState                ReloadStage;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnSetTargeting
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnSetTargeting_Params
{
public:
	bool                                         bNewIsTargeting;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Update Enemy Custom Depths
struct AB_Ranged_Dual_Generic_MountedTurret_C_Update_Enemy_Custom_Depths_Params
{
public:
	bool                                         Enable_Or_Disable;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StencilBufferValue;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnInitAlteration
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnInitAlteration_Params
{
public:
	class UFortAlterationItemDefinition*         NewAlteration;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnInitCosmeticAlterations
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnInitCosmeticAlterations_Params
{
public:
	struct FFortCosmeticModification             CosmeticMod;                                       // 0x0(0x558)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetWeaponPierceThrough
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetWeaponPierceThrough_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetLimit;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetWeaponPierceThrough_ClientRep
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetWeaponPierceThrough_ClientRep_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetLimit;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnWeaponVisibilityChanged
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnWeaponVisibilityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HandFired
struct AB_Ranged_Dual_Generic_MountedTurret_C_HandFired_Params
{
public:
	enum class EDualWeaponHand                   Hand;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPersistantFire;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x94E (0x94E - 0x0)
// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ExecuteUbergraph_B_Ranged_Dual_Generic_MountedTurret
struct AB_Ranged_Dual_Generic_MountedTurret_C_ExecuteUbergraph_B_Ranged_Dual_Generic_MountedTurret_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5520[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetPI_ReturnValue;                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortReloadFXState                K2Node_Event_ReloadStage;                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5521[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MathExpression_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MathExpression_ReturnValue_1;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bNewIsTargeting;                      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5522[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortAIPawn*>                   CallFunc_GetAllActorsOfClass_OutActors;            // 0x38(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         K2Node_CustomEvent_Enable_Or_Disable;              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5523[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_StencilBufferValue;             // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAlterationItemDefinition*         K2Node_Event_NewAlteration;                        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortCosmeticModification             K2Node_Event_CosmeticMod;                          // 0x58(0x558)(None)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_1;                // 0x5B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_2;                // 0x5B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_3;                // 0x5B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5524[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLocalMagazineAmmoCount_ReturnValue;    // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x5BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable_1;                       // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5525[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TargetLimit_1;                  // 0x5C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x5C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable;                         // 0x5CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5526[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TargetLimit;                    // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5527[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue_1;                  // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5528[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System;              // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5529[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortWindManager*                      CallFunc_GetWindManager_ReturnValue;               // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_552A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x614(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_552B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_1;              // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bVisible;                             // 0x639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_552C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_1; // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_552D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFiringRate_ReturnValue;                // 0x64C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x650(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x654(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x658(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_552E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_2;              // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x668(0x8)(NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_2;                  // 0x670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x678(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDualWeaponHand                   K2Node_CustomEvent_Hand;                           // 0x679(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bPersistantFire;                // 0x67A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_552F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue; // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5530[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRenderingDetailMode_ReturnValue;       // 0x68C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x691(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5531[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable_1;                            // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5532[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_1;            // 0x6A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5533[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x6B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_3;              // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x6D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5534[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x6D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x6DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x6DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5535[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6E0(0x10)(ZeroConstructor, NoDestructor)
	class AFortAIPawn*                           CallFunc_Array_Get_Item;                           // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x6FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5537[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable_2;                            // 0x700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_2;                       // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_2;            // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x719(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5538[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable_3;                            // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_3;            // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5539[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded_3;                       // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x740(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x750(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_553A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x764(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_553B[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x780(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0x7B0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x7E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x7EC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x7F8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x804(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x810(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x81C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x828(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x82C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x830(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x834(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x838(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x83C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x840(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x844(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x854(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x860(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x864(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x870(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x878(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x884(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x90C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_553C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x914(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x91C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x920(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_4;          // 0x92C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_5;          // 0x930(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x934(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x940(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_1;            // 0x94C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x94D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


