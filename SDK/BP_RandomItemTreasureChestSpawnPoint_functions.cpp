#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RandomItemTreasureChestSpawnPoint.BP_RandomItemTreasureChestSpawnPoint_C
// (Actor)

class UClass* ABP_RandomItemTreasureChestSpawnPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RandomItemTreasureChestSpawnPoint_C");

	return Clss;
}


// BP_RandomItemTreasureChestSpawnPoint_C BP_RandomItemTreasureChestSpawnPoint.Default__BP_RandomItemTreasureChestSpawnPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RandomItemTreasureChestSpawnPoint_C* ABP_RandomItemTreasureChestSpawnPoint_C::GetDefaultObj()
{
	static class ABP_RandomItemTreasureChestSpawnPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RandomItemTreasureChestSpawnPoint_C*>(ABP_RandomItemTreasureChestSpawnPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


