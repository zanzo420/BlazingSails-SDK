#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_PartyInviteReference.EOS_PartyInviteReference_C
// (None)

class UClass* UEOS_PartyInviteReference_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_PartyInviteReference_C");

	return Clss;
}


// EOS_PartyInviteReference_C EOS_PartyInviteReference.Default__EOS_PartyInviteReference_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEOS_PartyInviteReference_C* UEOS_PartyInviteReference_C::GetDefaultObj()
{
	static class UEOS_PartyInviteReference_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOS_PartyInviteReference_C*>(UEOS_PartyInviteReference_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_PartyInviteReference.EOS_PartyInviteReference_C.Get Combined ID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Combined_ID                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get__Sender_Sender                                      (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_Get__Sender_Sender_ID                                   (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UEOS_PartyInviteReference_C::Get_Combined_ID(class FString* Combined_ID, const class FString& CallFunc_Get__Sender_Sender, const struct FUniqueNetIdRepl& CallFunc_Get__Sender_Sender_ID, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyInviteReference_C", "Get Combined ID");

	Params::UEOS_PartyInviteReference_C_Get_Combined_ID_Params Parms{};

	Parms.CallFunc_Get__Sender_Sender = CallFunc_Get__Sender_Sender;
	Parms.CallFunc_Get__Sender_Sender_ID = CallFunc_Get__Sender_Sender_ID;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Combined_ID != nullptr)
		*Combined_ID = std::move(Parms.Combined_ID);

}


// Function EOS_PartyInviteReference.EOS_PartyInviteReference_C.Get  Sender
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Sender                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Sender_ID                                                        (Parm, OutParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetSourceDisplayName_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetSourceUserId_ReturnValue                             (HasGetValueTypeHash)

void UEOS_PartyInviteReference_C::Get__Sender(class FString* Sender, struct FUniqueNetIdRepl* Sender_ID, const class FString& CallFunc_GetSourceDisplayName_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetSourceUserId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyInviteReference_C", "Get  Sender");

	Params::UEOS_PartyInviteReference_C_Get__Sender_Params Parms{};

	Parms.CallFunc_GetSourceDisplayName_ReturnValue = CallFunc_GetSourceDisplayName_ReturnValue;
	Parms.CallFunc_GetSourceUserId_ReturnValue = CallFunc_GetSourceUserId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sender != nullptr)
		*Sender = std::move(Parms.Sender);

	if (Sender_ID != nullptr)
		*Sender_ID = std::move(Parms.Sender_ID);

}


// Function EOS_PartyInviteReference.EOS_PartyInviteReference_C.ToString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPartyId*                    CallFunc_GetPartyId_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToDebugString_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UEOS_PartyInviteReference_C::ToString(class FString* Value, class UPartyId* CallFunc_GetPartyId_ReturnValue, const class FString& CallFunc_ToDebugString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyInviteReference_C", "ToString");

	Params::UEOS_PartyInviteReference_C_ToString_Params Parms{};

	Parms.CallFunc_GetPartyId_ReturnValue = CallFunc_GetPartyId_ReturnValue;
	Parms.CallFunc_ToDebugString_ReturnValue = CallFunc_ToDebugString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}

}


