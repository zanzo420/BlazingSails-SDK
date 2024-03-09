#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Caravel_MastFront.BP_Caravel_MastFront_C
// (Actor, Pawn)

class UClass* ABP_Caravel_MastFront_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Caravel_MastFront_C");

	return Clss;
}


// BP_Caravel_MastFront_C BP_Caravel_MastFront.Default__BP_Caravel_MastFront_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Caravel_MastFront_C* ABP_Caravel_MastFront_C::GetDefaultObj()
{
	static class ABP_Caravel_MastFront_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Caravel_MastFront_C*>(ABP_Caravel_MastFront_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Caravel_MastFront.BP_Caravel_MastFront_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Caravel_MastFront_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Caravel_MastFront_C", "ReceiveTick");

	Params::ABP_Caravel_MastFront_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Caravel_MastFront.BP_Caravel_MastFront_C.ExecuteUbergraph_BP_Caravel_MastFront
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Caravel_MastFront_C::ExecuteUbergraph_BP_Caravel_MastFront(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Caravel_MastFront_C", "ExecuteUbergraph_BP_Caravel_MastFront");

	Params::ABP_Caravel_MastFront_C_ExecuteUbergraph_BP_Caravel_MastFront_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


