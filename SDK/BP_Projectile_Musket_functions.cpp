#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Musket.BP_Projectile_Musket_C
// (Actor)

class UClass* ABP_Projectile_Musket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Musket_C");

	return Clss;
}


// BP_Projectile_Musket_C BP_Projectile_Musket.Default__BP_Projectile_Musket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_Musket_C* ABP_Projectile_Musket_C::GetDefaultObj()
{
	static class ABP_Projectile_Musket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_Musket_C*>(ABP_Projectile_Musket_C::StaticClass()->DefaultObject);

	return Default;
}

}

