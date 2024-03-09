#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponShield.BP_PickupWeaponShield_C
// (Actor)

class UClass* ABP_PickupWeaponShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponShield_C");

	return Clss;
}


// BP_PickupWeaponShield_C BP_PickupWeaponShield.Default__BP_PickupWeaponShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponShield_C* ABP_PickupWeaponShield_C::GetDefaultObj()
{
	static class ABP_PickupWeaponShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponShield_C*>(ABP_PickupWeaponShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


