#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileHeavyShot.BP_ProjectileHeavyShot_C
// (Actor)

class UClass* ABP_ProjectileHeavyShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileHeavyShot_C");

	return Clss;
}


// BP_ProjectileHeavyShot_C BP_ProjectileHeavyShot.Default__BP_ProjectileHeavyShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileHeavyShot_C* ABP_ProjectileHeavyShot_C::GetDefaultObj()
{
	static class ABP_ProjectileHeavyShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileHeavyShot_C*>(ABP_ProjectileHeavyShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


