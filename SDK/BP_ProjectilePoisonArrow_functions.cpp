#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C
// (Actor)

class UClass* ABP_ProjectilePoisonArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectilePoisonArrow_C");

	return Clss;
}


// BP_ProjectilePoisonArrow_C BP_ProjectilePoisonArrow.Default__BP_ProjectilePoisonArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectilePoisonArrow_C* ABP_ProjectilePoisonArrow_C::GetDefaultObj()
{
	static class ABP_ProjectilePoisonArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectilePoisonArrow_C*>(ABP_ProjectilePoisonArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceKilled_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectilePoisonArrow_C::PostHit(bool ForceKilled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectilePoisonArrow_C", "PostHit");

	Params::ABP_ProjectilePoisonArrow_C_PostHit_Params Parms{};

	Parms.ForceKilled_ = ForceKilled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.PostPlayerHit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             HitPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectilePoisonArrow_C::PostPlayerHit(class ABP_Character_C* HitPlayer, class ABP_Controller_C* Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectilePoisonArrow_C", "PostPlayerHit");

	Params::ABP_ProjectilePoisonArrow_C_PostPlayerHit_Params Parms{};

	Parms.HitPlayer = HitPlayer;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.ExecuteUbergraph_BP_ProjectilePoisonArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ForceKilled_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_Event_HitPlayer                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_Event_Attacker                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerState_C*        K2Node_DynamicCast_AsAlpha_Player_State                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Teams_Is_Same_Team                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProjectilePoisonArrow_C::ExecuteUbergraph_BP_ProjectilePoisonArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_, class ABP_Character_C* K2Node_Event_HitPlayer, class ABP_Controller_C* K2Node_Event_Attacker, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Compare_Teams_Is_Same_Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectilePoisonArrow_C", "ExecuteUbergraph_BP_ProjectilePoisonArrow");

	Params::ABP_ProjectilePoisonArrow_C_ExecuteUbergraph_BP_ProjectilePoisonArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ForceKilled_ = K2Node_Event_ForceKilled_;
	Parms.K2Node_Event_HitPlayer = K2Node_Event_HitPlayer;
	Parms.K2Node_Event_Attacker = K2Node_Event_Attacker;
	Parms.K2Node_DynamicCast_AsAlpha_Player_State = K2Node_DynamicCast_AsAlpha_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Compare_Teams_Is_Same_Team = CallFunc_Compare_Teams_Is_Same_Team;

	UObject::ProcessEvent(Func, &Parms);

}

}


