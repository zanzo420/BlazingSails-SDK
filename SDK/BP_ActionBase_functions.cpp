#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionBase.BP_ActionBase_C
// (Actor)

class UClass* ABP_ActionBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionBase_C");

	return Clss;
}


// BP_ActionBase_C BP_ActionBase.Default__BP_ActionBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionBase_C* ABP_ActionBase_C::GetDefaultObj()
{
	static class ABP_ActionBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionBase_C*>(ABP_ActionBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionBase.BP_ActionBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ActionBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionBase.BP_ActionBase_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionBase_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionBase_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionBase.BP_ActionBase_C.ExecuteUbergraph_BP_ActionBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionBase_C::ExecuteUbergraph_BP_ActionBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionBase_C", "ExecuteUbergraph_BP_ActionBase");

	Params::ABP_ActionBase_C_ExecuteUbergraph_BP_ActionBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


