#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Hammer.CS_Hammer_C
// (None)

class UClass* UCS_Hammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Hammer_C");

	return Clss;
}


// CS_Hammer_C CS_Hammer.Default__CS_Hammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Hammer_C* UCS_Hammer_C::GetDefaultObj()
{
	static class UCS_Hammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Hammer_C*>(UCS_Hammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


