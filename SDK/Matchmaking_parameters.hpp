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

// 0x10 (0x10 - 0x0)
// Function Matchmaking.DedicatedServerMatchmakingBeaconClient.ReserveForMatch
struct ADedicatedServerMatchmakingBeaconClient_ReserveForMatch_Params
{
public:
	TArray<struct FDedicatedServerMatchmakingBeaconClientMatchMember> MatchMembers;                                      // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Matchmaking.DedicatedServerMatchmakingBeaconClient.OnReserveForMatchResult
struct ADedicatedServerMatchmakingBeaconClient_OnReserveForMatchResult_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Matchmaking.DedicatedServerMatchmakingBeaconHost.IsReserved
struct ADedicatedServerMatchmakingBeaconHost_IsReserved_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Matchmaking.DedicatedServerMatchmakingBeaconHost.IsMatchPlaying
struct ADedicatedServerMatchmakingBeaconHost_IsMatchPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


