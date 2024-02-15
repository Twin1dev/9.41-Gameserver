#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x720 (0xAF0 - 0x3D0)
// AnimBlueprintGeneratedClass F_MED_Weaponsmith_FaceAcc_AnimBP.F_MED_Weaponsmith_FaceAcc_AnimBP_C
class UF_MED_Weaponsmith_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_6ADB1E924A69A9B47261728A57C90322; // 0x3D8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_B668EC764724C9E704DB9882F844B344; // 0x408(0x140)(ContainsInstancedReference)
	uint8                                        Pad_33FB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_00F0BAAF4611AD82C8B7BCBF6571CD1D; // 0x550(0x560)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_88458D474A312ACB930E6A9E91A193D7; // 0xAB0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_39E082974576B23B2FC63890B520AFA1; // 0xAD0(0x20)(None)

	static class UClass* StaticClass();
	static class UF_MED_Weaponsmith_FaceAcc_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Weaponsmith_FaceAcc_AnimBP(int32 EntryPoint);
};

}


