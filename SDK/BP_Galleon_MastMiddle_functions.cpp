#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Galleon_MastMiddle.BP_Galleon_MastMiddle_C
// (Actor, Pawn)

class UClass* ABP_Galleon_MastMiddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Galleon_MastMiddle_C");

	return Clss;
}


// BP_Galleon_MastMiddle_C BP_Galleon_MastMiddle.Default__BP_Galleon_MastMiddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Galleon_MastMiddle_C* ABP_Galleon_MastMiddle_C::GetDefaultObj()
{
	static class ABP_Galleon_MastMiddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Galleon_MastMiddle_C*>(ABP_Galleon_MastMiddle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Galleon_MastMiddle.BP_Galleon_MastMiddle_C.SailSetupFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Galleon_MastMiddle_C::SailSetupFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Galleon_MastMiddle_C", "SailSetupFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Galleon_MastMiddle.BP_Galleon_MastMiddle_C.RopeColorsLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Galleon_MastMiddle_C::RopeColorsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Galleon_MastMiddle_C", "RopeColorsLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Galleon_MastMiddle.BP_Galleon_MastMiddle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Galleon_MastMiddle_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Galleon_MastMiddle_C", "ReceiveTick");

	Params::ABP_Galleon_MastMiddle_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Galleon_MastMiddle.BP_Galleon_MastMiddle_C.ExecuteUbergraph_BP_Galleon_MastMiddle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Galleon_MastMiddle_C::ExecuteUbergraph_BP_Galleon_MastMiddle(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Galleon_MastMiddle_C", "ExecuteUbergraph_BP_Galleon_MastMiddle");

	Params::ABP_Galleon_MastMiddle_C_ExecuteUbergraph_BP_Galleon_MastMiddle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


