#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_FishExplosion.CS_FishExplosion_C
// (None)

class UClass* UCS_FishExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_FishExplosion_C");

	return Clss;
}


// CS_FishExplosion_C CS_FishExplosion.Default__CS_FishExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_FishExplosion_C* UCS_FishExplosion_C::GetDefaultObj()
{
	static class UCS_FishExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_FishExplosion_C*>(UCS_FishExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


