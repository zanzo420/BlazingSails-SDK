#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileNockGunFullBlast.BP_ProjectileNockGunFullBlast_C
// (Actor)

class UClass* ABP_ProjectileNockGunFullBlast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileNockGunFullBlast_C");

	return Clss;
}


// BP_ProjectileNockGunFullBlast_C BP_ProjectileNockGunFullBlast.Default__BP_ProjectileNockGunFullBlast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileNockGunFullBlast_C* ABP_ProjectileNockGunFullBlast_C::GetDefaultObj()
{
	static class ABP_ProjectileNockGunFullBlast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileNockGunFullBlast_C*>(ABP_ProjectileNockGunFullBlast_C::StaticClass()->DefaultObject);

	return Default;
}

}


