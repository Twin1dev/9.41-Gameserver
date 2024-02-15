#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x848 - 0x7B0)
// BlueprintGeneratedClass B_Prj_Arrow_ExplodeOnImpact_Athena.B_Prj_Arrow_ExplodeOnImpact_Athena_C
class AB_Prj_Arrow_ExplodeOnImpact_Athena_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ProjectileTrail;                                   // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  TracerMesh;                                        // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrenadeFuse_AudioComponent;                        // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Explosion;                                       // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_DistantSound;                                  // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ExplosionCameraShake;                              // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedback;                            // 0x7F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0x800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0x808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              HitRotation;                                       // 0x810(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              SpawnedTrail;                                      // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x828(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        DrawDistance;                                      // 0x834(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitPlayer;                                         // 0x838(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DecalSize;                                         // 0x83C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Prj_Arrow_ExplodeOnImpact_Athena_C* GetDefaultObj();

	void OnRep_HitLocation(bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, uint8 CallFunc_GetActorTeam_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void ExplosiveBowReference(class AB_ExplosiveBow_Athena_C** ExplosiveBow, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AB_ExplosiveBow_Athena_C* K2Node_DynamicCast_AsB_Explosive_Bow_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void UserConstructionScript();
	void Event_Building_Actor_Destroyed();
	void ReceiveBeginPlay();
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap);
	void ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsBeingKilled_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_GetMuzzleLocation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


