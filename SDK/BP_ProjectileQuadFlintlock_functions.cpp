#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileQuadFlintlock.BP_ProjectileQuadFlintlock_C
// (Actor)

class UClass* ABP_ProjectileQuadFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileQuadFlintlock_C");

	return Clss;
}


// BP_ProjectileQuadFlintlock_C BP_ProjectileQuadFlintlock.Default__BP_ProjectileQuadFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileQuadFlintlock_C* ABP_ProjectileQuadFlintlock_C::GetDefaultObj()
{
	static class ABP_ProjectileQuadFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileQuadFlintlock_C*>(ABP_ProjectileQuadFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


