#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupLightCannonBalls.BP_PickupLightCannonBalls_C
// (Actor)

class UClass* ABP_PickupLightCannonBalls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupLightCannonBalls_C");

	return Clss;
}


// BP_PickupLightCannonBalls_C BP_PickupLightCannonBalls.Default__BP_PickupLightCannonBalls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupLightCannonBalls_C* ABP_PickupLightCannonBalls_C::GetDefaultObj()
{
	static class ABP_PickupLightCannonBalls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupLightCannonBalls_C*>(ABP_PickupLightCannonBalls_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupLightCannonBalls.BP_PickupLightCannonBalls_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupLightCannonBalls_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupLightCannonBalls_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupLightCannonBalls.BP_PickupLightCannonBalls_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupLightCannonBalls_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupLightCannonBalls_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupLightCannonBalls.BP_PickupLightCannonBalls_C.ExecuteUbergraph_BP_PickupLightCannonBalls
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupLightCannonBalls_C::ExecuteUbergraph_BP_PickupLightCannonBalls(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupLightCannonBalls_C", "ExecuteUbergraph_BP_PickupLightCannonBalls");

	Params::ABP_PickupLightCannonBalls_C_ExecuteUbergraph_BP_PickupLightCannonBalls_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


