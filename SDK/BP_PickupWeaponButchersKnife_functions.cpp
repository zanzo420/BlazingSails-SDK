#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponButchersKnife.BP_PickupWeaponButchersKnife_C
// (Actor)

class UClass* ABP_PickupWeaponButchersKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponButchersKnife_C");

	return Clss;
}


// BP_PickupWeaponButchersKnife_C BP_PickupWeaponButchersKnife.Default__BP_PickupWeaponButchersKnife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponButchersKnife_C* ABP_PickupWeaponButchersKnife_C::GetDefaultObj()
{
	static class ABP_PickupWeaponButchersKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponButchersKnife_C*>(ABP_PickupWeaponButchersKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


