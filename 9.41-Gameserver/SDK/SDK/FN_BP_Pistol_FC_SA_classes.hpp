#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass BP_Pistol_FC_SA.BP_Pistol_FC_SA_C
class UBP_Pistol_FC_SA_C : public UAnimInstance
{
public:
	uint8                                        Pad_4691[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_59F2F7924C02FD42668752B6AD5C5D7D; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3C404E374989FC3E37A4538744D810DA; // 0x2A8(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_16F5A0174D756BCD3A56E2A54C593E88; // 0x2F0(0x18)(None)

	static class UClass* StaticClass();
	static class UBP_Pistol_FC_SA_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_Pistol_FC_SA(int32 EntryPoint);
};

}


