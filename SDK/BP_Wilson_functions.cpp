#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wilson.BP_Wilson_C
// (Actor)

class UClass* ABP_Wilson_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wilson_C");

	return Clss;
}


// BP_Wilson_C BP_Wilson.Default__BP_Wilson_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wilson_C* ABP_Wilson_C::GetDefaultObj()
{
	static class ABP_Wilson_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wilson_C*>(ABP_Wilson_C::StaticClass()->DefaultObject);

	return Default;
}

}


