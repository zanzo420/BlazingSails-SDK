#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SG_Presets.SG_Presets_C
// (None)

class UClass* USG_Presets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SG_Presets_C");

	return Clss;
}


// SG_Presets_C SG_Presets.Default__SG_Presets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USG_Presets_C* USG_Presets_C::GetDefaultObj()
{
	static class USG_Presets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USG_Presets_C*>(USG_Presets_C::StaticClass()->DefaultObject);

	return Default;
}

}


