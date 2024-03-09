#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupCapstanUpgrade.BP_PickupCapstanUpgrade_C
// (Actor)

class UClass* ABP_PickupCapstanUpgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupCapstanUpgrade_C");

	return Clss;
}


// BP_PickupCapstanUpgrade_C BP_PickupCapstanUpgrade.Default__BP_PickupCapstanUpgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupCapstanUpgrade_C* ABP_PickupCapstanUpgrade_C::GetDefaultObj()
{
	static class ABP_PickupCapstanUpgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupCapstanUpgrade_C*>(ABP_PickupCapstanUpgrade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupCapstanUpgrade.BP_PickupCapstanUpgrade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupCapstanUpgrade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCapstanUpgrade_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCapstanUpgrade.BP_PickupCapstanUpgrade_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupCapstanUpgrade_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCapstanUpgrade_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCapstanUpgrade.BP_PickupCapstanUpgrade_C.ExecuteUbergraph_BP_PickupCapstanUpgrade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupCapstanUpgrade_C::ExecuteUbergraph_BP_PickupCapstanUpgrade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCapstanUpgrade_C", "ExecuteUbergraph_BP_PickupCapstanUpgrade");

	Params::ABP_PickupCapstanUpgrade_C_ExecuteUbergraph_BP_PickupCapstanUpgrade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


