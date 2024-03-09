#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SG_BanData.SG_BanData_C
// (None)

class UClass* USG_BanData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SG_BanData_C");

	return Clss;
}


// SG_BanData_C SG_BanData.Default__SG_BanData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USG_BanData_C* USG_BanData_C::GetDefaultObj()
{
	static class USG_BanData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USG_BanData_C*>(USG_BanData_C::StaticClass()->DefaultObject);

	return Default;
}

}


