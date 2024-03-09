#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupAntiCannon.BP_PickupAntiCannon_C
// (Actor)

class UClass* ABP_PickupAntiCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupAntiCannon_C");

	return Clss;
}


// BP_PickupAntiCannon_C BP_PickupAntiCannon.Default__BP_PickupAntiCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupAntiCannon_C* ABP_PickupAntiCannon_C::GetDefaultObj()
{
	static class ABP_PickupAntiCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupAntiCannon_C*>(ABP_PickupAntiCannon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupAntiCannon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupAntiCannon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupAntiCannon_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupAntiCannon_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             LocalCharacterRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupAntiCannon_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupAntiCannon_C", "Activate");

	Params::ABP_PickupAntiCannon_C_Activate_Params Parms{};

	Parms.LocalCharacterRef = LocalCharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupAntiCannon.BP_PickupAntiCannon_C.ExecuteUbergraph_BP_PickupAntiCannon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_Event_LocalCharacterRef                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupAntiCannon_C::ExecuteUbergraph_BP_PickupAntiCannon(int32 EntryPoint, class ABP_Character_C* K2Node_Event_LocalCharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupAntiCannon_C", "ExecuteUbergraph_BP_PickupAntiCannon");

	Params::ABP_PickupAntiCannon_C_ExecuteUbergraph_BP_PickupAntiCannon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_LocalCharacterRef = K2Node_Event_LocalCharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


