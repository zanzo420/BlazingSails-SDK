#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_BackMast.AnimBP_BackMast_C
// (None)

class UClass* UAnimBP_BackMast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_BackMast_C");

	return Clss;
}


// AnimBP_BackMast_C AnimBP_BackMast.Default__AnimBP_BackMast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_BackMast_C* UAnimBP_BackMast_C::GetDefaultObj()
{
	static class UAnimBP_BackMast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_BackMast_C*>(UAnimBP_BackMast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_BackMast.AnimBP_BackMast_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_BackMast_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_BackMast_C", "AnimGraph");

	Params::UAnimBP_BackMast_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_BackMast.AnimBP_BackMast_C.ExecuteUbergraph_AnimBP_BackMast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_BackMast_C::ExecuteUbergraph_AnimBP_BackMast(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_BackMast_C", "ExecuteUbergraph_AnimBP_BackMast");

	Params::UAnimBP_BackMast_C_ExecuteUbergraph_AnimBP_BackMast_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


