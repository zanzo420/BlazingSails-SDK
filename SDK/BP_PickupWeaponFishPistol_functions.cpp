#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponFishPistol.BP_PickupWeaponFishPistol_C
// (Actor)

class UClass* ABP_PickupWeaponFishPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponFishPistol_C");

	return Clss;
}


// BP_PickupWeaponFishPistol_C BP_PickupWeaponFishPistol.Default__BP_PickupWeaponFishPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponFishPistol_C* ABP_PickupWeaponFishPistol_C::GetDefaultObj()
{
	static class ABP_PickupWeaponFishPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponFishPistol_C*>(ABP_PickupWeaponFishPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


