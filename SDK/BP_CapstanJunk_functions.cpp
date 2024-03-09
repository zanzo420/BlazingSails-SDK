#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CapstanJunk.BP_CapstanJunk_C
// (Actor)

class UClass* ABP_CapstanJunk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CapstanJunk_C");

	return Clss;
}


// BP_CapstanJunk_C BP_CapstanJunk.Default__BP_CapstanJunk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CapstanJunk_C* ABP_CapstanJunk_C::GetDefaultObj()
{
	static class ABP_CapstanJunk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CapstanJunk_C*>(ABP_CapstanJunk_C::StaticClass()->DefaultObject);

	return Default;
}

}


