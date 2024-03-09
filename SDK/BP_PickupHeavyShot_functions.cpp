#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupHeavyShot.BP_PickupHeavyShot_C
// (Actor)

class UClass* ABP_PickupHeavyShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupHeavyShot_C");

	return Clss;
}


// BP_PickupHeavyShot_C BP_PickupHeavyShot.Default__BP_PickupHeavyShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupHeavyShot_C* ABP_PickupHeavyShot_C::GetDefaultObj()
{
	static class ABP_PickupHeavyShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupHeavyShot_C*>(ABP_PickupHeavyShot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupHeavyShot.BP_PickupHeavyShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupHeavyShot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupHeavyShot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupHeavyShot.BP_PickupHeavyShot_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupHeavyShot_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupHeavyShot_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupHeavyShot.BP_PickupHeavyShot_C.ExecuteUbergraph_BP_PickupHeavyShot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupHeavyShot_C::ExecuteUbergraph_BP_PickupHeavyShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupHeavyShot_C", "ExecuteUbergraph_BP_PickupHeavyShot");

	Params::ABP_PickupHeavyShot_C_ExecuteUbergraph_BP_PickupHeavyShot_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


