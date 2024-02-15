#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C
// (Actor)

class UClass* ABGA_RiftPortal_Item_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_RiftPortal_Item_Athena_C");

	return Clss;
}


// BGA_RiftPortal_Item_Athena_C BGA_RiftPortal_Item_Athena.Default__BGA_RiftPortal_Item_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_RiftPortal_Item_Athena_C* ABGA_RiftPortal_Item_Athena_C::GetDefaultObj()
{
	static class ABGA_RiftPortal_Item_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_RiftPortal_Item_Athena_C*>(ABGA_RiftPortal_Item_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.EjectFromTurret
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortVehicleInterface>CallFunc_GetVehicleUInterface_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanTeleport_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_RiftPortal_Item_Athena_C::EjectFromTurret(class AFortPlayerPawn* PlayerPawn, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_CanTeleport_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "EjectFromTurret");

	Params::ABGA_RiftPortal_Item_Athena_C_EjectFromTurret_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue = CallFunc_GetVehicleUInterface_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_CanTeleport_ReturnValue = CallFunc_CanTeleport_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Is Flying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_RiftPortal_Item_Athena_C::Is_Flying(bool* NewParam, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "Is Flying");

	Params::ABGA_RiftPortal_Item_Athena_C_Is_Flying_Params Parms{};

	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character = K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.UseRiftQuestUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 InController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_RiftPortal_Item_Athena_C::UseRiftQuestUpdate(class AController* InController, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "UseRiftQuestUpdate");

	Params::ABGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate_Params Parms{};

	Parms.InController = InController;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.CheckForRiftLocUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 InController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_4              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_5              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_6              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_7              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_8              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_9              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_10             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_9                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_10                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_11             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_12             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_11                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_12                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_13             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_14             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_13                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_14                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_15             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_16             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_15                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_16                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_17             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_18             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_17                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_18                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_19             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_20             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_19                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_20                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_21             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_22             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_21                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_22                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_23             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_23                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Temp_struct_Variable                                             (NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_RiftPortal_Item_Athena_C::CheckForRiftLocUpdate(class AController* InController, bool Temp_bool_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_HasMatchingGameplayTag_ReturnValue_4, bool CallFunc_HasMatchingGameplayTag_ReturnValue_5, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_6, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_7, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_HasMatchingGameplayTag_ReturnValue_6, bool CallFunc_HasMatchingGameplayTag_ReturnValue_7, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_8, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_HasMatchingGameplayTag_ReturnValue_8, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_9, bool K2Node_DynamicCast_bSuccess_9, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_10, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_HasMatchingGameplayTag_ReturnValue_9, bool CallFunc_HasMatchingGameplayTag_ReturnValue_10, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_11, bool K2Node_DynamicCast_bSuccess_11, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_12, bool K2Node_DynamicCast_bSuccess_12, bool CallFunc_HasMatchingGameplayTag_ReturnValue_11, bool CallFunc_HasMatchingGameplayTag_ReturnValue_12, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_13, bool K2Node_DynamicCast_bSuccess_13, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_14, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_HasMatchingGameplayTag_ReturnValue_13, bool CallFunc_HasMatchingGameplayTag_ReturnValue_14, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_15, bool K2Node_DynamicCast_bSuccess_15, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_16, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_HasMatchingGameplayTag_ReturnValue_15, bool CallFunc_HasMatchingGameplayTag_ReturnValue_16, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_17, bool K2Node_DynamicCast_bSuccess_17, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_18, bool K2Node_DynamicCast_bSuccess_18, bool CallFunc_HasMatchingGameplayTag_ReturnValue_17, bool CallFunc_HasMatchingGameplayTag_ReturnValue_18, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_19, bool K2Node_DynamicCast_bSuccess_19, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_20, bool K2Node_DynamicCast_bSuccess_20, bool CallFunc_HasMatchingGameplayTag_ReturnValue_19, bool CallFunc_HasMatchingGameplayTag_ReturnValue_20, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_21, bool K2Node_DynamicCast_bSuccess_21, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_22, bool K2Node_DynamicCast_bSuccess_22, bool CallFunc_HasMatchingGameplayTag_ReturnValue_21, bool CallFunc_HasMatchingGameplayTag_ReturnValue_22, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_23, bool K2Node_DynamicCast_bSuccess_23, bool CallFunc_HasMatchingGameplayTag_ReturnValue_23, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_24, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, int32 Temp_int_Variable, const struct FDataTableRowHandle& Temp_struct_Variable, int32 Temp_int_Variable_1, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, class FName Temp_name_Variable_14, class FName Temp_name_Variable_15, class FName Temp_name_Variable_16, class FName Temp_name_Variable_17, class FName Temp_name_Variable_18, class FName Temp_name_Variable_19, class FName Temp_name_Variable_20, class FName Temp_name_Variable_21, class FName Temp_name_Variable_22, class FName Temp_name_Variable_23, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool Temp_bool_Variable_21, bool Temp_bool_Variable_22, const struct FDataTableRowHandle& K2Node_Select_Default, class FName K2Node_Select_Default_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_23)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "CheckForRiftLocUpdate");

	Params::ABGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate_Params Parms{};

	Parms.InController = InController;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_1 = CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_2 = CallFunc_HasMatchingGameplayTag_ReturnValue_2;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_3 = CallFunc_HasMatchingGameplayTag_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_4 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_5 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_4 = CallFunc_HasMatchingGameplayTag_ReturnValue_4;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_5 = CallFunc_HasMatchingGameplayTag_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_6 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_7 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_6 = CallFunc_HasMatchingGameplayTag_ReturnValue_6;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_7 = CallFunc_HasMatchingGameplayTag_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_8 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_8 = CallFunc_HasMatchingGameplayTag_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_9 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_10 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_9 = CallFunc_HasMatchingGameplayTag_ReturnValue_9;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_10 = CallFunc_HasMatchingGameplayTag_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_11 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_12 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_12;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_11 = CallFunc_HasMatchingGameplayTag_ReturnValue_11;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_12 = CallFunc_HasMatchingGameplayTag_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_13 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_13;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_14 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_14;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_13 = CallFunc_HasMatchingGameplayTag_ReturnValue_13;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_14 = CallFunc_HasMatchingGameplayTag_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_15 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_15;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_16 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_16;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_15 = CallFunc_HasMatchingGameplayTag_ReturnValue_15;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_16 = CallFunc_HasMatchingGameplayTag_ReturnValue_16;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_17 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_17;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_18 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_18;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_17 = CallFunc_HasMatchingGameplayTag_ReturnValue_17;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_18 = CallFunc_HasMatchingGameplayTag_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_19 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_19;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_20 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_20;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_19 = CallFunc_HasMatchingGameplayTag_ReturnValue_19;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_20 = CallFunc_HasMatchingGameplayTag_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_21 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_21;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_22 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_22;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_21 = CallFunc_HasMatchingGameplayTag_ReturnValue_21;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_22 = CallFunc_HasMatchingGameplayTag_ReturnValue_22;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_23 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_23;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_23 = CallFunc_HasMatchingGameplayTag_ReturnValue_23;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.Temp_name_Variable_8 = Temp_name_Variable_8;
	Parms.Temp_name_Variable_9 = Temp_name_Variable_9;
	Parms.Temp_name_Variable_10 = Temp_name_Variable_10;
	Parms.Temp_name_Variable_11 = Temp_name_Variable_11;
	Parms.Temp_name_Variable_12 = Temp_name_Variable_12;
	Parms.Temp_name_Variable_13 = Temp_name_Variable_13;
	Parms.Temp_name_Variable_14 = Temp_name_Variable_14;
	Parms.Temp_name_Variable_15 = Temp_name_Variable_15;
	Parms.Temp_name_Variable_16 = Temp_name_Variable_16;
	Parms.Temp_name_Variable_17 = Temp_name_Variable_17;
	Parms.Temp_name_Variable_18 = Temp_name_Variable_18;
	Parms.Temp_name_Variable_19 = Temp_name_Variable_19;
	Parms.Temp_name_Variable_20 = Temp_name_Variable_20;
	Parms.Temp_name_Variable_21 = Temp_name_Variable_21;
	Parms.Temp_name_Variable_22 = Temp_name_Variable_22;
	Parms.Temp_name_Variable_23 = Temp_name_Variable_23;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.Temp_bool_Variable_20 = Temp_bool_Variable_20;
	Parms.Temp_bool_Variable_21 = Temp_bool_Variable_21;
	Parms.Temp_bool_Variable_22 = Temp_bool_Variable_22;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable_23 = Temp_bool_Variable_23;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_PlayerPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::OnRep_PlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OnRep_PlayerPawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::OnRep_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OnRep_Vehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_TeleportLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::OnRep_TeleportLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OnRep_TeleportLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayExpandOrCollapseAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Expand                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_RiftPortal_Item_Athena_C::PlayExpandOrCollapseAudio(bool Expand, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlayExpandOrCollapseAudio");

	Params::ABGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio_Params Parms{};

	Parms.Expand = Expand;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "Audio RiftDestroyed__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "Audio RiftDestroyed__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::VectorScale__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VectorScale__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::VectorScale__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VectorScale__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::FragmentMovement__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "FragmentMovement__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::FragmentMovement__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "FragmentMovement__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.DestroyRift
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::DestroyRift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "DestroyRift");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_RiftPortal_Item_Athena_C::BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_RiftPortal_Item_Athena_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_RiftPortal_Item_Athena_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayTeleportFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PlayerLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_RiftPortal_Item_Athena_C::PlayTeleportFX(const struct FVector& PlayerLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlayTeleportFX");

	Params::ABGA_RiftPortal_Item_Athena_C_PlayTeleportFX_Params Parms{};

	Parms.PlayerLocation = PlayerLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayCosmeticFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::PlayCosmeticFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlayCosmeticFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OverlappingOnBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_RiftPortal_Item_Athena_C::OverlappingOnBeginPlay(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OverlappingOnBeginPlay");

	Params::ABGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleTeleportEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_RiftPortal_Item_Athena_C::VehicleTeleportEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VehicleTeleportEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.NotifyTeleportedVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      VehicleActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_RiftPortal_Item_Athena_C::NotifyTeleportedVehicle(class AActor* VehicleActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "NotifyTeleportedVehicle");

	Params::ABGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle_Params Parms{};

	Parms.VehicleActor = VehicleActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlaylistLoaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlaylistName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_RiftPortal_Item_Athena_C::PlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlaylistLoaded");

	Params::ABGA_RiftPortal_Item_Athena_C_PlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleInteractionFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*       FortPlayerPawnAthena                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_RiftPortal_Item_Athena_C::VehicleInteractionFailed(class AFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VehicleInteractionFailed");

	Params::ABGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed_Params Parms{};

	Parms.FortPlayerPawnAthena = FortPlayerPawnAthena;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ExecuteUbergraph_BGA_RiftPortal_Item_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_1                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_PlayerLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerPawn*>     CallFunc_GetAllPassengers_ReturnValue                            (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasDriver_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetOwnerLocation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerPawn*>     CallFunc_GetAllPassengers_ReturnValue_1                          (ZeroConstructor, ReferenceParm)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortVehicleInterface>K2Node_DynamicCast_AsFort_Vehicle_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue (NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortVehicleInterface>CallFunc_GetVehicleUInterface_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasDriver_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDrivingVehicle_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortVehicleInterface>CallFunc_GetVehicleUInterface_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetOwnerLocation_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_VehicleActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortVehicleInterface>K2Node_DynamicCast_AsFort_Vehicle_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_PlaylistName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags                           (ConstParm)
// bool                               CallFunc_Athena_CheckCreativeMode_CanCompleteQuest               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*       K2Node_CustomEvent_FortPlayerPawnAthena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalIsTryingToEnterVehicle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors_1                (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Flying_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Flying_NewParam_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class AFortPlayerPawn*>     CallFunc_GetAllPassengers_ReturnValue_2                          (ZeroConstructor, ReferenceParm)
// class AFortPlayerPawn*             CallFunc_GetDriver_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetVehicleActorPtr_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanTeleport_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetOwnerLocation_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_RiftPortal_Item_Athena_C::ExecuteUbergraph_BGA_RiftPortal_Item_Athena(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& K2Node_CustomEvent_PlayerLocation, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_HasDriver_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_GetOwnerLocation_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue_1, class AActor* K2Node_Event_Actor, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, bool CallFunc_HasDriver_ReturnValue_1, bool CallFunc_IsInVehicle_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FVector& CallFunc_GetOwnerLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_VehicleActor, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_1, bool K2Node_DynamicCast_bSuccess_5, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_6, class FName K2Node_CustomEvent_PlaylistName, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, bool CallFunc_Athena_CheckCreativeMode_CanCompleteQuest, bool CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_7, class AFortPlayerPawnAthena* K2Node_CustomEvent_FortPlayerPawnAthena, bool CallFunc_LocalIsTryingToEnterVehicle_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, bool CallFunc_Array_Contains_ReturnValue, class AFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Is_Flying_NewParam, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Is_Flying_NewParam_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue, class AFortPlayerPawn* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class AActor* CallFunc_GetVehicleActorPtr_ReturnValue, bool CallFunc_CanTeleport_ReturnValue, const struct FVector& CallFunc_GetOwnerLocation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ExecuteUbergraph_BGA_RiftPortal_Item_Athena");

	Params::ABGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_2 = K2Node_ComponentBoundEvent_OverlappedComponent_2;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_2 = K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_1 = K2Node_ComponentBoundEvent_bFromSweep_1;
	Parms.K2Node_ComponentBoundEvent_SweepResult_1 = K2Node_ComponentBoundEvent_SweepResult_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerLocation = K2Node_CustomEvent_PlayerLocation;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetAllPassengers_ReturnValue = CallFunc_GetAllPassengers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_HasDriver_ReturnValue = CallFunc_HasDriver_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwnerLocation_ReturnValue = CallFunc_GetOwnerLocation_ReturnValue;
	Parms.CallFunc_GetAllPassengers_ReturnValue_1 = CallFunc_GetAllPassengers_ReturnValue_1;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Vehicle_Interface = K2Node_DynamicCast_AsFort_Vehicle_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue = CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue = CallFunc_GetVehicleUInterface_ReturnValue;
	Parms.CallFunc_HasDriver_ReturnValue_1 = CallFunc_HasDriver_ReturnValue_1;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_2 = K2Node_DynamicCast_AsFort_Player_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsDrivingVehicle_ReturnValue = CallFunc_IsDrivingVehicle_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue_1 = CallFunc_GetVehicleUInterface_ReturnValue_1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetOwnerLocation_ReturnValue_1 = CallFunc_GetOwnerLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_VehicleActor = K2Node_Event_VehicleActor;
	Parms.K2Node_DynamicCast_AsFort_Vehicle_Interface_1 = K2Node_DynamicCast_AsFort_Vehicle_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CustomEvent_PlaylistName = K2Node_CustomEvent_PlaylistName;
	Parms.K2Node_CustomEvent_PlaylistContextTags = K2Node_CustomEvent_PlaylistContextTags;
	Parms.CallFunc_Athena_CheckCreativeMode_CanCompleteQuest = CallFunc_Athena_CheckCreativeMode_CanCompleteQuest;
	Parms.CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1 = CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1 = K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_FortPlayerPawnAthena = K2Node_CustomEvent_FortPlayerPawnAthena;
	Parms.CallFunc_LocalIsTryingToEnterVehicle_ReturnValue = CallFunc_LocalIsTryingToEnterVehicle_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors_1 = CallFunc_GetOverlappingActors_OverlappingActors_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Is_Flying_NewParam = CallFunc_Is_Flying_NewParam;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Is_Flying_NewParam_1 = CallFunc_Is_Flying_NewParam_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GetAllPassengers_ReturnValue_2 = CallFunc_GetAllPassengers_ReturnValue_2;
	Parms.CallFunc_GetDriver_ReturnValue = CallFunc_GetDriver_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue_1 = CallFunc_Conv_InterfaceToObject_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetVehicleActorPtr_ReturnValue = CallFunc_GetVehicleActorPtr_ReturnValue;
	Parms.CallFunc_CanTeleport_ReturnValue = CallFunc_CanTeleport_ReturnValue;
	Parms.CallFunc_GetOwnerLocation_ReturnValue_2 = CallFunc_GetOwnerLocation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


