#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionSettNewPassword.BP_ActionSettNewPassword_C
// (Actor)

class UClass* ABP_ActionSettNewPassword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionSettNewPassword_C");

	return Clss;
}


// BP_ActionSettNewPassword_C BP_ActionSettNewPassword.Default__BP_ActionSettNewPassword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionSettNewPassword_C* ABP_ActionSettNewPassword_C::GetDefaultObj()
{
	static class ABP_ActionSettNewPassword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionSettNewPassword_C*>(ABP_ActionSettNewPassword_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionSettNewPassword.BP_ActionSettNewPassword_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionSettNewPassword_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSettNewPassword_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSettNewPassword.BP_ActionSettNewPassword_C.ExecuteUbergraph_BP_ActionSettNewPassword
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_ActionSettNewPassword_C::ExecuteUbergraph_BP_ActionSettNewPassword(int32 EntryPoint, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSettNewPassword_C", "ExecuteUbergraph_BP_ActionSettNewPassword");

	Params::ABP_ActionSettNewPassword_C_ExecuteUbergraph_BP_ActionSettNewPassword_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


