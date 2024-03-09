#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_CannonFire_galleon.CS_CannonFire_galleon_C
// (None)

class UClass* UCS_CannonFire_galleon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_CannonFire_galleon_C");

	return Clss;
}


// CS_CannonFire_galleon_C CS_CannonFire_galleon.Default__CS_CannonFire_galleon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_CannonFire_galleon_C* UCS_CannonFire_galleon_C::GetDefaultObj()
{
	static class UCS_CannonFire_galleon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_CannonFire_galleon_C*>(UCS_CannonFire_galleon_C::StaticClass()->DefaultObject);

	return Default;
}

}


