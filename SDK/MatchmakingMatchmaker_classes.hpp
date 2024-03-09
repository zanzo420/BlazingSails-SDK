#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x270 (0x490 - 0x220)
// Class MatchmakingMatchmaker.Matchmaker
class AMatchmaker : public AActor
{
public:
	uint8                                        Pad_E1F[0x1E8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatchmakerHostConfiguration          HostConfiguration;                                 // 0x408(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AMatchmaker* GetDefaultObj();

	void SetReadyState(struct FUniqueNetIdRepl& UserId, bool bIsReady);
	void OnProgress(struct FMatchmakerProgressInfo& ProgressInfo);
	void OnError(const class FString& MatchmakingError);
	void OnCancelled();
	void IsMatchmaking(bool* bIsMatchmaking);
	void GetReadyState(struct FUniqueNetIdRepl& LocalUserId, struct FUniqueNetIdRepl& TargetUserId, bool* bIsReady);
	void GetMatchmakingStatus(struct FUniqueNetIdRepl& UserIdRepl, struct FMatchmakerProgressInfo* ProgressInfo);
};

// 0x50 (0x80 - 0x30)
// Class MatchmakingMatchmaker.MatchmakerSubmitMatchResults
class UMatchmakerSubmitMatchResults : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMatchmakerSubsystem*                  Subsystem;                                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x48(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<float>                                TeamScores;                                        // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMatchmakerSubmitMatchResults* GetDefaultObj();

	class UMatchmakerSubmitMatchResults* SubmitMatchResults(class UMatchmakerSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<float>& TeamScores);
};

// 0x80 (0xB0 - 0x30)
// Class MatchmakingMatchmaker.MatchmakerSubsystem
class UMatchmakerSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_E24[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0xA0(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMatchmakerSubsystem* GetDefaultObj();

	void GetTeamAndSlotForPlayerOnServer(class APlayerState* TargetPlayerState, bool* Found, int32* Team, int32* Slot);
	void GetTeamAndSlotForPlayer(class APlayerController* LocalPlayerController, class APlayerState* TargetPlayerState, bool* Found, int32* Team, int32* Slot);
};

}


