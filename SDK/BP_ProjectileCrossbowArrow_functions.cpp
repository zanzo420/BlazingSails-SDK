#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileCrossbowArrow.BP_ProjectileCrossbowArrow_C
// (Actor)

class UClass* ABP_ProjectileCrossbowArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileCrossbowArrow_C");

	return Clss;
}


// BP_ProjectileCrossbowArrow_C BP_ProjectileCrossbowArrow.Default__BP_ProjectileCrossbowArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileCrossbowArrow_C* ABP_ProjectileCrossbowArrow_C::GetDefaultObj()
{
	static class ABP_ProjectileCrossbowArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileCrossbowArrow_C*>(ABP_ProjectileCrossbowArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileCrossbowArrow.BP_ProjectileCrossbowArrow_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceKilled_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileCrossbowArrow_C::PostHit(bool ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileCrossbowArrow_C", "PostHit");

	Params::ABP_ProjectileCrossbowArrow_C_PostHit_Params Parms{};

	Parms.ForceKilled_ = ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileCrossbowArrow.BP_ProjectileCrossbowArrow_C.ExecuteUbergraph_BP_ProjectileCrossbowArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ForceKilled_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileCrossbowArrow_C::ExecuteUbergraph_BP_ProjectileCrossbowArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileCrossbowArrow_C", "ExecuteUbergraph_BP_ProjectileCrossbowArrow");

	Params::ABP_ProjectileCrossbowArrow_C_ExecuteUbergraph_BP_ProjectileCrossbowArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ForceKilled_ = K2Node_Event_ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}

}


