#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RandomWeaponSpawnPoint.BP_RandomWeaponSpawnPoint_C
// (Actor)

class UClass* ABP_RandomWeaponSpawnPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RandomWeaponSpawnPoint_C");

	return Clss;
}


// BP_RandomWeaponSpawnPoint_C BP_RandomWeaponSpawnPoint.Default__BP_RandomWeaponSpawnPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RandomWeaponSpawnPoint_C* ABP_RandomWeaponSpawnPoint_C::GetDefaultObj()
{
	static class ABP_RandomWeaponSpawnPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RandomWeaponSpawnPoint_C*>(ABP_RandomWeaponSpawnPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


