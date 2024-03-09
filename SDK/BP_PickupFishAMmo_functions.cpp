#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupFishAMmo.BP_PickupFishAmmo_C
// (Actor)

class UClass* ABP_PickupFishAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupFishAmmo_C");

	return Clss;
}


// BP_PickupFishAmmo_C BP_PickupFishAMmo.Default__BP_PickupFishAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupFishAmmo_C* ABP_PickupFishAmmo_C::GetDefaultObj()
{
	static class ABP_PickupFishAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupFishAmmo_C*>(ABP_PickupFishAmmo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupFishAMmo.BP_PickupFishAmmo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupFishAmmo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupFishAmmo_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupFishAMmo.BP_PickupFishAmmo_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupFishAmmo_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupFishAmmo_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupFishAMmo.BP_PickupFishAmmo_C.ExecuteUbergraph_BP_PickupFishAmmo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupFishAmmo_C::ExecuteUbergraph_BP_PickupFishAmmo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupFishAmmo_C", "ExecuteUbergraph_BP_PickupFishAmmo");

	Params::ABP_PickupFishAmmo_C_ExecuteUbergraph_BP_PickupFishAmmo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


