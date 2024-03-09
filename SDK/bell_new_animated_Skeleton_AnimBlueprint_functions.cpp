#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass bell_new_animated_Skeleton_AnimBlueprint.bell_new_animated_Skeleton_AnimBlueprint_C
// (None)

class UClass* Ubell_new_animated_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bell_new_animated_Skeleton_AnimBlueprint_C");

	return Clss;
}


// bell_new_animated_Skeleton_AnimBlueprint_C bell_new_animated_Skeleton_AnimBlueprint.Default__bell_new_animated_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubell_new_animated_Skeleton_AnimBlueprint_C* Ubell_new_animated_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class Ubell_new_animated_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubell_new_animated_Skeleton_AnimBlueprint_C*>(Ubell_new_animated_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bell_new_animated_Skeleton_AnimBlueprint.bell_new_animated_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void Ubell_new_animated_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bell_new_animated_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::Ubell_new_animated_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function bell_new_animated_Skeleton_AnimBlueprint.bell_new_animated_Skeleton_AnimBlueprint_C.ExecuteUbergraph_bell_new_animated_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubell_new_animated_Skeleton_AnimBlueprint_C::ExecuteUbergraph_bell_new_animated_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bell_new_animated_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_bell_new_animated_Skeleton_AnimBlueprint");

	Params::Ubell_new_animated_Skeleton_AnimBlueprint_C_ExecuteUbergraph_bell_new_animated_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


