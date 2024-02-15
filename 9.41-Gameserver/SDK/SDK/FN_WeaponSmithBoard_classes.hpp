#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x330 - 0x280)
// BlueprintGeneratedClass WeaponSmithBoard.WeaponSmithBoard_C
class AWeaponSmithBoard_C : public AFortWeaponBoardBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalSlotMinusHammers;                          // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlotMinusSwords;                             // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlotMinusRocketLauncher;                     // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlotMinusPistol;                             // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlotMinusShotgun;                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlotMinusAssault;                            // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlotMinusSniper;                             // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Prison_Fence01wire;                             // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              QuestToShow;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortSchematicItem*>            RangedSchematicItemList;                           // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortSchematicItem*>            MeleeSchematicItemList;                            // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	uint8                                        Pad_3CE7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CrossbowMinusTransform_NEW;                        // 0x300(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AWeaponSmithBoard_C* GetDefaultObj();

	void GetSkeletalMeshComponentForDisplaySlot(const struct FFortWeaponBoardDisplaySlot& DisplaySlot, class USkeletalMeshComponent** SkeletalMeshComponent, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess);
	void IsCrossbowMesh(class UFortItem* Item, bool* Result, bool CallFunc_IsValid_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue);
	void SetupWeaponMesh(class UFortItem* Item, class USkeletalMeshComponent* SkeletalMesh, const struct FTransform& RelativeTransform, const struct FVector& LocalOffsetMultiplier, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult);
	void UpdateVisibility(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void PopulateWeaponBoard(enum class EWeaponSmithBoardOrganizationEnum Organization);
	void CameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera);
	void OnDisplaySlotItemChanged(const struct FFortWeaponBoardDisplaySlot& DisplaySlot, class UFortAccountItem* Item);
	void ExecuteUbergraph_WeaponSmithBoard(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector& Temp_struct_Variable, enum class EWeaponSmithBoardOrganizationEnum K2Node_CustomEvent_Organization, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, bool K2Node_SwitchEnum_CmpSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable_1, const struct FFortWeaponBoardDisplaySlot& K2Node_Event_DisplaySlot, class UFortAccountItem* K2Node_Event_Item, bool CallFunc_IsCrossbowMesh_Result, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshComponentForDisplaySlot_SkeletalMeshComponent, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, const struct FVector& K2Node_Select_Default, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FTransform& K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


