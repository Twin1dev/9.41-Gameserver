#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_HuskDance.BPI_HuskDance_C
class IBPI_HuskDance_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_HuskDance_C* GetDefaultObj();

	void OnEndDance();
	void OnBeginDance();
};

}


