#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_FastSwimRight.CS_FastSwimRight_C
// (None)

class UClass* UCS_FastSwimRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_FastSwimRight_C");

	return Clss;
}


// CS_FastSwimRight_C CS_FastSwimRight.Default__CS_FastSwimRight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_FastSwimRight_C* UCS_FastSwimRight_C::GetDefaultObj()
{
	static class UCS_FastSwimRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_FastSwimRight_C*>(UCS_FastSwimRight_C::StaticClass()->DefaultObject);

	return Default;
}

}


