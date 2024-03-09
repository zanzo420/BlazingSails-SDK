#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponCutlass.BP_WeaponCutlass_C
// (Actor)

class UClass* ABP_WeaponCutlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponCutlass_C");

	return Clss;
}


// BP_WeaponCutlass_C BP_WeaponCutlass.Default__BP_WeaponCutlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponCutlass_C* ABP_WeaponCutlass_C::GetDefaultObj()
{
	static class ABP_WeaponCutlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponCutlass_C*>(ABP_WeaponCutlass_C::StaticClass()->DefaultObject);

	return Default;
}

}


