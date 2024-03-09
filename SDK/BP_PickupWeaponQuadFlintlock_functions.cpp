#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponQuadFlintlock.BP_PickupWeaponQuadFlintlock_C
// (Actor)

class UClass* ABP_PickupWeaponQuadFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponQuadFlintlock_C");

	return Clss;
}


// BP_PickupWeaponQuadFlintlock_C BP_PickupWeaponQuadFlintlock.Default__BP_PickupWeaponQuadFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponQuadFlintlock_C* ABP_PickupWeaponQuadFlintlock_C::GetDefaultObj()
{
	static class ABP_PickupWeaponQuadFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponQuadFlintlock_C*>(ABP_PickupWeaponQuadFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


