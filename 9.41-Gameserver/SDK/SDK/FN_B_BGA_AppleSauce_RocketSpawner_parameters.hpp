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
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.HandleBinding
struct AB_BGA_AppleSauce_RocketSpawner_C_HandleBinding_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnBuildingActorInitialized
struct AB_BGA_AppleSauce_RocketSpawner_C_OnBuildingActorInitialized_Params
{
public:
	enum class EFortBuildingInitializationReason InitializationReason;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuildingPersistentState      BuildingPersistentState;                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner
struct AB_BGA_AppleSauce_RocketSpawner_C_ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5295[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Actor;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x10(0xB0)(None)
	enum class EFortBuildingInitializationReason K2Node_Event_InitializationReason;                 // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuildingPersistentState      K2Node_Event_BuildingPersistentState;              // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5296[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


