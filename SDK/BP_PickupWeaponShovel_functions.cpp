#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponShovel.BP_PickupWeaponShovel_C
// (Actor)

class UClass* ABP_PickupWeaponShovel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponShovel_C");

	return Clss;
}


// BP_PickupWeaponShovel_C BP_PickupWeaponShovel.Default__BP_PickupWeaponShovel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponShovel_C* ABP_PickupWeaponShovel_C::GetDefaultObj()
{
	static class ABP_PickupWeaponShovel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponShovel_C*>(ABP_PickupWeaponShovel_C::StaticClass()->DefaultObject);

	return Default;
}

}


