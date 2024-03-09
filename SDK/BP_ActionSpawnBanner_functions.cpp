#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionSpawnBanner.BP_ActionSpawnBanner_C
// (Actor)

class UClass* ABP_ActionSpawnBanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionSpawnBanner_C");

	return Clss;
}


// BP_ActionSpawnBanner_C BP_ActionSpawnBanner.Default__BP_ActionSpawnBanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionSpawnBanner_C* ABP_ActionSpawnBanner_C::GetDefaultObj()
{
	static class ABP_ActionSpawnBanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionSpawnBanner_C*>(ABP_ActionSpawnBanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionSpawnBanner.BP_ActionSpawnBanner_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionSpawnBanner_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSpawnBanner_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSpawnBanner.BP_ActionSpawnBanner_C.ExecuteUbergraph_BP_ActionSpawnBanner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionSpawnBanner_C::ExecuteUbergraph_BP_ActionSpawnBanner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSpawnBanner_C", "ExecuteUbergraph_BP_ActionSpawnBanner");

	Params::ABP_ActionSpawnBanner_C_ExecuteUbergraph_BP_ActionSpawnBanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


