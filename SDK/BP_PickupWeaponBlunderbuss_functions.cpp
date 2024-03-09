#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponBlunderbuss.BP_PickupWeaponBlunderbuss_C
// (Actor)

class UClass* ABP_PickupWeaponBlunderbuss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponBlunderbuss_C");

	return Clss;
}


// BP_PickupWeaponBlunderbuss_C BP_PickupWeaponBlunderbuss.Default__BP_PickupWeaponBlunderbuss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponBlunderbuss_C* ABP_PickupWeaponBlunderbuss_C::GetDefaultObj()
{
	static class ABP_PickupWeaponBlunderbuss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponBlunderbuss_C*>(ABP_PickupWeaponBlunderbuss_C::StaticClass()->DefaultObject);

	return Default;
}

}


