#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x870 - 0x700)
// BlueprintGeneratedClass B_Prj_AppleSauce_DrunkRocket.B_Prj_AppleSauce_DrunkRocket_C
class AB_Prj_AppleSauce_DrunkRocket_C : public AFortProjectile_DrunkHoming
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              _RocketTrailPS;                                    // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Proj_Loop;                                   // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  S_AirStrike_Bomb;                                  // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Ribbon_Trail_PS;                                   // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Explosion_Generic_PS;                              // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Rocket_Projectile_Explosion_Sound;                 // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StopLocation;                                      // 0x738(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5269[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Explosion_Flesh_Damage_PS;                         // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              StopRotZ;                                          // 0x750(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        TrailLifetime;                                     // 0x75C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Rocket_Projectile_InAir_Sound;                     // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              RocketTrailPS;                                     // 0x768(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RocketSpinRate;                                    // 0x770(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Explosion_Impact_Offset;                           // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RocketSpin;                                        // 0x778(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TimerMaxReached_;                                  // 0x784(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_526A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Ground_Decal;                                      // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Ground_Decal_MID;                                  // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Decal_Size_Max;                                    // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Decal_Size_Min;                                    // 0x79C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DecalLocation;                                     // 0x7A0(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProjectileHomingData                 Homing;                                            // 0x7C0(0x3C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                               HomingOffset;                                      // 0x7FC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x808(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortHomingStyle                  HomingType;                                        // 0x814(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Height;                                            // 0x818(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        MinTurnSpeed;                                      // 0x838(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTurnSpeed;                                      // 0x83C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RampTime;                                          // 0x840(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VFX_Dilation;                                      // 0x844(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EXP_N;                                             // 0x848(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EXP_p;                                             // 0x854(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FinalRocket;                                       // 0x860(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_526D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            FinalRocketExplosionSound;                         // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Prj_AppleSauce_DrunkRocket_C* GetDefaultObj();

	void OnRep_EXP_N();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void OnStop(struct FHitResult& Hit);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap);
	void OnHomingPassedTarget();
	void ReceiveBeginPlay();
	void BndEvt___RocketTrailPS_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	void ExplodeFX(const struct FVector& Location, const struct FVector& Normal);
	void ExecuteUbergraph_B_Prj_AppleSauce_DrunkRocket(int32 EntryPoint, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ComponentHasTag_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FProjectileHomingData& K2Node_MakeStruct_ProjectileHomingData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, uint8 CallFunc_GetActorTeam_ReturnValue, class UParticleSystemComponent* K2Node_ComponentBoundEvent_PSystem, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Normal, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_WasRecentlyRendered_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable);
};

}


