#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SinkCollision_Sloop.BP_SinkCollision_Sloop_C
// (Actor)

class UClass* ABP_SinkCollision_Sloop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SinkCollision_Sloop_C");

	return Clss;
}


// BP_SinkCollision_Sloop_C BP_SinkCollision_Sloop.Default__BP_SinkCollision_Sloop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SinkCollision_Sloop_C* ABP_SinkCollision_Sloop_C::GetDefaultObj()
{
	static class ABP_SinkCollision_Sloop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SinkCollision_Sloop_C*>(ABP_SinkCollision_Sloop_C::StaticClass()->DefaultObject);

	return Default;
}

}


