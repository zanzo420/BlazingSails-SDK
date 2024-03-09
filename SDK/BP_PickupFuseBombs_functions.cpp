#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupFuseBombs.BP_PickupFuseBombs_C
// (Actor)

class UClass* ABP_PickupFuseBombs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupFuseBombs_C");

	return Clss;
}


// BP_PickupFuseBombs_C BP_PickupFuseBombs.Default__BP_PickupFuseBombs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupFuseBombs_C* ABP_PickupFuseBombs_C::GetDefaultObj()
{
	static class ABP_PickupFuseBombs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupFuseBombs_C*>(ABP_PickupFuseBombs_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupFuseBombs.BP_PickupFuseBombs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupFuseBombs_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupFuseBombs_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupFuseBombs.BP_PickupFuseBombs_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupFuseBombs_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupFuseBombs_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupFuseBombs.BP_PickupFuseBombs_C.ExecuteUbergraph_BP_PickupFuseBombs
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupFuseBombs_C::ExecuteUbergraph_BP_PickupFuseBombs(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupFuseBombs_C", "ExecuteUbergraph_BP_PickupFuseBombs");

	Params::ABP_PickupFuseBombs_C_ExecuteUbergraph_BP_PickupFuseBombs_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


