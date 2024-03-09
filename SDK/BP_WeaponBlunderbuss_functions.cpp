#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponBlunderbuss.BP_WeaponBlunderbuss_C
// (Actor)

class UClass* ABP_WeaponBlunderbuss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponBlunderbuss_C");

	return Clss;
}


// BP_WeaponBlunderbuss_C BP_WeaponBlunderbuss.Default__BP_WeaponBlunderbuss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponBlunderbuss_C* ABP_WeaponBlunderbuss_C::GetDefaultObj()
{
	static class ABP_WeaponBlunderbuss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponBlunderbuss_C*>(ABP_WeaponBlunderbuss_C::StaticClass()->DefaultObject);

	return Default;
}

}


