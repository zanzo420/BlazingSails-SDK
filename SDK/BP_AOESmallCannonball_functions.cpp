#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AOESmallCannonball.BP_AOESmallCannonball_C
// (Actor)

class UClass* ABP_AOESmallCannonball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AOESmallCannonball_C");

	return Clss;
}


// BP_AOESmallCannonball_C BP_AOESmallCannonball.Default__BP_AOESmallCannonball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AOESmallCannonball_C* ABP_AOESmallCannonball_C::GetDefaultObj()
{
	static class ABP_AOESmallCannonball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AOESmallCannonball_C*>(ABP_AOESmallCannonball_C::StaticClass()->DefaultObject);

	return Default;
}

}


