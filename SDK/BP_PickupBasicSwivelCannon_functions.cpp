#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C
// (Actor)

class UClass* ABP_PickupBasicSwivelCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupBasicSwivelCannon_C");

	return Clss;
}


// BP_PickupBasicSwivelCannon_C BP_PickupBasicSwivelCannon.Default__BP_PickupBasicSwivelCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupBasicSwivelCannon_C* ABP_PickupBasicSwivelCannon_C::GetDefaultObj()
{
	static class ABP_PickupBasicSwivelCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupBasicSwivelCannon_C*>(ABP_PickupBasicSwivelCannon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupBasicSwivelCannon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBasicSwivelCannon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupBasicSwivelCannon_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBasicSwivelCannon_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupBasicSwivelCannon.BP_PickupBasicSwivelCannon_C.ExecuteUbergraph_BP_PickupBasicSwivelCannon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupBasicSwivelCannon_C::ExecuteUbergraph_BP_PickupBasicSwivelCannon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBasicSwivelCannon_C", "ExecuteUbergraph_BP_PickupBasicSwivelCannon");

	Params::ABP_PickupBasicSwivelCannon_C_ExecuteUbergraph_BP_PickupBasicSwivelCannon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


