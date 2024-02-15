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
// Function B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio
struct AB_Ranged_Generic_C_StopScopedAudio_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4065[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio
struct AB_Ranged_Generic_C_StartScopedAudio_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4066[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams
struct AB_Ranged_Generic_C_SetPostProcessParams_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4067[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles
struct AB_Ranged_Generic_C_SetActiveAlterationIdleParticles_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle
struct AB_Ranged_Generic_C_ShowReticle_Params
{
public:
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.HideReticle
struct AB_Ranged_Generic_C_HideReticle_Params
{
public:
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
struct AB_Ranged_Generic_C_ActivateOrDeactivateWindParticle_Params
{
public:
	bool                                         bNewActive;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX
struct AB_Ranged_Generic_C_DeactivateReloadSmokeFX_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
struct AB_Ranged_Generic_C_ActivateReloadSmokeFX_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
struct AB_Ranged_Generic_C_ActivateShellsFX_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
struct AB_Ranged_Generic_C_DeactivateShellsFX_Params
{
public:
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
struct AB_Ranged_Generic_C_SetupShellFX_Params
{
public:
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4075[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue;           // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x17 (0x17 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
struct AB_Ranged_Generic_C_UpdateShellEmittersFX_Params
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
	uint8                                        Pad_4078[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Max_ReturnValue;                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
struct AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params
{
public:
	enum class EFortReloadFXState                Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
struct AB_Ranged_Generic_C_Muzzle_Flash_FX_Params
{
public:
	bool                                         Persistent_Fire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingScope_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_407B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
struct AB_Ranged_Generic_C_AddRandomScale_Params
{
public:
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_407F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
struct AB_Ranged_Generic_C_UserConstructionScript_Params
{
public:
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4080[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*              CallFunc_AddComponent_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632
struct AB_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
struct AB_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
struct AB_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
struct AB_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
struct AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params
{
public:
	bool                                         bPersistentFire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSecondaryFire;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
struct AB_Ranged_Generic_C_OnPlayReloadFX_Params
{
public:
	enum class EFortReloadFXState                ReloadStage;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
struct AB_Ranged_Generic_C_OnSetTargeting_Params
{
public:
	bool                                         bNewIsTargeting;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
struct AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params
{
public:
	bool                                         Enable_Or_Disable;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4085[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StencilBufferValue;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
struct AB_Ranged_Generic_C_OnInitAlteration_Params
{
public:
	class UFortAlterationItemDefinition*         NewAlteration;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
struct AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params
{
public:
	struct FFortCosmeticModification             CosmeticMod;                                       // 0x0(0x558)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
struct AB_Ranged_Generic_C_SetWeaponPierceThrough_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4086[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetLimit;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
struct AB_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4089[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetLimit;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged
struct AB_Ranged_Generic_C_OnWeaponVisibilityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2
struct AB_Ranged_Generic_C_UnhideFirstPersonStuffPart2_Params
{
public:
	int32                                        Which_Call;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange
struct AB_Ranged_Generic_C_PitchUpOnRateOfFireChange_Params
{
public:
	float                                        NewRateOfFire;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX
struct AB_Ranged_Generic_C_OnPlayImpactFX_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EPhysicalSurface                  ImpactPhysicalSurface;                             // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              SpawnedPSC;                                        // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD78 (0xD78 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
struct AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetPI_ReturnValue;                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_409C[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x20(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	enum class EFortReloadFXState                K2Node_Event_ReloadStage;                          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_409E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable_1;                            // 0x70(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	float                                        K2Node_MathExpression_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue_1;               // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MathExpression_ReturnValue_1;               // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bNewIsTargeting;                      // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortAIPawn*>                   CallFunc_GetAllActorsOfClass_OutActors;            // 0xB8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable_Or_Disable;              // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_StencilBufferValue;             // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAlterationItemDefinition*         K2Node_Event_NewAlteration;                        // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortCosmeticModification             K2Node_Event_CosmeticMod;                          // 0xE0(0x558)(None)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_1;                // 0x639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x63A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_2;                // 0x63B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAssetNull_ReturnValue_3;                // 0x63C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UseScopeTargeting_ReturnValue;            // 0x63D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x640(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x650(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetSmallPreviewImageBrush_ReturnValue;    // 0x660(0x88)(None)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Enable_1;                       // 0x701(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TargetLimit_1;                  // 0x704(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x708(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x710(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable;                         // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TargetLimit;                    // 0x724(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x728(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue_1;                  // 0x72C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingFirstPersonCamera_ReturnValue;     // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue; // 0x731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x732(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortWindManager*                      CallFunc_GetWindManager_ReturnValue;               // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_1;              // 0x760(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UseScopeTargeting_ReturnValue_1;          // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x770(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x780(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_2;              // 0x788(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_2;                  // 0x798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x7A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_1; // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_3;              // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x7B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_3;                  // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_4;              // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_4;                  // 0x7D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x7E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x7E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_2; // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x7F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x7F4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x800(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_2;          // 0x810(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x81C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x82C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x830(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UseScopeTargeting_ReturnValue_2;          // 0x834(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bVisible;                             // 0x835(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x836(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRenderingDetailMode_ReturnValue;       // 0x838(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRenderingDetailMode_ReturnValue_1;     // 0x83C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x840(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x841(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x842(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x843(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x844(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x845(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIPawn*                           CallFunc_Array_Get_Item;                           // 0x848(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x854(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x855(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x856(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Which_Call;                     // 0x858(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_5;              // 0x860(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_5;                  // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x871(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x872(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_NewRateOfFire;                  // 0x874(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortWeaponTriggerType            CallFunc_GetTriggerType_ReturnValue;               // 0x878(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x879(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x87C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWeaponRateOfFireModifier_ReturnValue;  // 0x880(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInAthena_ReturnValue;                   // 0x884(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x885(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGameUserSettings*                 CallFunc_GetFortGameUserSettings_ReturnValue;      // 0x888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_6;              // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x8A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_7;              // 0x8A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x8B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x8B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue_1;                // 0x8BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedBlendables                   K2Node_MakeStruct_WeightedBlendables;              // 0x8C0(0x10)(None)
	class UObject*                               Temp_object_Variable;                              // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitResult;                            // 0x8D8(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EPhysicalSurface                  K2Node_Event_ImpactPhysicalSurface;                // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              K2Node_Event_SpawnedPSC;                           // 0x968(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System;              // 0x970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x979(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x97A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40C0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x97C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x980(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x984(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x990(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x99C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x9A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x9B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x9C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x9C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x9D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x9D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x9DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x9E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x9EC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x9F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0xA00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0xA08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_NegateVector_ReturnValue;                 // 0xA0C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_8;              // 0xA18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xA20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0xA2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xA30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeamAffiliation              CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue; // 0xA3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xA3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40C9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_9;              // 0xA40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_10;             // 0xA48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumericCVar_OutValue;                  // 0xA50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNumericCVar_ReturnValue;               // 0xA54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Generic_Parent_C*          K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent;   // 0xA58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0xA60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FMax_ReturnValue;                         // 0xA64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0xA68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumericCVar_OutValue_1;                // 0xA6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNumericCVar_ReturnValue_1;             // 0xA70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetNumericCVar_OutValue_2;                // 0xA74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNumericCVar_ReturnValue_2;             // 0xA78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FMax_ReturnValue_1;                       // 0xA7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue_2;                       // 0xA80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0xA84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0xA88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumericCVar_OutValue_3;                // 0xA8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNumericCVar_ReturnValue_3;             // 0xA90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA94(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_FMax_ReturnValue_3;                       // 0xAA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0xAA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumericCVar_OutValue_4;                // 0xAAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNumericCVar_ReturnValue_4;             // 0xAB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FMax_ReturnValue_4;                       // 0xAB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0xAB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_4;          // 0xABC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0xAC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0xAC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_1;            // 0xAD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0xAD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0xADC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0xAE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0xAE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_2;                            // 0xAF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_2;            // 0xAF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0xB00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_5;        // 0xB04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_2;                       // 0xB08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xB10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable_3;                            // 0xB18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_3;                       // 0xB20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_3;            // 0xB28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0xB30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB34(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xB44(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB54(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xB64(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xB74(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0xB84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D6[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xB90(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0xBC0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xBF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xBFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xC08(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0xC14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0xC20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0xC2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0xC38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0xC3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0xC40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0xC44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0xC48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0xC4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xC50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_3;          // 0xC54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_5;          // 0xC60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_4;          // 0xC64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_6;        // 0xC70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xC74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0xC80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0xC88(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0xC94(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_VSize_ReturnValue;                        // 0xD1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0xD20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_7;        // 0xD24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_6;          // 0xD28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_7;          // 0xD2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xD30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_8;          // 0xD3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_9;          // 0xD40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xD44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0xD50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_1;            // 0xD5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xD5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xD60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0xD6C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature
struct AB_Ranged_Generic_C_OnAimDownSightsChanged__DelegateSignature_Params
{
public:
	bool                                         AimDownsights;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


