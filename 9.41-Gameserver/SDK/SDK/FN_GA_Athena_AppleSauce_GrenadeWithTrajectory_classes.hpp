#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9E (0xCF0 - 0xC52)
// BlueprintGeneratedClass GA_Athena_AppleSauce_GrenadeWithTrajectory.GA_Athena_AppleSauce_GrenadeWithTrajectory_C
class UGA_Athena_AppleSauce_GrenadeWithTrajectory_C : public UGA_Athena_UtilityGrenade_WithTrajectory_C
{
public:
	uint8                                        Pad_49EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFortGameplayEffectContainer          EC_PlayerDamage;                                   // 0xC60(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_AppleSauce_GrenadeWithTrajectory_C* GetDefaultObj();

	void SetBalanceValues();
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void ExecuteUbergraph_GA_Athena_AppleSauce_GrenadeWithTrajectory(int32 EntryPoint, class AFortProjectileBase* K2Node_Event_ProjectileReference, class AB_Prj_Athena_AppleSauce_Grenade_C* K2Node_DynamicCast_AsB_Prj_Athena_Apple_Sauce_Grenade, bool K2Node_DynamicCast_bSuccess, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpecFromAbility_ReturnValue);
};

}


