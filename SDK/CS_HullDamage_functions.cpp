#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_HullDamage.CS_HullDamage_C
// (None)

class UClass* UCS_HullDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_HullDamage_C");

	return Clss;
}


// CS_HullDamage_C CS_HullDamage.Default__CS_HullDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_HullDamage_C* UCS_HullDamage_C::GetDefaultObj()
{
	static class UCS_HullDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_HullDamage_C*>(UCS_HullDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


