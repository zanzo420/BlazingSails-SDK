#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C
// (Actor)

class UClass* ABP_ActionCommandFireLCannons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionCommandFireLCannons_C");

	return Clss;
}


// BP_ActionCommandFireLCannons_C BP_ActionCommandFireLCannons.Default__BP_ActionCommandFireLCannons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionCommandFireLCannons_C* ABP_ActionCommandFireLCannons_C::GetDefaultObj()
{
	static class ABP_ActionCommandFireLCannons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionCommandFireLCannons_C*>(ABP_ActionCommandFireLCannons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandFireLCannons_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCommandFireLCannons_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C.ExecuteUbergraph_BP_ActionCommandFireLCannons
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandFireLCannons_C::ExecuteUbergraph_BP_ActionCommandFireLCannons(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCommandFireLCannons_C", "ExecuteUbergraph_BP_ActionCommandFireLCannons");

	Params::ABP_ActionCommandFireLCannons_C_ExecuteUbergraph_BP_ActionCommandFireLCannons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


