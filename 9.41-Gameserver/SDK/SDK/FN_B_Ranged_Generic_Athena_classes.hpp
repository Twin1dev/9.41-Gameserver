#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x179 (0xDA1 - 0xC28)
// BlueprintGeneratedClass B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C
class AB_Ranged_Generic_Athena_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Muzzle1P_Empty_;                                   // 0xC30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  IronSightsMesh1P;                                  // 0xC38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MuzzleWindParticle_Empty_;                         // 0xC40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Reload_Empty_;                                     // 0xC48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 SecondDownScopePostProcess;                        // 0xC50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Shells_empty_;                                     // 0xC58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 DownScopePostProcess;                              // 0xC60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScopeMesh1P;                                       // 0xC68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Muzzle_Empty_;                                     // 0xC70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        AnimateScopePostProcess_DownSightPostProcessAmount_8E980769412DEF67B9B63CAE644DA93B; // 0xC78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                AnimateScopePostProcess__Direction_8E980769412DEF67B9B63CAE644DA93B; // 0xC7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    AnimateScopePostProcess;                           // 0xC80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem;                              // 0xC88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffect;                     // 0xC90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffectIcon;                 // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDestroyEffect;                                  // 0xCA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RandomMuzzleFlashScaling;                          // 0xCA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_Reload_Particles;                              // 0xCA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42DC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Reload_ParticleSystem;                             // 0xCA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPlayFXTime;                                    // 0xCB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinPlayFXTime;                                     // 0xCB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseShellsOnFire_;                                  // 0xCB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnReload_;                                // 0xCB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnPump_;                                  // 0xCBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42DD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ShellsParticleSystemTemplate;                      // 0xCC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReloadSocketName;                                  // 0xCC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                   Array_Of_Active_Enemy_AI;                          // 0xCD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Scope_Minus_Render_Enemies_To_Custom_Depth_Buffer; // 0xCE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_42DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Shells_Socket_Name;                                // 0xCE4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class En_ShellTypes_01                  ShellTypeSelect;                                   // 0xCEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shells_Spawn_Rate_Scale;                           // 0xCF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShellsRotationRate;                                // 0xCF4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Velocity;                                   // 0xD00(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Gravity;                                    // 0xD0C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Lifetime;                                   // 0xD18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Size;                                       // 0xD1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Time_Dilation;                              // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Target_Scope_Vignette_Blur_Screen_Percentage;      // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scope_Camera_Offset_Amount;                        // 0xD30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SmallShells;                                       // 0xD34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MediumShells;                                      // 0xD35(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LargeShells;                                       // 0xD36(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShotgunShells;                                     // 0xD37(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnergyShells;                                      // 0xD38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Inherit_Parent_Velocity;                           // 0xD3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Radius;                                // 0xD40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Height;                                // 0xD44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugShellsSocket_;                                // 0xD48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_2_Post_Processes_For_the_Scope;                // 0xD49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_42E1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_ScopeZoomIn;                                 // 0xD50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_ScopeZoomOut;                                // 0xD58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Alteration_Ambient_PS;                             // 0xD60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ReticleHUDElementTags;                             // 0xD68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_Wind_Enabled;                                   // 0xD88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       MuzzleWindParticleSystem;                          // 0xD90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem1P;                            // 0xD98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldHideReticleAfterDelay;                       // 0xDA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_Ranged_Generic_Athena_C* GetDefaultObj();

	void HandlePawnAndWeaponVisFor1PTargeting(bool IsTargeting, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
	void ShowReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void HideReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void HideIronSightsMesh();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue);
	void ActivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue);
	void ActivateShellsFX(bool Bool);
	void DeactivateShellsFX(bool CallFunc_IsActive_ReturnValue);
	void SetupShellFX(bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void UpdateShellEmittersFX(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8);
	void Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection, bool K2Node_SwitchEnum_CmpSuccess);
	void Muzzle_Flash_FX(bool Persistent_Fire, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_GetMuzzleLocation_ReturnValue, bool CallFunc_UseFirstPersonTargeting_ReturnValue, bool CallFunc_IsUsingScope_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UParticleSystemComponent* K2Node_Select_Default, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult);
	void SetWpnRarity();
	void AddRandomScale(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1);
	void UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2);
	void AnimateScopePostProcess__FinishedFunc();
	void AnimateScopePostProcess__UpdateFunc();
	void OnLoaded_43F549264BB135D3D385D4BB5846412A(class UObject* Loaded);
	void OnLoaded_109F12F046377B483CA7FF92A795CBD2(class UObject* Loaded);
	void OnLoaded_65280D504DA982E453E39BA22D9D1643(class UObject* Loaded);
	void OnLoaded_351A9D71483BD9CF417705946595CB08(class UObject* Loaded);
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
	void HideGunMesh();
	void ShowGunMesh();
	void HideWeapon();
	void ShowWeapon();
	void ExecuteUbergraph_B_Ranged_Generic_Athena(int32 EntryPoint, float CallFunc_GetPI_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetADSTransitionInTime_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, bool CallFunc_UseFirstPersonTargeting_ReturnValue, enum class EFortReloadFXState K2Node_Event_ReloadStage, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_MathExpression_ReturnValue, bool K2Node_MathExpression_ReturnValue_1, bool K2Node_Event_bNewIsTargeting, bool CallFunc_IsValid_ReturnValue, TArray<class AFortAIPawn*>& CallFunc_GetAllActorsOfClass_OutActors, bool K2Node_CustomEvent_Enable_Or_Disable, int32 K2Node_CustomEvent_StencilBufferValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UFortAlterationItemDefinition* K2Node_Event_NewAlteration, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, bool CallFunc_IsAssetNull_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue_2, bool CallFunc_IsAssetNull_ReturnValue_3, float CallFunc_GetTimeToNextFire_ReturnValue, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UObject* Temp_object_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetOrLoadSynchronously_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_Enable_1, int32 K2Node_CustomEvent_TargetLimit_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_CustomEvent_Enable, int32 K2Node_CustomEvent_TargetLimit, class UObject* Temp_object_Variable_1, int32 CallFunc_SelectInt_ReturnValue_1, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue, bool CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess_3, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_UseScopeTargeting_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_5, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_3, class APawn* CallFunc_GetInstigator_ReturnValue_4, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_3, bool K2Node_DynamicCast_bSuccess_6, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_4, bool K2Node_DynamicCast_bSuccess_7, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, bool CallFunc_UseScopeTargeting_ReturnValue_2, bool K2Node_Event_bVisible, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_GetRenderingDetailMode_ReturnValue, int32 CallFunc_GetRenderingDetailMode_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UObject* Temp_object_Variable_2, class UObject* K2Node_CustomEvent_Loaded_2, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_2, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_BooleanAND_ReturnValue_2, class UObject* Temp_object_Variable_3, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_3, bool K2Node_DynamicCast_bSuccess_9, class UObject* K2Node_CustomEvent_Loaded_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AFortAIPawn* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsDedicatedServer_ReturnValue_2, float CallFunc_Lerp_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_VSize_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3);
};

}


