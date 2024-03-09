#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupTrapShot.BP_PickupTrapShot_C
// (Actor)

class UClass* ABP_PickupTrapShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupTrapShot_C");

	return Clss;
}


// BP_PickupTrapShot_C BP_PickupTrapShot.Default__BP_PickupTrapShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupTrapShot_C* ABP_PickupTrapShot_C::GetDefaultObj()
{
	static class ABP_PickupTrapShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupTrapShot_C*>(ABP_PickupTrapShot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupTrapShot.BP_PickupTrapShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupTrapShot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupTrapShot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupTrapShot.BP_PickupTrapShot_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupTrapShot_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupTrapShot_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupTrapShot.BP_PickupTrapShot_C.ExecuteUbergraph_BP_PickupTrapShot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupTrapShot_C::ExecuteUbergraph_BP_PickupTrapShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupTrapShot_C", "ExecuteUbergraph_BP_PickupTrapShot");

	Params::ABP_PickupTrapShot_C_ExecuteUbergraph_BP_PickupTrapShot_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


