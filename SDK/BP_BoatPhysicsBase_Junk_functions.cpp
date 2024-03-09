#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoatPhysicsBase_Junk.BP_BoatPhysicsBase_Junk_C
// (Actor)

class UClass* ABP_BoatPhysicsBase_Junk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoatPhysicsBase_Junk_C");

	return Clss;
}


// BP_BoatPhysicsBase_Junk_C BP_BoatPhysicsBase_Junk.Default__BP_BoatPhysicsBase_Junk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoatPhysicsBase_Junk_C* ABP_BoatPhysicsBase_Junk_C::GetDefaultObj()
{
	static class ABP_BoatPhysicsBase_Junk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoatPhysicsBase_Junk_C*>(ABP_BoatPhysicsBase_Junk_C::StaticClass()->DefaultObject);

	return Default;
}

}


