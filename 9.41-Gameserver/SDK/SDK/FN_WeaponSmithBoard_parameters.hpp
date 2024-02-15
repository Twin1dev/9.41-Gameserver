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

// 0x79 (0x79 - 0x0)
// Function WeaponSmithBoard.WeaponSmithBoard_C.GetSkeletalMeshComponentForDisplaySlot
struct AWeaponSmithBoard_C_GetSkeletalMeshComponentForDisplaySlot_Params
{
public:
	struct FFortWeaponBoardDisplaySlot           DisplaySlot;                                       // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x50(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x58(0x20)(None)
	bool                                         GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess; // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function WeaponSmithBoard.WeaponSmithBoard_C.IsCrossbowMesh
struct AWeaponSmithBoard_C_IsCrossbowMesh_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CC5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWeaponItemDefinition*             CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         CallFunc_GetWeaponMeshOverride_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A0 (0x1A0 - 0x0)
// Function WeaponSmithBoard.WeaponSmithBoard_C.SetupWeaponMesh
struct AWeaponSmithBoard_C_SetupWeaponMesh_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RelativeTransform;                                 // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector                               LocalOffsetMultiplier;                             // 0x40(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWeaponItemDefinition*             CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         CallFunc_GetWeaponMeshOverride_ReturnValue;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                      CallFunc_GetBounds_ReturnValue;                    // 0x68(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x84(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x10C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_AddLocalOffset_SweepHitResult;         // 0x118(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1A (0x1A - 0x0)
// Function WeaponSmithBoard.WeaponSmithBoard_C.UpdateVisibility
struct AWeaponSmithBoard_C_UpdateVisibility_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateWeaponBoard
struct AWeaponSmithBoard_C_PopulateWeaponBoard_Params
{
public:
	enum class EWeaponSmithBoardOrganizationEnum Organization;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WeaponSmithBoard.WeaponSmithBoard_C.CameraChanged
struct AWeaponSmithBoard_C_CameraChanged_Params
{
public:
	enum class EFrontEndCamera                   NewCamera;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   OldCamera;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function WeaponSmithBoard.WeaponSmithBoard_C.OnDisplaySlotItemChanged
struct AWeaponSmithBoard_C_OnDisplaySlotItemChanged_Params
{
public:
	struct FFortWeaponBoardDisplaySlot           DisplaySlot;                                       // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UFortAccountItem*                      Item;                                              // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function WeaponSmithBoard.WeaponSmithBoard_C.ExecuteUbergraph_WeaponSmithBoard
struct AWeaponSmithBoard_C_ExecuteUbergraph_WeaponSmithBoard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Temp_struct_Variable;                              // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponSmithBoardOrganizationEnum K2Node_CustomEvent_Organization;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   K2Node_CustomEvent_NewCamera;                      // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   K2Node_CustomEvent_OldCamera;                      // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortWeaponBoardDisplaySlot           K2Node_Event_DisplaySlot;                          // 0x30(0x50)(NoDestructor)
	class UFortAccountItem*                      K2Node_Event_Item;                                 // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCrossbowMesh_Result;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshComponentForDisplaySlot_SkeletalMeshComponent; // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0xA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CDC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Select_Default_1;                           // 0xC0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x100(0x10)(ZeroConstructor, NoDestructor)
};

}
}


