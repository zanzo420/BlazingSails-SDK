#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionLeaveCrew.BP_ActionLeaveCrew_C
// (Actor)

class UClass* ABP_ActionLeaveCrew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionLeaveCrew_C");

	return Clss;
}


// BP_ActionLeaveCrew_C BP_ActionLeaveCrew.Default__BP_ActionLeaveCrew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionLeaveCrew_C* ABP_ActionLeaveCrew_C::GetDefaultObj()
{
	static class ABP_ActionLeaveCrew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionLeaveCrew_C*>(ABP_ActionLeaveCrew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionLeaveCrew.BP_ActionLeaveCrew_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionLeaveCrew_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionLeaveCrew_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionLeaveCrew.BP_ActionLeaveCrew_C.ExecuteUbergraph_BP_ActionLeaveCrew
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionLeaveCrew_C::ExecuteUbergraph_BP_ActionLeaveCrew(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionLeaveCrew_C", "ExecuteUbergraph_BP_ActionLeaveCrew");

	Params::ABP_ActionLeaveCrew_C_ExecuteUbergraph_BP_ActionLeaveCrew_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


