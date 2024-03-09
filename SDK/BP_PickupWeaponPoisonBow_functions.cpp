#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponPoisonBow.BP_PickupWeaponPoisonBow_C
// (Actor)

class UClass* ABP_PickupWeaponPoisonBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponPoisonBow_C");

	return Clss;
}


// BP_PickupWeaponPoisonBow_C BP_PickupWeaponPoisonBow.Default__BP_PickupWeaponPoisonBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponPoisonBow_C* ABP_PickupWeaponPoisonBow_C::GetDefaultObj()
{
	static class ABP_PickupWeaponPoisonBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponPoisonBow_C*>(ABP_PickupWeaponPoisonBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


