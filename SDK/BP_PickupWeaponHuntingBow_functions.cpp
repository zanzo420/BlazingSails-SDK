#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponHuntingBow.BP_PickupWeaponHuntingBow_C
// (Actor)

class UClass* ABP_PickupWeaponHuntingBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponHuntingBow_C");

	return Clss;
}


// BP_PickupWeaponHuntingBow_C BP_PickupWeaponHuntingBow.Default__BP_PickupWeaponHuntingBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponHuntingBow_C* ABP_PickupWeaponHuntingBow_C::GetDefaultObj()
{
	static class ABP_PickupWeaponHuntingBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponHuntingBow_C*>(ABP_PickupWeaponHuntingBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


