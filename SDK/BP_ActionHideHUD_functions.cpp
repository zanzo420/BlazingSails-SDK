#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionHideHUD.BP_ActionHideHUD_C
// (Actor)

class UClass* ABP_ActionHideHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionHideHUD_C");

	return Clss;
}


// BP_ActionHideHUD_C BP_ActionHideHUD.Default__BP_ActionHideHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionHideHUD_C* ABP_ActionHideHUD_C::GetDefaultObj()
{
	static class ABP_ActionHideHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionHideHUD_C*>(ABP_ActionHideHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionHideHUD.BP_ActionHideHUD_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionHideHUD_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionHideHUD_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionHideHUD.BP_ActionHideHUD_C.ExecuteUbergraph_BP_ActionHideHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionHideHUD_C::ExecuteUbergraph_BP_ActionHideHUD(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionHideHUD_C", "ExecuteUbergraph_BP_ActionHideHUD");

	Params::ABP_ActionHideHUD_C_ExecuteUbergraph_BP_ActionHideHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


