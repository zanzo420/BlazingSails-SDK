#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LerpCamera.BP_LerpCamera_C
// (Actor, Pawn)

class UClass* ABP_LerpCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LerpCamera_C");

	return Clss;
}


// BP_LerpCamera_C BP_LerpCamera.Default__BP_LerpCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LerpCamera_C* ABP_LerpCamera_C::GetDefaultObj()
{
	static class ABP_LerpCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LerpCamera_C*>(ABP_LerpCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


