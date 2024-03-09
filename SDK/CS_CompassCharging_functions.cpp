#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_CompassCharging.CS_CompassCharging_C
// (None)

class UClass* UCS_CompassCharging_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_CompassCharging_C");

	return Clss;
}


// CS_CompassCharging_C CS_CompassCharging.Default__CS_CompassCharging_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_CompassCharging_C* UCS_CompassCharging_C::GetDefaultObj()
{
	static class UCS_CompassCharging_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_CompassCharging_C*>(UCS_CompassCharging_C::StaticClass()->DefaultObject);

	return Default;
}

}


