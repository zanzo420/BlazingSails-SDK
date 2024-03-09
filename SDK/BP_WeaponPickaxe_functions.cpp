#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponPickaxe.BP_WeaponPickaxe_C
// (Actor)

class UClass* ABP_WeaponPickaxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponPickaxe_C");

	return Clss;
}


// BP_WeaponPickaxe_C BP_WeaponPickaxe.Default__BP_WeaponPickaxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponPickaxe_C* ABP_WeaponPickaxe_C::GetDefaultObj()
{
	static class ABP_WeaponPickaxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponPickaxe_C*>(ABP_WeaponPickaxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


