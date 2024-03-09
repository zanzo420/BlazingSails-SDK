#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupArrows.BP_PickupArrows_C
// (Actor)

class UClass* ABP_PickupArrows_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupArrows_C");

	return Clss;
}


// BP_PickupArrows_C BP_PickupArrows.Default__BP_PickupArrows_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupArrows_C* ABP_PickupArrows_C::GetDefaultObj()
{
	static class ABP_PickupArrows_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupArrows_C*>(ABP_PickupArrows_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupArrows.BP_PickupArrows_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupArrows_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupArrows_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupArrows.BP_PickupArrows_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupArrows_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupArrows_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupArrows.BP_PickupArrows_C.ExecuteUbergraph_BP_PickupArrows
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupArrows_C::ExecuteUbergraph_BP_PickupArrows(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupArrows_C", "ExecuteUbergraph_BP_PickupArrows");

	Params::ABP_PickupArrows_C_ExecuteUbergraph_BP_PickupArrows_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


