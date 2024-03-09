#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HangLamp_InsideHull.BP_HangLamp_InsideHull_C
// (Actor)

class UClass* ABP_HangLamp_InsideHull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HangLamp_InsideHull_C");

	return Clss;
}


// BP_HangLamp_InsideHull_C BP_HangLamp_InsideHull.Default__BP_HangLamp_InsideHull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HangLamp_InsideHull_C* ABP_HangLamp_InsideHull_C::GetDefaultObj()
{
	static class ABP_HangLamp_InsideHull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HangLamp_InsideHull_C*>(ABP_HangLamp_InsideHull_C::StaticClass()->DefaultObject);

	return Default;
}

}


