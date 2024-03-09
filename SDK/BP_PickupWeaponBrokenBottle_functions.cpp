#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponBrokenBottle.BP_PickupWeaponBrokenBottle_C
// (Actor)

class UClass* ABP_PickupWeaponBrokenBottle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponBrokenBottle_C");

	return Clss;
}


// BP_PickupWeaponBrokenBottle_C BP_PickupWeaponBrokenBottle.Default__BP_PickupWeaponBrokenBottle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponBrokenBottle_C* ABP_PickupWeaponBrokenBottle_C::GetDefaultObj()
{
	static class ABP_PickupWeaponBrokenBottle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponBrokenBottle_C*>(ABP_PickupWeaponBrokenBottle_C::StaticClass()->DefaultObject);

	return Default;
}

}


