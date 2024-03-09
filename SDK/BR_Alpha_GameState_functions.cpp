#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BR_Alpha_GameState.BR_Alpha_GameState_C
// (Actor)

class UClass* ABR_Alpha_GameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BR_Alpha_GameState_C");

	return Clss;
}


// BR_Alpha_GameState_C BR_Alpha_GameState.Default__BR_Alpha_GameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABR_Alpha_GameState_C* ABR_Alpha_GameState_C::GetDefaultObj()
{
	static class ABR_Alpha_GameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABR_Alpha_GameState_C*>(ABR_Alpha_GameState_C::StaticClass()->DefaultObject);

	return Default;
}

}


