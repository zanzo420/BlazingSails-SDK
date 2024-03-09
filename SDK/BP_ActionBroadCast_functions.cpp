#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionBroadCast.BP_ActionBroadCast_C
// (Actor)

class UClass* ABP_ActionBroadCast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionBroadCast_C");

	return Clss;
}


// BP_ActionBroadCast_C BP_ActionBroadCast.Default__BP_ActionBroadCast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionBroadCast_C* ABP_ActionBroadCast_C::GetDefaultObj()
{
	static class ABP_ActionBroadCast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionBroadCast_C*>(ABP_ActionBroadCast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionBroadCast.BP_ActionBroadCast_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionBroadCast_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionBroadCast_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionBroadCast.BP_ActionBroadCast_C.ExecuteUbergraph_BP_ActionBroadCast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionBroadCast_C::ExecuteUbergraph_BP_ActionBroadCast(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionBroadCast_C", "ExecuteUbergraph_BP_ActionBroadCast");

	Params::ABP_ActionBroadCast_C_ExecuteUbergraph_BP_ActionBroadCast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


