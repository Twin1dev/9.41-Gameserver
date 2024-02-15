#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C
class UBP_Auto_Shotgun_Drum_Side_Action_C : public UAnimInstance
{
public:
	uint8                                        Pad_1D1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_7EA7D37645F443897F10498323E528F7; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_64A40914450FCFA8B6BB00AA8DAB6F04; // 0x2A8(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_9AFCD47E4FA0ED23378DEABB5751407C; // 0x2F0(0x18)(None)

	static class UClass* StaticClass();
	static class UBP_Auto_Shotgun_Drum_Side_Action_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action(int32 EntryPoint);
};

}


