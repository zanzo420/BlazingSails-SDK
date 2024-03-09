#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_Voice_Chat_Participant_Reference.EOS_Voice_Chat_Participant_Reference_C
// (None)

class UClass* UEOS_Voice_Chat_Participant_Reference_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_Voice_Chat_Participant_Reference_C");

	return Clss;
}


// EOS_Voice_Chat_Participant_Reference_C EOS_Voice_Chat_Participant_Reference.Default__EOS_Voice_Chat_Participant_Reference_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEOS_Voice_Chat_Participant_Reference_C* UEOS_Voice_Chat_Participant_Reference_C::GetDefaultObj()
{
	static class UEOS_Voice_Chat_Participant_Reference_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOS_Voice_Chat_Participant_Reference_C*>(UEOS_Voice_Chat_Participant_Reference_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_Voice_Chat_Participant_Reference.EOS_Voice_Chat_Participant_Reference_C.Is Muted?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Muted_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerMuted_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_Voice_Chat_Participant_Reference_C::Is_Muted_(bool* Muted_, bool CallFunc_IsPlayerMuted_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Participant_Reference_C", "Is Muted?");

	Params::UEOS_Voice_Chat_Participant_Reference_C_Is_Muted__Params Parms{};

	Parms.CallFunc_IsPlayerMuted_ReturnValue = CallFunc_IsPlayerMuted_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Muted_ != nullptr)
		*Muted_ = Parms.Muted_;

}


// Function EOS_Voice_Chat_Participant_Reference.EOS_Voice_Chat_Participant_Reference_C.Is Speaking?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Speaking                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerTalking_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_Voice_Chat_Participant_Reference_C::Is_Speaking_(bool* Speaking, bool CallFunc_IsPlayerTalking_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Participant_Reference_C", "Is Speaking?");

	Params::UEOS_Voice_Chat_Participant_Reference_C_Is_Speaking__Params Parms{};

	Parms.CallFunc_IsPlayerTalking_ReturnValue = CallFunc_IsPlayerTalking_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Speaking != nullptr)
		*Speaking = Parms.Speaking;

}


// Function EOS_Voice_Chat_Participant_Reference.EOS_Voice_Chat_Participant_Reference_C.ToString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_Voice_Chat_Participant_Reference_C::ToString(class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Participant_Reference_C", "ToString");

	Params::UEOS_Voice_Chat_Participant_Reference_C_ToString_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}

}


