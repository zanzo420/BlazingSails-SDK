#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_Controller.EOS_Controller_C
// (Actor, PlayerController)

class UClass* AEOS_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_Controller_C");

	return Clss;
}


// EOS_Controller_C EOS_Controller.Default__EOS_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEOS_Controller_C* AEOS_Controller_C::GetDefaultObj()
{
	static class AEOS_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEOS_Controller_C*>(AEOS_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_Controller.EOS_Controller_C.OnRep_Username
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_Controller_C::OnRep_Username()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Controller_C", "OnRep_Username");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Controller.EOS_Controller_C.On Player Disconnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_Controller_C::On_Player_Disconnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Controller_C", "On Player Disconnected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Controller.EOS_Controller_C.On Player Connected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_Controller_C::On_Player_Connected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Controller_C", "On Player Connected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Controller.EOS_Controller_C.Receive Voice Channel Credentials
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Channel_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Channel_Credentials                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEOS_Controller_C::Receive_Voice_Channel_Credentials(const class FString& Channel_Name, const class FString& Channel_Credentials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Controller_C", "Receive Voice Channel Credentials");

	Params::AEOS_Controller_C_Receive_Voice_Channel_Credentials_Params Parms{};

	Parms.Channel_Name = Channel_Name;
	Parms.Channel_Credentials = Channel_Credentials;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Controller.EOS_Controller_C.Continue After Login
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succsessful                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Controller_C::Continue_After_Login(bool Succsessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Controller_C", "Continue After Login");

	Params::AEOS_Controller_C_Continue_After_Login_Params Parms{};

	Parms.Succsessful = Succsessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Controller.EOS_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEOS_Controller_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Controller_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Controller.EOS_Controller_C.ExecuteUbergraph_EOS_Controller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_Channel_Name                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Channel_Credentials                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Succsessful                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEOS_Voice_Chat_Service_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_Controller_C::ExecuteUbergraph_EOS_Controller(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_Channel_Name, const class FString& K2Node_CustomEvent_Channel_Credentials, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_CustomEvent_Succsessful, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AEOS_Voice_Chat_Service_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Controller_C", "ExecuteUbergraph_EOS_Controller");

	Params::AEOS_Controller_C_ExecuteUbergraph_EOS_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Channel_Name = K2Node_CustomEvent_Channel_Name;
	Parms.K2Node_CustomEvent_Channel_Credentials = K2Node_CustomEvent_Channel_Credentials;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_CustomEvent_Succsessful = K2Node_CustomEvent_Succsessful;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


