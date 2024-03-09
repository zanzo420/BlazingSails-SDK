#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponDragonPistol.BP_PickupWeaponDragonPistol_C
// (Actor)

class UClass* ABP_PickupWeaponDragonPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponDragonPistol_C");

	return Clss;
}


// BP_PickupWeaponDragonPistol_C BP_PickupWeaponDragonPistol.Default__BP_PickupWeaponDragonPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponDragonPistol_C* ABP_PickupWeaponDragonPistol_C::GetDefaultObj()
{
	static class ABP_PickupWeaponDragonPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponDragonPistol_C*>(ABP_PickupWeaponDragonPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


