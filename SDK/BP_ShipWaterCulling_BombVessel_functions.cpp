#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShipWaterCulling_BombVessel.BP_ShipWaterCulling_BombVessel_C
// (Actor)

class UClass* ABP_ShipWaterCulling_BombVessel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShipWaterCulling_BombVessel_C");

	return Clss;
}


// BP_ShipWaterCulling_BombVessel_C BP_ShipWaterCulling_BombVessel.Default__BP_ShipWaterCulling_BombVessel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShipWaterCulling_BombVessel_C* ABP_ShipWaterCulling_BombVessel_C::GetDefaultObj()
{
	static class ABP_ShipWaterCulling_BombVessel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShipWaterCulling_BombVessel_C*>(ABP_ShipWaterCulling_BombVessel_C::StaticClass()->DefaultObject);

	return Default;
}

}


