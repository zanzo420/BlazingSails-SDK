#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponFishLauncher.BP_PickupWeaponFishLauncher_C
// (Actor)

class UClass* ABP_PickupWeaponFishLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponFishLauncher_C");

	return Clss;
}


// BP_PickupWeaponFishLauncher_C BP_PickupWeaponFishLauncher.Default__BP_PickupWeaponFishLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponFishLauncher_C* ABP_PickupWeaponFishLauncher_C::GetDefaultObj()
{
	static class ABP_PickupWeaponFishLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponFishLauncher_C*>(ABP_PickupWeaponFishLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


