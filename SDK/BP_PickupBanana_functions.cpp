#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupBanana.BP_PickupBanana_C
// (Actor)

class UClass* ABP_PickupBanana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupBanana_C");

	return Clss;
}


// BP_PickupBanana_C BP_PickupBanana.Default__BP_PickupBanana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupBanana_C* ABP_PickupBanana_C::GetDefaultObj()
{
	static class ABP_PickupBanana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupBanana_C*>(ABP_PickupBanana_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupBanana.BP_PickupBanana_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupBanana_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBanana_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupBanana.BP_PickupBanana_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupBanana_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBanana_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupBanana.BP_PickupBanana_C.ExecuteUbergraph_BP_PickupBanana
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupBanana_C::ExecuteUbergraph_BP_PickupBanana(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBanana_C", "ExecuteUbergraph_BP_PickupBanana");

	Params::ABP_PickupBanana_C_ExecuteUbergraph_BP_PickupBanana_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


