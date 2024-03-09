#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponPickaxe.BP_PickupWeaponPickaxe_C
// (Actor)

class UClass* ABP_PickupWeaponPickaxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponPickaxe_C");

	return Clss;
}


// BP_PickupWeaponPickaxe_C BP_PickupWeaponPickaxe.Default__BP_PickupWeaponPickaxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponPickaxe_C* ABP_PickupWeaponPickaxe_C::GetDefaultObj()
{
	static class ABP_PickupWeaponPickaxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponPickaxe_C*>(ABP_PickupWeaponPickaxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


