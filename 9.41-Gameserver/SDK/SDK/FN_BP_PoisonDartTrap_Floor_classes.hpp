#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0xCF8 - 0xC88)
// BlueprintGeneratedClass BP_PoisonDartTrap_Floor.BP_PoisonDartTrap_Floor_C
class ABP_PoisonDartTrap_Floor_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Trigger;                                           // 0xC90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0xC98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Place_Trap_Sound;                                  // 0xCA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Active_Sound;                                 // 0xCA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Explode_Sound;                                // 0xCB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Fire_Sound;                                   // 0xCB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    FriendlyTrapMaterial;                              // 0xCC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    NormalTrapMaterial;                                // 0xCC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayFewerSounds;                                  // 0xCD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          MuzzleSockets;                                     // 0xCD8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                        Timespan_of_Jiggle;                                // 0xCE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Vector_of_Jiggle;                                  // 0xCEC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PoisonDartTrap_Floor_C* GetDefaultObj();

	void ChangeToNormalMaterial();
	void _ChangeToFriendlyMaterial(enum class ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void OnInitTeam();
	void MuzzleFire(class FName Socket_Name);
	void Jiggle(const struct FVector& Vector);
	void ExecuteUbergraph_BP_PoisonDartTrap_Floor(int32 EntryPoint, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_6, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_IsClosed_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, class FName K2Node_CustomEvent_Socket_Name, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& K2Node_CustomEvent_Vector);
};

}


