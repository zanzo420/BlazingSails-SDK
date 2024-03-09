#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AOEHeavyShot.BP_AOEHeavyShot_C
// (Actor)

class UClass* ABP_AOEHeavyShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AOEHeavyShot_C");

	return Clss;
}


// BP_AOEHeavyShot_C BP_AOEHeavyShot.Default__BP_AOEHeavyShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AOEHeavyShot_C* ABP_AOEHeavyShot_C::GetDefaultObj()
{
	static class ABP_AOEHeavyShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AOEHeavyShot_C*>(ABP_AOEHeavyShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


