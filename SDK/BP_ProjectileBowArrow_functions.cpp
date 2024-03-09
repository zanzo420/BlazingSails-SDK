#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileBowArrow.BP_ProjectileBowArrow_C
// (Actor)

class UClass* ABP_ProjectileBowArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileBowArrow_C");

	return Clss;
}


// BP_ProjectileBowArrow_C BP_ProjectileBowArrow.Default__BP_ProjectileBowArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileBowArrow_C* ABP_ProjectileBowArrow_C::GetDefaultObj()
{
	static class ABP_ProjectileBowArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileBowArrow_C*>(ABP_ProjectileBowArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileBowArrow.BP_ProjectileBowArrow_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceKilled_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileBowArrow_C::PostHit(bool ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBowArrow_C", "PostHit");

	Params::ABP_ProjectileBowArrow_C_PostHit_Params Parms{};

	Parms.ForceKilled_ = ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBowArrow.BP_ProjectileBowArrow_C.ExecuteUbergraph_BP_ProjectileBowArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ForceKilled_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileBowArrow_C::ExecuteUbergraph_BP_ProjectileBowArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBowArrow_C", "ExecuteUbergraph_BP_ProjectileBowArrow");

	Params::ABP_ProjectileBowArrow_C_ExecuteUbergraph_BP_ProjectileBowArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ForceKilled_ = K2Node_Event_ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}

}


