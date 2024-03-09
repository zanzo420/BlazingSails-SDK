#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponTomahawk.BP_PickupWeaponTomahawk_C
// (Actor)

class UClass* ABP_PickupWeaponTomahawk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponTomahawk_C");

	return Clss;
}


// BP_PickupWeaponTomahawk_C BP_PickupWeaponTomahawk.Default__BP_PickupWeaponTomahawk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponTomahawk_C* ABP_PickupWeaponTomahawk_C::GetDefaultObj()
{
	static class ABP_PickupWeaponTomahawk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponTomahawk_C*>(ABP_PickupWeaponTomahawk_C::StaticClass()->DefaultObject);

	return Default;
}

}


