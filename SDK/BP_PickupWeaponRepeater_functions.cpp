#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponRepeater.BP_PickupWeaponRepeater_C
// (Actor)

class UClass* ABP_PickupWeaponRepeater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponRepeater_C");

	return Clss;
}


// BP_PickupWeaponRepeater_C BP_PickupWeaponRepeater.Default__BP_PickupWeaponRepeater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponRepeater_C* ABP_PickupWeaponRepeater_C::GetDefaultObj()
{
	static class ABP_PickupWeaponRepeater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponRepeater_C*>(ABP_PickupWeaponRepeater_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupWeaponRepeater.BP_PickupWeaponRepeater_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponRepeater_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponRepeater_C", "ReceiveTick");

	Params::ABP_PickupWeaponRepeater_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupWeaponRepeater.BP_PickupWeaponRepeater_C.ExecuteUbergraph_BP_PickupWeaponRepeater
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponRepeater_C::ExecuteUbergraph_BP_PickupWeaponRepeater(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponRepeater_C", "ExecuteUbergraph_BP_PickupWeaponRepeater");

	Params::ABP_PickupWeaponRepeater_C_ExecuteUbergraph_BP_PickupWeaponRepeater_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


