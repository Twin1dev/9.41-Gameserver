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

// 0xBC (0xBC - 0x0)
// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.SpawnEmittersAttachedToWheels
struct AGCN_Loop_Ice_Wheels_C_SpawnEmittersAttachedToWheels_Params
{
public:
	TArray<class FName>                          Sockets;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USceneComponent*                       AttachToComponent;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoOffsets;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       EmitterTemplate;                                   // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleMult;                                         // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UParticleSystemComponent*>      SpawnedEmitters1;                                  // 0x30(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<class UParticleSystemComponent*>      SpawnedEmitters;                                   // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	float                                        Temp_float_Variable;                               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62CE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_2;                             // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x7C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SelectVector_ReturnValue_1;               // 0x88(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue;           // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnLoopingStart
struct AGCN_Loop_Ice_Wheels_C_OnLoopingStart_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      ParticleComponents;                                // 0xC0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xD0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0xF0 (0xF0 - 0x0)
// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnRemoval
struct AGCN_Loop_Ice_Wheels_C_OnRemoval_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      ParticleComponents;                                // 0xC0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xD0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                          BurstCameraShakeInstance;                          // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x380 (0x380 - 0x0)
// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ExecuteUbergraph_GCN_Loop_Ice_Wheels
struct AGCN_Loop_Ice_Wheels_C_ExecuteUbergraph_GCN_Loop_Ice_Wheels_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVehicleVelocity_ReturnValue;           // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_VehicleIsInAir_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_MyTarget_1;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters_1;                         // 0x40(0xB8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      K2Node_Event_ParticleComponents_1;                 // 0xF8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents_1;                    // 0x108(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class AActor*                                K2Node_Event_MyTarget;                             // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x120(0xB8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      K2Node_Event_ParticleComponents;                   // 0x1D8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents;                      // 0x1E8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                          K2Node_Event_BurstCameraShakeInstance;             // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           K2Node_Event_BurstDecalInstance;                   // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaSKVehicle*                  K2Node_DynamicCast_AsFort_Athena_SKVehicle;        // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;       // 0x218(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaSKPushVehicle*              K2Node_DynamicCast_AsFort_Athena_SKPush_Vehicle;   // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x250(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_Array_Get_Item;                           // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshComponent_ReturnValue;     // 0x280(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaFerretVehicle*              K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle;   // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaSKPushVehicle*              K2Node_DynamicCast_AsFort_Athena_SKPush_Vehicle_1; // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_Array_Get_Item_1;                         // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x2C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x2D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>      CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters1; // 0x2D8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class UParticleSystemComponent*>      CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters1_1; // 0x2E8(0x10)(ZeroConstructor, ReferenceParm)
	class UParticleSystemComponent*              CallFunc_Array_Get_Item_2;                         // 0x2F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>      CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters1_2; // 0x300(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x314(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UParticleSystemComponent*>      CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters1_3; // 0x318(0x10)(ZeroConstructor, ReferenceParm)
	class UParticleSystemComponent*              CallFunc_Array_Get_Item_3;                         // 0x328(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UParticleSystemComponent*>      CallFunc_SpawnEmittersAttachedToWheels_SpawnedEmitters1_4; // 0x338(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x348(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x358(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_DynamicCast_AsActor;                        // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x370(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


