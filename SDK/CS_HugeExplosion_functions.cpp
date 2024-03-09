#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_HugeExplosion.CS_HugeExplosion_C
// (None)

class UClass* UCS_HugeExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_HugeExplosion_C");

	return Clss;
}


// CS_HugeExplosion_C CS_HugeExplosion.Default__CS_HugeExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_HugeExplosion_C* UCS_HugeExplosion_C::GetDefaultObj()
{
	static class UCS_HugeExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_HugeExplosion_C*>(UCS_HugeExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


