#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C
// (Actor)

class UClass* ABP_ActionSkipSpawnTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionSkipSpawnTimer_C");

	return Clss;
}


// BP_ActionSkipSpawnTimer_C BP_ActionSkipSpawnTimer.Default__BP_ActionSkipSpawnTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionSkipSpawnTimer_C* ABP_ActionSkipSpawnTimer_C::GetDefaultObj()
{
	static class ABP_ActionSkipSpawnTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionSkipSpawnTimer_C*>(ABP_ActionSkipSpawnTimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionSkipSpawnTimer_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSkipSpawnTimer_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C.ExecuteUbergraph_BP_ActionSkipSpawnTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABR_Alpha_GameState_C*       K2Node_DynamicCast_AsBR_Alpha_Game_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionSkipSpawnTimer_C::ExecuteUbergraph_BP_ActionSkipSpawnTimer(int32 EntryPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ABR_Alpha_GameState_C* K2Node_DynamicCast_AsBR_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSkipSpawnTimer_C", "ExecuteUbergraph_BP_ActionSkipSpawnTimer");

	Params::ABP_ActionSkipSpawnTimer_C_ExecuteUbergraph_BP_ActionSkipSpawnTimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.K2Node_DynamicCast_AsBR_Alpha_Game_State = K2Node_DynamicCast_AsBR_Alpha_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


