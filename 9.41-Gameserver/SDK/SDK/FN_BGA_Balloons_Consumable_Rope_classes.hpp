#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A (0x742 - 0x6F8)
// BlueprintGeneratedClass BGA_Balloons_Consumable_Rope.BGA_Balloons_Consumable_Rope_C
class ABGA_Balloons_Consumable_Rope_C : public ABuildingGameplayActorBalloonRope
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Balloon_StartToRise_Cue;                           // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Balloon_MaxAltitude_Cue;                           // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Baloon_FloatingLoop_Cue;                           // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponentBudgeted*        Balloon_SKBudgeted;                                // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x720(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        BalloonsNeededForFlight;                           // 0x728(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentCount;                                      // 0x72C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            FriendlyFloatingLoop;                              // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            EnemyFloatingLoop;                                 // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OwnerIsHostileToLocal;                             // 0x740(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OwnerIsLocal;                                      // 0x741(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABGA_Balloons_Consumable_Rope_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BalloonCountAudioCheck(int32 BalloonCount, bool WasShot, bool MultiplesReleased, bool MaxHeight);
	void BalloonMaxAltitudeAudioCheck(bool AtMax);
	void InAirWithABalloon(bool Fade);
	void ExecuteUbergraph_BGA_Balloons_Consumable_Rope(int32 EntryPoint, class USoundBase* Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue_2, int32 K2Node_CustomEvent_BalloonCount, bool K2Node_CustomEvent_WasShot, bool K2Node_CustomEvent_MultiplesReleased, bool K2Node_CustomEvent_MaxHeight, class USoundBase* Temp_object_Variable_1, bool K2Node_CustomEvent_AtMax, bool Temp_bool_IsClosed_Variable, class USoundBase* Temp_object_Variable_2, bool K2Node_CustomEvent_Fade, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class USoundBase* K2Node_Select_Default, bool CallFunc_IsLocallyControlled_ReturnValue, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class USoundBase* K2Node_Select_Default_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

}


