#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_FlintLock_Pistol.AnimBP_FlintLock_Pistol_C
// (None)

class UClass* UAnimBP_FlintLock_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_FlintLock_Pistol_C");

	return Clss;
}


// AnimBP_FlintLock_Pistol_C AnimBP_FlintLock_Pistol.Default__AnimBP_FlintLock_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_FlintLock_Pistol_C* UAnimBP_FlintLock_Pistol_C::GetDefaultObj()
{
	static class UAnimBP_FlintLock_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_FlintLock_Pistol_C*>(UAnimBP_FlintLock_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_FlintLock_Pistol.AnimBP_FlintLock_Pistol_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_FlintLock_Pistol_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_FlintLock_Pistol_C", "AnimGraph");

	Params::UAnimBP_FlintLock_Pistol_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_FlintLock_Pistol.AnimBP_FlintLock_Pistol_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_FlintLock_Pistol_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_FlintLock_Pistol_C", "BlueprintUpdateAnimation");

	Params::UAnimBP_FlintLock_Pistol_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimBP_FlintLock_Pistol.AnimBP_FlintLock_Pistol_C.ExecuteUbergraph_AnimBP_FlintLock_Pistol
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Pistol_Flintlock_Athena_C*K2Node_DynamicCast_AsB_Pistol_Flintlock_Athena                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCustomGender       CallFunc_GetCharacterGender_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_FlintLock_Pistol_C::ExecuteUbergraph_AnimBP_FlintLock_Pistol(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Pistol_Flintlock_Athena_C* K2Node_DynamicCast_AsB_Pistol_Flintlock_Athena, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_FlintLock_Pistol_C", "ExecuteUbergraph_AnimBP_FlintLock_Pistol");

	Params::UAnimBP_FlintLock_Pistol_C_ExecuteUbergraph_AnimBP_FlintLock_Pistol_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Pistol_Flintlock_Athena = K2Node_DynamicCast_AsB_Pistol_Flintlock_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCharacterGender_ReturnValue = CallFunc_GetCharacterGender_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


