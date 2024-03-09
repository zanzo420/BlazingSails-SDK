#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponSniper.BP_PickupWeaponSniper_C
// (Actor)

class UClass* ABP_PickupWeaponSniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponSniper_C");

	return Clss;
}


// BP_PickupWeaponSniper_C BP_PickupWeaponSniper.Default__BP_PickupWeaponSniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponSniper_C* ABP_PickupWeaponSniper_C::GetDefaultObj()
{
	static class ABP_PickupWeaponSniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponSniper_C*>(ABP_PickupWeaponSniper_C::StaticClass()->DefaultObject);

	return Default;
}

}


