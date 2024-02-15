#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x948 - 0x940)
// BlueprintGeneratedClass GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C
class UGA_Athena_Balloons_Consumable_Triggered_Release_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Athena_Balloons_Consumable_Triggered_Release_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumActiveBalloons_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


