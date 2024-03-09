#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SteeringWheel_ABP.SteeringWheel_ABP_C
// (None)

class UClass* USteeringWheel_ABP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteeringWheel_ABP_C");

	return Clss;
}


// SteeringWheel_ABP_C SteeringWheel_ABP.Default__SteeringWheel_ABP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USteeringWheel_ABP_C* USteeringWheel_ABP_C::GetDefaultObj()
{
	static class USteeringWheel_ABP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USteeringWheel_ABP_C*>(USteeringWheel_ABP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SteeringWheel_ABP.SteeringWheel_ABP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USteeringWheel_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteeringWheel_ABP_C", "AnimGraph");

	Params::USteeringWheel_ABP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SteeringWheel_ABP.SteeringWheel_ABP_C.ExecuteUbergraph_SteeringWheel_ABP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USteeringWheel_ABP_C::ExecuteUbergraph_SteeringWheel_ABP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteeringWheel_ABP_C", "ExecuteUbergraph_SteeringWheel_ABP");

	Params::USteeringWheel_ABP_C_ExecuteUbergraph_SteeringWheel_ABP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


