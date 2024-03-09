#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Matchmaking.DedicatedServerMatchmakingBeaconClient
// (Actor)

class UClass* ADedicatedServerMatchmakingBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DedicatedServerMatchmakingBeaconClient");

	return Clss;
}


// DedicatedServerMatchmakingBeaconClient Matchmaking.Default__DedicatedServerMatchmakingBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ADedicatedServerMatchmakingBeaconClient* ADedicatedServerMatchmakingBeaconClient::GetDefaultObj()
{
	static class ADedicatedServerMatchmakingBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ADedicatedServerMatchmakingBeaconClient*>(ADedicatedServerMatchmakingBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function Matchmaking.DedicatedServerMatchmakingBeaconClient.ReserveForMatch
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// TArray<struct FDedicatedServerMatchmakingBeaconClientMatchMember>MatchMembers                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ADedicatedServerMatchmakingBeaconClient::ReserveForMatch(TArray<struct FDedicatedServerMatchmakingBeaconClientMatchMember>& MatchMembers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DedicatedServerMatchmakingBeaconClient", "ReserveForMatch");

	Params::ADedicatedServerMatchmakingBeaconClient_ReserveForMatch_Params Parms{};

	Parms.MatchMembers = MatchMembers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Matchmaking.DedicatedServerMatchmakingBeaconClient.OnReserveForMatchResult
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADedicatedServerMatchmakingBeaconClient::OnReserveForMatchResult(bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DedicatedServerMatchmakingBeaconClient", "OnReserveForMatchResult");

	Params::ADedicatedServerMatchmakingBeaconClient_OnReserveForMatchResult_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Matchmaking.DedicatedServerMatchmakingBeaconHost
// (Actor)

class UClass* ADedicatedServerMatchmakingBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DedicatedServerMatchmakingBeaconHost");

	return Clss;
}


// DedicatedServerMatchmakingBeaconHost Matchmaking.Default__DedicatedServerMatchmakingBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class ADedicatedServerMatchmakingBeaconHost* ADedicatedServerMatchmakingBeaconHost::GetDefaultObj()
{
	static class ADedicatedServerMatchmakingBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<ADedicatedServerMatchmakingBeaconHost*>(ADedicatedServerMatchmakingBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Function Matchmaking.DedicatedServerMatchmakingBeaconHost.MatchEnded
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ADedicatedServerMatchmakingBeaconHost::MatchEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DedicatedServerMatchmakingBeaconHost", "MatchEnded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Matchmaking.DedicatedServerMatchmakingBeaconHost.IsReserved
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADedicatedServerMatchmakingBeaconHost::IsReserved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DedicatedServerMatchmakingBeaconHost", "IsReserved");

	Params::ADedicatedServerMatchmakingBeaconHost_IsReserved_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Matchmaking.DedicatedServerMatchmakingBeaconHost.IsMatchPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADedicatedServerMatchmakingBeaconHost::IsMatchPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DedicatedServerMatchmakingBeaconHost", "IsMatchPlaying");

	Params::ADedicatedServerMatchmakingBeaconHost_IsMatchPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Matchmaking.DedicatedServerMatchmakingBeaconHostObject
// (Actor)

class UClass* ADedicatedServerMatchmakingBeaconHostObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DedicatedServerMatchmakingBeaconHostObject");

	return Clss;
}


// DedicatedServerMatchmakingBeaconHostObject Matchmaking.Default__DedicatedServerMatchmakingBeaconHostObject
// (Public, ClassDefaultObject, ArchetypeObject)

class ADedicatedServerMatchmakingBeaconHostObject* ADedicatedServerMatchmakingBeaconHostObject::GetDefaultObj()
{
	static class ADedicatedServerMatchmakingBeaconHostObject* Default = nullptr;

	if (!Default)
		Default = static_cast<ADedicatedServerMatchmakingBeaconHostObject*>(ADedicatedServerMatchmakingBeaconHostObject::StaticClass()->DefaultObject);

	return Default;
}

}


