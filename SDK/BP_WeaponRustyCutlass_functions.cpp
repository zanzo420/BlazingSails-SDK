#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponRustyCutlass.BP_WeaponRustyCutlass_C
// (Actor)

class UClass* ABP_WeaponRustyCutlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponRustyCutlass_C");

	return Clss;
}


// BP_WeaponRustyCutlass_C BP_WeaponRustyCutlass.Default__BP_WeaponRustyCutlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponRustyCutlass_C* ABP_WeaponRustyCutlass_C::GetDefaultObj()
{
	static class ABP_WeaponRustyCutlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponRustyCutlass_C*>(ABP_WeaponRustyCutlass_C::StaticClass()->DefaultObject);

	return Default;
}

}


