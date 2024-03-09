#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponFlintlock.BP_PickupWeaponFlintlock_C
// (Actor)

class UClass* ABP_PickupWeaponFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponFlintlock_C");

	return Clss;
}


// BP_PickupWeaponFlintlock_C BP_PickupWeaponFlintlock.Default__BP_PickupWeaponFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponFlintlock_C* ABP_PickupWeaponFlintlock_C::GetDefaultObj()
{
	static class ABP_PickupWeaponFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponFlintlock_C*>(ABP_PickupWeaponFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


