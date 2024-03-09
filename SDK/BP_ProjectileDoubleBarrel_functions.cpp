#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileDoubleBarrel.BP_ProjectileDoubleBarrel_C
// (Actor)

class UClass* ABP_ProjectileDoubleBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileDoubleBarrel_C");

	return Clss;
}


// BP_ProjectileDoubleBarrel_C BP_ProjectileDoubleBarrel.Default__BP_ProjectileDoubleBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileDoubleBarrel_C* ABP_ProjectileDoubleBarrel_C::GetDefaultObj()
{
	static class ABP_ProjectileDoubleBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileDoubleBarrel_C*>(ABP_ProjectileDoubleBarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


