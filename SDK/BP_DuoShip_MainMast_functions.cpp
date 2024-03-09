#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DuoShip_MainMast.BP_DuoShip_MainMast_C
// (Actor, Pawn)

class UClass* ABP_DuoShip_MainMast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DuoShip_MainMast_C");

	return Clss;
}


// BP_DuoShip_MainMast_C BP_DuoShip_MainMast.Default__BP_DuoShip_MainMast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DuoShip_MainMast_C* ABP_DuoShip_MainMast_C::GetDefaultObj()
{
	static class ABP_DuoShip_MainMast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DuoShip_MainMast_C*>(ABP_DuoShip_MainMast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DuoShip_MainMast.BP_DuoShip_MainMast_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DuoShip_MainMast_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DuoShip_MainMast_C", "ReceiveTick");

	Params::ABP_DuoShip_MainMast_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DuoShip_MainMast.BP_DuoShip_MainMast_C.ExecuteUbergraph_BP_DuoShip_MainMast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DuoShip_MainMast_C::ExecuteUbergraph_BP_DuoShip_MainMast(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DuoShip_MainMast_C", "ExecuteUbergraph_BP_DuoShip_MainMast");

	Params::ABP_DuoShip_MainMast_C_ExecuteUbergraph_BP_DuoShip_MainMast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


