#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponMusket.BP_PickupWeaponMusket_C
// (Actor)

class UClass* ABP_PickupWeaponMusket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponMusket_C");

	return Clss;
}


// BP_PickupWeaponMusket_C BP_PickupWeaponMusket.Default__BP_PickupWeaponMusket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponMusket_C* ABP_PickupWeaponMusket_C::GetDefaultObj()
{
	static class ABP_PickupWeaponMusket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponMusket_C*>(ABP_PickupWeaponMusket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupWeaponMusket.BP_PickupWeaponMusket_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponMusket_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponMusket_C", "ReceiveTick");

	Params::ABP_PickupWeaponMusket_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupWeaponMusket.BP_PickupWeaponMusket_C.ExecuteUbergraph_BP_PickupWeaponMusket
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponMusket_C::ExecuteUbergraph_BP_PickupWeaponMusket(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponMusket_C", "ExecuteUbergraph_BP_PickupWeaponMusket");

	Params::ABP_PickupWeaponMusket_C_ExecuteUbergraph_BP_PickupWeaponMusket_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


