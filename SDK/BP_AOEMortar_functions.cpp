#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AOEMortar.BP_AOEMortar_C
// (Actor)

class UClass* ABP_AOEMortar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AOEMortar_C");

	return Clss;
}


// BP_AOEMortar_C BP_AOEMortar.Default__BP_AOEMortar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AOEMortar_C* ABP_AOEMortar_C::GetDefaultObj()
{
	static class ABP_AOEMortar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AOEMortar_C*>(ABP_AOEMortar_C::StaticClass()->DefaultObject);

	return Default;
}

}


