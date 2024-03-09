#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Mannequin_AnimationBlueprint.Mannequin_AnimationBlueprint_C
// (None)

class UClass* UMannequin_AnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mannequin_AnimationBlueprint_C");

	return Clss;
}


// Mannequin_AnimationBlueprint_C Mannequin_AnimationBlueprint.Default__Mannequin_AnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMannequin_AnimationBlueprint_C* UMannequin_AnimationBlueprint_C::GetDefaultObj()
{
	static class UMannequin_AnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMannequin_AnimationBlueprint_C*>(UMannequin_AnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mannequin_AnimationBlueprint.Mannequin_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMannequin_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mannequin_AnimationBlueprint_C", "AnimGraph");

	Params::UMannequin_AnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Mannequin_AnimationBlueprint.Mannequin_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mannequin_AnimationBlueprint_AnimGraphNode_BlendListByBool_EBC3274C4D21A687AA1DCD9CE081E129
// (BlueprintEvent)
// Parameters:

void UMannequin_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Mannequin_AnimationBlueprint_AnimGraphNode_BlendListByBool_EBC3274C4D21A687AA1DCD9CE081E129()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mannequin_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Mannequin_AnimationBlueprint_AnimGraphNode_BlendListByBool_EBC3274C4D21A687AA1DCD9CE081E129");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mannequin_AnimationBlueprint.Mannequin_AnimationBlueprint_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UMannequin_AnimationBlueprint_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mannequin_AnimationBlueprint_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mannequin_AnimationBlueprint.Mannequin_AnimationBlueprint_C.ExecuteUbergraph_Mannequin_AnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMannequin_AnimationBlueprint_C::ExecuteUbergraph_Mannequin_AnimationBlueprint(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mannequin_AnimationBlueprint_C", "ExecuteUbergraph_Mannequin_AnimationBlueprint");

	Params::UMannequin_AnimationBlueprint_C_ExecuteUbergraph_Mannequin_AnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


