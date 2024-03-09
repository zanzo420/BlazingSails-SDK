#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_CannonFire.CS_CannonFire_C
// (None)

class UClass* UCS_CannonFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_CannonFire_C");

	return Clss;
}


// CS_CannonFire_C CS_CannonFire.Default__CS_CannonFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_CannonFire_C* UCS_CannonFire_C::GetDefaultObj()
{
	static class UCS_CannonFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_CannonFire_C*>(UCS_CannonFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


