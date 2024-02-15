#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Lobby_Background.Frontend_Lobby_Background_C
// (Actor)

class UClass* AFrontend_Lobby_Background_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Lobby_Background_C");

	return Clss;
}


// Frontend_Lobby_Background_C Frontend_Lobby_Background.Default__Frontend_Lobby_Background_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Lobby_Background_C* AFrontend_Lobby_Background_C::GetDefaultObj()
{
	static class AFrontend_Lobby_Background_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Lobby_Background_C*>(AFrontend_Lobby_Background_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeOut__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeOut__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeIn__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeIn__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTexture*                    BackgroundImage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PresetEnvironmentName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(class UTexture* BackgroundImage, const class FString& PresetEnvironmentName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");

	Params::AFrontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature_Params Parms{};

	Parms.BackgroundImage = BackgroundImage;
	Parms.PresetEnvironmentName = PresetEnvironmentName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ExecuteUbergraph_Frontend_Lobby_Background
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_ActorBoundEvent_BackgroundImage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ActorBoundEvent_PresetEnvironmentName                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_Lobby_Background_C::ExecuteUbergraph_Frontend_Lobby_Background(int32 EntryPoint, class UTexture* K2Node_ActorBoundEvent_BackgroundImage, const class FString& K2Node_ActorBoundEvent_PresetEnvironmentName, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "ExecuteUbergraph_Frontend_Lobby_Background");

	Params::AFrontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ActorBoundEvent_BackgroundImage = K2Node_ActorBoundEvent_BackgroundImage;
	Parms.K2Node_ActorBoundEvent_PresetEnvironmentName = K2Node_ActorBoundEvent_PresetEnvironmentName;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


