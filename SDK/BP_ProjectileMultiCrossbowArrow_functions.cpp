#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileMultiCrossbowArrow.BP_ProjectileMultiCrossbowArrow_C
// (Actor)

class UClass* ABP_ProjectileMultiCrossbowArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileMultiCrossbowArrow_C");

	return Clss;
}


// BP_ProjectileMultiCrossbowArrow_C BP_ProjectileMultiCrossbowArrow.Default__BP_ProjectileMultiCrossbowArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileMultiCrossbowArrow_C* ABP_ProjectileMultiCrossbowArrow_C::GetDefaultObj()
{
	static class ABP_ProjectileMultiCrossbowArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileMultiCrossbowArrow_C*>(ABP_ProjectileMultiCrossbowArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileMultiCrossbowArrow.BP_ProjectileMultiCrossbowArrow_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceKilled_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileMultiCrossbowArrow_C::PostHit(bool ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileMultiCrossbowArrow_C", "PostHit");

	Params::ABP_ProjectileMultiCrossbowArrow_C_PostHit_Params Parms{};

	Parms.ForceKilled_ = ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileMultiCrossbowArrow.BP_ProjectileMultiCrossbowArrow_C.ExecuteUbergraph_BP_ProjectileMultiCrossbowArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ForceKilled_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileMultiCrossbowArrow_C::ExecuteUbergraph_BP_ProjectileMultiCrossbowArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileMultiCrossbowArrow_C", "ExecuteUbergraph_BP_ProjectileMultiCrossbowArrow");

	Params::ABP_ProjectileMultiCrossbowArrow_C_ExecuteUbergraph_BP_ProjectileMultiCrossbowArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ForceKilled_ = K2Node_Event_ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}

}


