#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_PartyReference.EOS_PartyReference_C
// (None)

class UClass* UEOS_PartyReference_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_PartyReference_C");

	return Clss;
}


// EOS_PartyReference_C EOS_PartyReference.Default__EOS_PartyReference_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEOS_PartyReference_C* UEOS_PartyReference_C::GetDefaultObj()
{
	static class UEOS_PartyReference_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOS_PartyReference_C*>(UEOS_PartyReference_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_PartyReference.EOS_PartyReference_C.ToString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Party_ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToDebugString_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UEOS_PartyReference_C::ToString(class FString* Party_ID, const class FString& CallFunc_ToDebugString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyReference_C", "ToString");

	Params::UEOS_PartyReference_C_ToString_Params Parms{};

	Parms.CallFunc_ToDebugString_ReturnValue = CallFunc_ToDebugString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Party_ID != nullptr)
		*Party_ID = std::move(Parms.Party_ID);

}

}


