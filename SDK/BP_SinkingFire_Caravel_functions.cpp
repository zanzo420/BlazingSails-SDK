#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SinkingFire_Caravel.BP_SinkingFire_Caravel_C
// (Actor)

class UClass* ABP_SinkingFire_Caravel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SinkingFire_Caravel_C");

	return Clss;
}


// BP_SinkingFire_Caravel_C BP_SinkingFire_Caravel.Default__BP_SinkingFire_Caravel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SinkingFire_Caravel_C* ABP_SinkingFire_Caravel_C::GetDefaultObj()
{
	static class ABP_SinkingFire_Caravel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SinkingFire_Caravel_C*>(ABP_SinkingFire_Caravel_C::StaticClass()->DefaultObject);

	return Default;
}

}


