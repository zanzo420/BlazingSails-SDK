#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VehicleBase.BP_VehicleBase_C
// (Actor, Pawn)

class UClass* ABP_VehicleBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VehicleBase_C");

	return Clss;
}


// BP_VehicleBase_C BP_VehicleBase.Default__BP_VehicleBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VehicleBase_C* ABP_VehicleBase_C::GetDefaultObj()
{
	static class ABP_VehicleBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VehicleBase_C*>(ABP_VehicleBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VehicleBase.BP_VehicleBase_C.OnRep_Useable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::OnRep_Useable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "OnRep_Useable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.OnRep_IsOccupied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::OnRep_IsOccupied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "OnRep_IsOccupied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "ReceiveTick");

	Params::ABP_VehicleBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VehicleBase.BP_VehicleBase_C.Reset
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.UnOccupied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::UnOccupied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "UnOccupied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.Occupied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::Occupied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "Occupied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.OnRepOccupied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::OnRepOccupied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "OnRepOccupied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.OC_AddVehicleUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::OC_AddVehicleUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "OC_AddVehicleUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.RefreshKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::RefreshKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "RefreshKeys");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.PreEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::PreEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "PreEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleBase_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "Exit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleBase.BP_VehicleBase_C.ExecuteUbergraph_BP_VehicleBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsPlayerControlled_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VehicleBase_C::ExecuteUbergraph_BP_VehicleBase(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess_1, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsPlayerControlled_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleBase_C", "ExecuteUbergraph_BP_VehicleBase");

	Params::ABP_VehicleBase_C_ExecuteUbergraph_BP_VehicleBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsPlayerControlled_ReturnValue_1 = CallFunc_IsPlayerControlled_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


