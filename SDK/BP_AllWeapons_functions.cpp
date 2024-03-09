#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AllWeapons.BP_AllWeapons_C
// (Actor)

class UClass* ABP_AllWeapons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AllWeapons_C");

	return Clss;
}


// BP_AllWeapons_C BP_AllWeapons.Default__BP_AllWeapons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AllWeapons_C* ABP_AllWeapons_C::GetDefaultObj()
{
	static class ABP_AllWeapons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AllWeapons_C*>(ABP_AllWeapons_C::StaticClass()->DefaultObject);

	return Default;
}

}


