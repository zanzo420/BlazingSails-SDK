#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionInspectSelf.BP_ActionInspectSelf_C
// (Actor)

class UClass* ABP_ActionInspectSelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionInspectSelf_C");

	return Clss;
}


// BP_ActionInspectSelf_C BP_ActionInspectSelf.Default__BP_ActionInspectSelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionInspectSelf_C* ABP_ActionInspectSelf_C::GetDefaultObj()
{
	static class ABP_ActionInspectSelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionInspectSelf_C*>(ABP_ActionInspectSelf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionInspectSelf.BP_ActionInspectSelf_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionInspectSelf_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInspectSelf_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionInspectSelf.BP_ActionInspectSelf_C.ExecuteUbergraph_BP_ActionInspectSelf
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionInspectSelf_C::ExecuteUbergraph_BP_ActionInspectSelf(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInspectSelf_C", "ExecuteUbergraph_BP_ActionInspectSelf");

	Params::ABP_ActionInspectSelf_C_ExecuteUbergraph_BP_ActionInspectSelf_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


