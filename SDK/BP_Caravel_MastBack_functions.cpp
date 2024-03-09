#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Caravel_MastBack.BP_Caravel_MastBack_C
// (Actor, Pawn)

class UClass* ABP_Caravel_MastBack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Caravel_MastBack_C");

	return Clss;
}


// BP_Caravel_MastBack_C BP_Caravel_MastBack.Default__BP_Caravel_MastBack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Caravel_MastBack_C* ABP_Caravel_MastBack_C::GetDefaultObj()
{
	static class ABP_Caravel_MastBack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Caravel_MastBack_C*>(ABP_Caravel_MastBack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Caravel_MastBack.BP_Caravel_MastBack_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Caravel_MastBack_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Caravel_MastBack_C", "ReceiveTick");

	Params::ABP_Caravel_MastBack_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Caravel_MastBack.BP_Caravel_MastBack_C.ExecuteUbergraph_BP_Caravel_MastBack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Caravel_MastBack_C::ExecuteUbergraph_BP_Caravel_MastBack(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Caravel_MastBack_C", "ExecuteUbergraph_BP_Caravel_MastBack");

	Params::ABP_Caravel_MastBack_C_ExecuteUbergraph_BP_Caravel_MastBack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


