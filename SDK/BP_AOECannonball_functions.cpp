#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AOECannonball.BP_AOECannonball_C
// (Actor)

class UClass* ABP_AOECannonball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AOECannonball_C");

	return Clss;
}


// BP_AOECannonball_C BP_AOECannonball.Default__BP_AOECannonball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AOECannonball_C* ABP_AOECannonball_C::GetDefaultObj()
{
	static class ABP_AOECannonball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AOECannonball_C*>(ABP_AOECannonball_C::StaticClass()->DefaultObject);

	return Default;
}

}


