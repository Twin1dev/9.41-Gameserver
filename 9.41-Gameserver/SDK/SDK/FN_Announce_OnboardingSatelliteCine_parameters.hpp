#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x11 - 0x0)
// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.IsVideoStreamed
struct AAnnounce_OnboardingSatelliteCine_C_IsVideoStreamed_Params
{
public:
	class UMediaPlayer*                          MediaPlayer;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          MediaSource;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bVideoStreamed;                                    // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleClientEvent_CinematicFinishedPlaying
struct AAnnounce_OnboardingSatelliteCine_C_HandleClientEvent_CinematicFinishedPlaying_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.ExecuteUbergraph_Announce_OnboardingSatelliteCine
struct AAnnounce_OnboardingSatelliteCine_C_ExecuteUbergraph_Announce_OnboardingSatelliteCine_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_650F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          CallFunc_IsVideoStreamed_MediaPlayer;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          CallFunc_IsVideoStreamed_MediaSource;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVideoStreamed_bVideoStreamed;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6510[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6511[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x50(0x20)(ConstParm, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x80(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6512[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x8C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6513[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIState                      CallFunc__BPGetCurrentUIState_ReturnValue;         // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6514[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue_1;                 // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6515[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMediaInfo*                        CallFunc_SpawnObject_ReturnValue;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


