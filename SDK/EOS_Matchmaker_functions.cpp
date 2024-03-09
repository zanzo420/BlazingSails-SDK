#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_Matchmaker.EOS_Matchmaker_C
// (Actor)

class UClass* AEOS_Matchmaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_Matchmaker_C");

	return Clss;
}


// EOS_Matchmaker_C EOS_Matchmaker.Default__EOS_Matchmaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEOS_Matchmaker_C* AEOS_Matchmaker_C::GetDefaultObj()
{
	static class AEOS_Matchmaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEOS_Matchmaker_C*>(AEOS_Matchmaker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_Matchmaker.EOS_Matchmaker_C.CustomIsMatchMaking
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Is_MatchMaking                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// struct FMatchmakerProgressInfo     CallFunc_GetMatchmakingStatus_ProgressInfo                       (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Matchmaker_C::CustomIsMatchMaking(bool* Is_MatchMaking, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const struct FMatchmakerProgressInfo& CallFunc_GetMatchmakingStatus_ProgressInfo, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Matchmaker_C", "CustomIsMatchMaking");

	Params::AEOS_Matchmaker_C_CustomIsMatchMaking_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetMatchmakingStatus_ProgressInfo = CallFunc_GetMatchmakingStatus_ProgressInfo;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_MatchMaking != nullptr)
		*Is_MatchMaking = Parms.Is_MatchMaking;

}


// Function EOS_Matchmaker.EOS_Matchmaker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEOS_Matchmaker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Matchmaker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Matchmaker.EOS_Matchmaker_C.MatchMaking Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ControllerIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FMatchmakerResult           Results                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AEOS_Matchmaker_C::MatchMaking_Complete(int32 ControllerIndex, const struct FUniqueNetIdRepl& UserId, const struct FMatchmakerResult& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Matchmaker_C", "MatchMaking Complete");

	Params::AEOS_Matchmaker_C_MatchMaking_Complete_Params Parms{};

	Parms.ControllerIndex = ControllerIndex;
	Parms.UserId = UserId;
	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Matchmaker.EOS_Matchmaker_C.OnProgress
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMatchmakerProgressInfo     ProgressInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AEOS_Matchmaker_C::OnProgress(struct FMatchmakerProgressInfo& ProgressInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Matchmaker_C", "OnProgress");

	Params::AEOS_Matchmaker_C_OnProgress_Params Parms{};

	Parms.ProgressInfo = ProgressInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Matchmaker.EOS_Matchmaker_C.ExecuteUbergraph_EOS_Matchmaker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_ControllerIndex                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId                                        (HasGetValueTypeHash)
// struct FMatchmakerResult           K2Node_CustomEvent_Results                                       (None)
// struct FMatchmakerProgressInfo     K2Node_Event_ProgressInfo                                        (ConstParm)
// class UMatchmakerSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void AEOS_Matchmaker_C::ExecuteUbergraph_EOS_Matchmaker(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_ControllerIndex, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId, const struct FMatchmakerResult& K2Node_CustomEvent_Results, const struct FMatchmakerProgressInfo& K2Node_Event_ProgressInfo, class UMatchmakerSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Matchmaker_C", "ExecuteUbergraph_EOS_Matchmaker");

	Params::AEOS_Matchmaker_C_ExecuteUbergraph_EOS_Matchmaker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ControllerIndex = K2Node_CustomEvent_ControllerIndex;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.K2Node_CustomEvent_Results = K2Node_CustomEvent_Results;
	Parms.K2Node_Event_ProgressInfo = K2Node_Event_ProgressInfo;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Matchmaker.EOS_Matchmaker_C.On Progress Event__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMatchmakerProgressInfo     Progress_info                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AEOS_Matchmaker_C::On_Progress_Event__DelegateSignature(const struct FMatchmakerProgressInfo& Progress_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Matchmaker_C", "On Progress Event__DelegateSignature");

	Params::AEOS_Matchmaker_C_On_Progress_Event__DelegateSignature_Params Parms{};

	Parms.Progress_info = Progress_info;

	UObject::ProcessEvent(Func, &Parms);

}

}


