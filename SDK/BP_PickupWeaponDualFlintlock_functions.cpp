#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponDualFlintlock.BP_PickupWeaponDualFlintlock_C
// (Actor)

class UClass* ABP_PickupWeaponDualFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponDualFlintlock_C");

	return Clss;
}


// BP_PickupWeaponDualFlintlock_C BP_PickupWeaponDualFlintlock.Default__BP_PickupWeaponDualFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponDualFlintlock_C* ABP_PickupWeaponDualFlintlock_C::GetDefaultObj()
{
	static class ABP_PickupWeaponDualFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponDualFlintlock_C*>(ABP_PickupWeaponDualFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


