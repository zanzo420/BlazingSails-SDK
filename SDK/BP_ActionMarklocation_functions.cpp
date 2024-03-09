#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionMarklocation.BP_ActionMarklocation_C
// (Actor)

class UClass* ABP_ActionMarklocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionMarklocation_C");

	return Clss;
}


// BP_ActionMarklocation_C BP_ActionMarklocation.Default__BP_ActionMarklocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionMarklocation_C* ABP_ActionMarklocation_C::GetDefaultObj()
{
	static class ABP_ActionMarklocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionMarklocation_C*>(ABP_ActionMarklocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionMarklocation.BP_ActionMarklocation_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionMarklocation_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionMarklocation_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionMarklocation.BP_ActionMarklocation_C.ExecuteUbergraph_BP_ActionMarklocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionMarklocation_C::ExecuteUbergraph_BP_ActionMarklocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionMarklocation_C", "ExecuteUbergraph_BP_ActionMarklocation");

	Params::ABP_ActionMarklocation_C_ExecuteUbergraph_BP_ActionMarklocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


