#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponBazooka.BP_PickupWeaponBazooka_C
// (Actor)

class UClass* ABP_PickupWeaponBazooka_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponBazooka_C");

	return Clss;
}


// BP_PickupWeaponBazooka_C BP_PickupWeaponBazooka.Default__BP_PickupWeaponBazooka_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponBazooka_C* ABP_PickupWeaponBazooka_C::GetDefaultObj()
{
	static class ABP_PickupWeaponBazooka_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponBazooka_C*>(ABP_PickupWeaponBazooka_C::StaticClass()->DefaultObject);

	return Default;
}

}


