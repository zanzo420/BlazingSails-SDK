#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileDualQuadFlintlock.BP_ProjectileDualQuadFlintlock_C
// (Actor)

class UClass* ABP_ProjectileDualQuadFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileDualQuadFlintlock_C");

	return Clss;
}


// BP_ProjectileDualQuadFlintlock_C BP_ProjectileDualQuadFlintlock.Default__BP_ProjectileDualQuadFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileDualQuadFlintlock_C* ABP_ProjectileDualQuadFlintlock_C::GetDefaultObj()
{
	static class ABP_ProjectileDualQuadFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileDualQuadFlintlock_C*>(ABP_ProjectileDualQuadFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


