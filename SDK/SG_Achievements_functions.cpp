#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SG_Achievements.SG_Achievements_C
// (None)

class UClass* USG_Achievements_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SG_Achievements_C");

	return Clss;
}


// SG_Achievements_C SG_Achievements.Default__SG_Achievements_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USG_Achievements_C* USG_Achievements_C::GetDefaultObj()
{
	static class USG_Achievements_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USG_Achievements_C*>(USG_Achievements_C::StaticClass()->DefaultObject);

	return Default;
}

}


