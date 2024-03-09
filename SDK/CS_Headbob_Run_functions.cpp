#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Headbob_Run.CS_Headbob_Run_C
// (None)

class UClass* UCS_Headbob_Run_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Headbob_Run_C");

	return Clss;
}


// CS_Headbob_Run_C CS_Headbob_Run.Default__CS_Headbob_Run_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Headbob_Run_C* UCS_Headbob_Run_C::GetDefaultObj()
{
	static class UCS_Headbob_Run_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Headbob_Run_C*>(UCS_Headbob_Run_C::StaticClass()->DefaultObject);

	return Default;
}

}


