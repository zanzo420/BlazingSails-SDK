#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponSniper2.BP_PickupWeaponSniper2_C
// (Actor)

class UClass* ABP_PickupWeaponSniper2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponSniper2_C");

	return Clss;
}


// BP_PickupWeaponSniper2_C BP_PickupWeaponSniper2.Default__BP_PickupWeaponSniper2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponSniper2_C* ABP_PickupWeaponSniper2_C::GetDefaultObj()
{
	static class ABP_PickupWeaponSniper2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponSniper2_C*>(ABP_PickupWeaponSniper2_C::StaticClass()->DefaultObject);

	return Default;
}

}

