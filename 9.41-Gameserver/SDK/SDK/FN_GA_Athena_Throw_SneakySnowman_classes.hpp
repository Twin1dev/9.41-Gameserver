#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E (0xCA0 - 0xC52)
// BlueprintGeneratedClass GA_Athena_Throw_SneakySnowman.GA_Athena_Throw_SneakySnowman_C
class UGA_Athena_Throw_SneakySnowman_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
	uint8                                        Pad_13B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          TrackSnowmenTag;                                   // 0xC60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortProjectileBase*>           SnowmenActors;                                     // 0xC68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TSoftClassPtr<class AActor>                  GolfCartSoftClass;                                 // 0xC78(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_Throw_SneakySnowman_C* GetDefaultObj();

	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, const struct FSoftClassPath& GolfCart, bool Temp_bool_Variable, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class AActor* CallFunc_GetVehicleActor_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& K2Node_Select_Default);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_Throw_SneakySnowman(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
};

}


