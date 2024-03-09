#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_JumpLaunch.CS_JumpLaunch_C
// (None)

class UClass* UCS_JumpLaunch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_JumpLaunch_C");

	return Clss;
}


// CS_JumpLaunch_C CS_JumpLaunch.Default__CS_JumpLaunch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_JumpLaunch_C* UCS_JumpLaunch_C::GetDefaultObj()
{
	static class UCS_JumpLaunch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_JumpLaunch_C*>(UCS_JumpLaunch_C::StaticClass()->DefaultObject);

	return Default;
}

}


