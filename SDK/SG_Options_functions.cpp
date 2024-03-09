#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SG_Options.SG_Options_C
// (None)

class UClass* USG_Options_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SG_Options_C");

	return Clss;
}


// SG_Options_C SG_Options.Default__SG_Options_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USG_Options_C* USG_Options_C::GetDefaultObj()
{
	static class USG_Options_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USG_Options_C*>(USG_Options_C::StaticClass()->DefaultObject);

	return Default;
}

}


