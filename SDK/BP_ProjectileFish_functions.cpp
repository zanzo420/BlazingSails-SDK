#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileFish.BP_ProjectileFish_C
// (Actor)

class UClass* ABP_ProjectileFish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileFish_C");

	return Clss;
}


// BP_ProjectileFish_C BP_ProjectileFish.Default__BP_ProjectileFish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileFish_C* ABP_ProjectileFish_C::GetDefaultObj()
{
	static class ABP_ProjectileFish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileFish_C*>(ABP_ProjectileFish_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileFish.BP_ProjectileFish_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProjectileFish_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileFish_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileFish.BP_ProjectileFish_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceKilled_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileFish_C::PostHit(bool ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileFish_C", "PostHit");

	Params::ABP_ProjectileFish_C_PostHit_Params Parms{};

	Parms.ForceKilled_ = ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileFish.BP_ProjectileFish_C.ExecuteUbergraph_BP_ProjectileFish
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ForceKilled_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AOEBase_C*               CallFunc_SpawnAOE_AOEActorRef                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileFish_C::ExecuteUbergraph_BP_ProjectileFish(int32 EntryPoint, bool K2Node_Event_ForceKilled_, class ABP_AOEBase_C* CallFunc_SpawnAOE_AOEActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileFish_C", "ExecuteUbergraph_BP_ProjectileFish");

	Params::ABP_ProjectileFish_C_ExecuteUbergraph_BP_ProjectileFish_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ForceKilled_ = K2Node_Event_ForceKilled_;
	Parms.CallFunc_SpawnAOE_AOEActorRef = CallFunc_SpawnAOE_AOEActorRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


