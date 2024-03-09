#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponBrokenBottle.BP_WeaponBrokenBottle_C
// (Actor)

class UClass* ABP_WeaponBrokenBottle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponBrokenBottle_C");

	return Clss;
}


// BP_WeaponBrokenBottle_C BP_WeaponBrokenBottle.Default__BP_WeaponBrokenBottle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponBrokenBottle_C* ABP_WeaponBrokenBottle_C::GetDefaultObj()
{
	static class ABP_WeaponBrokenBottle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponBrokenBottle_C*>(ABP_WeaponBrokenBottle_C::StaticClass()->DefaultObject);

	return Default;
}

}


