#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct Matchmaking.DedicatedServerMatchmakingBeaconClientMatchMember
struct FDedicatedServerMatchmakingBeaconClientMatchMember
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Team;                                              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Slot;                                              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         SlotType;                                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Matchmaking.TrackedPlayerController
struct FTrackedPlayerController
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


