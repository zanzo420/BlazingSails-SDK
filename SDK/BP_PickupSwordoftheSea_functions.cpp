#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupSwordoftheSea.BP_PickupSwordoftheSea_C
// (Actor)

class UClass* ABP_PickupSwordoftheSea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupSwordoftheSea_C");

	return Clss;
}


// BP_PickupSwordoftheSea_C BP_PickupSwordoftheSea.Default__BP_PickupSwordoftheSea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupSwordoftheSea_C* ABP_PickupSwordoftheSea_C::GetDefaultObj()
{
	static class ABP_PickupSwordoftheSea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupSwordoftheSea_C*>(ABP_PickupSwordoftheSea_C::StaticClass()->DefaultObject);

	return Default;
}

}


