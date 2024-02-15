#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Trap_PoisonDarts.GA_Trap_PoisonDarts_C
// (None)

class UClass* UGA_Trap_PoisonDarts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Trap_PoisonDarts_C");

	return Clss;
}


// GA_Trap_PoisonDarts_C GA_Trap_PoisonDarts.Default__GA_Trap_PoisonDarts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Trap_PoisonDarts_C* UGA_Trap_PoisonDarts_C::GetDefaultObj()
{
	static class UGA_Trap_PoisonDarts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Trap_PoisonDarts_C*>(UGA_Trap_PoisonDarts_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Trap_PoisonDarts.GA_Trap_PoisonDarts_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Trap_PoisonDarts_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_PoisonDarts_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Trap_PoisonDarts.GA_Trap_PoisonDarts_C.ExecuteUbergraph_GA_Trap_PoisonDarts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PoisonDartTrap_Floor_C*  K2Node_DynamicCast_AsBP_Poison_Dart_Trap_Floor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAbilityLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetReloadBeginGameplayCueTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTrapLevel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamageDelay_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             (None)
// struct FGameplayTag                CallFunc_GetActivateTrapGameplayCueTag_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFireDelay_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDelayBeginGameplayCueTag_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_2              (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_Prj_DartsPoison_C*        K2Node_DynamicCast_AsB_Prj_Darts_Poison                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Trap_PoisonDarts_C::ExecuteUbergraph_GA_Trap_PoisonDarts(int32 EntryPoint, class ABP_PoisonDartTrap_Floor_C* K2Node_DynamicCast_AsBP_Poison_Dart_Trap_Floor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_2, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_GetTrapLevel_ReturnValue, float CallFunc_GetDamageDelay_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FGameplayTag& CallFunc_GetActivateTrapGameplayCueTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, const struct FGameplayTag& CallFunc_GetDelayBeginGameplayCueTag_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_3, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_3, bool K2Node_DynamicCast_bSuccess_4, class FName CallFunc_Array_Get_Item, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AB_Prj_DartsPoison_C* K2Node_DynamicCast_AsB_Prj_Darts_Poison, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_PoisonDarts_C", "ExecuteUbergraph_GA_Trap_PoisonDarts");

	Params::UGA_Trap_PoisonDarts_C_ExecuteUbergraph_GA_Trap_PoisonDarts_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Poison_Dart_Trap_Floor = K2Node_DynamicCast_AsBP_Poison_Dart_Trap_Floor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAbilityLevel_ReturnValue = CallFunc_GetAbilityLevel_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Trap = K2Node_DynamicCast_AsBuilding_Trap;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetReloadBeginGameplayCueTag_ReturnValue = CallFunc_GetReloadBeginGameplayCueTag_ReturnValue;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsBuilding_Trap_1 = K2Node_DynamicCast_AsBuilding_Trap_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_1 = CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_2 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBuilding_Trap_2 = K2Node_DynamicCast_AsBuilding_Trap_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetTrapLevel_ReturnValue = CallFunc_GetTrapLevel_ReturnValue;
	Parms.CallFunc_GetDamageDelay_ReturnValue = CallFunc_GetDamageDelay_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_GetActivateTrapGameplayCueTag_ReturnValue = CallFunc_GetActivateTrapGameplayCueTag_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_GetFireDelay_ReturnValue = CallFunc_GetFireDelay_ReturnValue;
	Parms.CallFunc_GetDelayBeginGameplayCueTag_ReturnValue = CallFunc_GetDelayBeginGameplayCueTag_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_3 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBuilding_Trap_3 = K2Node_DynamicCast_AsBuilding_Trap_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_2 = CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Prj_Darts_Poison = K2Node_DynamicCast_AsB_Prj_Darts_Poison;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


