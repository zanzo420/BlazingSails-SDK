#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileHealingCrossbowArrow.BP_ProjectileHealingCrossbowArrow_C
// (Actor)

class UClass* ABP_ProjectileHealingCrossbowArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileHealingCrossbowArrow_C");

	return Clss;
}


// BP_ProjectileHealingCrossbowArrow_C BP_ProjectileHealingCrossbowArrow.Default__BP_ProjectileHealingCrossbowArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileHealingCrossbowArrow_C* ABP_ProjectileHealingCrossbowArrow_C::GetDefaultObj()
{
	static class ABP_ProjectileHealingCrossbowArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileHealingCrossbowArrow_C*>(ABP_ProjectileHealingCrossbowArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileHealingCrossbowArrow.BP_ProjectileHealingCrossbowArrow_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceKilled_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectileHealingCrossbowArrow_C::PostHit(bool ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileHealingCrossbowArrow_C", "PostHit");

	Params::ABP_ProjectileHealingCrossbowArrow_C_PostHit_Params Parms{};

	Parms.ForceKilled_ = ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileHealingCrossbowArrow.BP_ProjectileHealingCrossbowArrow_C.PostPlayerHit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             HitPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileHealingCrossbowArrow_C::PostPlayerHit(class ABP_Character_C* HitPlayer, class ABP_Controller_C* Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileHealingCrossbowArrow_C", "PostPlayerHit");

	Params::ABP_ProjectileHealingCrossbowArrow_C_PostPlayerHit_Params Parms{};

	Parms.HitPlayer = HitPlayer;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileHealingCrossbowArrow.BP_ProjectileHealingCrossbowArrow_C.PostCharacterHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileHealingCrossbowArrow_C::PostCharacterHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileHealingCrossbowArrow_C", "PostCharacterHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileHealingCrossbowArrow.BP_ProjectileHealingCrossbowArrow_C.ExecuteUbergraph_BP_ProjectileHealingCrossbowArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ForceKilled_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_Event_HitPlayer                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_Event_Attacker                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileHealingCrossbowArrow_C::ExecuteUbergraph_BP_ProjectileHealingCrossbowArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_, class ABP_Character_C* K2Node_Event_HitPlayer, class ABP_Controller_C* K2Node_Event_Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileHealingCrossbowArrow_C", "ExecuteUbergraph_BP_ProjectileHealingCrossbowArrow");

	Params::ABP_ProjectileHealingCrossbowArrow_C_ExecuteUbergraph_BP_ProjectileHealingCrossbowArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ForceKilled_ = K2Node_Event_ForceKilled_;
	Parms.K2Node_Event_HitPlayer = K2Node_Event_HitPlayer;
	Parms.K2Node_Event_Attacker = K2Node_Event_Attacker;

	UObject::ProcessEvent(Func, &Parms);

}

}


