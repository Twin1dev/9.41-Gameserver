#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18D (0xE0D - 0xC80)
// BlueprintGeneratedClass B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C
class AB_Ranged_Dual_Generic_Athena_C : public AFortWeaponRangedDual
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              LeftReload_Empty_;                                 // 0xC88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LeftShells_Empty_;                                 // 0xC90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LeftMuzzle_Empty_;                                 // 0xC98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Reload_Empty_;                                     // 0xCA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Shells_empty_;                                     // 0xCA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScopeMesh1P;                                       // 0xCB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Muzzle_Empty_;                                     // 0xCB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        AnimateScopePostProcess_DownSightPostProcessAmount_BF13147D4D2F78A8F8CECFABA0F6D055; // 0xCC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                AnimateScopePostProcess__Direction_BF13147D4D2F78A8F8CECFABA0F6D055; // 0xCC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    AnimateScopePostProcess;                           // 0xCC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem;                              // 0xCD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffect;                     // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffectIcon;                 // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDestroyEffect;                                  // 0xCE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_Reload_Particles;                              // 0xCE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Reload_ParticleSystem;                             // 0xCF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPlayFXTime;                                    // 0xCF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinPlayFXTime;                                     // 0xCFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseShellsOnFire_;                                  // 0xD00(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnReload_;                                // 0xD01(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnPump_;                                  // 0xD02(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ShellsParticleSystemTemplate;                      // 0xD08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReloadSocketName;                                  // 0xD10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                   Array_Of_Active_Enemy_AI;                          // 0xD18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Scope_Minus_Render_Enemies_To_Custom_Depth_Buffer; // 0xD28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4FBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Shells_Socket_Name;                                // 0xD2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class En_ShellTypes_01                  ShellTypeSelect;                                   // 0xD34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shells_Spawn_Rate_Scale;                           // 0xD38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShellsRotationRate;                                // 0xD3C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Velocity;                                   // 0xD48(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Gravity;                                    // 0xD54(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Lifetime;                                   // 0xD60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Size;                                       // 0xD64(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Time_Dilation;                              // 0xD70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Target_Scope_Vignette_Blur_Screen_Percentage;      // 0xD74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scope_Camera_Offset_Amount;                        // 0xD78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SmallShells;                                       // 0xD7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MediumShells;                                      // 0xD7D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LargeShells;                                       // 0xD7E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShotgunShells;                                     // 0xD7F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnergyShells;                                      // 0xD80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Inherit_Parent_Velocity;                           // 0xD84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Radius;                                // 0xD88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Height;                                // 0xD8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugShellsSocket_;                                // 0xD90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_2_Post_Processes_For_the_Scope;                // 0xD91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4FC3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_ScopeZoomIn;                                 // 0xD98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_ScopeZoomOut;                                // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Alteration_Ambient_PS;                             // 0xDA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ReticleHUDElementTags;                             // 0xDB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_Wind_Enabled;                                   // 0xDD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       MuzzleWindParticleSystem;                          // 0xDD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem1P;                            // 0xDE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldHideReticleAfterDelay;                       // 0xDE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPostProcessComponent*                 DownScopePostProcessSpawned;                       // 0xDF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 DownScopePostProcessSpawned2;                      // 0xDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MuzzleWindParticleSpawned;                         // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StencilBufferValue;                                // 0xE08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDualWeaponHand                   LastHandFired;                                     // 0xE0C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Ranged_Dual_Generic_Athena_C* GetDefaultObj();

	void SetPostProcessParams(float InputPin, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ShowReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void HideReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ActivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ActivateShellsFX(bool Bool, bool OffHand);
	void DeactivateShellsFX();
	void SetupShellFX(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue_1);
	void UpdateShellEmittersFX(class UParticleSystemComponent* PS, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8);
	void Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection, bool K2Node_SwitchEnum_CmpSuccess);
	void Muzzle_Flash_FX(bool Persistent_Fire, bool OffHand, bool CallFunc_IsUsingScope_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue);
	void SetWpnRarity();
	void AddRandomScale(bool OffHand, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_3);
	void UserConstructionScript(float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2, const struct FTransform& Temp_struct_Variable, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_3);
	void AnimateScopePostProcess__FinishedFunc();
	void AnimateScopePostProcess__UpdateFunc();
	void OnLoaded_468C8A744AA43D411B8A218EDC703167(class UObject* Loaded);
	void OnLoaded_A20154E74163905534EAA7A226A4D20B(class UObject* Loaded);
	void OnLoaded_3B6C2F134D7C48D715B2EB8E0CE9B045(class UObject* Loaded);
	void OnLoaded_DB8A0F544A576B8684A07E865C728884(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStopWeaponFireFX();
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void OnSetTargeting(bool bNewIsTargeting);
	void K2_OnUnEquip();
	void InitializeScopeVariables();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue);
	void OnWeaponAttached();
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void ShellsON__onPump_();
	void OnEquippedWeaponDestory();
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
	void ReceiveBeginPlay();
	void OnWeaponVisibilityChanged(bool bVisible);
	void HideWeaponMesh();
	void ShowWeaponMesh();
	void HideWeapon();
	void ShowWeapon();
	void ReverseScopePP();
	void ResetDoonceScopeSound();
	void UnhideThirdPersonStuff();
	void PlayScopePP();
	void HideFirstPersonStuff();
	void AbortScopeFX();
	void HideThirdPersonStuff();
	void UnhideFirstPersonStuffPart2();
	void UnhideFirstPersonStuffPart1();
	void ForceScopeFX();
	void SetupScopePostProcess();
	void HandFired(enum class EDualWeaponHand Hand, bool bPersistantFire);
	void BindOnHandFired();
	void ExecuteUbergraph_B_Ranged_Dual_Generic_Athena(int32 EntryPoint, float CallFunc_GetPI_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* Temp_object_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EFortReloadFXState K2Node_Event_ReloadStage, class UObject* K2Node_CustomEvent_Loaded, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_MathExpression_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_MathExpression_ReturnValue_1, bool K2Node_Event_bNewIsTargeting, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class AFortAIPawn*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, class AFortAIPawn* CallFunc_Array_Get_Item, bool K2Node_CustomEvent_Enable_Or_Disable, int32 K2Node_CustomEvent_StencilBufferValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UFortAlterationItemDefinition* K2Node_Event_NewAlteration, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, bool CallFunc_IsAssetNull_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue_2, bool CallFunc_IsAssetNull_ReturnValue_3, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UObject* Temp_object_Variable_1, bool CallFunc_UseScopeTargeting_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UTexture2D* CallFunc_GetOrLoadSynchronously_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_CustomEvent_Enable_1, int32 K2Node_CustomEvent_TargetLimit_1, int32 CallFunc_SelectInt_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UObject* Temp_object_Variable_2, bool K2Node_CustomEvent_Enable, int32 K2Node_CustomEvent_TargetLimit, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_2, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_SelectInt_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded_2, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess_4, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_UseScopeTargeting_ReturnValue_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_6, class APawn* CallFunc_GetInstigator_ReturnValue_3, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_3, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_3, class APawn* CallFunc_GetInstigator_ReturnValue_4, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_4, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue_2, bool K2Node_Event_bVisible, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetFiringRate_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UObject* Temp_object_Variable_3, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_3, bool K2Node_DynamicCast_bSuccess_9, class APawn* CallFunc_GetInstigator_ReturnValue_5, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_5, bool K2Node_DynamicCast_bSuccess_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APawn* CallFunc_GetInstigator_ReturnValue_6, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_6, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_K2_AttachToComponent_ReturnValue, enum class EDualWeaponHand K2Node_CustomEvent_Hand, bool K2Node_CustomEvent_bPersistantFire, class UObject* K2Node_CustomEvent_Loaded_3, bool CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue, int32 CallFunc_GetRenderingDetailMode_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, bool CallFunc_IsValid_ReturnValue_9, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_2, const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_11, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_12, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3);
};

}


