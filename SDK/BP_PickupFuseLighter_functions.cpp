#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupFuseLighter.BP_PickupFuseLighter_C
// (Actor)

class UClass* ABP_PickupFuseLighter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupFuseLighter_C");

	return Clss;
}


// BP_PickupFuseLighter_C BP_PickupFuseLighter.Default__BP_PickupFuseLighter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupFuseLighter_C* ABP_PickupFuseLighter_C::GetDefaultObj()
{
	static class ABP_PickupFuseLighter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupFuseLighter_C*>(ABP_PickupFuseLighter_C::StaticClass()->DefaultObject);

	return Default;
}

}


