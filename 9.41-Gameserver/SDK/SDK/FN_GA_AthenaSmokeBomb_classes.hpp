#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0xA80 - 0x940)
// BlueprintGeneratedClass GA_AthenaSmokeBomb.GA_AthenaSmokeBomb_C
class UGA_AthenaSmokeBomb_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SmokeHolster;                                      // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Applied;                                           // 0x958(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GEAssetTag;                                        // 0x960(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                    EventData;                                         // 0x980(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          ShroudDurationComplete;                            // 0xA30(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        SmokeBombDuration;                                 // 0xA38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ChangeEquipmentTag;                                // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle           GEShroudGC;                                        // 0xA78(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_AthenaSmokeBomb_C* GetDefaultObj();

	void OnChange_4A1A478E4376E5A5D263F4998B9D8EA8(enum class EMovementMode NewMovementMode);
	void Added_5FDF159F4919399394625CABCDD5B209();
	void EventReceived_A7EC17F44B4F26BDC8AB7CA0FC590072(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void InAirCheck();
	void EnteredZiplineAfterExpiration(bool bIsZiplining);
	void OnPlayerStartDBNO_Event_0();
	void ExecuteUbergraph_GA_AthenaSmokeBomb(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool K2Node_Event_bWasCancelled, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetValueAtLevel_ReturnValue, bool K2Node_CustomEvent_bIsZiplining, class UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, enum class EMovementMode Temp_byte_Variable, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsInSkyTube_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
};

}


