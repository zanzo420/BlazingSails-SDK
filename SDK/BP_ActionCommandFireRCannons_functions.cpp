#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionCommandFireRCannons.BP_ActionCommandFireRCannons_C
// (Actor)

class UClass* ABP_ActionCommandFireRCannons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionCommandFireRCannons_C");

	return Clss;
}


// BP_ActionCommandFireRCannons_C BP_ActionCommandFireRCannons.Default__BP_ActionCommandFireRCannons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionCommandFireRCannons_C* ABP_ActionCommandFireRCannons_C::GetDefaultObj()
{
	static class ABP_ActionCommandFireRCannons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionCommandFireRCannons_C*>(ABP_ActionCommandFireRCannons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionCommandFireRCannons.BP_ActionCommandFireRCannons_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommandFireRCannons_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCommandFireRCannons_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommandFireRCannons.BP_ActionCommandFireRCannons_C.ExecuteUbergraph_BP_ActionCommandFireRCannons
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommandFireRCannons_C::ExecuteUbergraph_BP_ActionCommandFireRCannons(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCommandFireRCannons_C", "ExecuteUbergraph_BP_ActionCommandFireRCannons");

	Params::ABP_ActionCommandFireRCannons_C_ExecuteUbergraph_BP_ActionCommandFireRCannons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


