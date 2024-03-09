#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_FastSwimLeft.CS_FastSwimLeft_C
// (None)

class UClass* UCS_FastSwimLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_FastSwimLeft_C");

	return Clss;
}


// CS_FastSwimLeft_C CS_FastSwimLeft.Default__CS_FastSwimLeft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_FastSwimLeft_C* UCS_FastSwimLeft_C::GetDefaultObj()
{
	static class UCS_FastSwimLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_FastSwimLeft_C*>(UCS_FastSwimLeft_C::StaticClass()->DefaultObject);

	return Default;
}

}


