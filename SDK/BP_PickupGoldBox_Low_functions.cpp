#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupGoldBox_Low.BP_PickupGoldBox_Low_C
// (Actor)

class UClass* ABP_PickupGoldBox_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupGoldBox_Low_C");

	return Clss;
}


// BP_PickupGoldBox_Low_C BP_PickupGoldBox_Low.Default__BP_PickupGoldBox_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupGoldBox_Low_C* ABP_PickupGoldBox_Low_C::GetDefaultObj()
{
	static class ABP_PickupGoldBox_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupGoldBox_Low_C*>(ABP_PickupGoldBox_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


