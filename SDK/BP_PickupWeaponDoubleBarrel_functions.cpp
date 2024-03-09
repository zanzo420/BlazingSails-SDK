#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponDoubleBarrel.BP_PickupWeaponDoubleBarrel_C
// (Actor)

class UClass* ABP_PickupWeaponDoubleBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponDoubleBarrel_C");

	return Clss;
}


// BP_PickupWeaponDoubleBarrel_C BP_PickupWeaponDoubleBarrel.Default__BP_PickupWeaponDoubleBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponDoubleBarrel_C* ABP_PickupWeaponDoubleBarrel_C::GetDefaultObj()
{
	static class ABP_PickupWeaponDoubleBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponDoubleBarrel_C*>(ABP_PickupWeaponDoubleBarrel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupWeaponDoubleBarrel.BP_PickupWeaponDoubleBarrel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponDoubleBarrel_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponDoubleBarrel_C", "ReceiveTick");

	Params::ABP_PickupWeaponDoubleBarrel_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupWeaponDoubleBarrel.BP_PickupWeaponDoubleBarrel_C.ExecuteUbergraph_BP_PickupWeaponDoubleBarrel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponDoubleBarrel_C::ExecuteUbergraph_BP_PickupWeaponDoubleBarrel(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponDoubleBarrel_C", "ExecuteUbergraph_BP_PickupWeaponDoubleBarrel");

	Params::ABP_PickupWeaponDoubleBarrel_C_ExecuteUbergraph_BP_PickupWeaponDoubleBarrel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


