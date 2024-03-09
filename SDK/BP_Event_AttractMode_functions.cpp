#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Event_AttractMode.BP_Event_AttractMode_C
// (Actor)

class UClass* ABP_Event_AttractMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Event_AttractMode_C");

	return Clss;
}


// BP_Event_AttractMode_C BP_Event_AttractMode.Default__BP_Event_AttractMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Event_AttractMode_C* ABP_Event_AttractMode_C::GetDefaultObj()
{
	static class ABP_Event_AttractMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Event_AttractMode_C*>(ABP_Event_AttractMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_AttractMode_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_AttractMode_C", "ReceiveTick");

	Params::ABP_Event_AttractMode_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Event_AttractMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_AttractMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.DisableAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_AttractMode_C::DisableAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_AttractMode_C", "DisableAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.OnEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_AttractMode_C::OnEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_AttractMode_C", "OnEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.ExecuteUbergraph_BP_Event_AttractMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_AttractMode_C::ExecuteUbergraph_BP_Event_AttractMode(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_AttractMode_C", "ExecuteUbergraph_BP_Event_AttractMode");

	Params::ABP_Event_AttractMode_C_ExecuteUbergraph_BP_Event_AttractMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


