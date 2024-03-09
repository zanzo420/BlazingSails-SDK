#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Alpha_PlayerState.Alpha_PlayerState_C
// (Actor)

class UClass* AAlpha_PlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Alpha_PlayerState_C");

	return Clss;
}


// Alpha_PlayerState_C Alpha_PlayerState.Default__Alpha_PlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAlpha_PlayerState_C* AAlpha_PlayerState_C::GetDefaultObj()
{
	static class AAlpha_PlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAlpha_PlayerState_C*>(AAlpha_PlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Alpha_PlayerState.Alpha_PlayerState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAlpha_PlayerState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerState.Alpha_PlayerState_C.S_Set Clean Leave
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerState_C::S_Set_Clean_Leave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerState_C", "S_Set Clean Leave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerState.Alpha_PlayerState_C.ExecuteUbergraph_Alpha_PlayerState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerController_C*   K2Node_DynamicCast_AsAlpha_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAlpha_PlayerState_C::ExecuteUbergraph_Alpha_PlayerState(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AAlpha_PlayerController_C* K2Node_DynamicCast_AsAlpha_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerState_C", "ExecuteUbergraph_Alpha_PlayerState");

	Params::AAlpha_PlayerState_C_ExecuteUbergraph_Alpha_PlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlpha_Player_Controller = K2Node_DynamicCast_AsAlpha_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


