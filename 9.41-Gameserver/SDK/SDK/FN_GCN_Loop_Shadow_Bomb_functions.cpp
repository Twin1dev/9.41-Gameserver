#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C
// (Actor)

class UClass* AGCN_Loop_Shadow_Bomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Loop_Shadow_Bomb_C");

	return Clss;
}


// GCN_Loop_Shadow_Bomb_C GCN_Loop_Shadow_Bomb.Default__GCN_Loop_Shadow_Bomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Loop_Shadow_Bomb_C* AGCN_Loop_Shadow_Bomb_C::GetDefaultObj()
{
	static class AGCN_Loop_Shadow_Bomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Loop_Shadow_Bomb_C*>(AGCN_Loop_Shadow_Bomb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.GetSkeletalMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ZeroConstructor, ReferenceParm)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_Shadow_Bomb_C::GetSkeletalMeshes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "GetSkeletalMeshes");

	Params::AGCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGCN_Loop_Shadow_Bomb_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGCN_Loop_Shadow_Bomb_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_Shadow_Bomb_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "ReceiveTick");

	Params::AGCN_Loop_Shadow_Bomb_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.BeginExpireTell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Loop_Shadow_Bomb_C::BeginExpireTell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "BeginExpireTell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Loop_Shadow_Bomb_C::ClearExpireTell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "ClearExpireTell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ExpireWarningTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Loop_Shadow_Bomb_C::ExpireWarningTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "ExpireWarningTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.UpdateTeamVisbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Loop_Shadow_Bomb_C::UpdateTeamVisbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "UpdateTeamVisbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.Audio Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Loop_Shadow_Bomb_C::Audio_Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "Audio Tick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.StartedInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Loop_Shadow_Bomb_C::StartedInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "StartedInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.EndedInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Loop_Shadow_Bomb_C::EndedInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "EndedInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_Shadow_Bomb_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "OnRemoval");

	Params::AGCN_Loop_Shadow_Bomb_C_OnRemoval_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_Loop_Shadow_Bomb_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "OnLoopingStart");

	Params::AGCN_Loop_Shadow_Bomb_C_OnLoopingStart_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnFinishedCharacterCustomization_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_Shadow_Bomb_C::OnFinishedCharacterCustomization_Bind(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "OnFinishedCharacterCustomization_Bind");

	Params::AGCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ExecuteUbergraph_GCN_Loop_Shadow_Bomb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_Pawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_Event_MyTarget_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_1                                        (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents_1                                (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_1                                   (ConstParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ZeroConstructor, ReferenceParm)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPlayingReplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPlayingReplay_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsBroadcastClient_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnSameTeam_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_8                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item_9                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPlayingReplay_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsBroadcastClient_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGCN_Loop_Shadow_Bomb_C::ExecuteUbergraph_GCN_Loop_Shadow_Bomb(int32 EntryPoint, class AFortPlayerPawn* K2Node_CustomEvent_Pawn, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float K2Node_Event_DeltaSeconds, float CallFunc_Abs_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_Array_Get_Item_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, class UParticleSystemComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, bool CallFunc_GetIsBroadcastClient_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class USkeletalMeshComponent* CallFunc_Array_Get_Item_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UParticleSystemComponent* CallFunc_Array_Get_Item_5, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnSameTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class USkeletalMeshComponent* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, class UParticleSystemComponent* CallFunc_Array_Get_Item_7, class USkeletalMeshComponent* CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_1, class UParticleSystemComponent* CallFunc_Array_Get_Item_9, bool CallFunc_GetIsPlayingReplay_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_GetIsBroadcastClient_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_Shadow_Bomb_C", "ExecuteUbergraph_GCN_Loop_Shadow_Bomb");

	Params::AGCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_MyTarget_1 = K2Node_Event_MyTarget_1;
	Parms.K2Node_Event_Parameters_1 = K2Node_Event_Parameters_1;
	Parms.K2Node_Event_ParticleComponents_1 = K2Node_Event_ParticleComponents_1;
	Parms.K2Node_Event_AudioComponents_1 = K2Node_Event_AudioComponents_1;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetIsPlayingReplay_ReturnValue = CallFunc_GetIsPlayingReplay_ReturnValue;
	Parms.CallFunc_GetIsPlayingReplay_ReturnValue_1 = CallFunc_GetIsPlayingReplay_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_GetIsBroadcastClient_ReturnValue = CallFunc_GetIsBroadcastClient_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_4 = CallFunc_GetValueAtLevel_ReturnValue_4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_OnSameTeam_ReturnValue = CallFunc_OnSameTeam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_GetIsPlayingReplay_ReturnValue_2 = CallFunc_GetIsPlayingReplay_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_2 = CallFunc_IsLocallyControlled_ReturnValue_2;
	Parms.CallFunc_GetIsBroadcastClient_ReturnValue_1 = CallFunc_GetIsBroadcastClient_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


