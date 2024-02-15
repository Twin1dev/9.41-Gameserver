#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x154 (0x854 - 0x700)
// BlueprintGeneratedClass B_Prj_AppleSauce_Rocket_Athena.B_Prj_AppleSauce_Rocket_Athena_C
class AB_Prj_AppleSauce_Rocket_Athena_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PP_Explode;                                        // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Rocket_AudioComponent;                             // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        PPFader_PPFade_9714E5AE43A642F25ED596B3F3E90B76;   // 0x720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PPFader__Direction_9714E5AE43A642F25ED596B3F3E90B76; // 0x724(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PPFader;                                           // 0x728(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Ribbon_Trail_PSC;                                  // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Water_Explosion_PSC;                               // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Ribbon_Trail_PS;                                   // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Water_Explosion_PS;                                // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Explosion_Generic_PS;                              // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Explosion_Generic_PSC;                             // 0x758(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Rocket_Projectile_Explosion_Sound;                 // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StopLocation;                                      // 0x768(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          ObjectsToTraceAgainst;                             // 0x778(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                       Explosion_Flesh_Damage_PS;                         // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              StopRotZ;                                          // 0x790(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        TrailLifetime;                                     // 0x79C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Explosion_Flesh_Damage_PSC;                        // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Rocket_Projectile_Explosion_Water_Sound;           // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Rocket_Projectile_InAir_Sound;                     // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              RocketTrailPS;                                     // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Delta;                                        // 0x7C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RocketSpinRate;                                    // 0x7C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Explosion_Impact_Offset;                           // 0x7C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RocketSpin;                                        // 0x7CC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               RocketScale;                                       // 0x7D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TimerMaxReached_;                                  // 0x7E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Ground_Decal;                                      // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Ground_Decal_MID;                                  // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Decal_Size_Max;                                    // 0x7F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Decal_Size_Min;                                    // 0x7FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DecalLocation;                                     // 0x800(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Rocket_Trail_Template;                             // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x818(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              Explosion_PS;                                      // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageHeight;                                      // 0x838(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          DestroyObjectTypes;                                // 0x840(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        VFX_Dilation;                                      // 0x850(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Prj_AppleSauce_Rocket_Athena_C* GetDefaultObj();

	void UserConstructionScript(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
	void PPFader__FinishedFunc();
	void PPFader__UpdateFunc();
	void OnBounce(struct FHitResult& Hit);
	void OnStop(struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void FuseTimerMax();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void WarpInDamage();
	void ExecuteUbergraph_B_Prj_AppleSauce_Rocket_Athena(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortPlayerController*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, const struct FHitResult& K2Node_Event_Hit_1, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsBeingKilled_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, int32 Temp_int_Array_Index_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsActive_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, TArray<struct FHitResult>& CallFunc_BoxTraceMultiForObjects_OutHits, bool CallFunc_BoxTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, class ABP_DeimosRift_C* K2Node_DynamicCast_AsBP_Deimos_Rift, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


