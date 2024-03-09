#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponBombLauncher.BP_PickupWeaponBombLauncher_C
// (Actor)

class UClass* ABP_PickupWeaponBombLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponBombLauncher_C");

	return Clss;
}


// BP_PickupWeaponBombLauncher_C BP_PickupWeaponBombLauncher.Default__BP_PickupWeaponBombLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponBombLauncher_C* ABP_PickupWeaponBombLauncher_C::GetDefaultObj()
{
	static class ABP_PickupWeaponBombLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponBombLauncher_C*>(ABP_PickupWeaponBombLauncher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupWeaponBombLauncher.BP_PickupWeaponBombLauncher_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponBombLauncher_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBombLauncher_C", "ReceiveTick");

	Params::ABP_PickupWeaponBombLauncher_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupWeaponBombLauncher.BP_PickupWeaponBombLauncher_C.ExecuteUbergraph_BP_PickupWeaponBombLauncher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponBombLauncher_C::ExecuteUbergraph_BP_PickupWeaponBombLauncher(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBombLauncher_C", "ExecuteUbergraph_BP_PickupWeaponBombLauncher");

	Params::ABP_PickupWeaponBombLauncher_C_ExecuteUbergraph_BP_PickupWeaponBombLauncher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


