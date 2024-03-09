#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponMultiCrossbow.BP_PickupWeaponMultiCrossbow_C
// (Actor)

class UClass* ABP_PickupWeaponMultiCrossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponMultiCrossbow_C");

	return Clss;
}


// BP_PickupWeaponMultiCrossbow_C BP_PickupWeaponMultiCrossbow.Default__BP_PickupWeaponMultiCrossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponMultiCrossbow_C* ABP_PickupWeaponMultiCrossbow_C::GetDefaultObj()
{
	static class ABP_PickupWeaponMultiCrossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponMultiCrossbow_C*>(ABP_PickupWeaponMultiCrossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


