#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupAntiSail.BP_PickupAntiSail_C
// (Actor)

class UClass* ABP_PickupAntiSail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupAntiSail_C");

	return Clss;
}


// BP_PickupAntiSail_C BP_PickupAntiSail.Default__BP_PickupAntiSail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupAntiSail_C* ABP_PickupAntiSail_C::GetDefaultObj()
{
	static class ABP_PickupAntiSail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupAntiSail_C*>(ABP_PickupAntiSail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupAntiSail.BP_PickupAntiSail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupAntiSail_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupAntiSail_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupAntiSail.BP_PickupAntiSail_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupAntiSail_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupAntiSail_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupAntiSail.BP_PickupAntiSail_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             LocalCharacterRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupAntiSail_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupAntiSail_C", "Activate");

	Params::ABP_PickupAntiSail_C_Activate_Params Parms{};

	Parms.LocalCharacterRef = LocalCharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupAntiSail.BP_PickupAntiSail_C.ExecuteUbergraph_BP_PickupAntiSail
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_Event_LocalCharacterRef                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupAntiSail_C::ExecuteUbergraph_BP_PickupAntiSail(int32 EntryPoint, class ABP_Character_C* K2Node_Event_LocalCharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupAntiSail_C", "ExecuteUbergraph_BP_PickupAntiSail");

	Params::ABP_PickupAntiSail_C_ExecuteUbergraph_BP_PickupAntiSail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_LocalCharacterRef = K2Node_Event_LocalCharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


