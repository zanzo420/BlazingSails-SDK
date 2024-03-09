#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupCannonBalls.BP_PickupCannonBalls_C
// (Actor)

class UClass* ABP_PickupCannonBalls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupCannonBalls_C");

	return Clss;
}


// BP_PickupCannonBalls_C BP_PickupCannonBalls.Default__BP_PickupCannonBalls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupCannonBalls_C* ABP_PickupCannonBalls_C::GetDefaultObj()
{
	static class ABP_PickupCannonBalls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupCannonBalls_C*>(ABP_PickupCannonBalls_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupCannonBalls.BP_PickupCannonBalls_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupCannonBalls_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCannonBalls_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCannonBalls.BP_PickupCannonBalls_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupCannonBalls_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCannonBalls_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCannonBalls.BP_PickupCannonBalls_C.ExecuteUbergraph_BP_PickupCannonBalls
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupCannonBalls_C::ExecuteUbergraph_BP_PickupCannonBalls(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCannonBalls_C", "ExecuteUbergraph_BP_PickupCannonBalls");

	Params::ABP_PickupCannonBalls_C_ExecuteUbergraph_BP_PickupCannonBalls_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


