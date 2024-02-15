#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3B0 - 0x3A8)
// WidgetBlueprintGeneratedClass ActivatableMovieWidget.ActivatableMovieWidget_C
class UActivatableMovieWidget_C : public UFortActivatableVideoPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UActivatableMovieWidget_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_ActivatableMovieWidget(int32 EntryPoint);
};

}


