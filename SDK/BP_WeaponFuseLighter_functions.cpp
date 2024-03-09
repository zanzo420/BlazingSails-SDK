#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponFuseLighter.BP_WeaponFuseLighter_C
// (Actor)

class UClass* ABP_WeaponFuseLighter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponFuseLighter_C");

	return Clss;
}


// BP_WeaponFuseLighter_C BP_WeaponFuseLighter.Default__BP_WeaponFuseLighter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponFuseLighter_C* ABP_WeaponFuseLighter_C::GetDefaultObj()
{
	static class ABP_WeaponFuseLighter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponFuseLighter_C*>(ABP_WeaponFuseLighter_C::StaticClass()->DefaultObject);

	return Default;
}

}


