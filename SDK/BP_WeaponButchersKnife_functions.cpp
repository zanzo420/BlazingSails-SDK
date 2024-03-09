#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponButchersKnife.BP_WeaponButchersKnife_C
// (Actor)

class UClass* ABP_WeaponButchersKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponButchersKnife_C");

	return Clss;
}


// BP_WeaponButchersKnife_C BP_WeaponButchersKnife.Default__BP_WeaponButchersKnife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponButchersKnife_C* ABP_WeaponButchersKnife_C::GetDefaultObj()
{
	static class ABP_WeaponButchersKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponButchersKnife_C*>(ABP_WeaponButchersKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


