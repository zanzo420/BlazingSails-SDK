#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileDragonPistol.BP_ProjectileDragonPistol_C
// (Actor)

class UClass* ABP_ProjectileDragonPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileDragonPistol_C");

	return Clss;
}


// BP_ProjectileDragonPistol_C BP_ProjectileDragonPistol.Default__BP_ProjectileDragonPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileDragonPistol_C* ABP_ProjectileDragonPistol_C::GetDefaultObj()
{
	static class ABP_ProjectileDragonPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileDragonPistol_C*>(ABP_ProjectileDragonPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


