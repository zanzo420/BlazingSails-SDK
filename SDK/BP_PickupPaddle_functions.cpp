#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupPaddle.BP_PickupPaddle_C
// (Actor)

class UClass* ABP_PickupPaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupPaddle_C");

	return Clss;
}


// BP_PickupPaddle_C BP_PickupPaddle.Default__BP_PickupPaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupPaddle_C* ABP_PickupPaddle_C::GetDefaultObj()
{
	static class ABP_PickupPaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupPaddle_C*>(ABP_PickupPaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


