#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2E8 - 0x2B0)
// Class Matchmaking.DedicatedServerMatchmakingBeaconClient
class ADedicatedServerMatchmakingBeaconClient : public AOnlineBeaconClient
{
public:
	class ADedicatedServerMatchmakingBeaconHostObject* HostStateOnServer;                                 // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DF0[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADedicatedServerMatchmakingBeaconClient* GetDefaultObj();

	void ReserveForMatch(TArray<struct FDedicatedServerMatchmakingBeaconClientMatchMember>& MatchMembers);
	void OnReserveForMatchResult(bool bWasSuccessful);
};

// 0xE0 (0x300 - 0x220)
// Class Matchmaking.DedicatedServerMatchmakingBeaconHost
class ADedicatedServerMatchmakingBeaconHost : public AActor
{
public:
	class AOnlineBeaconHost*                     Beacon;                                            // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DF1[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BeaconPort;                                        // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReservationTimeoutSeconds;                         // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireAllPlayersConnectedForMatchStart;          // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPlayerReconnections;                         // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnReservationStatusChanged;                        // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMatchReadyToStart;                               // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADedicatedServerMatchmakingBeaconHost* GetDefaultObj();

	void MatchEnded();
	bool IsReserved();
	bool IsMatchPlaying();
};

// 0x8 (0x250 - 0x248)
// Class Matchmaking.DedicatedServerMatchmakingBeaconHostObject
class ADedicatedServerMatchmakingBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	class ADedicatedServerMatchmakingBeaconHost* HostOwner;                                         // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ADedicatedServerMatchmakingBeaconHostObject* GetDefaultObj();

};

}


