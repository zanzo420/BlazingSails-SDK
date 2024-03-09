#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionKillSelf.BP_ActionKillSelf_C
// (Actor)

class UClass* ABP_ActionKillSelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionKillSelf_C");

	return Clss;
}


// BP_ActionKillSelf_C BP_ActionKillSelf.Default__BP_ActionKillSelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionKillSelf_C* ABP_ActionKillSelf_C::GetDefaultObj()
{
	static class ABP_ActionKillSelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionKillSelf_C*>(ABP_ActionKillSelf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionKillSelf.BP_ActionKillSelf_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionKillSelf_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionKillSelf_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionKillSelf.BP_ActionKillSelf_C.ExecuteUbergraph_BP_ActionKillSelf
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_SimpleMessage           K2Node_MakeStruct_ST_SimpleMessage                               (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionKillSelf_C::ExecuteUbergraph_BP_ActionKillSelf(int32 EntryPoint, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionKillSelf_C", "ExecuteUbergraph_BP_ActionKillSelf");

	Params::ABP_ActionKillSelf_C_ExecuteUbergraph_BP_ActionKillSelf_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_ST_SimpleMessage = K2Node_MakeStruct_ST_SimpleMessage;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


