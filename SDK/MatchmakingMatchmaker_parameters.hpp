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

// 0x30 (0x30 - 0x0)
// Function MatchmakingMatchmaker.Matchmaker.SetReadyState
struct AMatchmaker_SetReadyState_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReady;                                          // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E18[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function MatchmakingMatchmaker.Matchmaker.OnProgress
struct AMatchmaker_OnProgress_Params
{
public:
	struct FMatchmakerProgressInfo               ProgressInfo;                                      // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MatchmakingMatchmaker.Matchmaker.OnError
struct AMatchmaker_OnError_Params
{
public:
	class FString                                MatchmakingError;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MatchmakingMatchmaker.Matchmaker.IsMatchmaking
struct AMatchmaker_IsMatchmaking_Params
{
public:
	bool                                         bIsMatchmaking;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function MatchmakingMatchmaker.Matchmaker.GetReadyState
struct AMatchmaker_GetReadyState_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      TargetUserId;                                      // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReady;                                          // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function MatchmakingMatchmaker.Matchmaker.GetMatchmakingStatus
struct AMatchmaker_GetMatchmakingStatus_Params
{
public:
	struct FUniqueNetIdRepl                      UserIdRepl;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMatchmakerProgressInfo               ProgressInfo;                                      // 0x28(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function MatchmakingMatchmaker.MatchmakerSubmitMatchResults.SubmitMatchResults
struct UMatchmakerSubmitMatchResults_SubmitMatchResults_Params
{
public:
	class UMatchmakerSubsystem*                  Subsystem;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x8(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                TeamScores;                                        // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UMatchmakerSubmitMatchResults*         ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MatchmakingMatchmaker.MatchmakerSubsystem.GetTeamAndSlotForPlayerOnServer
struct UMatchmakerSubsystem_GetTeamAndSlotForPlayerOnServer_Params
{
public:
	class APlayerState*                          TargetPlayerState;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E20[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Team;                                              // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Slot;                                              // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E21[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MatchmakingMatchmaker.MatchmakerSubsystem.GetTeamAndSlotForPlayer
struct UMatchmakerSubsystem_GetTeamAndSlotForPlayer_Params
{
public:
	class APlayerController*                     LocalPlayerController;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          TargetPlayerState;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E22[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Team;                                              // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Slot;                                              // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E23[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


