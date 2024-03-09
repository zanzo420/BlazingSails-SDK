#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponShield.BP_WeaponShield_C
// (Actor)

class UClass* ABP_WeaponShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponShield_C");

	return Clss;
}


// BP_WeaponShield_C BP_WeaponShield.Default__BP_WeaponShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponShield_C* ABP_WeaponShield_C::GetDefaultObj()
{
	static class ABP_WeaponShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponShield_C*>(ABP_WeaponShield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponShield.BP_WeaponShield_C.ExecuteUbergraph_BP_WeaponShield
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponShield_C::ExecuteUbergraph_BP_WeaponShield(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponShield_C", "ExecuteUbergraph_BP_WeaponShield");

	Params::ABP_WeaponShield_C_ExecuteUbergraph_BP_WeaponShield_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


