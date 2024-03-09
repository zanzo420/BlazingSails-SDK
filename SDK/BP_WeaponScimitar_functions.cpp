#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponScimitar.BP_WeaponScimitar_C
// (Actor)

class UClass* ABP_WeaponScimitar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponScimitar_C");

	return Clss;
}


// BP_WeaponScimitar_C BP_WeaponScimitar.Default__BP_WeaponScimitar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponScimitar_C* ABP_WeaponScimitar_C::GetDefaultObj()
{
	static class ABP_WeaponScimitar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponScimitar_C*>(ABP_WeaponScimitar_C::StaticClass()->DefaultObject);

	return Default;
}

}


