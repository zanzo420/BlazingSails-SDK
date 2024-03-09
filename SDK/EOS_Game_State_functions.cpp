#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_Game_State.EOS_Game_State_C
// (Actor)

class UClass* AEOS_Game_State_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_Game_State_C");

	return Clss;
}


// EOS_Game_State_C EOS_Game_State.Default__EOS_Game_State_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEOS_Game_State_C* AEOS_Game_State_C::GetDefaultObj()
{
	static class AEOS_Game_State_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEOS_Game_State_C*>(AEOS_Game_State_C::StaticClass()->DefaultObject);

	return Default;
}

}


