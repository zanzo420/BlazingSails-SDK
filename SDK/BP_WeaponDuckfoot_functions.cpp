#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponDuckfoot.BP_WeaponDuckfoot_C
// (Actor)

class UClass* ABP_WeaponDuckfoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponDuckfoot_C");

	return Clss;
}


// BP_WeaponDuckfoot_C BP_WeaponDuckfoot.Default__BP_WeaponDuckfoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponDuckfoot_C* ABP_WeaponDuckfoot_C::GetDefaultObj()
{
	static class ABP_WeaponDuckfoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponDuckfoot_C*>(ABP_WeaponDuckfoot_C::StaticClass()->DefaultObject);

	return Default;
}

}


