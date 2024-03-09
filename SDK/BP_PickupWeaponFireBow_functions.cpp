#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponFireBow.BP_PickupWeaponFireBow_C
// (Actor)

class UClass* ABP_PickupWeaponFireBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponFireBow_C");

	return Clss;
}


// BP_PickupWeaponFireBow_C BP_PickupWeaponFireBow.Default__BP_PickupWeaponFireBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponFireBow_C* ABP_PickupWeaponFireBow_C::GetDefaultObj()
{
	static class ABP_PickupWeaponFireBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponFireBow_C*>(ABP_PickupWeaponFireBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


