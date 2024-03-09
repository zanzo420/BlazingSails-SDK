#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponhealingCrossbow.BP_PickupWeaponhealingCrossbow_C
// (Actor)

class UClass* ABP_PickupWeaponhealingCrossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponhealingCrossbow_C");

	return Clss;
}


// BP_PickupWeaponhealingCrossbow_C BP_PickupWeaponhealingCrossbow.Default__BP_PickupWeaponhealingCrossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponhealingCrossbow_C* ABP_PickupWeaponhealingCrossbow_C::GetDefaultObj()
{
	static class ABP_PickupWeaponhealingCrossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponhealingCrossbow_C*>(ABP_PickupWeaponhealingCrossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


