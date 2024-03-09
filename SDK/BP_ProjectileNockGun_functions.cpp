#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileNockGun.BP_ProjectileNockGun_C
// (Actor)

class UClass* ABP_ProjectileNockGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileNockGun_C");

	return Clss;
}


// BP_ProjectileNockGun_C BP_ProjectileNockGun.Default__BP_ProjectileNockGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileNockGun_C* ABP_ProjectileNockGun_C::GetDefaultObj()
{
	static class ABP_ProjectileNockGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileNockGun_C*>(ABP_ProjectileNockGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


