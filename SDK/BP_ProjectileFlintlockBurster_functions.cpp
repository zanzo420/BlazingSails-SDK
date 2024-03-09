#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileFlintlockBurster.BP_ProjectileFlintlockBurster_C
// (Actor)

class UClass* ABP_ProjectileFlintlockBurster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileFlintlockBurster_C");

	return Clss;
}


// BP_ProjectileFlintlockBurster_C BP_ProjectileFlintlockBurster.Default__BP_ProjectileFlintlockBurster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileFlintlockBurster_C* ABP_ProjectileFlintlockBurster_C::GetDefaultObj()
{
	static class ABP_ProjectileFlintlockBurster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileFlintlockBurster_C*>(ABP_ProjectileFlintlockBurster_C::StaticClass()->DefaultObject);

	return Default;
}

}


