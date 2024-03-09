#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SG_SaveGame.SG_SaveGame_C
// (None)

class UClass* USG_SaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SG_SaveGame_C");

	return Clss;
}


// SG_SaveGame_C SG_SaveGame.Default__SG_SaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USG_SaveGame_C* USG_SaveGame_C::GetDefaultObj()
{
	static class USG_SaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USG_SaveGame_C*>(USG_SaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


