#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileHalfBarrel.BP_ProjectileHalfBarrel_C
// (Actor)

class UClass* ABP_ProjectileHalfBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileHalfBarrel_C");

	return Clss;
}


// BP_ProjectileHalfBarrel_C BP_ProjectileHalfBarrel.Default__BP_ProjectileHalfBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileHalfBarrel_C* ABP_ProjectileHalfBarrel_C::GetDefaultObj()
{
	static class ABP_ProjectileHalfBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileHalfBarrel_C*>(ABP_ProjectileHalfBarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


