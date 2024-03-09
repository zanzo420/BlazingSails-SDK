#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileCannonballSmall.BP_ProjectileCannonballSmall_C
// (Actor)

class UClass* ABP_ProjectileCannonballSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileCannonballSmall_C");

	return Clss;
}


// BP_ProjectileCannonballSmall_C BP_ProjectileCannonballSmall.Default__BP_ProjectileCannonballSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileCannonballSmall_C* ABP_ProjectileCannonballSmall_C::GetDefaultObj()
{
	static class ABP_ProjectileCannonballSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileCannonballSmall_C*>(ABP_ProjectileCannonballSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


