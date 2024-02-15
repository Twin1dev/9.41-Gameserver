#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x730 - 0x6F8)
// BlueprintGeneratedClass BGA_AppleSauce_Zone.BGA_AppleSauce_Zone_C
class ABGA_AppleSauce_Zone_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     Capsule;                                           // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Radius;                                            // 0x710(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABGA_AppleSauce_Zone_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BGA_AppleSauce_Zone(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


