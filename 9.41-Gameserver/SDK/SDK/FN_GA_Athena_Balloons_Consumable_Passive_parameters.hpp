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

// 0x61 (0x61 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.OnRep_CurrentBalloonsInUse
struct UGA_Athena_Balloons_Consumable_Passive_C_OnRep_CurrentBalloonsInUse_Params
{
public:
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsZiplining_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSkydiving_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue_1;                // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFlying_ReturnValue;                     // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsWalking_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue_2;                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.EventReceived_684C809A405BA666E6F4DCBBFAAC0C06
struct UGA_Athena_Balloons_Consumable_Passive_C_EventReceived_684C809A405BA666E6F4DCBBFAAC0C06_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.EventReceived_999DFDD44F82168D93090C90BD083650
struct UGA_Athena_Balloons_Consumable_Passive_C_EventReceived_999DFDD44F82168D93090C90BD083650_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.EventReceived_133EAF3446D2EDB5A82D2FB0A6CB119A
struct UGA_Athena_Balloons_Consumable_Passive_C_EventReceived_133EAF3446D2EDB5A82D2FB0A6CB119A_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.EventReceived_FC86BDF64A79027ED9EB28AEB1962691
struct UGA_Athena_Balloons_Consumable_Passive_C_EventReceived_FC86BDF64A79027ED9EB28AEB1962691_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.ReleaseBalloon
struct UGA_Athena_Balloons_Consumable_Passive_C_ReleaseBalloon_Params
{
public:
	bool                                         ReleaseAll;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.BalloonShot
struct UGA_Athena_Balloons_Consumable_Passive_C_BalloonShot_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x20(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Momentum;                                          // 0x40(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.EnteredVehicle
struct UGA_Athena_Balloons_Consumable_Passive_C_EnteredVehicle_Params
{
public:
	int32                                        SeatIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.MovementModeChangeFloat
struct UGA_Athena_Balloons_Consumable_Passive_C_MovementModeChangeFloat_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.AtMaxHeight
struct UGA_Athena_Balloons_Consumable_Passive_C_AtMaxHeight_Params
{
public:
	int32                                        RelationToCeiling;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.K2_OnEndAbility
struct UGA_Athena_Balloons_Consumable_Passive_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC28 (0xC28 - 0x0)
// Function GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C.ExecuteUbergraph_GA_Athena_Balloons_Consumable_Passive
struct UGA_Athena_Balloons_Consumable_Passive_C_ExecuteUbergraph_GA_Athena_Balloons_Consumable_Passive_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x8(0xB0)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                    Temp_struct_Variable;                              // 0xC8(0xB0)(None)
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x184(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_52BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1A4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_52BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    Temp_struct_Variable_1;                            // 0x1B8(0xB0)(None)
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_1;         // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_ReleaseAll;                     // 0x27A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52BF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_2;         // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingGameplayActor*                CallFunc_Array_Get_Item;                           // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Athena_Balloons_C*                K2Node_DynamicCast_AsBGA_Athena_Balloons;          // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x2A4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52C2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_CustomEvent_Payload_3;                      // 0x2C8(0xB0)(None)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x37C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue_2;          // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x38C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_1;                         // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_2;       // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    Temp_struct_Variable_2;                            // 0x3A0(0xB0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_CustomEvent_Payload_1;                      // 0x458(0xB0)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x508(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x520(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x550(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x55C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x568(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x574(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_52C6[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x590(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Athena_Balloons_C*                CallFunc_FinishSpawningActor_ReturnValue;          // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_DamagedActor;                   // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Damage;                         // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_CustomEvent_InstigatedBy;                   // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_DamageCauser;                   // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_HitLocation;                    // 0x5F8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_CustomEvent_FHitComponent;                  // 0x608(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_BoneName;                       // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Momentum;                       // 0x618(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x624(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingGameplayActor*                K2Node_DynamicCast_AsBuilding_Gameplay_Actor;      // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52CB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x634(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_OnSameTeam_ReturnValue;                   // 0x639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52CC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x63C(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x64C(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x65C(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x66C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_52CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue_3;          // 0x680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_PlayerController_C*            K2Node_DynamicCast_AsAthena_Player_Controller;     // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x6A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_SeatIndex;                      // 0x6A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            K2Node_CustomEvent_Character;                      // 0x6A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     K2Node_CustomEvent_PrevMovementMode;               // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_PreviousCustomMode;             // 0x6B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x6B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x6B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x6C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x6C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    Temp_struct_Variable_3;                            // 0x6C8(0xB0)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x77C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingGameplayActor*                CallFunc_Array_Get_Item_2;                         // 0x780(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Athena_Balloons_C*                K2Node_DynamicCast_AsBGA_Athena_Balloons_1;        // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x799(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x79A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_RelationToCeiling;              // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x7A0(0x40)(ContainsInstancedReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x7E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x7F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x7F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x7F8(0x28)(None)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x820(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x830(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x838(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x840(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x848(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_1;            // 0x854(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingGameplayActor*                CallFunc_Array_Get_Item_3;                         // 0x858(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x860(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x864(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_2;           // 0x865(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52D9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Athena_Balloons_C*                K2Node_DynamicCast_AsBGA_Athena_Balloons_2;        // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x871(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x872(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DA[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x880(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Balloons_Consumable_Rope_C*       CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x8B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_CustomEvent_Payload_2;                      // 0x8C0(0xB0)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x974(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x984(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_3;         // 0x988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumActiveBalloons_ReturnValue;         // 0x990(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x994(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x998(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x99C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x9A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x9A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x9A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x9AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x9AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x9AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x9B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x9B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x9B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x9BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Balloons_Consumable_Rope_C*       K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope; // 0x9C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0x9D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue_1;                // 0xA00(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0xA08(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0xA14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0xA20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInVehicle_ReturnValue_1;                // 0xA2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0xA30(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0xA60(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0xAE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0xAEC(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0xAFC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0xB0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0xB0D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;         // 0xB10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0xB20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0xB28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0xB29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaFerretVehicle*              K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle;   // 0xB30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0xB38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_1;       // 0xB40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_1;     // 0xB50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xB58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaSKPushCannon*               K2Node_DynamicCast_AsFort_Athena_SKPush_Cannon;    // 0xB60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0xB68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingGameplayActor*                CallFunc_Array_Get_Item_4;                         // 0xB70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Athena_Balloons_C*                K2Node_DynamicCast_AsBGA_Athena_Balloons_3;        // 0xB78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0xB80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0xB81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortOctopusVehicle*                   K2Node_DynamicCast_AsFort_Octopus_Vehicle;         // 0xB88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0xB90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0xB91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Balloons_Consumable_Rope_C*       K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_1; // 0xB98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0xBA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Balloons_Consumable_Rope_C*       K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_2; // 0xBA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0xBB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Balloons_Consumable_Rope_C*       K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_3; // 0xBB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0xBC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Balloons_Consumable_Rope_C*       K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_4; // 0xBC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0xBD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Balloons_Consumable_Rope_C*       K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_5; // 0xBD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Balloons_Consumable_Rope_C*       K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_6; // 0xBE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_17;                    // 0xBF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Balloons_Consumable_Rope_C*       K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_7; // 0xBF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_18;                    // 0xC00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABGA_Balloons_Consumable_Rope_C*       K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_8; // 0xC08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_19;                    // 0xC10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0xC11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0xC18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0xC20(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


