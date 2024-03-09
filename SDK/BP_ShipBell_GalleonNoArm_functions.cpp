#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShipBell_GalleonNoArm.BP_ShipBell_GalleonNoArm_C
// (Actor)

class UClass* ABP_ShipBell_GalleonNoArm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShipBell_GalleonNoArm_C");

	return Clss;
}


// BP_ShipBell_GalleonNoArm_C BP_ShipBell_GalleonNoArm.Default__BP_ShipBell_GalleonNoArm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShipBell_GalleonNoArm_C* ABP_ShipBell_GalleonNoArm_C::GetDefaultObj()
{
	static class ABP_ShipBell_GalleonNoArm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShipBell_GalleonNoArm_C*>(ABP_ShipBell_GalleonNoArm_C::StaticClass()->DefaultObject);

	return Default;
}

}


