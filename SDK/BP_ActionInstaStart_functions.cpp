#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionInstaStart.BP_ActionInstaStart_C
// (Actor)

class UClass* ABP_ActionInstaStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionInstaStart_C");

	return Clss;
}


// BP_ActionInstaStart_C BP_ActionInstaStart.Default__BP_ActionInstaStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionInstaStart_C* ABP_ActionInstaStart_C::GetDefaultObj()
{
	static class ABP_ActionInstaStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionInstaStart_C*>(ABP_ActionInstaStart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionInstaStart.BP_ActionInstaStart_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionInstaStart_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInstaStart_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionInstaStart.BP_ActionInstaStart_C.ExecuteUbergraph_BP_ActionInstaStart
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionInstaStart_C::ExecuteUbergraph_BP_ActionInstaStart(int32 EntryPoint, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInstaStart_C", "ExecuteUbergraph_BP_ActionInstaStart");

	Params::ABP_ActionInstaStart_C_ExecuteUbergraph_BP_ActionInstaStart_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode = CallFunc_CurrentGameMode_As_Alpha_Game_Mode;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


