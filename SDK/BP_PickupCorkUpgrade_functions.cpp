#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupCorkUpgrade.BP_PickupCorkUpgrade_C
// (Actor)

class UClass* ABP_PickupCorkUpgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupCorkUpgrade_C");

	return Clss;
}


// BP_PickupCorkUpgrade_C BP_PickupCorkUpgrade.Default__BP_PickupCorkUpgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupCorkUpgrade_C* ABP_PickupCorkUpgrade_C::GetDefaultObj()
{
	static class ABP_PickupCorkUpgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupCorkUpgrade_C*>(ABP_PickupCorkUpgrade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupCorkUpgrade.BP_PickupCorkUpgrade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupCorkUpgrade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCorkUpgrade_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCorkUpgrade.BP_PickupCorkUpgrade_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupCorkUpgrade_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCorkUpgrade_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCorkUpgrade.BP_PickupCorkUpgrade_C.ExecuteUbergraph_BP_PickupCorkUpgrade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupCorkUpgrade_C::ExecuteUbergraph_BP_PickupCorkUpgrade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCorkUpgrade_C", "ExecuteUbergraph_BP_PickupCorkUpgrade");

	Params::ABP_PickupCorkUpgrade_C_ExecuteUbergraph_BP_PickupCorkUpgrade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


