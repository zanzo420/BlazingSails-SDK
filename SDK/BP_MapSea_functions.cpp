#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapSea.BP_MapSea_C
// (Actor)

class UClass* ABP_MapSea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapSea_C");

	return Clss;
}


// BP_MapSea_C BP_MapSea.Default__BP_MapSea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapSea_C* ABP_MapSea_C::GetDefaultObj()
{
	static class ABP_MapSea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapSea_C*>(ABP_MapSea_C::StaticClass()->DefaultObject);

	return Default;
}

}


