#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileBlunderbussNew.BP_ProjectileBlunderbussNew_C
// (Actor)

class UClass* ABP_ProjectileBlunderbussNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileBlunderbussNew_C");

	return Clss;
}


// BP_ProjectileBlunderbussNew_C BP_ProjectileBlunderbussNew.Default__BP_ProjectileBlunderbussNew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileBlunderbussNew_C* ABP_ProjectileBlunderbussNew_C::GetDefaultObj()
{
	static class ABP_ProjectileBlunderbussNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileBlunderbussNew_C*>(ABP_ProjectileBlunderbussNew_C::StaticClass()->DefaultObject);

	return Default;
}

}


