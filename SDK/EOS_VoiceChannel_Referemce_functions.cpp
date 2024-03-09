#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_VoiceChannel_Referemce.EOS_VoiceChannel_Referemce_C
// (None)

class UClass* UEOS_VoiceChannel_Referemce_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_VoiceChannel_Referemce_C");

	return Clss;
}


// EOS_VoiceChannel_Referemce_C EOS_VoiceChannel_Referemce.Default__EOS_VoiceChannel_Referemce_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEOS_VoiceChannel_Referemce_C* UEOS_VoiceChannel_Referemce_C::GetDefaultObj()
{
	static class UEOS_VoiceChannel_Referemce_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOS_VoiceChannel_Referemce_C*>(UEOS_VoiceChannel_Referemce_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_VoiceChannel_Referemce.EOS_VoiceChannel_Referemce_C.ToString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_VoiceChannel_Referemce_C::ToString(class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_VoiceChannel_Referemce_C", "ToString");

	Params::UEOS_VoiceChannel_Referemce_C_ToString_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}

}


