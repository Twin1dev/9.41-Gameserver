#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x376 (0xD90 - 0xA1A)
// BlueprintGeneratedClass GA_Athena_AppleSauce_RocketSpawn_InAir.GA_Athena_AppleSauce_RocketSpawn_InAir_C
class UGA_Athena_AppleSauce_RocketSpawn_InAir_C : public UGAT_GenericTriggeredAbility_C
{
public:
	uint8                                        Pad_527A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA20(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                Prj_Rocket;                                        // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnLocOffset;                                    // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BottleRocketSpeed;                                 // 0xA34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BottleRocketSpeedVariance;                         // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spread;                                            // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnDelayVarience;                                // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnDelay;                                        // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      GECS_Explode;                                      // 0xA48(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          T_Targeting;                                       // 0xAD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MaxShots;                                          // 0xAD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShotsFired;                                        // 0xADC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HighShot;                                          // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseBalanceRows;                                    // 0xAE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_RocketSpeed;                                   // 0xAE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_RocketSpeedVariance;                           // 0xB08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_SpawnDelay;                                    // 0xB28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_SpawnDelayVariance;                            // 0xB48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_MaxShots;                                      // 0xB68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_Spread;                                        // 0xB88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_HighShot;                                      // 0xBA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        SF_MinimumLaunchSpeed;                             // 0xBC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        SF_MaxLaunchSpeed;                                 // 0xBE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        SF_ClusterAmount;                                  // 0xC08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        SF_LaunchAngle;                                    // 0xC28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_BGA_AppleSauce_RocketSpawner_C*     RocketSpawner;                                     // 0xC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      GECS_Explode_Additional;                           // 0xC50(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          Env_Targeting;                                     // 0xCD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Height;                                            // 0xCE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        NewVar_0;                                          // 0xD00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_527C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Radius;                                            // 0xD08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Gravity;                                           // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FakeFallValue;                                     // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0xD30(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Speed;                                             // 0xD3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FakeSpread;                                        // 0xD40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomX;                                           // 0xD44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomY;                                           // 0xD48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_527D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MinDelayBetweenRocket;                             // 0xD50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MaxDelayBetweenRocket;                             // 0xD70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_AppleSauce_RocketSpawn_InAir_C* GetDefaultObj();

	void SetBalance(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5);
	void AddVariance(float Default, float Variance, float* RandomFloat, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
	void SpawnClusters(class UForceFeedbackEffect* ForceFeedbackFar, class UForceFeedbackEffect* ForceFeedbackNear, float BottleRocketGravity, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
	void FinishedSpawning();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_AppleSauce_RocketSpawn_InAir(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1, class AB_BGA_AppleSauce_RocketSpawner_C* K2Node_DynamicCast_AsB_BGA_Apple_Sauce_Rocket_Spawner, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloatInRange_ReturnValue_5, float CallFunc_RandomFloatInRange_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_7, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_8, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_GetValueAtLevel_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_5, class AB_Prj_AppleSauce_DrunkRocket_C* K2Node_DynamicCast_AsB_Prj_Apple_Sauce_Drunk_Rocket, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_RandomFloatInRange_ReturnValue_9);
};

}


