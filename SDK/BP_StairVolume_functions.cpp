#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StairVolume.BP_StairVolume_C
// (Actor)

class UClass* ABP_StairVolume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StairVolume_C");

	return Clss;
}


// BP_StairVolume_C BP_StairVolume.Default__BP_StairVolume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StairVolume_C* ABP_StairVolume_C::GetDefaultObj()
{
	static class ABP_StairVolume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StairVolume_C*>(ABP_StairVolume_C::StaticClass()->DefaultObject);

	return Default;
}

}


