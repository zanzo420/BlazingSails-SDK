#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SG_Banlist.SG_Banlist_C
// (None)

class UClass* USG_Banlist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SG_Banlist_C");

	return Clss;
}


// SG_Banlist_C SG_Banlist.Default__SG_Banlist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USG_Banlist_C* USG_Banlist_C::GetDefaultObj()
{
	static class USG_Banlist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USG_Banlist_C*>(USG_Banlist_C::StaticClass()->DefaultObject);

	return Default;
}

}


