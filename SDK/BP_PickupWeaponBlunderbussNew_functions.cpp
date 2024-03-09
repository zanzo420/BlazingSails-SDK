#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponBlunderbussNew.BP_PickupWeaponBlunderbussNew_C
// (Actor)

class UClass* ABP_PickupWeaponBlunderbussNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponBlunderbussNew_C");

	return Clss;
}


// BP_PickupWeaponBlunderbussNew_C BP_PickupWeaponBlunderbussNew.Default__BP_PickupWeaponBlunderbussNew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponBlunderbussNew_C* ABP_PickupWeaponBlunderbussNew_C::GetDefaultObj()
{
	static class ABP_PickupWeaponBlunderbussNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponBlunderbussNew_C*>(ABP_PickupWeaponBlunderbussNew_C::StaticClass()->DefaultObject);

	return Default;
}

}


