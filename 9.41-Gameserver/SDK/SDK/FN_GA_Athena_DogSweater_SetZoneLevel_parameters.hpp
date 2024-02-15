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

// 0x20 (0x20 - 0x0)
// Function GA_Athena_DogSweater_SetZoneLevel.GA_Athena_DogSweater_SetZoneLevel_C.OnApplied_EEC759094DD504BE642901B2846E8C98
struct UGA_Athena_DogSweater_SetZoneLevel_C_OnApplied_EEC759094DD504BE642901B2846E8C98_Params
{
public:
	class AActor*                                Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x119 (0x119 - 0x0)
// Function GA_Athena_DogSweater_SetZoneLevel.GA_Athena_DogSweater_SetZoneLevel_C.ExecuteUbergraph_GA_Athena_DogSweater_SetZoneLevel
struct UGA_Athena_DogSweater_SetZoneLevel_C_ExecuteUbergraph_GA_Athena_DogSweater_SetZoneLevel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5385[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagRequirements              K2Node_MakeStruct_GameplayTagRequirements;         // 0x8(0x40)(None)
	class UAbilityTask_WaitGameplayEffectApplied_Self* CallFunc_WaitGameplayEffectAppliedToSelf_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5386[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Source;                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             K2Node_CustomEvent_SpecHandle;                     // 0x70(0x10)(None)
	struct FActiveGameplayEffectHandle           K2Node_CustomEvent_ActiveHandle;                   // 0x80(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           Temp_struct_Variable;                              // 0x88(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             Temp_struct_Variable_1;                            // 0x90(0x10)(None)
	class AActor*                                Temp_object_Variable;                              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5387[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5388[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5389[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameModeAthena*                   K2Node_DynamicCast_AsFort_Game_Mode_Athena;        // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_538A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xFC(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


