#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupGoldBox_ShipBox.BP_PickupGoldBox_ShipBox_C
// (Actor)

class UClass* ABP_PickupGoldBox_ShipBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupGoldBox_ShipBox_C");

	return Clss;
}


// BP_PickupGoldBox_ShipBox_C BP_PickupGoldBox_ShipBox.Default__BP_PickupGoldBox_ShipBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupGoldBox_ShipBox_C* ABP_PickupGoldBox_ShipBox_C::GetDefaultObj()
{
	static class ABP_PickupGoldBox_ShipBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupGoldBox_ShipBox_C*>(ABP_PickupGoldBox_ShipBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


