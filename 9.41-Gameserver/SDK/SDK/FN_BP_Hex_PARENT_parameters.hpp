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

// 0x7 (0x7 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UpdateFromFrontendCamera
struct ABP_Hex_PARENT_C_UpdateFromFrontendCamera_Params
{
public:
	enum class EFrontEndCamera                   CameraMode;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HasPinnedQuest
struct ABP_Hex_PARENT_C_HasPinnedQuest_Params
{
public:
	bool                                         Pinned;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x91 (0x91 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh
struct ABP_Hex_PARENT_C_HandleUpdatingBannerMesh_Params
{
public:
	class USceneComponent*                       Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              CompletedQuest;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Material_Instance_Dynamic;                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x18(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         HasCompletedQuest;                                 // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidNetID_ReturnValue;                 // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0x68(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x195 (0x195 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert
struct ABP_Hex_PARENT_C_HandleMissionAlert_Params
{
public:
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue;         // 0x0(0x48)(None)
	struct FGameplayTagContainer                 CallFunc_GetMissionAlertVisualTags_ReturnValue;    // 0x48(0x20)(None)
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue_1;       // 0x68(0x48)(None)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetMissionAlertVisualTags_ReturnValue_1;  // 0xB8(0x20)(None)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue_1; // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetMissionAlertVisualTags_ReturnValue_2;  // 0xE0(0x20)(None)
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue_2;       // 0x100(0x48)(None)
	struct FGameplayTagContainer                 CallFunc_GetMissionAlertVisualTags_ReturnValue_3;  // 0x148(0x20)(None)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue_2; // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E58[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTileMissionAlertRewardClaimed_ReturnValue; // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionAlertIndicator_C*              K2Node_DynamicCast_AsMission_Alert_Indicator;      // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTileHidden_ReturnValue;                 // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMissionAlertTile_ReturnValue;           // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x193(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings
struct ABP_Hex_PARENT_C_GroundSliceSettings_Params
{
public:
	class UMaterialInstanceDynamic*              SourceMaterial;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TileTypeA;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TileTypeB;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileIsSameRegionA;                                 // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileIsSameRegionB;                                 // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileIsHiddenA;                                     // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileIsHiddenB;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileExistsA;                                       // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TileExistsB;                                       // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript
struct ABP_Hex_PARENT_C_UserConstructionScript_Params
{
public:
	struct FTransform                            Temp_struct_Variable;                              // 0x0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnLoaded_192496DB41CC2100CC1C729DB594CEF8
struct ABP_Hex_PARENT_C_OnLoaded_192496DB41CC2100CC1C729DB594CEF8_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged
struct ABP_Hex_PARENT_C_HandleTeamPowerChanged_Params
{
public:
	int32                                        TeamPower;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PersonalPower;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged
struct ABP_Hex_PARENT_C_HandleFrontendCameraChanged_Params
{
public:
	enum class EFrontEndCamera                   NewCamera;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   OldCamera;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning
struct ABP_Hex_PARENT_C_MissionLightning_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmitterTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x18(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff
struct ABP_Hex_PARENT_C_MissionLightningOff_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmitterTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ParticleTime;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x1C(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Direction;                                         // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.AsyncUpdateBanner
struct ABP_Hex_PARENT_C_AsyncUpdateBanner_Params
{
public:
	class UMaterialInstanceDynamic*              Material_Instance_Dynamic;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Unique_Net_Id;                                     // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x3E9 (0x3E9 - 0x0)
// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT
struct ABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMissionContentDifficultyLevel_ReturnValue; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_TeamPower;                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_PersonalPower;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTilePlayable_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   K2Node_CustomEvent_NewCamera;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   K2Node_CustomEvent_OldCamera;                      // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E70[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        CallFunc_IsTileValidForMarkedQuest_OutMarkedQuest; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTileValidForMarkedQuest_ReturnValue;    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasValidMissionData_ReturnValue;          // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E71[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATheaterCamera_Blueprint_C*>    CallFunc_GetAllActorsOfClass_OutActors;            // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTileHidden_ReturnValue;                 // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTileLocked_ReturnValue;                 // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E72[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue_1;                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                CallFunc_GetCurrentlyViewedAccountInfo_Result;     // 0xB0(0x34)(NoDestructor)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E74[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Get_Conning_Color_From_Difficulty_Value_Difficulty_Linear_Color; // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Conning_Color_From_Difficulty_Value_Success; // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Get_Conning_Color_From_Difficulty_Value_TooltipText; // 0x100(0x18)(None)
	int32                                        CallFunc_Get_Conning_Color_From_Difficulty_Value_DifficultyValue; // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue_2;                 // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue_1;        // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x12C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E78[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x158(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Temp_object_Variable_1;                            // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATheaterCamera_Blueprint_C*            CallFunc_Array_Get_Item;                           // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_2;                            // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Conning_Color_For_Specific_Difficulty_Difficulty_Linear_Color; // 0x188(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Conning_Color_For_Specific_Difficulty_Invalid; // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E7B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue_3;                 // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              K2Node_Select_Default;                             // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1B4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_4;                 // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1D8(0x10)(ZeroConstructor, NoDestructor)
	enum class EFrontEndCamera                   CallFunc_GetFrontEndCamera_ReturnValue;            // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_EventName_1;                    // 0x1EC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_EmitterTime_1;                  // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Location_1;                     // 0x1F8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Velocity_1;                     // 0x204(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_EventName;                      // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_EmitterTime;                    // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ParticleTime;                   // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x220(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Velocity;                       // 0x22C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Direction;                      // 0x238(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_5;                 // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              K2Node_CustomEvent_Material_Instance_Dynamic;      // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_Unique_Net_Id;                  // 0x260(0x28)(HasGetValueTypeHash)
	struct FFortHomeBaseInfo                     CallFunc_GetHomeBaseInfoForPlayer_Result;          // 0x288(0x40)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue; // 0x2D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue; // 0x2E8(0x28)(HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue; // 0x310(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x324(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsTeamRatingDataValid_ReturnValue;        // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x338(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x340(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x34C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetMissionDefinitionIcon_OutMissionDefIcon; // 0x350(0x88)(None)
	bool                                         CallFunc_GetMissionDefinitionIcon_ReturnValue;     // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              K2Node_DynamicCast_AsTexture;                      // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


