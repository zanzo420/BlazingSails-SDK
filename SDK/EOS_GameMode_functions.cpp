#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_GameMode.EOS_GameMode_C
// (Actor)

class UClass* AEOS_GameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_GameMode_C");

	return Clss;
}


// EOS_GameMode_C EOS_GameMode.Default__EOS_GameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEOS_GameMode_C* AEOS_GameMode_C::GetDefaultObj()
{
	static class AEOS_GameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEOS_GameMode_C*>(AEOS_GameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_GameMode.EOS_GameMode_C.On Player Connected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_GameMode_C::On_Player_Connected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "On Player Connected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameMode.EOS_GameMode_C.OnRegisterPlayersComplete_2BE8B9CF4937E102FC40E092A449F004
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    PlayerIds                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::OnRegisterPlayersComplete_2BE8B9CF4937E102FC40E092A449F004(class FName SessionName, TArray<struct FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnRegisterPlayersComplete_2BE8B9CF4937E102FC40E092A449F004");

	Params::AEOS_GameMode_C_OnRegisterPlayersComplete_2BE8B9CF4937E102FC40E092A449F004_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.PlayerIds = PlayerIds;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.OnCallFailed_2BE8B9CF4937E102FC40E092A449F004
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    PlayerIds                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::OnCallFailed_2BE8B9CF4937E102FC40E092A449F004(class FName SessionName, TArray<struct FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnCallFailed_2BE8B9CF4937E102FC40E092A449F004");

	Params::AEOS_GameMode_C_OnCallFailed_2BE8B9CF4937E102FC40E092A449F004_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.PlayerIds = PlayerIds;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.OnUnregisterPlayersComplete_E7D6F28843BFE0F14CB44D830F9AEA34
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    PlayerIds                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::OnUnregisterPlayersComplete_E7D6F28843BFE0F14CB44D830F9AEA34(class FName SessionName, TArray<struct FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnUnregisterPlayersComplete_E7D6F28843BFE0F14CB44D830F9AEA34");

	Params::AEOS_GameMode_C_OnUnregisterPlayersComplete_E7D6F28843BFE0F14CB44D830F9AEA34_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.PlayerIds = PlayerIds;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.OnCallFailed_E7D6F28843BFE0F14CB44D830F9AEA34
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    PlayerIds                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::OnCallFailed_E7D6F28843BFE0F14CB44D830F9AEA34(class FName SessionName, TArray<struct FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnCallFailed_E7D6F28843BFE0F14CB44D830F9AEA34");

	Params::AEOS_GameMode_C_OnCallFailed_E7D6F28843BFE0F14CB44D830F9AEA34_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.PlayerIds = PlayerIds;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.OnVoiceAdminKickParticipantComplete_B5C470CB4C0F671D5E068A89142717B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineErrorInfo            Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            TargetUserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEOS_GameMode_C::OnVoiceAdminKickParticipantComplete_B5C470CB4C0F671D5E068A89142717B8(const struct FOnlineErrorInfo& Result, const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& TargetUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnVoiceAdminKickParticipantComplete_B5C470CB4C0F671D5E068A89142717B8");

	Params::AEOS_GameMode_C_OnVoiceAdminKickParticipantComplete_B5C470CB4C0F671D5E068A89142717B8_Params Parms{};

	Parms.Result = Result;
	Parms.LocalUserId = LocalUserId;
	Parms.TargetUserId = TargetUserId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.OnCallFailed_B5C470CB4C0F671D5E068A89142717B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineErrorInfo            Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            TargetUserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEOS_GameMode_C::OnCallFailed_B5C470CB4C0F671D5E068A89142717B8(const struct FOnlineErrorInfo& Result, const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& TargetUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnCallFailed_B5C470CB4C0F671D5E068A89142717B8");

	Params::AEOS_GameMode_C_OnCallFailed_B5C470CB4C0F671D5E068A89142717B8_Params Parms{};

	Parms.Result = Result;
	Parms.LocalUserId = LocalUserId;
	Parms.TargetUserId = TargetUserId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.OnStartSessionComplete_A6BC54524A7FCD60F5AD9EA569DBBE4B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::OnStartSessionComplete_A6BC54524A7FCD60F5AD9EA569DBBE4B(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnStartSessionComplete_A6BC54524A7FCD60F5AD9EA569DBBE4B");

	Params::AEOS_GameMode_C_OnStartSessionComplete_A6BC54524A7FCD60F5AD9EA569DBBE4B_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.OnCallFailed_A6BC54524A7FCD60F5AD9EA569DBBE4B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::OnCallFailed_A6BC54524A7FCD60F5AD9EA569DBBE4B(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnCallFailed_A6BC54524A7FCD60F5AD9EA569DBBE4B");

	Params::AEOS_GameMode_C_OnCallFailed_A6BC54524A7FCD60F5AD9EA569DBBE4B_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.OnEndSessionComplete_22D45D624FF77C5354F9BA85297F17BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::OnEndSessionComplete_22D45D624FF77C5354F9BA85297F17BD(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnEndSessionComplete_22D45D624FF77C5354F9BA85297F17BD");

	Params::AEOS_GameMode_C_OnEndSessionComplete_22D45D624FF77C5354F9BA85297F17BD_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.OnCallFailed_22D45D624FF77C5354F9BA85297F17BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::OnCallFailed_22D45D624FF77C5354F9BA85297F17BD(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "OnCallFailed_22D45D624FF77C5354F9BA85297F17BD");

	Params::AEOS_GameMode_C_OnCallFailed_22D45D624FF77C5354F9BA85297F17BD_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.Logged In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Error_Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEOS_GameMode_C::Logged_In(bool Successful, const class FString& Error_Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Logged In");

	Params::AEOS_GameMode_C_Logged_In_Params Parms{};

	Parms.Successful = Successful;
	Parms.Error_Message = Error_Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.Register Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Player_controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_GameMode_C::Register_Player(class APlayerController* Player_controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Register Player");

	Params::AEOS_GameMode_C_Register_Player_Params Parms{};

	Parms.Player_controller = Player_controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.UnRegister Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Player_controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_GameMode_C::UnRegister_Player(class APlayerController* Player_controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "UnRegister Player");

	Params::AEOS_GameMode_C_UnRegister_Player_Params Parms{};

	Parms.Player_controller = Player_controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.BeginPlayCont
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_GameMode_C::BeginPlayCont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "BeginPlayCont");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameMode.EOS_GameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 ExitingController                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_GameMode_C::K2_OnLogout(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "K2_OnLogout");

	Params::AEOS_GameMode_C_K2_OnLogout_Params Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_GameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "K2_PostLogin");

	Params::AEOS_GameMode_C_K2_PostLogin_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.Spawn Dedicated Beacon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_GameMode_C::Spawn_Dedicated_Beacon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Spawn Dedicated Beacon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameMode.EOS_GameMode_C.Reserve Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsReserved                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::Reserve_Event(bool bIsReserved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Reserve Event");

	Params::AEOS_GameMode_C_Reserve_Event_Params Parms{};

	Parms.bIsReserved = bIsReserved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.Ready To start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_GameMode_C::Ready_To_start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Ready To start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameMode.EOS_GameMode_C.Close Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_GameMode_C::Close_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Close Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameMode.EOS_GameMode_C.Session Created
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::Session_Created(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Session Created");

	Params::AEOS_GameMode_C_Session_Created_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEOS_GameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameMode.EOS_GameMode_C.Destroyed Session Response
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::Destroyed_Session_Response(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Destroyed Session Response");

	Params::AEOS_GameMode_C_Destroyed_Session_Response_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.Reward Players
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUniqueNetIdRepl>    PlayerIds                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AEOS_GameMode_C::Reward_Players(TArray<struct FUniqueNetIdRepl>& PlayerIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Reward Players");

	Params::AEOS_GameMode_C_Reward_Players_Params Parms{};

	Parms.PlayerIds = PlayerIds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.Login Defaults
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_GameMode_C::Login_Defaults(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Login Defaults");

	Params::AEOS_GameMode_C_Login_Defaults_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.Intialize EOS
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_GameMode_C::Intialize_EOS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Intialize EOS");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameMode.EOS_GameMode_C.ExecuteUbergraph_EOS_GameMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_SessionName_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    K2Node_CustomEvent_PlayerIds_2                                   (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_bWasSuccessful_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_SessionName_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    K2Node_CustomEvent_PlayerIds_1                                   (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_bWasSuccessful_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FUniqueNetIdRepl>    Temp_struct_Variable                                             (ReferenceParm)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineVoiceAdminSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_CreateUniquePlayerId_ReturnValue                        (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FOnlineErrorInfo            K2Node_CustomEvent_Result_1                                      (None)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_1                                 (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_TargetUserId_1                                (HasGetValueTypeHash)
// struct FOnlineErrorInfo            K2Node_CustomEvent_Result                                        (None)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId                                   (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_TargetUserId                                  (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// struct FOnlineErrorInfo            Temp_struct_Variable_3                                           (None)
// class FName                        K2Node_CustomEvent_SessionName_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_SessionName_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_SessionName_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_SessionName                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Successful_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Error_Message                                 (ZeroConstructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Signed_In__Signed_in_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_player_controller_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_player_controller                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    K2Node_MakeArray_Array                                           (ReferenceParm)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class AController*                 K2Node_Event_ExitingController                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_NewPlayer                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    Temp_struct_Variable_4                                           (ReferenceParm)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADedicatedServerMatchmakingBeaconHost*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bIsReserved                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_SessionName_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    K2Node_CustomEvent_PlayerIds_3                                   (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_bWasSuccessful_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineSessionSubsystemUnregisterPlayers*CallFunc_UnregisterPlayers_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNamedOnlineSession*         CallFunc_GetNamedSession_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNamedOnlineSessionBP       CallFunc_GetValue_ReturnValue                                    (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineVoiceAdminSubsystemKickParticipant*CallFunc_KickParticipant_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineSessionSubsystemStartSession*CallFunc_StartSession_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FUniqueNetIdRepl>    K2Node_CustomEvent_PlayerIds                                     (ConstParm, ReferenceParm)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystemRegisterPlayers*CallFunc_RegisterPlayers_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineSessionSubsystemEndSession*CallFunc_EndSession_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_SessionName_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    K2Node_CustomEvent_PlayerIds_4                                   (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_bWasSuccessful_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEOS_Game_State_C*           CallFunc_Current_EOS_Game_State_AsEOS_Game_State                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_4         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_GameMode_C::ExecuteUbergraph_EOS_GameMode(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_SessionName_5, TArray<struct FUniqueNetIdRepl>& K2Node_CustomEvent_PlayerIds_2, bool K2Node_CustomEvent_bWasSuccessful_5, class FName K2Node_CustomEvent_SessionName_4, TArray<struct FUniqueNetIdRepl>& K2Node_CustomEvent_PlayerIds_1, bool K2Node_CustomEvent_bWasSuccessful_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, TArray<struct FUniqueNetIdRepl>& Temp_struct_Variable, class FName Temp_name_Variable, class UOnlineVoiceAdminSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FUniqueNetIdRepl& CallFunc_CreateUniquePlayerId_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FOnlineErrorInfo& K2Node_CustomEvent_Result_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_TargetUserId_1, const struct FOnlineErrorInfo& K2Node_CustomEvent_Result, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId, const struct FUniqueNetIdRepl& K2Node_CustomEvent_TargetUserId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FUniqueNetIdRepl& Temp_struct_Variable_1, const struct FUniqueNetIdRepl& Temp_struct_Variable_2, const struct FOnlineErrorInfo& Temp_struct_Variable_3, class FName K2Node_CustomEvent_SessionName_3, bool K2Node_CustomEvent_bWasSuccessful_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_SessionName_2, bool K2Node_CustomEvent_bWasSuccessful_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Variable_1, class FName Temp_name_Variable_1, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class FName K2Node_CustomEvent_SessionName_1, bool K2Node_CustomEvent_bWasSuccessful_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_SessionName, bool K2Node_CustomEvent_bWasSuccessful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Variable_2, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool K2Node_CustomEvent_Successful_1, const class FString& K2Node_CustomEvent_Error_Message, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Is_Signed_In__Signed_in_, class APlayerController* K2Node_CustomEvent_player_controller_1, class APlayerController* K2Node_CustomEvent_player_controller, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, TArray<struct FUniqueNetIdRepl>& K2Node_MakeArray_Array, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess_1, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, TArray<struct FUniqueNetIdRepl>& K2Node_MakeArray_Array_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class AController* K2Node_Event_ExitingController, class APlayerController* K2Node_Event_NewPlayer, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, class FName Temp_name_Variable_3, TArray<struct FUniqueNetIdRepl>& Temp_struct_Variable_4, bool Temp_bool_Variable_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, class ADedicatedServerMatchmakingBeaconHost* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool K2Node_CustomEvent_bIsReserved, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class FName K2Node_CustomEvent_SessionName_6, TArray<struct FUniqueNetIdRepl>& K2Node_CustomEvent_PlayerIds_3, bool K2Node_CustomEvent_bWasSuccessful_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_3, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_4, bool K2Node_DynamicCast_bSuccess_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, bool K2Node_CustomEvent_Successful, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_5, bool K2Node_DynamicCast_bSuccess_7, class UOnlineSessionSubsystemUnregisterPlayers* CallFunc_UnregisterPlayers_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_6, bool K2Node_DynamicCast_bSuccess_8, class UNamedOnlineSession* CallFunc_GetNamedSession_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FNamedOnlineSessionBP& CallFunc_GetValue_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_7, class UOnlineVoiceAdminSubsystemKickParticipant* CallFunc_KickParticipant_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_7, bool K2Node_DynamicCast_bSuccess_9, class UOnlineSessionSubsystemStartSession* CallFunc_StartSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_Success, TArray<struct FUniqueNetIdRepl>& K2Node_CustomEvent_PlayerIds, bool CallFunc_WithEditor_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, class APlayerController* K2Node_CustomEvent_PlayerController, class UOnlineSessionSubsystemRegisterPlayers* CallFunc_RegisterPlayers_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State_1, bool K2Node_DynamicCast_bSuccess_10, class UOnlineSessionSubsystemEndSession* CallFunc_EndSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_8, bool CallFunc_WithEditor_ReturnValue_1, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_8, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, class FName K2Node_CustomEvent_SessionName_7, TArray<struct FUniqueNetIdRepl>& K2Node_CustomEvent_PlayerIds_4, bool K2Node_CustomEvent_bWasSuccessful_7, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class AEOS_Game_State_C* CallFunc_Current_EOS_Game_State_AsEOS_Game_State, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1, bool CallFunc_WithEditor_ReturnValue_2, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_2, bool CallFunc_IsDedicatedServer_ReturnValue_4, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_3, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_5, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class FName CallFunc_Conv_StringToName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "ExecuteUbergraph_EOS_GameMode");

	Params::AEOS_GameMode_C_ExecuteUbergraph_EOS_GameMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_SessionName_5 = K2Node_CustomEvent_SessionName_5;
	Parms.K2Node_CustomEvent_PlayerIds_2 = K2Node_CustomEvent_PlayerIds_2;
	Parms.K2Node_CustomEvent_bWasSuccessful_5 = K2Node_CustomEvent_bWasSuccessful_5;
	Parms.K2Node_CustomEvent_SessionName_4 = K2Node_CustomEvent_SessionName_4;
	Parms.K2Node_CustomEvent_PlayerIds_1 = K2Node_CustomEvent_PlayerIds_1;
	Parms.K2Node_CustomEvent_bWasSuccessful_4 = K2Node_CustomEvent_bWasSuccessful_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_CreateUniquePlayerId_ReturnValue = CallFunc_CreateUniquePlayerId_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_LocalUserId_1 = K2Node_CustomEvent_LocalUserId_1;
	Parms.K2Node_CustomEvent_TargetUserId_1 = K2Node_CustomEvent_TargetUserId_1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_LocalUserId = K2Node_CustomEvent_LocalUserId;
	Parms.K2Node_CustomEvent_TargetUserId = K2Node_CustomEvent_TargetUserId;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CustomEvent_SessionName_3 = K2Node_CustomEvent_SessionName_3;
	Parms.K2Node_CustomEvent_bWasSuccessful_3 = K2Node_CustomEvent_bWasSuccessful_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_SessionName_2 = K2Node_CustomEvent_SessionName_2;
	Parms.K2Node_CustomEvent_bWasSuccessful_2 = K2Node_CustomEvent_bWasSuccessful_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.K2Node_CustomEvent_SessionName_1 = K2Node_CustomEvent_SessionName_1;
	Parms.K2Node_CustomEvent_bWasSuccessful_1 = K2Node_CustomEvent_bWasSuccessful_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_SessionName = K2Node_CustomEvent_SessionName;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_CustomEvent_Successful_1 = K2Node_CustomEvent_Successful_1;
	Parms.K2Node_CustomEvent_Error_Message = K2Node_CustomEvent_Error_Message;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Is_Signed_In__Signed_in_ = CallFunc_Is_Signed_In__Signed_in_;
	Parms.K2Node_CustomEvent_player_controller_1 = K2Node_CustomEvent_player_controller_1;
	Parms.K2Node_CustomEvent_player_controller = K2Node_CustomEvent_player_controller;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsEOS_Player_State = K2Node_DynamicCast_AsEOS_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_1 = K2Node_DynamicCast_AsEOS_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_2 = K2Node_DynamicCast_AsEOS_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_Event_ExitingController = K2Node_Event_ExitingController;
	Parms.K2Node_Event_NewPlayer = K2Node_Event_NewPlayer;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue_1 = CallFunc_IsLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_bIsReserved = K2Node_CustomEvent_bIsReserved;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.K2Node_CustomEvent_SessionName_6 = K2Node_CustomEvent_SessionName_6;
	Parms.K2Node_CustomEvent_PlayerIds_3 = K2Node_CustomEvent_PlayerIds_3;
	Parms.K2Node_CustomEvent_bWasSuccessful_6 = K2Node_CustomEvent_bWasSuccessful_6;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_3 = CallFunc_IsDedicatedServer_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_3 = K2Node_DynamicCast_AsEOS_Game_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_4 = K2Node_DynamicCast_AsEOS_Game_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.K2Node_CustomEvent_Successful = K2Node_CustomEvent_Successful;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_5 = K2Node_DynamicCast_AsEOS_Game_Instance_5;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_UnregisterPlayers_ReturnValue = CallFunc_UnregisterPlayers_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_6 = K2Node_DynamicCast_AsEOS_Game_Instance_6;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetNamedSession_ReturnValue = CallFunc_GetNamedSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_7 = CallFunc_GetGameInstance_ReturnValue_7;
	Parms.CallFunc_KickParticipant_ReturnValue = CallFunc_KickParticipant_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_7 = K2Node_DynamicCast_AsEOS_Game_Instance_7;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_StartSession_ReturnValue = CallFunc_StartSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_PlayerIds = K2Node_CustomEvent_PlayerIds;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.CallFunc_RegisterPlayers_ReturnValue = CallFunc_RegisterPlayers_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsEOS_Player_State_1 = K2Node_DynamicCast_AsEOS_Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_EndSession_ReturnValue = CallFunc_EndSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_8 = CallFunc_GetGameInstance_ReturnValue_8;
	Parms.CallFunc_WithEditor_ReturnValue_1 = CallFunc_WithEditor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_8 = K2Node_DynamicCast_AsEOS_Game_Instance_8;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_CustomEvent_SessionName_7 = K2Node_CustomEvent_SessionName_7;
	Parms.K2Node_CustomEvent_PlayerIds_4 = K2Node_CustomEvent_PlayerIds_4;
	Parms.K2Node_CustomEvent_bWasSuccessful_7 = K2Node_CustomEvent_bWasSuccessful_7;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Current_EOS_Game_State_AsEOS_Game_State = CallFunc_Current_EOS_Game_State_AsEOS_Game_State;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1 = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1;
	Parms.CallFunc_WithEditor_ReturnValue_2 = CallFunc_WithEditor_ReturnValue_2;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_2 = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_4 = CallFunc_IsDedicatedServer_ReturnValue_4;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_3 = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_3;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_4 = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_4;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_5 = CallFunc_IsDedicatedServer_ReturnValue_5;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.Reserved Server__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Reserved                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_GameMode_C::Reserved_Server__DelegateSignature(bool Is_Reserved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Reserved Server__DelegateSignature");

	Params::AEOS_GameMode_C_Reserved_Server__DelegateSignature_Params Parms{};

	Parms.Is_Reserved = Is_Reserved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameMode.EOS_GameMode_C.Closing Server__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_GameMode_C::Closing_Server__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameMode_C", "Closing Server__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


