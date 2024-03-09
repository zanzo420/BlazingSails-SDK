#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileDualFlintlock.BP_ProjectileDualFlintlock_C
// (Actor)

class UClass* ABP_ProjectileDualFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileDualFlintlock_C");

	return Clss;
}


// BP_ProjectileDualFlintlock_C BP_ProjectileDualFlintlock.Default__BP_ProjectileDualFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileDualFlintlock_C* ABP_ProjectileDualFlintlock_C::GetDefaultObj()
{
	static class ABP_ProjectileDualFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileDualFlintlock_C*>(ABP_ProjectileDualFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


