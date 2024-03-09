#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionFreeTeams.BP_ActionFreeTeams_C
// (Actor)

class UClass* ABP_ActionFreeTeams_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionFreeTeams_C");

	return Clss;
}


// BP_ActionFreeTeams_C BP_ActionFreeTeams.Default__BP_ActionFreeTeams_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionFreeTeams_C* ABP_ActionFreeTeams_C::GetDefaultObj()
{
	static class ABP_ActionFreeTeams_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionFreeTeams_C*>(ABP_ActionFreeTeams_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionFreeTeams.BP_ActionFreeTeams_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionFreeTeams_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionFreeTeams_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionFreeTeams.BP_ActionFreeTeams_C.ExecuteUbergraph_BP_ActionFreeTeams
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionFreeTeams_C::ExecuteUbergraph_BP_ActionFreeTeams(int32 EntryPoint, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionFreeTeams_C", "ExecuteUbergraph_BP_ActionFreeTeams");

	Params::ABP_ActionFreeTeams_C_ExecuteUbergraph_BP_ActionFreeTeams_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


