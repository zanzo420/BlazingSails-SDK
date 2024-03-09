#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AOEBazooka.BP_AOEBazooka_C
// (Actor)

class UClass* ABP_AOEBazooka_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AOEBazooka_C");

	return Clss;
}


// BP_AOEBazooka_C BP_AOEBazooka.Default__BP_AOEBazooka_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AOEBazooka_C* ABP_AOEBazooka_C::GetDefaultObj()
{
	static class ABP_AOEBazooka_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AOEBazooka_C*>(ABP_AOEBazooka_C::StaticClass()->DefaultObject);

	return Default;
}

}


