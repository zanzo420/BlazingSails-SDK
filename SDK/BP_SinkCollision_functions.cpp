#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SinkCollision.BP_SinkCollision_C
// (Actor)

class UClass* ABP_SinkCollision_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SinkCollision_C");

	return Clss;
}


// BP_SinkCollision_C BP_SinkCollision.Default__BP_SinkCollision_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SinkCollision_C* ABP_SinkCollision_C::GetDefaultObj()
{
	static class ABP_SinkCollision_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SinkCollision_C*>(ABP_SinkCollision_C::StaticClass()->DefaultObject);

	return Default;
}

}


