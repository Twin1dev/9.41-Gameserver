#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xE31 - 0xE00)
// BlueprintGeneratedClass B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C
class AB_RocketLauncher_Military_Athena_C : public AB_RocketLauncher_Generic_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_M202_Muzzle_MagazineEject_Smoke;                 // 0xE08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_M202_Muzzle_MagazineEject;                       // 0xE10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       ArrowBack;                                         // 0xE18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MuzzleBack;                                        // 0xE20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0xE28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EFortReloadFXState                ReloadState;                                       // 0xE30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_RocketLauncher_Military_Athena_C* GetDefaultObj();

	void Muzzle_Flash_FX(bool Persistent_Fire);
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void SoundFX(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat);
	void ResetDoOnce();
	void ExecuteUbergraph_B_RocketLauncher_Military_Athena(int32 EntryPoint, const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable_1, const struct FVector& Temp_struct_Variable_2, int32 Temp_int_Variable, const struct FVector& Temp_struct_Variable_3, const struct FVector& Temp_struct_Variable_4, const struct FVector& Temp_struct_Variable_5, const struct FVector& Temp_struct_Variable_6, const struct FVector& Temp_struct_Variable_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_Event_Persistent_Fire, bool Temp_bool_IsClosed_Variable_1, const struct FVector& Temp_struct_Variable_8, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool CallFunc_IsReloading_ReturnValue, const struct FVector& Temp_struct_Variable_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& K2Node_Select_Default_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, class FName K2Node_CustomEvent_EventName, float K2Node_CustomEvent_EmitterTime, int32 K2Node_CustomEvent_ParticleTime, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Velocity, const struct FVector& K2Node_CustomEvent_Direction, const struct FVector& K2Node_CustomEvent_Normal, class FName K2Node_CustomEvent_BoneName, class UPhysicalMaterial* K2Node_CustomEvent_PhysMat);
};

}


