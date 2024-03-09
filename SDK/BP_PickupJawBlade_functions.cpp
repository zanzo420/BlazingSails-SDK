#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupJawBlade.BP_PickupJawBlade_C
// (Actor)

class UClass* ABP_PickupJawBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupJawBlade_C");

	return Clss;
}


// BP_PickupJawBlade_C BP_PickupJawBlade.Default__BP_PickupJawBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupJawBlade_C* ABP_PickupJawBlade_C::GetDefaultObj()
{
	static class ABP_PickupJawBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupJawBlade_C*>(ABP_PickupJawBlade_C::StaticClass()->DefaultObject);

	return Default;
}

}


