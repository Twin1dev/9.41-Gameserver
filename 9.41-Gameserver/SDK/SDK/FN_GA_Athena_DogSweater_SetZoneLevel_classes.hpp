#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0xAC0 - 0x940)
// BlueprintGeneratedClass GA_Athena_DogSweater_SetZoneLevel.GA_Athena_DogSweater_SetZoneLevel_C
class UGA_Athena_DogSweater_SetZoneLevel_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEffectQuery                  Query;                                             // 0x948(0x138)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FScalableFloat                        FixedDogSweaterDamage;                             // 0xA80(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ShouldScaleDamageWithPhase;                        // 0xAA0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_DogSweater_SetZoneLevel_C* GetDefaultObj();

	void OnApplied_EEC759094DD504BE642901B2846E8C98(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
	void K2_ActivateAbility();
	void SafeZoneUpdate();
	void ExecuteUbergraph_GA_Athena_DogSweater_SetZoneLevel(int32 EntryPoint, const struct FGameplayTagRequirements& K2Node_MakeStruct_GameplayTagRequirements, class UAbilityTask_WaitGameplayEffectApplied_Self* CallFunc_WaitGameplayEffectAppliedToSelf_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_Source, const struct FGameplayEffectSpecHandle& K2Node_CustomEvent_SpecHandle, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_ActiveHandle, const struct FActiveGameplayEffectHandle& Temp_struct_Variable, const struct FGameplayEffectSpecHandle& Temp_struct_Variable_1, class AActor* Temp_object_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AFortGameModeAthena* K2Node_DynamicCast_AsFort_Game_Mode_Athena, bool K2Node_DynamicCast_bSuccess_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


