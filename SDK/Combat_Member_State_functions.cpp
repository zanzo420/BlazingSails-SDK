#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Combat_Member_State.Combat_Member_State_C
// (None)

class UClass* UCombat_Member_State_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Combat_Member_State_C");

	return Clss;
}


// Combat_Member_State_C Combat_Member_State.Default__Combat_Member_State_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCombat_Member_State_C* UCombat_Member_State_C::GetDefaultObj()
{
	static class UCombat_Member_State_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombat_Member_State_C*>(UCombat_Member_State_C::StaticClass()->DefaultObject);

	return Default;
}

}


