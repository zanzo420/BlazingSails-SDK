#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponFlintlockBurster.BP_PickupWeaponFlintlockBurster_C
// (Actor)

class UClass* ABP_PickupWeaponFlintlockBurster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponFlintlockBurster_C");

	return Clss;
}


// BP_PickupWeaponFlintlockBurster_C BP_PickupWeaponFlintlockBurster.Default__BP_PickupWeaponFlintlockBurster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponFlintlockBurster_C* ABP_PickupWeaponFlintlockBurster_C::GetDefaultObj()
{
	static class ABP_PickupWeaponFlintlockBurster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponFlintlockBurster_C*>(ABP_PickupWeaponFlintlockBurster_C::StaticClass()->DefaultObject);

	return Default;
}

}


