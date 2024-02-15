#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.Is Creative Mode
struct AAthena_PlayerController_C_Is_Creative_Mode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCreativeModePlaylist_ReturnValue;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCreativeLTMPlaylist_ReturnValue;        // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer
struct AAthena_PlayerController_C_SetupPermissionRecheckTimer_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes
struct AAthena_PlayerController_C_LeftAllVolumes_Params
{
public:
	bool                                         bLeftVolumes;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InTempVolume;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortVolume*>                   ContainingVolumes;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortVolume*                           CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetPlayerPawn_ReturnValue;                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortVolumeManager*                    CallFunc_GetVolumeManager_OutVolumeManager;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVolumeValidityResult             CallFunc_GetVolumeManager_OutIsValid;              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WillVolumeDeleteAfterActorSpawn_ReturnValue; // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortVolume*>                   CallFunc_GetVolumesForLocation_Volumes;            // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_GetVolumesForLocation_ReturnValue;        // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
struct AAthena_PlayerController_C_UserConstructionScript_Params
{
public:
	class UAthenaMarkerComponent*                CallFunc_GetMarkerComponent_ReturnValue;           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D
struct AAthena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnReady_B4409EAB4038578B1EBA9DB1586489B9
struct AAthena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9_Params
{
public:
	class AFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay
struct AAthena_PlayerController_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded
struct AAthena_PlayerController_C_OnMusicPackLoaded_Params
{
public:
	class UAthenaMusicPackItemDefinition*        NewMusicPack;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnLeaveVolume
struct AAthena_PlayerController_C_OnLeaveVolume_Params
{
public:
	class AFortVolume*                           Volume;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnEnterVolume
struct AAthena_PlayerController_C_OnEnterVolume_Params
{
public:
	class AFortVolume*                           Volume;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.HandlePermissions
struct AAthena_PlayerController_C_HandlePermissions_Params
{
public:
	class AFortVolume*                           Volume;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.GrantItem
struct AAthena_PlayerController_C_GrantItem_Params
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> Item;                                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem
struct AAthena_PlayerController_C_RevokeItem_Params
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> Item;                                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction
struct AAthena_PlayerController_C_OnLocalInteraction_Params
{
public:
	class AActor*                                ReceivingActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession
struct AAthena_PlayerController_C_ReactToPawnPossession_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
struct AAthena_PlayerController_C_PlayWinEffects_Params
{
public:
	class APawn*                                 FinisherPawn;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             FinishingWeapon;                                   // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDeathCause                       DeathCause;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAudioOnly;                                        // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D9 (0x3D9 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
struct AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Temp_struct_Variable;                              // 0x8(0x20)(None)
	class UFortPlaylist*                         Temp_object_Variable;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  Temp_object_Variable_1;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue; // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FF5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortGameStateAthena*                  K2Node_CustomEvent_GameState;                      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         K2Node_CustomEvent_Playlist;                       // 0x58(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_CustomEvent_PlaylistContextTags;            // 0x60(0x20)(ConstParm)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FF6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3FF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMusicPackItemDefinition*        K2Node_CustomEvent_NewMusicPack;                   // 0xA0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue_1;               // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	class USoundBase*                            K2Node_DynamicCast_AsSound_Base;                   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortVolume*                           K2Node_Event_Volume_1;                             // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortVolume*                           K2Node_Event_Volume;                               // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0x108(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsCreativeModePlaylist_ReturnValue;       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LeftAllVolumes_bLeftVolumes;              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena_1;     // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCreativeModePlaylist_ReturnValue_1;     // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortVolume*                           K2Node_CustomEvent_Volume;                         // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsReadOnly_ReturnValue;                   // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortLevelSaveComponent*>       CallFunc_GetComponentsByClass_ReturnValue;         // 0x168(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortLevelSaveComponent*               CallFunc_Array_Get_Item;                           // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesPlayerHavePermissionToEdit_ReturnValue; // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x18E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x18F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4000[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item_1;                         // 0x198(0x28)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4001[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWorldItemDefinition*              K2Node_DynamicCast_AsFort_World_Item_Definition;   // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4002[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item;                           // 0x1E0(0x28)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2; // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput; // 0x210(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortWorldItemDefinition*              K2Node_DynamicCast_AsFort_World_Item_Definition_1; // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4003[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x22C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_K2_RemoveItemFromPlayer_ReturnValue;      // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortVolume*                           CallFunc_GetCurrentVolume_ReturnValue;             // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_ReceivingActor;                       // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPickup*                           K2Node_DynamicCast_AsFort_Pickup;                  // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4004[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4006[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x278(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4007[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_CustomEvent_PossessedPawn;                  // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_2;               // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_2;                            // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena_2;     // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4008[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWorldItemDefinition*              K2Node_DynamicCast_AsFort_World_Item_Definition_2; // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCreativeModePlaylist_ReturnValue_2;     // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4009[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1; // 0x2D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue;      // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_FinisherPawn;                         // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             K2Node_Event_FinishingWeapon;                      // 0x2F8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDeathCause                       K2Node_Event_DeathCause;                           // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bAudioOnly;                           // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x304(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x314(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x315(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetWeaponActorClass_ReturnValue;          // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual; // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsB_Ranged_Generic;        // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x342(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x343(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x345(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x348(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Creative_Mode_ReturnValue;             // 0x359(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x35A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x35B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4010[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CallFunc_GetPlayerPawn_ReturnValue;                // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortVolumeManager*                    CallFunc_GetVolumeManager_OutVolumeManager;        // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVolumeValidityResult             CallFunc_GetVolumeManager_OutIsValid;              // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4011[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x374(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4012[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortVolume*                           CallFunc_GetVolumeForLocation_ReturnValue;         // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4013[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMusicContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMusicPackItemDefinition*        CallFunc_GetEquippedMusicPack_ReturnValue;         // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_2;                 // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x3B0(0x10)(ZeroConstructor, NoDestructor)
	class USoundCue*                             CallFunc_GetVictoryStinger_ReturnValue;            // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x3C8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue_2;               // 0x3D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature
struct AAthena_PlayerController_C_PawnPossessedDispatcher__DelegateSignature_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


