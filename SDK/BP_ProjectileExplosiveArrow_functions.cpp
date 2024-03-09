#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C
// (Actor)

class UClass* ABP_ProjectileExplosiveArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileExplosiveArrow_C");

	return Clss;
}


// BP_ProjectileExplosiveArrow_C BP_ProjectileExplosiveArrow.Default__BP_ProjectileExplosiveArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileExplosiveArrow_C* ABP_ProjectileExplosiveArrow_C::GetDefaultObj()
{
	static class ABP_ProjectileExplosiveArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileExplosiveArrow_C*>(ABP_ProjectileExplosiveArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceKilled_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileExplosiveArrow_C::PostHit(bool ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileExplosiveArrow_C", "PostHit");

	Params::ABP_ProjectileExplosiveArrow_C_PostHit_Params Parms{};

	Parms.ForceKilled_ = ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.ExecuteUbergraph_BP_ProjectileExplosiveArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ForceKilled_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AOEBase_C*               CallFunc_SpawnAOE_AOEActorRef                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileExplosiveArrow_C::ExecuteUbergraph_BP_ProjectileExplosiveArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_, class ABP_AOEBase_C* CallFunc_SpawnAOE_AOEActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileExplosiveArrow_C", "ExecuteUbergraph_BP_ProjectileExplosiveArrow");

	Params::ABP_ProjectileExplosiveArrow_C_ExecuteUbergraph_BP_ProjectileExplosiveArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ForceKilled_ = K2Node_Event_ForceKilled_;
	Parms.CallFunc_SpawnAOE_AOEActorRef = CallFunc_SpawnAOE_AOEActorRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


