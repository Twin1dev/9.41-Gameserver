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

// 0xAC (0xAC - 0x0)
// Function GA_Athena_Throw_SneakySnowman.GA_Athena_Throw_SneakySnowman_C.SpawnLocationAndRotation
struct UGA_Athena_Throw_SneakySnowman_C_SpawnLocationAndRotation_Params
{
public:
	struct FVector                               OutLoc;                                            // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OutRot;                                            // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSoftClassPath                        GolfCart;                                          // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_135[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetVehicleActor_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsActor;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_137[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_138[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SpawnLocationAndRotation_OutLoc;          // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SpawnLocationAndRotation_OutRot;          // 0x7C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x88(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x94(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0xA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function GA_Athena_Throw_SneakySnowman.GA_Athena_Throw_SneakySnowman_C.ExecuteUbergraph_GA_Athena_Throw_SneakySnowman
struct UGA_Athena_Throw_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Throw_SneakySnowman_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


