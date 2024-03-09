#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupSteeringWheelUpgrade.BP_PickupSteeringWheelUpgrade_C
// (Actor)

class UClass* ABP_PickupSteeringWheelUpgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupSteeringWheelUpgrade_C");

	return Clss;
}


// BP_PickupSteeringWheelUpgrade_C BP_PickupSteeringWheelUpgrade.Default__BP_PickupSteeringWheelUpgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupSteeringWheelUpgrade_C* ABP_PickupSteeringWheelUpgrade_C::GetDefaultObj()
{
	static class ABP_PickupSteeringWheelUpgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupSteeringWheelUpgrade_C*>(ABP_PickupSteeringWheelUpgrade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupSteeringWheelUpgrade.BP_PickupSteeringWheelUpgrade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupSteeringWheelUpgrade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupSteeringWheelUpgrade_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupSteeringWheelUpgrade.BP_PickupSteeringWheelUpgrade_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupSteeringWheelUpgrade_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupSteeringWheelUpgrade_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupSteeringWheelUpgrade.BP_PickupSteeringWheelUpgrade_C.ExecuteUbergraph_BP_PickupSteeringWheelUpgrade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupSteeringWheelUpgrade_C::ExecuteUbergraph_BP_PickupSteeringWheelUpgrade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupSteeringWheelUpgrade_C", "ExecuteUbergraph_BP_PickupSteeringWheelUpgrade");

	Params::ABP_PickupSteeringWheelUpgrade_C_ExecuteUbergraph_BP_PickupSteeringWheelUpgrade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


