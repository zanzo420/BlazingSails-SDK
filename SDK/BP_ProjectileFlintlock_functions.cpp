#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileFlintlock.BP_ProjectileFlintlock_C
// (Actor)

class UClass* ABP_ProjectileFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileFlintlock_C");

	return Clss;
}


// BP_ProjectileFlintlock_C BP_ProjectileFlintlock.Default__BP_ProjectileFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileFlintlock_C* ABP_ProjectileFlintlock_C::GetDefaultObj()
{
	static class ABP_ProjectileFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileFlintlock_C*>(ABP_ProjectileFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


