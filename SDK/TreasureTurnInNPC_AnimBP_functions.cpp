#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass TreasureTurnInNPC_AnimBP.TreasureTurnInNPC_AnimBP_C
// (None)

class UClass* UTreasureTurnInNPC_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TreasureTurnInNPC_AnimBP_C");

	return Clss;
}


// TreasureTurnInNPC_AnimBP_C TreasureTurnInNPC_AnimBP.Default__TreasureTurnInNPC_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTreasureTurnInNPC_AnimBP_C* UTreasureTurnInNPC_AnimBP_C::GetDefaultObj()
{
	static class UTreasureTurnInNPC_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTreasureTurnInNPC_AnimBP_C*>(UTreasureTurnInNPC_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TreasureTurnInNPC_AnimBP.TreasureTurnInNPC_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UTreasureTurnInNPC_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreasureTurnInNPC_AnimBP_C", "AnimGraph");

	Params::UTreasureTurnInNPC_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function TreasureTurnInNPC_AnimBP.TreasureTurnInNPC_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UTreasureTurnInNPC_AnimBP_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreasureTurnInNPC_AnimBP_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TreasureTurnInNPC_AnimBP.TreasureTurnInNPC_AnimBP_C.ExecuteUbergraph_TreasureTurnInNPC_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTreasureTurnInNPC_AnimBP_C::ExecuteUbergraph_TreasureTurnInNPC_AnimBP(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreasureTurnInNPC_AnimBP_C", "ExecuteUbergraph_TreasureTurnInNPC_AnimBP");

	Params::UTreasureTurnInNPC_AnimBP_C_ExecuteUbergraph_TreasureTurnInNPC_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


