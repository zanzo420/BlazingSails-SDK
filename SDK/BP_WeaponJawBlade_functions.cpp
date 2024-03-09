#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponJawBlade.BP_WeaponJawBlade_C
// (Actor)

class UClass* ABP_WeaponJawBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponJawBlade_C");

	return Clss;
}


// BP_WeaponJawBlade_C BP_WeaponJawBlade.Default__BP_WeaponJawBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponJawBlade_C* ABP_WeaponJawBlade_C::GetDefaultObj()
{
	static class ABP_WeaponJawBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponJawBlade_C*>(ABP_WeaponJawBlade_C::StaticClass()->DefaultObject);

	return Default;
}

}


