#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWood.BP_PickupWood_C
// (Actor)

class UClass* ABP_PickupWood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWood_C");

	return Clss;
}


// BP_PickupWood_C BP_PickupWood.Default__BP_PickupWood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWood_C* ABP_PickupWood_C::GetDefaultObj()
{
	static class ABP_PickupWood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWood_C*>(ABP_PickupWood_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupWood.BP_PickupWood_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupWood_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWood_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupWood.BP_PickupWood_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupWood_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWood_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupWood.BP_PickupWood_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             LocalCharacterRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWood_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWood_C", "Activate");

	Params::ABP_PickupWood_C_Activate_Params Parms{};

	Parms.LocalCharacterRef = LocalCharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupWood.BP_PickupWood_C.ExecuteUbergraph_BP_PickupWood
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_Event_LocalCharacterRef                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWood_C::ExecuteUbergraph_BP_PickupWood(int32 EntryPoint, class ABP_Character_C* K2Node_Event_LocalCharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWood_C", "ExecuteUbergraph_BP_PickupWood");

	Params::ABP_PickupWood_C_ExecuteUbergraph_BP_PickupWood_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_LocalCharacterRef = K2Node_Event_LocalCharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


