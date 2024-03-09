#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C
// (Actor)

class UClass* ABP_ContainerDestroyedShipChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ContainerDestroyedShipChest_C");

	return Clss;
}


// BP_ContainerDestroyedShipChest_C BP_ContainerDestroyedShipChest.Default__BP_ContainerDestroyedShipChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ContainerDestroyedShipChest_C* ABP_ContainerDestroyedShipChest_C::GetDefaultObj()
{
	static class ABP_ContainerDestroyedShipChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ContainerDestroyedShipChest_C*>(ABP_ContainerDestroyedShipChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ContainerDestroyedShipChest_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerDestroyedShipChest_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContainerDestroyedShipChest_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerDestroyedShipChest_C", "ReceiveTick");

	Params::ABP_ContainerDestroyedShipChest_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.ExecuteUbergraph_BP_ContainerDestroyedShipChest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContainerDestroyedShipChest_C::ExecuteUbergraph_BP_ContainerDestroyedShipChest(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerDestroyedShipChest_C", "ExecuteUbergraph_BP_ContainerDestroyedShipChest");

	Params::ABP_ContainerDestroyedShipChest_C_ExecuteUbergraph_BP_ContainerDestroyedShipChest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


