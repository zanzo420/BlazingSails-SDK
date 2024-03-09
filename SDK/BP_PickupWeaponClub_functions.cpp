#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponClub.BP_PickupWeaponClub_C
// (Actor)

class UClass* ABP_PickupWeaponClub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponClub_C");

	return Clss;
}


// BP_PickupWeaponClub_C BP_PickupWeaponClub.Default__BP_PickupWeaponClub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponClub_C* ABP_PickupWeaponClub_C::GetDefaultObj()
{
	static class ABP_PickupWeaponClub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponClub_C*>(ABP_PickupWeaponClub_C::StaticClass()->DefaultObject);

	return Default;
}

}


