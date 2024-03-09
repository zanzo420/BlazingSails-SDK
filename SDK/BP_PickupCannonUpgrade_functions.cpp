#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C
// (Actor)

class UClass* ABP_PickupCannonUpgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupCannonUpgrade_C");

	return Clss;
}


// BP_PickupCannonUpgrade_C BP_PickupCannonUpgrade.Default__BP_PickupCannonUpgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupCannonUpgrade_C* ABP_PickupCannonUpgrade_C::GetDefaultObj()
{
	static class ABP_PickupCannonUpgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupCannonUpgrade_C*>(ABP_PickupCannonUpgrade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupCannonUpgrade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCannonUpgrade_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupCannonUpgrade_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCannonUpgrade_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.ExecuteUbergraph_BP_PickupCannonUpgrade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupCannonUpgrade_C::ExecuteUbergraph_BP_PickupCannonUpgrade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCannonUpgrade_C", "ExecuteUbergraph_BP_PickupCannonUpgrade");

	Params::ABP_PickupCannonUpgrade_C_ExecuteUbergraph_BP_PickupCannonUpgrade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


