#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x878 - 0x700)
// BlueprintGeneratedClass B_Prj_FireworksMortar_Rocket.B_Prj_FireworksMortar_Rocket_C
class AB_Prj_FireworksMortar_Rocket_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio_Proj_Loop;                                   // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Trail;                                           // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Dynamic_Material;                                  // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BottleRocketFireCue;                               // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Explosion;                                       // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ExplosionSound;                                    // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lifetime_Min;                                      // 0x740(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lifetime_Max;                                      // 0x744(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BounceExplosionDelay;                              // 0x748(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BounceExplosionDelayVariance;                      // 0x74C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            BounceHit;                                         // 0x750(0x88)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class USoundBase*                            SpawnSound;                                        // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x7E0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<float>                                HueShiftColorRange;                                // 0x868(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AB_Prj_FireworksMortar_Rocket_C* GetDefaultObj();

	void UserConstructionScript(int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void OnBounce(struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Prj_FireworksMortar_Rocket(int32 EntryPoint, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, const struct FHitResult& K2Node_Event_Hit, float CallFunc_RandomFloatInRange_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, uint8 CallFunc_GetActorTeam_ReturnValue);
};

}


