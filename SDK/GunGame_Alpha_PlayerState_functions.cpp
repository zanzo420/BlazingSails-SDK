#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GunGame_Alpha_PlayerState.GunGame_Alpha_PlayerState_C
// (Actor)

class UClass* AGunGame_Alpha_PlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GunGame_Alpha_PlayerState_C");

	return Clss;
}


// GunGame_Alpha_PlayerState_C GunGame_Alpha_PlayerState.Default__GunGame_Alpha_PlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGunGame_Alpha_PlayerState_C* AGunGame_Alpha_PlayerState_C::GetDefaultObj()
{
	static class AGunGame_Alpha_PlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGunGame_Alpha_PlayerState_C*>(AGunGame_Alpha_PlayerState_C::StaticClass()->DefaultObject);

	return Default;
}

}


