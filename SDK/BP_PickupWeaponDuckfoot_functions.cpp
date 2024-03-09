#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponDuckfoot.BP_PickupWeaponDuckfoot_C
// (Actor)

class UClass* ABP_PickupWeaponDuckfoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponDuckfoot_C");

	return Clss;
}


// BP_PickupWeaponDuckfoot_C BP_PickupWeaponDuckfoot.Default__BP_PickupWeaponDuckfoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponDuckfoot_C* ABP_PickupWeaponDuckfoot_C::GetDefaultObj()
{
	static class ABP_PickupWeaponDuckfoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponDuckfoot_C*>(ABP_PickupWeaponDuckfoot_C::StaticClass()->DefaultObject);

	return Default;
}

}


