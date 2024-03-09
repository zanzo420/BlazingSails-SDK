#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponHalfBarrel.BP_WeaponHalfBarrel_C
// (Actor)

class UClass* ABP_WeaponHalfBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponHalfBarrel_C");

	return Clss;
}


// BP_WeaponHalfBarrel_C BP_WeaponHalfBarrel.Default__BP_WeaponHalfBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponHalfBarrel_C* ABP_WeaponHalfBarrel_C::GetDefaultObj()
{
	static class ABP_WeaponHalfBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponHalfBarrel_C*>(ABP_WeaponHalfBarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


