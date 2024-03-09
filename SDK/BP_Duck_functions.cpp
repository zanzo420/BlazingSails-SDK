#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Duck.BP_Duck_C
// (Actor)

class UClass* ABP_Duck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Duck_C");

	return Clss;
}


// BP_Duck_C BP_Duck.Default__BP_Duck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Duck_C* ABP_Duck_C::GetDefaultObj()
{
	static class ABP_Duck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Duck_C*>(ABP_Duck_C::StaticClass()->DefaultObject);

	return Default;
}

}


