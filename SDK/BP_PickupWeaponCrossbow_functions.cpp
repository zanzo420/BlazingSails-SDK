#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponCrossbow.BP_PickupWeaponCrossbow_C
// (Actor)

class UClass* ABP_PickupWeaponCrossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponCrossbow_C");

	return Clss;
}


// BP_PickupWeaponCrossbow_C BP_PickupWeaponCrossbow.Default__BP_PickupWeaponCrossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponCrossbow_C* ABP_PickupWeaponCrossbow_C::GetDefaultObj()
{
	static class ABP_PickupWeaponCrossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponCrossbow_C*>(ABP_PickupWeaponCrossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


