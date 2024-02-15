#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C
// (Actor)

class UClass* ATrap_Floor_MountedTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trap_Floor_MountedTurret_C");

	return Clss;
}


// Trap_Floor_MountedTurret_C Trap_Floor_MountedTurret.Default__Trap_Floor_MountedTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrap_Floor_MountedTurret_C* ATrap_Floor_MountedTurret_C::GetDefaultObj()
{
	static class ATrap_Floor_MountedTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrap_Floor_MountedTurret_C*>(ATrap_Floor_MountedTurret_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.CanDestroySurroundingBuildings
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Allowed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolumeManager*          CallFunc_GetVolumeManager_OutVolumeManager                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVolumeValidityResult   CallFunc_GetVolumeManager_OutIsValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolume*                 CallFunc_GetVolumeForLocation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReady_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetMinigameForVolume_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInProgress_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Floor_MountedTurret_C::CanDestroySurroundingBuildings(bool* Allowed, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, class AFortVolume* CallFunc_GetVolumeForLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsReady_ReturnValue, class AFortMinigame* CallFunc_GetMinigameForVolume_ReturnValue, bool CallFunc_IsInProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "CanDestroySurroundingBuildings");

	Params::ATrap_Floor_MountedTurret_C_CanDestroySurroundingBuildings_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetVolumeManager_OutVolumeManager = CallFunc_GetVolumeManager_OutVolumeManager;
	Parms.CallFunc_GetVolumeManager_OutIsValid = CallFunc_GetVolumeManager_OutIsValid;
	Parms.CallFunc_GetVolumeForLocation_ReturnValue = CallFunc_GetVolumeForLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsReady_ReturnValue = CallFunc_IsReady_ReturnValue;
	Parms.CallFunc_GetMinigameForVolume_ReturnValue = CallFunc_GetMinigameForVolume_ReturnValue;
	Parms.CallFunc_IsInProgress_ReturnValue = CallFunc_IsInProgress_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Allowed != nullptr)
		*Allowed = Parms.Allowed;

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.UnHideFloorAndKillTurret
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Floor_MountedTurret_C::UnHideFloorAndKillTurret(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "UnHideFloorAndKillTurret");

	Params::ATrap_Floor_MountedTurret_C_UnHideFloorAndKillTurret_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.DestroyFloorAndTurret
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Floor_MountedTurret_C::DestroyFloorAndTurret()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "DestroyFloorAndTurret");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.OnModifyTrapIncomingDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOutConsumeEvent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_MountedTurretAthena_C*    K2Node_DynamicCast_AsB_Mounted_Turret_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortMountedWeaponInterface>CallFunc_GetHostVehicleCached_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHostVehicleCached_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Floor_MountedTurret_C::OnModifyTrapIncomingDamage(float Damage, class AController* EventInstigator, class AActor* DamageCauser, float* OutDamage, bool* bOutConsumeEvent, class AB_MountedTurretAthena_C* K2Node_DynamicCast_AsB_Mounted_Turret_Athena, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IFortMountedWeaponInterface> CallFunc_GetHostVehicleCached_self_CastInput, class AActor* CallFunc_GetHostVehicleCached_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "OnModifyTrapIncomingDamage");

	Params::ATrap_Floor_MountedTurret_C_OnModifyTrapIncomingDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.K2Node_DynamicCast_AsB_Mounted_Turret_Athena = K2Node_DynamicCast_AsB_Mounted_Turret_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHostVehicleCached_self_CastInput = CallFunc_GetHostVehicleCached_self_CastInput;
	Parms.CallFunc_GetHostVehicleCached_ReturnValue = CallFunc_GetHostVehicleCached_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamage != nullptr)
		*OutDamage = Parms.OutDamage;

	if (bOutConsumeEvent != nullptr)
		*bOutConsumeEvent = Parms.bOutConsumeEvent;

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.CalculateLaunch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_MountedTurret_C::CalculateLaunch(class AActor* Player, struct FVector* Velocity, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "CalculateLaunch");

	Params::ATrap_Floor_MountedTurret_C_CalculateLaunch_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = std::move(Parms.Velocity);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.BumpPlayerAndDestroyBuildings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanDestroySurroundingBuildings_Allowed                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>              CallFunc_BoxOverlapActors_OutActors                              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BoxOverlapActors_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_BoxOverlapActors_OutActors_1                            (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BoxOverlapActors_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATiered_Chest_Athena_C*      K2Node_DynamicCast_AsTiered_Chest_Athena                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_CalculateLaunch_Velocity                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildingGridActorFilter    K2Node_MakeStruct_BuildingGridActorFilter                        (NoDestructor)
// class UBuildingStructuralSupportSystem*CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildingNeighboringActorInfoCallFunc_K2_GetBuildingActorsInGridCell_OutActorsInGridCell      (None)
// bool                               CallFunc_K2_GetBuildingActorsInGridCell_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNeighboringCenterCellInfo  CallFunc_Array_Get_Item_2                                        (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingRoof*               K2Node_DynamicCast_AsBuilding_Roof                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingStairs*             K2Node_DynamicCast_AsBuilding_Stairs                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Floor_MountedTurret_C::BumpPlayerAndDestroyBuildings(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_CanDestroySurroundingBuildings_Allowed, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors_1, bool CallFunc_BoxOverlapActors_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class ATiered_Chest_Athena_C* K2Node_DynamicCast_AsTiered_Chest_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_CalculateLaunch_Velocity, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FBuildingGridActorFilter& K2Node_MakeStruct_BuildingGridActorFilter, class UBuildingStructuralSupportSystem* CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FBuildingNeighboringActorInfo& CallFunc_K2_GetBuildingActorsInGridCell_OutActorsInGridCell, bool CallFunc_K2_GetBuildingActorsInGridCell_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FNeighboringCenterCellInfo& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, class ABuildingRoof* K2Node_DynamicCast_AsBuilding_Roof, bool K2Node_DynamicCast_bSuccess_2, class ABuildingStairs* K2Node_DynamicCast_AsBuilding_Stairs, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "BumpPlayerAndDestroyBuildings");

	Params::ATrap_Floor_MountedTurret_C_BumpPlayerAndDestroyBuildings_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_CanDestroySurroundingBuildings_Allowed = CallFunc_CanDestroySurroundingBuildings_Allowed;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_BoxOverlapActors_OutActors = CallFunc_BoxOverlapActors_OutActors;
	Parms.CallFunc_BoxOverlapActors_ReturnValue = CallFunc_BoxOverlapActors_ReturnValue;
	Parms.CallFunc_BoxOverlapActors_OutActors_1 = CallFunc_BoxOverlapActors_OutActors_1;
	Parms.CallFunc_BoxOverlapActors_ReturnValue_1 = CallFunc_BoxOverlapActors_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsTiered_Chest_Athena = K2Node_DynamicCast_AsTiered_Chest_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CalculateLaunch_Velocity = CallFunc_CalculateLaunch_Velocity;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_BuildingGridActorFilter = K2Node_MakeStruct_BuildingGridActorFilter;
	Parms.CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem = CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetBuildingActorsInGridCell_OutActorsInGridCell = CallFunc_K2_GetBuildingActorsInGridCell_OutActorsInGridCell;
	Parms.CallFunc_K2_GetBuildingActorsInGridCell_ReturnValue = CallFunc_K2_GetBuildingActorsInGridCell_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBuilding_Roof = K2Node_DynamicCast_AsBuilding_Roof;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBuilding_Stairs = K2Node_DynamicCast_AsBuilding_Stairs;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.OnPlaced
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_MountedTurret_C::OnPlaced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "OnPlaced");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_MountedTurret_C::OnFinishedBuilding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "OnFinishedBuilding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.OnWorldReady
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_MountedTurret_C::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "OnWorldReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.SpawnTurret
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Floor_MountedTurret_C::SpawnTurret()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "SpawnTurret");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.HideAttachedFloor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*            BuildingAttachedTo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_MountedTurret_C::HideAttachedFloor(class ABuildingSMActor* BuildingAttachedTo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "HideAttachedFloor");

	Params::ATrap_Floor_MountedTurret_C_HideAttachedFloor_Params Parms{};

	Parms.BuildingAttachedTo = BuildingAttachedTo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.DestroyedTurret
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_MountedTurret_C::DestroyedTurret(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "DestroyedTurret");

	Params::ATrap_Floor_MountedTurret_C_DestroyedTurret_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.Turn off Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*            BuildingSMActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_MountedTurret_C::Turn_off_Tick(class ABuildingSMActor* BuildingSMActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "Turn off Tick");

	Params::ATrap_Floor_MountedTurret_C_Turn_off_Tick_Params Parms{};

	Parms.BuildingSMActor = BuildingSMActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_MountedTurret_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "ReceiveEndPlay");

	Params::ATrap_Floor_MountedTurret_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.OnAttachToBuilding
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*            AttachedToBuilding                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_MountedTurret_C::OnAttachToBuilding(class ABuildingSMActor* AttachedToBuilding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "OnAttachToBuilding");

	Params::ATrap_Floor_MountedTurret_C_OnAttachToBuilding_Params Parms{};

	Parms.AttachedToBuilding = AttachedToBuilding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_MountedTurret_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "OnDeathServer");

	Params::ATrap_Floor_MountedTurret_C_OnDeathServer_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Floor_MountedTurret.Trap_Floor_MountedTurret_C.ExecuteUbergraph_Trap_Floor_MountedTurret
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_1                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class ABuildingSMActor*            K2Node_CustomEvent_BuildingAttachedTo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            K2Node_CustomEvent_BuildingSMActor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMountedTurret_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortVehicleInterface>CallFunc_SetActorBase_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortVehicleInterface>CallFunc_GetDriver_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetDriver_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortVehicleInterface>CallFunc_HasDriver_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasDriver_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_2                             (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_3                             (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_4                             (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_5                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortTeamAffiliation>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// uint8                              CallFunc_GetActorTeam_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortVehicleInterface>CallFunc_GetDriver_self_CastInput_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetDriver_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortVehicleInterface>CallFunc_HasDriver_self_CastInput_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasDriver_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            K2Node_Event_AttachedToBuilding                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_6                             (IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       (None)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Floor_MountedTurret_C::ExecuteUbergraph_Trap_Floor_MountedTurret(int32 EntryPoint, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float Temp_float_Variable, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class ABuildingSMActor* K2Node_CustomEvent_BuildingAttachedTo, bool CallFunc_IsValid_ReturnValue_3, class AActor* K2Node_CustomEvent_DestroyedActor, class ABuildingSMActor* K2Node_CustomEvent_BuildingSMActor, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, class AFortPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AMountedTurret_C* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IFortVehicleInterface> CallFunc_SetActorBase_self_CastInput, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IFortVehicleInterface> CallFunc_GetDriver_self_CastInput, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IFortVehicleInterface> CallFunc_HasDriver_self_CastInput, bool CallFunc_HasDriver_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, uint8 CallFunc_GetActorTeam_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, TScriptInterface<class IFortVehicleInterface> CallFunc_GetDriver_self_CastInput_1, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, TScriptInterface<class IFortVehicleInterface> CallFunc_HasDriver_self_CastInput_1, bool CallFunc_HasDriver_ReturnValue_1, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class ABuildingSMActor* K2Node_Event_AttachedToBuilding, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_6, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array_1, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_HasAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_MountedTurret_C", "ExecuteUbergraph_Trap_Floor_MountedTurret");

	Params::ATrap_Floor_MountedTurret_C_ExecuteUbergraph_Trap_Floor_MountedTurret_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_MakeStruct_ParticleSysParam_1 = K2Node_MakeStruct_ParticleSysParam_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_CustomEvent_BuildingAttachedTo = K2Node_CustomEvent_BuildingAttachedTo;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.K2Node_CustomEvent_BuildingSMActor = K2Node_CustomEvent_BuildingSMActor;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SetActorBase_self_CastInput = CallFunc_SetActorBase_self_CastInput;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetDriver_self_CastInput = CallFunc_GetDriver_self_CastInput;
	Parms.CallFunc_GetDriver_ReturnValue = CallFunc_GetDriver_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_HasDriver_self_CastInput = CallFunc_HasDriver_self_CastInput;
	Parms.CallFunc_HasDriver_ReturnValue = CallFunc_HasDriver_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_2 = CallFunc_Multiply_VectorVector_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_3 = CallFunc_Multiply_VectorVector_ReturnValue_3;
	Parms.K2Node_MakeStruct_ParticleSysParam_2 = K2Node_MakeStruct_ParticleSysParam_2;
	Parms.K2Node_MakeStruct_ParticleSysParam_3 = K2Node_MakeStruct_ParticleSysParam_3;
	Parms.K2Node_MakeStruct_ParticleSysParam_4 = K2Node_MakeStruct_ParticleSysParam_4;
	Parms.K2Node_MakeStruct_ParticleSysParam_5 = K2Node_MakeStruct_ParticleSysParam_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetActorTeam_ReturnValue_1 = CallFunc_GetActorTeam_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetDriver_self_CastInput_1 = CallFunc_GetDriver_self_CastInput_1;
	Parms.CallFunc_GetDriver_ReturnValue_1 = CallFunc_GetDriver_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_HasDriver_self_CastInput_1 = CallFunc_HasDriver_self_CastInput_1;
	Parms.CallFunc_HasDriver_ReturnValue_1 = CallFunc_HasDriver_ReturnValue_1;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1 = CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.K2Node_Event_AttachedToBuilding = K2Node_Event_AttachedToBuilding;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam_6 = K2Node_MakeStruct_ParticleSysParam_6;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


