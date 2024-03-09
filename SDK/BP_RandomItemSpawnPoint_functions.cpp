#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RandomItemSpawnPoint.BP_RandomItemSpawnPoint_C
// (Actor)

class UClass* ABP_RandomItemSpawnPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RandomItemSpawnPoint_C");

	return Clss;
}


// BP_RandomItemSpawnPoint_C BP_RandomItemSpawnPoint.Default__BP_RandomItemSpawnPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RandomItemSpawnPoint_C* ABP_RandomItemSpawnPoint_C::GetDefaultObj()
{
	static class ABP_RandomItemSpawnPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RandomItemSpawnPoint_C*>(ABP_RandomItemSpawnPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


