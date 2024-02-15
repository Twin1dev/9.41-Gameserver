#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass Military_Launcher_Sk_animBP.Military_Launcher_Sk_animBP_C
class UMilitary_Launcher_Sk_animBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_504F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_A7FEA80847975222BB6C1D92D89BD944; // 0x278(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_717BB9D64402F05E800B1BB5F80076A5; // 0x2A8(0x18)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_D51EB8ED4CA9A117A59091AFD524A65D; // 0x2C0(0x48)(None)

	static class UClass* StaticClass();
	static class UMilitary_Launcher_Sk_animBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Military_Launcher_Sk_animBP(int32 EntryPoint);
};

}


