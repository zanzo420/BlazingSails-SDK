#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupPumpUpgrade.BP_PickupPumpUpgrade_C
// (Actor)

class UClass* ABP_PickupPumpUpgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupPumpUpgrade_C");

	return Clss;
}


// BP_PickupPumpUpgrade_C BP_PickupPumpUpgrade.Default__BP_PickupPumpUpgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupPumpUpgrade_C* ABP_PickupPumpUpgrade_C::GetDefaultObj()
{
	static class ABP_PickupPumpUpgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupPumpUpgrade_C*>(ABP_PickupPumpUpgrade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupPumpUpgrade.BP_PickupPumpUpgrade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupPumpUpgrade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupPumpUpgrade_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupPumpUpgrade.BP_PickupPumpUpgrade_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupPumpUpgrade_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupPumpUpgrade_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupPumpUpgrade.BP_PickupPumpUpgrade_C.ExecuteUbergraph_BP_PickupPumpUpgrade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupPumpUpgrade_C::ExecuteUbergraph_BP_PickupPumpUpgrade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupPumpUpgrade_C", "ExecuteUbergraph_BP_PickupPumpUpgrade");

	Params::ABP_PickupPumpUpgrade_C_ExecuteUbergraph_BP_PickupPumpUpgrade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


