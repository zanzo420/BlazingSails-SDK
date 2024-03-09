#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_PlayerState.EOS_PlayerState_C
// (Actor)

class UClass* AEOS_PlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_PlayerState_C");

	return Clss;
}


// EOS_PlayerState_C EOS_PlayerState.Default__EOS_PlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEOS_PlayerState_C* AEOS_PlayerState_C::GetDefaultObj()
{
	static class AEOS_PlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEOS_PlayerState_C*>(AEOS_PlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_PlayerState.EOS_PlayerState_C.OnRep_Primarty Platform ID
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_PlayerState_C::OnRep_Primarty_Platform_ID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PlayerState_C", "OnRep_Primarty Platform ID");



	UObject::ProcessEvent(Func, nullptr);

}

}


