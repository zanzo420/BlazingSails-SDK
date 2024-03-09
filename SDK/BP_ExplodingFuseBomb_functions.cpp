#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C
// (Actor)

class UClass* ABP_ExplodingFuseBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExplodingFuseBomb_C");

	return Clss;
}


// BP_ExplodingFuseBomb_C BP_ExplodingFuseBomb.Default__BP_ExplodingFuseBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExplodingFuseBomb_C* ABP_ExplodingFuseBomb_C::GetDefaultObj()
{
	static class ABP_ExplodingFuseBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExplodingFuseBomb_C*>(ABP_ExplodingFuseBomb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ExplodingFuseBomb_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingFuseBomb_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingFuseBomb_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingFuseBomb_C", "ReceiveTick");

	Params::ABP_ExplodingFuseBomb_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceKilled_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingFuseBomb_C::PostHit(bool ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingFuseBomb_C", "PostHit");

	Params::ABP_ExplodingFuseBomb_C_PostHit_Params Parms{};

	Parms.ForceKilled_ = ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.ExecuteUbergraph_BP_ExplodingFuseBomb
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ForceKilled_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AOEBase_C*               CallFunc_SpawnAOE_AOEActorRef                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingFuseBomb_C::ExecuteUbergraph_BP_ExplodingFuseBomb(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, bool K2Node_Event_ForceKilled_, class ABP_AOEBase_C* CallFunc_SpawnAOE_AOEActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingFuseBomb_C", "ExecuteUbergraph_BP_ExplodingFuseBomb");

	Params::ABP_ExplodingFuseBomb_C_ExecuteUbergraph_BP_ExplodingFuseBomb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_ForceKilled_ = K2Node_Event_ForceKilled_;
	Parms.CallFunc_SpawnAOE_AOEActorRef = CallFunc_SpawnAOE_AOEActorRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


