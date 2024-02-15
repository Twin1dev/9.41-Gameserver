#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xE08 - 0xDF0)
// BlueprintGeneratedClass B_Rifle_Sniper_Weather_Athena.B_Rifle_Sniper_Weather_Athena_C
class AB_Rifle_Sniper_Weather_Athena_C : public AB_Rifle_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TestDebugLine;                                     // 0xDF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TestDebugLineDuration;                             // 0xDFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Scope;                                         // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Rifle_Sniper_Weather_Athena_C* GetDefaultObj();

	void UpdateNextNextCircleDisplay(const struct FVector_NetQuantize100& NextNextCircleLoc, bool Temp_bool_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float Temp_float_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_DegAtan2_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_DegAtan2_ReturnValue_1, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Select_Default_1, float CallFunc_NormalizeToRange_ReturnValue_1);
	void UserConstructionScript(class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void OnAimPassLocation(bool AimDownsights);
	void InitializeScopeVariables();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_B_Rifle_Sniper_Weather_Athena(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_CustomEvent_AimDownSights, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortSafeZoneIndicator* CallFunc_GetSafeZoneIndicator_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaSeconds, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, class AFortInGameMapManager* CallFunc_GetUIMapManager_ReturnValue, class AFortSafeZoneIndicator* CallFunc_GetSafeZoneIndicator_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_BPWorldLocationToMapLocation_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
};

}


