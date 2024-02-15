#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4E0 - 0x4E0)
// Class Water.WaterSplineComponent
class UWaterSplineComponent : public USplineComponent
{
public:

	static class UClass* StaticClass();
	static class UWaterSplineComponent* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class Water.WaterSplineMetadata
class UWaterSplineMetadata : public USplineMetadata
{
public:
	struct FInterpCurveFloat                     Depth;                                             // 0x28(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     Level;                                             // 0x40(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWaterSplineMetadata* GetDefaultObj();

};

}


