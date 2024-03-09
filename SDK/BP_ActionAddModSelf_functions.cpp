#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionAddModSelf.BP_ActionAddModSelf_C
// (Actor)

class UClass* ABP_ActionAddModSelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionAddModSelf_C");

	return Clss;
}


// BP_ActionAddModSelf_C BP_ActionAddModSelf.Default__BP_ActionAddModSelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionAddModSelf_C* ABP_ActionAddModSelf_C::GetDefaultObj()
{
	static class ABP_ActionAddModSelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionAddModSelf_C*>(ABP_ActionAddModSelf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionAddModSelf.BP_ActionAddModSelf_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionAddModSelf_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionAddModSelf_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionAddModSelf.BP_ActionAddModSelf_C.ExecuteUbergraph_BP_ActionAddModSelf
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionAddModSelf_C::ExecuteUbergraph_BP_ActionAddModSelf(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionAddModSelf_C", "ExecuteUbergraph_BP_ActionAddModSelf");

	Params::ABP_ActionAddModSelf_C_ExecuteUbergraph_BP_ActionAddModSelf_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


