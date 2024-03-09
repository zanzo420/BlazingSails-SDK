#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElevatorActivator.BP_ElevatorActivator_C
// (Actor)

class UClass* ABP_ElevatorActivator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElevatorActivator_C");

	return Clss;
}


// BP_ElevatorActivator_C BP_ElevatorActivator.Default__BP_ElevatorActivator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ElevatorActivator_C* ABP_ElevatorActivator_C::GetDefaultObj()
{
	static class ABP_ElevatorActivator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ElevatorActivator_C*>(ABP_ElevatorActivator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ElevatorActivator.BP_ElevatorActivator_C.OnRep_HandleUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ElevatorActivator_C::OnRep_HandleUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElevatorActivator_C", "OnRep_HandleUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElevatorActivator.BP_ElevatorActivator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ElevatorActivator_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElevatorActivator_C", "ReceiveTick");

	Params::ABP_ElevatorActivator_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ElevatorActivator.BP_ElevatorActivator_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ElevatorActivator_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElevatorActivator_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ElevatorActivator.BP_ElevatorActivator_C.HandlePosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ElevatorActivator_C::HandlePosition(bool Left)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElevatorActivator_C", "HandlePosition");

	Params::ABP_ElevatorActivator_C_HandlePosition_Params Parms{};

	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ElevatorActivator.BP_ElevatorActivator_C.ExecuteUbergraph_BP_ElevatorActivator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Left                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ElevatorActivator_C::ExecuteUbergraph_BP_ElevatorActivator(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool K2Node_CustomEvent_Left, float CallFunc_FInterpTo_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElevatorActivator_C", "ExecuteUbergraph_BP_ElevatorActivator");

	Params::ABP_ElevatorActivator_C_ExecuteUbergraph_BP_ElevatorActivator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_CustomEvent_Left = K2Node_CustomEvent_Left;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


