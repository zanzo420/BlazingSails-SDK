#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileTomahawk.BP_ProjectileTomahawk_C
// (Actor)

class UClass* ABP_ProjectileTomahawk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileTomahawk_C");

	return Clss;
}


// BP_ProjectileTomahawk_C BP_ProjectileTomahawk.Default__BP_ProjectileTomahawk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileTomahawk_C* ABP_ProjectileTomahawk_C::GetDefaultObj()
{
	static class ABP_ProjectileTomahawk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileTomahawk_C*>(ABP_ProjectileTomahawk_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileTomahawk.BP_ProjectileTomahawk_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceKilled_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileTomahawk_C::PostHit(bool ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileTomahawk_C", "PostHit");

	Params::ABP_ProjectileTomahawk_C_PostHit_Params Parms{};

	Parms.ForceKilled_ = ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTomahawk.BP_ProjectileTomahawk_C.ExecuteUbergraph_BP_ProjectileTomahawk
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ForceKilled_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileTomahawk_C::ExecuteUbergraph_BP_ProjectileTomahawk(int32 EntryPoint, bool K2Node_Event_ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileTomahawk_C", "ExecuteUbergraph_BP_ProjectileTomahawk");

	Params::ABP_ProjectileTomahawk_C_ExecuteUbergraph_BP_ProjectileTomahawk_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ForceKilled_ = K2Node_Event_ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}

}


