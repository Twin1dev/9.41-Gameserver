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

// 0x8 (0x8 - 0x0)
// Function GA_Athena_AppleSauce_GrenadeWithTrajectory.GA_Athena_AppleSauce_GrenadeWithTrajectory_C.AthenaProjectileSpawned
struct UGA_Athena_AppleSauce_GrenadeWithTrajectory_C_AthenaProjectileSpawned_Params
{
public:
	class AFortProjectileBase*                   ProjectileReference;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function GA_Athena_AppleSauce_GrenadeWithTrajectory.GA_Athena_AppleSauce_GrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_AppleSauce_GrenadeWithTrajectory
struct UGA_Athena_AppleSauce_GrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSauce_GrenadeWithTrajectory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortProjectileBase*                   K2Node_Event_ProjectileReference;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Prj_Athena_AppleSauce_Grenade_C*    K2Node_DynamicCast_AsB_Prj_Athena_Apple_Sauce_Grenade; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x20(0x88)(None)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpecFromAbility_ReturnValue; // 0xA8(0x88)(None)
};

}
}


