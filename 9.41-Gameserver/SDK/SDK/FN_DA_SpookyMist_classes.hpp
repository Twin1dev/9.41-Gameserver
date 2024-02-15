#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xA18 - 0x9D8)
// BlueprintGeneratedClass DA_SpookyMist.DA_SpookyMist_C
class ADA_SpookyMist_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         CanCancelAbility;                                  // 0x9E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CanCancelTimer;                                    // 0x9E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        CancelDelay;                                       // 0x9F0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADA_SpookyMist_C* GetDefaultObj();

	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPOnUnEquip();
	void BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void CanCancel();
	void ReceiveBeginPlay();
	void On_DBNO();
	void ExecuteUbergraph_DA_SpookyMist(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDrivingVehicle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortDecoHelper* K2Node_Event_FortDecoHelper_2, class AFortDecoHelper* K2Node_Event_FortDecoHelper_1, class AFortDecoHelper* K2Node_Event_FortDecoHelper, float CallFunc_GetValueAtLevel_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetInstigator_ReturnValue_4, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_GetInstigator_ReturnValue_5, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_3);
};

}


