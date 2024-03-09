#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BombVessel_MastBaseFront.BP_BombVessel_MastBaseFront_C
// (Actor, Pawn)

class UClass* ABP_BombVessel_MastBaseFront_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BombVessel_MastBaseFront_C");

	return Clss;
}


// BP_BombVessel_MastBaseFront_C BP_BombVessel_MastBaseFront.Default__BP_BombVessel_MastBaseFront_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BombVessel_MastBaseFront_C* ABP_BombVessel_MastBaseFront_C::GetDefaultObj()
{
	static class ABP_BombVessel_MastBaseFront_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BombVessel_MastBaseFront_C*>(ABP_BombVessel_MastBaseFront_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BombVessel_MastBaseFront.BP_BombVessel_MastBaseFront_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BombVessel_MastBaseFront_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BombVessel_MastBaseFront_C", "ReceiveTick");

	Params::ABP_BombVessel_MastBaseFront_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BombVessel_MastBaseFront.BP_BombVessel_MastBaseFront_C.ExecuteUbergraph_BP_BombVessel_MastBaseFront
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BombVessel_MastBaseFront_C::ExecuteUbergraph_BP_BombVessel_MastBaseFront(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BombVessel_MastBaseFront_C", "ExecuteUbergraph_BP_BombVessel_MastBaseFront");

	Params::ABP_BombVessel_MastBaseFront_C_ExecuteUbergraph_BP_BombVessel_MastBaseFront_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


