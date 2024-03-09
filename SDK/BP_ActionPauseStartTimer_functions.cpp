#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionPauseStartTimer.BP_ActionPauseStartTimer_C
// (Actor)

class UClass* ABP_ActionPauseStartTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionPauseStartTimer_C");

	return Clss;
}


// BP_ActionPauseStartTimer_C BP_ActionPauseStartTimer.Default__BP_ActionPauseStartTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionPauseStartTimer_C* ABP_ActionPauseStartTimer_C::GetDefaultObj()
{
	static class ABP_ActionPauseStartTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionPauseStartTimer_C*>(ABP_ActionPauseStartTimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionPauseStartTimer.BP_ActionPauseStartTimer_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionPauseStartTimer_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPauseStartTimer_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionPauseStartTimer.BP_ActionPauseStartTimer_C.ExecuteUbergraph_BP_ActionPauseStartTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionPauseStartTimer_C::ExecuteUbergraph_BP_ActionPauseStartTimer(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPauseStartTimer_C", "ExecuteUbergraph_BP_ActionPauseStartTimer");

	Params::ABP_ActionPauseStartTimer_C_ExecuteUbergraph_BP_ActionPauseStartTimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode = CallFunc_CurrentGameMode_As_Alpha_Game_Mode;

	UObject::ProcessEvent(Func, &Parms);

}

}


