#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Teleport_ShipLadder.BP_Teleport_ShipLadder_C
// (Actor)

class UClass* ABP_Teleport_ShipLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Teleport_ShipLadder_C");

	return Clss;
}


// BP_Teleport_ShipLadder_C BP_Teleport_ShipLadder.Default__BP_Teleport_ShipLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Teleport_ShipLadder_C* ABP_Teleport_ShipLadder_C::GetDefaultObj()
{
	static class ABP_Teleport_ShipLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Teleport_ShipLadder_C*>(ABP_Teleport_ShipLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


