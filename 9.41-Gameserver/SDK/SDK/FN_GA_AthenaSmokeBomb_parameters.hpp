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

// 0x1 (0x1 - 0x0)
// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.OnChange_4A1A478E4376E5A5D263F4998B9D8EA8
struct UGA_AthenaSmokeBomb_C_OnChange_4A1A478E4376E5A5D263F4998B9D8EA8_Params
{
public:
	enum class EMovementMode                     NewMovementMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.EventReceived_A7EC17F44B4F26BDC8AB7CA0FC590072
struct UGA_AthenaSmokeBomb_C_EventReceived_A7EC17F44B4F26BDC8AB7CA0FC590072_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.K2_OnEndAbility
struct UGA_AthenaSmokeBomb_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.EnteredZiplineAfterExpiration
struct UGA_AthenaSmokeBomb_C_EnteredZiplineAfterExpiration_Params
{
public:
	bool                                         bIsZiplining;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2CE (0x2CE - 0x0)
// Function GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C.ExecuteUbergraph_GA_AthenaSmokeBomb
struct UGA_AthenaSmokeBomb_C_ExecuteUbergraph_GA_AthenaSmokeBomb_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_53B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x48(0xB0)(None)
	struct FGameplayEventData                    Temp_struct_Variable;                              // 0xF8(0xB0)(None)
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x1B8(0x40)(ContainsInstancedReference)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x20C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x228(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput; // 0x230(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_K2_RemoveItemFromPlayer_ReturnValue;      // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x248(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x250(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsZiplining;                   // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitMovementModeChange*   CallFunc_CreateWaitMovementModeChange_ReturnValue; // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMovementMode                     Temp_byte_Variable;                                // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_MakeStruct_GameplayEffectContextHandle;     // 0x280(0x18)(None)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x298(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1; // 0x2A0(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x2A8(0x10)(ZeroConstructor, NoDestructor)
	enum class EMovementMode                     K2Node_CustomEvent_NewMovementMode;                // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x2C0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInSkyTube_ReturnValue;                  // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x2CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x2CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


