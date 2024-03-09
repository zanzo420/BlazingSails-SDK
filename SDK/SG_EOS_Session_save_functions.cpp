#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SG_EOS_Session_save.SG_EOS_Session_Save_C
// (None)

class UClass* USG_EOS_Session_Save_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SG_EOS_Session_Save_C");

	return Clss;
}


// SG_EOS_Session_Save_C SG_EOS_Session_save.Default__SG_EOS_Session_Save_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USG_EOS_Session_Save_C* USG_EOS_Session_Save_C::GetDefaultObj()
{
	static class USG_EOS_Session_Save_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USG_EOS_Session_Save_C*>(USG_EOS_Session_Save_C::StaticClass()->DefaultObject);

	return Default;
}

}


