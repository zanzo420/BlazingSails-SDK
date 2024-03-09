#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponRustyCutlass.BP_PickupWeaponRustyCutlass_C
// (Actor)

class UClass* ABP_PickupWeaponRustyCutlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponRustyCutlass_C");

	return Clss;
}


// BP_PickupWeaponRustyCutlass_C BP_PickupWeaponRustyCutlass.Default__BP_PickupWeaponRustyCutlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponRustyCutlass_C* ABP_PickupWeaponRustyCutlass_C::GetDefaultObj()
{
	static class ABP_PickupWeaponRustyCutlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponRustyCutlass_C*>(ABP_PickupWeaponRustyCutlass_C::StaticClass()->DefaultObject);

	return Default;
}

}


