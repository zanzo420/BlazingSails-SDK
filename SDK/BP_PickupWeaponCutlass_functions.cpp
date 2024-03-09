#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponCutlass.BP_PickupWeaponCutlass_C
// (Actor)

class UClass* ABP_PickupWeaponCutlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponCutlass_C");

	return Clss;
}


// BP_PickupWeaponCutlass_C BP_PickupWeaponCutlass.Default__BP_PickupWeaponCutlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponCutlass_C* ABP_PickupWeaponCutlass_C::GetDefaultObj()
{
	static class ABP_PickupWeaponCutlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponCutlass_C*>(ABP_PickupWeaponCutlass_C::StaticClass()->DefaultObject);

	return Default;
}

}


