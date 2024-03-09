#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponDualQuadFlintlock.BP_PickupWeaponDualQuadFlintlock_C
// (Actor)

class UClass* ABP_PickupWeaponDualQuadFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponDualQuadFlintlock_C");

	return Clss;
}


// BP_PickupWeaponDualQuadFlintlock_C BP_PickupWeaponDualQuadFlintlock.Default__BP_PickupWeaponDualQuadFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponDualQuadFlintlock_C* ABP_PickupWeaponDualQuadFlintlock_C::GetDefaultObj()
{
	static class ABP_PickupWeaponDualQuadFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponDualQuadFlintlock_C*>(ABP_PickupWeaponDualQuadFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


