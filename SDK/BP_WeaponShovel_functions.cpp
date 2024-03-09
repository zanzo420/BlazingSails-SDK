#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponShovel.BP_WeaponShovel_C
// (Actor)

class UClass* ABP_WeaponShovel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponShovel_C");

	return Clss;
}


// BP_WeaponShovel_C BP_WeaponShovel.Default__BP_WeaponShovel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponShovel_C* ABP_WeaponShovel_C::GetDefaultObj()
{
	static class ABP_WeaponShovel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponShovel_C*>(ABP_WeaponShovel_C::StaticClass()->DefaultObject);

	return Default;
}

}


