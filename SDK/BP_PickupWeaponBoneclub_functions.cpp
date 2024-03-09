#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponBoneclub.BP_PickupWeaponBoneclub_C
// (Actor)

class UClass* ABP_PickupWeaponBoneclub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponBoneclub_C");

	return Clss;
}


// BP_PickupWeaponBoneclub_C BP_PickupWeaponBoneclub.Default__BP_PickupWeaponBoneclub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponBoneclub_C* ABP_PickupWeaponBoneclub_C::GetDefaultObj()
{
	static class ABP_PickupWeaponBoneclub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponBoneclub_C*>(ABP_PickupWeaponBoneclub_C::StaticClass()->DefaultObject);

	return Default;
}

}


