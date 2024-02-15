#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24B (0xC8D - 0xA42)
// BlueprintGeneratedClass GA_Commando_Shockwave.GA_Commando_Shockwave_C
class UGA_Commando_Shockwave_C : public UGAT_CommandoActiveAbility_C
{
public:
	uint8                                        Pad_6624[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          M_ShockwaveAnim;                                   // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_AppliedEffect;                                  // 0xA58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_PowerImpact;                                    // 0xA60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EC_BasicRadius;                                    // 0xA80(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_UpgradeRadius;                                  // 0xA88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PerfectEngineering;                                // 0xA90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6628[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Tag_VulnerabilityEvent;                            // 0xA94(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6629[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_PerfectEngineering;                             // 0xAA0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_ShockAndAwe;                                    // 0xAC0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEffectSpecHandle             ShockAndAweSpec;                                   // 0xAE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_ShockAndAwe;                                    // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShockAndAwe;                                       // 0xAF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_662C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          GC_AbilitiesActivationCommandoShockwave;           // 0xAFC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PowerImpact;                                       // 0xB04(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_662D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_ExplosiveOptimization;                          // 0xB08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_DopplerEffect;                                  // 0xB28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ExplosiveOptimization;                             // 0xB48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DopplerEffect;                                     // 0xB49(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_662E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorsHitByShockwave;                              // 0xB50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_EscapeArtist;                                   // 0xB60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         EscapeArtist;                                      // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6630[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_EscapeArtist;                                   // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_ShockPhase;                                     // 0xB90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShockPhase;                                        // 0xBB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6631[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_ShockPhase;                                     // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RadiusTooltip;                                     // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RadiusBasic;                                       // 0xBC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RadiusUpgrade;                                     // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6632[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          M_Shockwave_Outro;                                 // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JumpHeight;                                        // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JumpDistance;                                      // 0xBDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          LandingTimerHandle;                                // 0xBE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FailsafeTimerHandle;                               // 0xBE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TakeDamageTimerHandle;                             // 0xBF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bFinishedAbility;                                  // 0xBF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6633[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          T_PowerImpact_T01;                                 // 0xBFC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_PowerImpact_T02;                                 // 0xC04(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PowerImpact_T01;                                   // 0xC0C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PowerImpact_T02;                                   // 0xC0D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6634[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          T_Event_Activate;                                  // 0xC10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Event_Deactivate;                                // 0xC18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_EffectContainer_Damage;                          // 0xC20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        SF_PowerImpactT01_Radius;                          // 0xC28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        SF_PowerImpactT02_Radius;                          // 0xC48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          GC_Activate;                                       // 0xC68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Explosion;                                      // 0xC70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ShockwaveCue;                                      // 0xC78(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bMontageHasTriggered;                              // 0xC80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6635[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AbilityStartTime;                                  // 0xC84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBeforeAbilityCanBeCancelled_Const;             // 0xC88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPassedHitch;                                    // 0xC8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_Commando_Shockwave_C* GetDefaultObj();

	void SetupPowerImpact(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FFortGameplayEffectContainer& CallFunc_BP_GetGameplayEffectContainer_ReturnValue, float CallFunc_GetRangeFromGameplayEffectContainer_Range, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat_1, const struct FScalableFloat& CallFunc_EvaluatePerkTierBalanceValue_Balance_Value, float CallFunc_Add_FloatFloat_ReturnValue, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat_2, const struct FFortGameplayEffectContainer& CallFunc_ReplaceRangeInGameplayEffectContainer_ReturnValue);
	void ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut, class UAbilitySystemComponent* CallFunc_ActiveAbilitySetup_AbilitySystemOut, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystem, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_4, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_5, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_6);
	void Completed_60F6207840ECA0EA5707139982AC6691(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_60F6207840ECA0EA5707139982AC6691(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_60F6207840ECA0EA5707139982AC6691(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_F7C7341E49C6B93C7D967988C9C4848C(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_F7C7341E49C6B93C7D967988C9C4848C(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_B5B79B9E486803E3CAA59BBC1F091E10(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B5B79B9E486803E3CAA59BBC1F091E10(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B5B79B9E486803E3CAA59BBC1F091E10(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void FinishAbility();
	void PawnLanded(struct FHitResult& Hit);
	void ApplyGameplayEffect();
	void ForceLand();
	void FailsafeTimer();
	void K2_OnEndAbility(bool bWasCancelled);
	void Outro_Failsafe();
	void ScheduleCancelAbility();
	void ResetFinishAbility();
	void ExecuteUbergraph_GA_Commando_Shockwave(int32 EntryPoint, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_7, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetRangeFromGameplayEffectContainerSpec_Range, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector_NetQuantizeNormal& K2Node_MakeStruct_Vector_NetQuantizeNormal, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_ActiveAbilitySetup_AbilitySystemOut, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, int32 Temp_int_Variable, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue_1, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_4, TArray<class AFortPawn*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FGameplayTag& Temp_struct_Variable_5, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_5, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_5, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_6, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_6, bool K2Node_Event_bWasCancelled, bool CallFunc_Not_PreBool_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered, bool CallFunc_SetHolsterWeaponWithName_OperationSuccessful, bool CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered_1, bool CallFunc_SetHolsterWeaponWithName_OperationSuccessful_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, float CallFunc_GetServerWorldTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CommitAbilityWithEvent_Passed);
};

}


