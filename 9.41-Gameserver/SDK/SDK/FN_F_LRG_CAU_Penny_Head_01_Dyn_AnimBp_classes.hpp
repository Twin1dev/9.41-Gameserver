#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x478 - 0x3D0)
// AnimBlueprintGeneratedClass F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C
class UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_CD7E1EF9420B7BB62D1960BB468B9A0F; // 0x3D8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_C2211EFB427B44656937CB978CEBA74F; // 0x448(0x30)(None)

	static class UClass* StaticClass();
	static class UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp(int32 EntryPoint);
};

}


