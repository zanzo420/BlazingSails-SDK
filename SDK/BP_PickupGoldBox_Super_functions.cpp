#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupGoldBox_Super.BP_PickupGoldBox_Super_C
// (Actor)

class UClass* ABP_PickupGoldBox_Super_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupGoldBox_Super_C");

	return Clss;
}


// BP_PickupGoldBox_Super_C BP_PickupGoldBox_Super.Default__BP_PickupGoldBox_Super_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupGoldBox_Super_C* ABP_PickupGoldBox_Super_C::GetDefaultObj()
{
	static class ABP_PickupGoldBox_Super_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupGoldBox_Super_C*>(ABP_PickupGoldBox_Super_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupGoldBox_Super.BP_PickupGoldBox_Super_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupGoldBox_Super_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupGoldBox_Super_C", "ReceiveTick");

	Params::ABP_PickupGoldBox_Super_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupGoldBox_Super.BP_PickupGoldBox_Super_C.ExecuteUbergraph_BP_PickupGoldBox_Super
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupGoldBox_Super_C::ExecuteUbergraph_BP_PickupGoldBox_Super(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupGoldBox_Super_C", "ExecuteUbergraph_BP_PickupGoldBox_Super");

	Params::ABP_PickupGoldBox_Super_C_ExecuteUbergraph_BP_PickupGoldBox_Super_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


