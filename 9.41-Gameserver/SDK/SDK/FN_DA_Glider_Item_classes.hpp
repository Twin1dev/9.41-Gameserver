#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xA40 - 0x9D8)
// BlueprintGeneratedClass DA_Glider_Item.DA_Glider_Item_C
class ADA_Glider_Item_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 ErrorReason;                                       // 0x9E0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ErrorReasonGamepad;                                // 0xA00(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ErrorCannotUse;                                    // 0xA20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ADA_Glider_Item_C* GetDefaultObj();

	void IsOnGround(bool* bOnGround, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_Glider_Item(int32 EntryPoint, class AFortDecoHelper* K2Node_Event_FortDecoHelper);
};

}


