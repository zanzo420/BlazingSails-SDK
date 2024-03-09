#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AOEFishExplosion.BP_AOEFishExplosion_C
// (Actor)

class UClass* ABP_AOEFishExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AOEFishExplosion_C");

	return Clss;
}


// BP_AOEFishExplosion_C BP_AOEFishExplosion.Default__BP_AOEFishExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AOEFishExplosion_C* ABP_AOEFishExplosion_C::GetDefaultObj()
{
	static class ABP_AOEFishExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AOEFishExplosion_C*>(ABP_AOEFishExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


