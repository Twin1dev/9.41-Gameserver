#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF60 (0x1290 - 0x330)
// AnimBlueprintGeneratedClass ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C
class UExplosvieBow_AnimBP_C : public UFortBowWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BEC95E3847BCA5DB370AE8ABF0883FFA; // 0x338(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_0048D06C4B06229328DED9A70334D916; // 0x368(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D1D9434544B3EFE25F8410BCE4E510FA; // 0x3B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_CD361B0F41F56F7919BDE0A08A9DD90E; // 0x3D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5569B29E412C00E84CD1E2B798971FF7; // 0x400(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8A1C46354E3AAC7F118D258387F50A2E; // 0x428(0xE0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1AA4919A4039C74A05518DB7B6325FDE; // 0x508(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_71C8585B47FF4C60C6594DA412BB50EB; // 0x5B8(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_0258644644EDB11CABB0879AD850DC73; // 0x630(0xB0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_FBA65F2D47DF3DB251B80CB1F4133A0A; // 0x6E0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6A596766412BE2A81058678C2D401F3A; // 0x7A8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7C5179394BD6E157890D04BC08D7E61A; // 0x820(0x78)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_DFE1FB17478B266421599093D1ECDBA0; // 0x898(0x188)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_A1A55ACB4B6C73CEE5AE1EB997460B5C; // 0xA20(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_CBED26EA49583696D6BB15A368661896; // 0xAE8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_D23A17544DB04EEBA1FF1A84FCF2D543; // 0xBC8(0xE0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_C090A94F4DBB1D8DBA0CF88C89B0517C; // 0xCA8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_750C650D41FA05EF3BC699A6459FD9B5; // 0xD70(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_30DDA7BE41CEE21E5249778B63236462; // 0xDA0(0x18)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_23BC57494C35D2C151B4849C843A7344; // 0xDB8(0xA0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_9003208F4239CCAB108D3C821C9D39DF; // 0xE58(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_C5143B384C380AC5084A07AA178566D7; // 0xF20(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FA9D7A944BC2BD1564E64D871613C1AE; // 0x1000(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_45A789F449DD3F30227200BC768F37C4; // 0x1078(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_A3DA7738409B3EBB16160DAEDF118026; // 0x10A8(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_E0F7654D426D0C074EA7CC9A00EB5C6A; // 0x1158(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_016F01A44AA3EA15944E679DDC2B14B4; // 0x1218(0x78)(None)

	static class UClass* StaticClass();
	static class UExplosvieBow_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ExplosvieBow_AnimBP(int32 EntryPoint);
};

}


