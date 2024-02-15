#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x301 (0x569 - 0x268)
// AnimBlueprintGeneratedClass AnimBP_FlintLock_Pistol.AnimBP_FlintLock_Pistol_C
class UAnimBP_FlintLock_Pistol_C : public UAnimInstance
{
public:
	uint8                                        Pad_4C2F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_78E457CD4FA347636C0E4B99073F90B7; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_89B48AA240F59464A07BC7AE85623A01; // 0x2A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_48458F3843C60AC2FE87E880C4CE12E5; // 0x2F0(0x78)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1A993D864CE39B7BA0C34985C9E61D28; // 0x368(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8D7672404D3672B17EF1DFBF56215101; // 0x420(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6BD6734B44645281D411539B6AB2389D; // 0x448(0xB0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3BBD5E7C4EB7E99E66EC0A8F537242E5; // 0x4F8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_D22BE5844FA9E9BD82FA838E3B2A338D; // 0x520(0x48)(None)
	enum class EFortCustomGender                 Gender;                                            // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimBP_FlintLock_Pistol_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_FlintLock_Pistol(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Pistol_Flintlock_Athena_C* K2Node_DynamicCast_AsB_Pistol_Flintlock_Athena, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue);
};

}


