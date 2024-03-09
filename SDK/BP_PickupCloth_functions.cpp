#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupCloth.BP_PickupCloth_C
// (Actor)

class UClass* ABP_PickupCloth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupCloth_C");

	return Clss;
}


// BP_PickupCloth_C BP_PickupCloth.Default__BP_PickupCloth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupCloth_C* ABP_PickupCloth_C::GetDefaultObj()
{
	static class ABP_PickupCloth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupCloth_C*>(ABP_PickupCloth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupCloth.BP_PickupCloth_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupCloth_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCloth_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCloth.BP_PickupCloth_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupCloth_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCloth_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupCloth.BP_PickupCloth_C.ExecuteUbergraph_BP_PickupCloth
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupCloth_C::ExecuteUbergraph_BP_PickupCloth(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupCloth_C", "ExecuteUbergraph_BP_PickupCloth");

	Params::ABP_PickupCloth_C_ExecuteUbergraph_BP_PickupCloth_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


