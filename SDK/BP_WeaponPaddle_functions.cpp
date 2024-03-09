#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponPaddle.BP_WeaponPaddle_C
// (Actor)

class UClass* ABP_WeaponPaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponPaddle_C");

	return Clss;
}


// BP_WeaponPaddle_C BP_WeaponPaddle.Default__BP_WeaponPaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponPaddle_C* ABP_WeaponPaddle_C::GetDefaultObj()
{
	static class ABP_WeaponPaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponPaddle_C*>(ABP_WeaponPaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


