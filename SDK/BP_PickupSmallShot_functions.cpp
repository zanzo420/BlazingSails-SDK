#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupSmallShot.BP_PickupSmallShot_C
// (Actor)

class UClass* ABP_PickupSmallShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupSmallShot_C");

	return Clss;
}


// BP_PickupSmallShot_C BP_PickupSmallShot.Default__BP_PickupSmallShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupSmallShot_C* ABP_PickupSmallShot_C::GetDefaultObj()
{
	static class ABP_PickupSmallShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupSmallShot_C*>(ABP_PickupSmallShot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupSmallShot.BP_PickupSmallShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupSmallShot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupSmallShot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupSmallShot.BP_PickupSmallShot_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupSmallShot_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupSmallShot_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupSmallShot.BP_PickupSmallShot_C.ExecuteUbergraph_BP_PickupSmallShot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupSmallShot_C::ExecuteUbergraph_BP_PickupSmallShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupSmallShot_C", "ExecuteUbergraph_BP_PickupSmallShot");

	Params::ABP_PickupSmallShot_C_ExecuteUbergraph_BP_PickupSmallShot_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


