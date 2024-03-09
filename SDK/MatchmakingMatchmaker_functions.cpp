#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MatchmakingMatchmaker.Matchmaker
// (Actor)

class UClass* AMatchmaker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Matchmaker");

	return Clss;
}


// Matchmaker MatchmakingMatchmaker.Default__Matchmaker
// (Public, ClassDefaultObject, ArchetypeObject)

class AMatchmaker* AMatchmaker::GetDefaultObj()
{
	static class AMatchmaker* Default = nullptr;

	if (!Default)
		Default = static_cast<AMatchmaker*>(AMatchmaker::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchmakingMatchmaker.Matchmaker.SetReadyState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsReady                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMatchmaker::SetReadyState(struct FUniqueNetIdRepl& UserId, bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Matchmaker", "SetReadyState");

	Params::AMatchmaker_SetReadyState_Params Parms{};

	Parms.UserId = UserId;
	Parms.bIsReady = bIsReady;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MatchmakingMatchmaker.Matchmaker.OnProgress
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMatchmakerProgressInfo     ProgressInfo                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AMatchmaker::OnProgress(struct FMatchmakerProgressInfo& ProgressInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Matchmaker", "OnProgress");

	Params::AMatchmaker_OnProgress_Params Parms{};

	Parms.ProgressInfo = ProgressInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingMatchmaker.Matchmaker.OnError
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      MatchmakingError                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMatchmaker::OnError(const class FString& MatchmakingError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Matchmaker", "OnError");

	Params::AMatchmaker_OnError_Params Parms{};

	Parms.MatchmakingError = MatchmakingError;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingMatchmaker.Matchmaker.OnCancelled
// (Event, Public, BlueprintEvent)
// Parameters:

void AMatchmaker::OnCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Matchmaker", "OnCancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchmakingMatchmaker.Matchmaker.IsMatchmaking
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bIsMatchmaking                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMatchmaker::IsMatchmaking(bool* bIsMatchmaking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Matchmaker", "IsMatchmaking");

	Params::AMatchmaker_IsMatchmaking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsMatchmaking != nullptr)
		*bIsMatchmaking = Parms.bIsMatchmaking;

}


// Function MatchmakingMatchmaker.Matchmaker.GetReadyState
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TargetUserId                                                     (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsReady                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMatchmaker::GetReadyState(struct FUniqueNetIdRepl& LocalUserId, struct FUniqueNetIdRepl& TargetUserId, bool* bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Matchmaker", "GetReadyState");

	Params::AMatchmaker_GetReadyState_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.TargetUserId = TargetUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsReady != nullptr)
		*bIsReady = Parms.bIsReady;

}


// Function MatchmakingMatchmaker.Matchmaker.GetMatchmakingStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            UserIdRepl                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMatchmakerProgressInfo     ProgressInfo                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void AMatchmaker::GetMatchmakingStatus(struct FUniqueNetIdRepl& UserIdRepl, struct FMatchmakerProgressInfo* ProgressInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Matchmaker", "GetMatchmakingStatus");

	Params::AMatchmaker_GetMatchmakingStatus_Params Parms{};

	Parms.UserIdRepl = UserIdRepl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProgressInfo != nullptr)
		*ProgressInfo = std::move(Parms.ProgressInfo);

}


// Class MatchmakingMatchmaker.MatchmakerSubmitMatchResults
// (None)

class UClass* UMatchmakerSubmitMatchResults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatchmakerSubmitMatchResults");

	return Clss;
}


// MatchmakerSubmitMatchResults MatchmakingMatchmaker.Default__MatchmakerSubmitMatchResults
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatchmakerSubmitMatchResults* UMatchmakerSubmitMatchResults::GetDefaultObj()
{
	static class UMatchmakerSubmitMatchResults* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatchmakerSubmitMatchResults*>(UMatchmakerSubmitMatchResults::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchmakingMatchmaker.MatchmakerSubmitMatchResults.SubmitMatchResults
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMatchmakerSubsystem*        Subsystem                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            LocalUserId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      TeamScores                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UMatchmakerSubmitMatchResults*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMatchmakerSubmitMatchResults* UMatchmakerSubmitMatchResults::SubmitMatchResults(class UMatchmakerSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<float>& TeamScores)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchmakerSubmitMatchResults", "SubmitMatchResults");

	Params::UMatchmakerSubmitMatchResults_SubmitMatchResults_Params Parms{};

	Parms.Subsystem = Subsystem;
	Parms.LocalUserId = LocalUserId;
	Parms.TeamScores = TeamScores;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MatchmakingMatchmaker.MatchmakerSubsystem
// (None)

class UClass* UMatchmakerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatchmakerSubsystem");

	return Clss;
}


// MatchmakerSubsystem MatchmakingMatchmaker.Default__MatchmakerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatchmakerSubsystem* UMatchmakerSubsystem::GetDefaultObj()
{
	static class UMatchmakerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatchmakerSubsystem*>(UMatchmakerSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchmakingMatchmaker.MatchmakerSubsystem.GetTeamAndSlotForPlayerOnServer
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*                TargetPlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Team                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Slot                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakerSubsystem::GetTeamAndSlotForPlayerOnServer(class APlayerState* TargetPlayerState, bool* Found, int32* Team, int32* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchmakerSubsystem", "GetTeamAndSlotForPlayerOnServer");

	Params::UMatchmakerSubsystem_GetTeamAndSlotForPlayerOnServer_Params Parms{};

	Parms.TargetPlayerState = TargetPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Team != nullptr)
		*Team = Parms.Team;

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function MatchmakingMatchmaker.MatchmakerSubsystem.GetTeamAndSlotForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           LocalPlayerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerState*                TargetPlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Team                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Slot                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakerSubsystem::GetTeamAndSlotForPlayer(class APlayerController* LocalPlayerController, class APlayerState* TargetPlayerState, bool* Found, int32* Team, int32* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchmakerSubsystem", "GetTeamAndSlotForPlayer");

	Params::UMatchmakerSubsystem_GetTeamAndSlotForPlayer_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.TargetPlayerState = TargetPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Team != nullptr)
		*Team = Parms.Team;

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}

}


