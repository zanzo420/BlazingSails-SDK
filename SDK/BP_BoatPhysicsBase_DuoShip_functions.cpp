#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoatPhysicsBase_DuoShip.BP_BoatPhysicsBase_DuoShip_C
// (Actor)

class UClass* ABP_BoatPhysicsBase_DuoShip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoatPhysicsBase_DuoShip_C");

	return Clss;
}


// BP_BoatPhysicsBase_DuoShip_C BP_BoatPhysicsBase_DuoShip.Default__BP_BoatPhysicsBase_DuoShip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoatPhysicsBase_DuoShip_C* ABP_BoatPhysicsBase_DuoShip_C::GetDefaultObj()
{
	static class ABP_BoatPhysicsBase_DuoShip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoatPhysicsBase_DuoShip_C*>(ABP_BoatPhysicsBase_DuoShip_C::StaticClass()->DefaultObject);

	return Default;
}

}


