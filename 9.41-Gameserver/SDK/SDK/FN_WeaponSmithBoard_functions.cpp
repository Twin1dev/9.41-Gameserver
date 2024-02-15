#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponSmithBoard.WeaponSmithBoard_C
// (Actor)

class UClass* AWeaponSmithBoard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponSmithBoard_C");

	return Clss;
}


// WeaponSmithBoard_C WeaponSmithBoard.Default__WeaponSmithBoard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponSmithBoard_C* AWeaponSmithBoard_C::GetDefaultObj()
{
	static class AWeaponSmithBoard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponSmithBoard_C*>(AWeaponSmithBoard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.GetSkeletalMeshComponentForDisplaySlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortWeaponBoardDisplaySlot DisplaySlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// bool                               GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::GetSkeletalMeshComponentForDisplaySlot(const struct FFortWeaponBoardDisplaySlot& DisplaySlot, class USkeletalMeshComponent** SkeletalMeshComponent, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "GetSkeletalMeshComponentForDisplaySlot");

	Params::AWeaponSmithBoard_C_GetSkeletalMeshComponentForDisplaySlot_Params Parms{};

	Parms.DisplaySlot = DisplaySlot;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SkeletalMeshComponent != nullptr)
		*SkeletalMeshComponent = Parms.SkeletalMeshComponent;

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.IsCrossbowMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::IsCrossbowMesh(class UFortItem* Item, bool* Result, bool CallFunc_IsValid_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "IsCrossbowMesh");

	Params::AWeaponSmithBoard_C_IsCrossbowMesh_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue = CallFunc_GetWeaponMeshOverride_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.SetupWeaponMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      SkeletalMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                     LocalOffsetMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_GetWeaponMeshOverride_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AWeaponSmithBoard_C::SetupWeaponMesh(class UFortItem* Item, class USkeletalMeshComponent* SkeletalMesh, const struct FTransform& RelativeTransform, const struct FVector& LocalOffsetMultiplier, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "SetupWeaponMesh");

	Params::AWeaponSmithBoard_C_SetupWeaponMesh_Params Parms{};

	Parms.Item = Item;
	Parms.SkeletalMesh = SkeletalMesh;
	Parms.RelativeTransform = RelativeTransform;
	Parms.LocalOffsetMultiplier = LocalOffsetMultiplier;
	Parms.CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue = CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWeaponMeshOverride_ReturnValue = CallFunc_GetWeaponMeshOverride_ReturnValue;
	Parms.CallFunc_GetBounds_ReturnValue = CallFunc_GetBounds_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::UpdateVisibility(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "UpdateVisibility");

	Params::AWeaponSmithBoard_C_UpdateVisibility_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWeaponSmithBoard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateWeaponBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponSmithBoardOrganizationEnumOrganization                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::PopulateWeaponBoard(enum class EWeaponSmithBoardOrganizationEnum Organization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateWeaponBoard");

	Params::AWeaponSmithBoard_C_PopulateWeaponBoard_Params Parms{};

	Parms.Organization = Organization;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndCamera         NewCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         OldCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::CameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "CameraChanged");

	Params::AWeaponSmithBoard_C_CameraChanged_Params Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.OnDisplaySlotItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortWeaponBoardDisplaySlot DisplaySlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UFortAccountItem*            Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::OnDisplaySlotItemChanged(const struct FFortWeaponBoardDisplaySlot& DisplaySlot, class UFortAccountItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "OnDisplaySlotItemChanged");

	Params::AWeaponSmithBoard_C_OnDisplaySlotItemChanged_Params Parms{};

	Parms.DisplaySlot = DisplaySlot;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponSmithBoard.WeaponSmithBoard_C.ExecuteUbergraph_WeaponSmithBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponSmithBoardOrganizationEnumK2Node_CustomEvent_Organization                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_NewCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_OldCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortWeaponBoardDisplaySlot K2Node_Event_DisplaySlot                                         (NoDestructor)
// class UFortAccountItem*            K2Node_Event_Item                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCrossbowMesh_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshComponentForDisplaySlot_SkeletalMeshComponent(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_Select_Default_1                                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void AWeaponSmithBoard_C::ExecuteUbergraph_WeaponSmithBoard(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector& Temp_struct_Variable, enum class EWeaponSmithBoardOrganizationEnum K2Node_CustomEvent_Organization, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, bool K2Node_SwitchEnum_CmpSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable_1, const struct FFortWeaponBoardDisplaySlot& K2Node_Event_DisplaySlot, class UFortAccountItem* K2Node_Event_Item, bool CallFunc_IsCrossbowMesh_Result, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshComponentForDisplaySlot_SkeletalMeshComponent, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, const struct FVector& K2Node_Select_Default, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FTransform& K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponSmithBoard_C", "ExecuteUbergraph_WeaponSmithBoard");

	Params::AWeaponSmithBoard_C_ExecuteUbergraph_WeaponSmithBoard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_Organization = K2Node_CustomEvent_Organization;
	Parms.K2Node_CustomEvent_NewCamera = K2Node_CustomEvent_NewCamera;
	Parms.K2Node_CustomEvent_OldCamera = K2Node_CustomEvent_OldCamera;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_DisplaySlot = K2Node_Event_DisplaySlot;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.CallFunc_IsCrossbowMesh_Result = CallFunc_IsCrossbowMesh_Result;
	Parms.CallFunc_GetSkeletalMeshComponentForDisplaySlot_SkeletalMeshComponent = CallFunc_GetSkeletalMeshComponentForDisplaySlot_SkeletalMeshComponent;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


