#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0xE44 - 0xDF0)
// BlueprintGeneratedClass B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C
class AB_Shotgun_Break_Athena_C : public AB_Shotgun_Standard_Athena_C
{
public:
	bool                                         Debug;                                             // 0xDF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FXTraceYawFullAngle;                               // 0xDF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FXTracePitchFullAngle;                             // 0xDF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndOfCenterFXTrace;                                // 0xDFC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       AllFXTraceEndPoints;                               // 0xE08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               CurrentFXTraceEnd;                                 // 0xE18(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentFXTraceWasHit;                              // 0xE24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       AllFXTracerSpawnPoints;                            // 0xE28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         SpawnTracersInsteadOfDummyImpactFX;                // 0xE38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MysteriousRangeBufferForTracers;                   // 0xE3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RangeLong;                                         // 0xE40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Shotgun_Break_Athena_C* GetDefaultObj();

};

}


