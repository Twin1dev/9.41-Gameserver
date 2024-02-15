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

// 0x12 (0x12 - 0x0)
// Function GA_Athena_Apply_SneakySnowman.GA_Athena_Apply_SneakySnowman_C.QuestUpdate
struct UGA_Athena_Apply_SneakySnowman_C_QuestUpdate_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SendComplexCustomStatEvent_QuestActive;   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SendComplexCustomStatEvent_QuestCompleted; // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function GA_Athena_Apply_SneakySnowman.GA_Athena_Apply_SneakySnowman_C.K2_CanActivateAbility
struct UGA_Athena_Apply_SneakySnowman_C_K2_CanActivateAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                 RelevantTags;                                      // 0x40(0x20)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_520C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_520D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function GA_Athena_Apply_SneakySnowman.GA_Athena_Apply_SneakySnowman_C.Completed_B326DD1943168A618B4EC399CC7213B2
struct UGA_Athena_Apply_SneakySnowman_C_Completed_B326DD1943168A618B4EC399CC7213B2_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GA_Athena_Apply_SneakySnowman.GA_Athena_Apply_SneakySnowman_C.Cancelled_B326DD1943168A618B4EC399CC7213B2
struct UGA_Athena_Apply_SneakySnowman_C_Cancelled_B326DD1943168A618B4EC399CC7213B2_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GA_Athena_Apply_SneakySnowman.GA_Athena_Apply_SneakySnowman_C.Triggered_B326DD1943168A618B4EC399CC7213B2
struct UGA_Athena_Apply_SneakySnowman_C_Triggered_B326DD1943168A618B4EC399CC7213B2_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Apply_SneakySnowman.GA_Athena_Apply_SneakySnowman_C.K2_OnEndAbility
struct UGA_Athena_Apply_SneakySnowman_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2CB (0x2CB - 0x0)
// Function GA_Athena_Apply_SneakySnowman.GA_Athena_Apply_SneakySnowman_C.ExecuteUbergraph_GA_Athena_Apply_SneakySnowman
struct UGA_Athena_Apply_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5213[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable_1;                            // 0x10(0x28)(None)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_2;                   // 0x38(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_2;               // 0x60(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5214[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5215[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x80(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0xA8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5216[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0xBC(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5217[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0xC8(0xB8)(ContainsInstancedReference)
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x180(0x40)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5218[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5219[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x1D8(0x28)(None)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x200(0x10)(ZeroConstructor, ReferenceParm)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x224(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_1;                   // 0x238(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_1;               // 0x260(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x268(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_521C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x280(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue_1;           // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAthena_Player_SneakySnowman_C*        CallFunc_FinishSpawningActor_ReturnValue;          // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesTargetHaveTags_ReturnValue;           // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


