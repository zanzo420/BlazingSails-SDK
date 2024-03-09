#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BaseController.BP_BaseController_C
// (Actor, PlayerController)

class UClass* ABP_BaseController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BaseController_C");

	return Clss;
}


// BP_BaseController_C BP_BaseController.Default__BP_BaseController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BaseController_C* ABP_BaseController_C::GetDefaultObj()
{
	static class ABP_BaseController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BaseController_C*>(ABP_BaseController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BaseController.BP_BaseController_C.OnQueryOnlineStoreOffersComplete_F6ED9309430A791E51BE4198CCC93620
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              OfferIds                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_BaseController_C::OnQueryOnlineStoreOffersComplete_F6ED9309430A791E51BE4198CCC93620(bool bWasSuccessful, TArray<class FString>& OfferIds, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "OnQueryOnlineStoreOffersComplete_F6ED9309430A791E51BE4198CCC93620");

	Params::ABP_BaseController_C_OnQueryOnlineStoreOffersComplete_F6ED9309430A791E51BE4198CCC93620_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.OfferIds = OfferIds;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.OnCallFailed_F6ED9309430A791E51BE4198CCC93620
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              OfferIds                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_BaseController_C::OnCallFailed_F6ED9309430A791E51BE4198CCC93620(bool bWasSuccessful, TArray<class FString>& OfferIds, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "OnCallFailed_F6ED9309430A791E51BE4198CCC93620");

	Params::ABP_BaseController_C_OnCallFailed_F6ED9309430A791E51BE4198CCC93620_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.OfferIds = OfferIds;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BaseController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseController.BP_BaseController_C.ExecuteUbergraph_BP_BaseController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_CustomEvent_OfferIds_1                                    (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_Error_1                                       (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_CustomEvent_OfferIds                                      (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_Error                                         (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Temp_string_Variable_1                                           (ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasOwnershipData_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Epic_Account_ID_Epic_ID                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineStoreV2Subsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UOnlineStoreV2SubsystemQueryOffersByFilter*CallFunc_QueryOffersByFilter_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ReadOwnershipData_ReturnValue                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_All_Platforms_Platforms                             (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseController_C::ExecuteUbergraph_BP_BaseController(int32 EntryPoint, bool K2Node_CustomEvent_bWasSuccessful_1, TArray<class FString>& K2Node_CustomEvent_OfferIds_1, const class FString& K2Node_CustomEvent_Error_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bWasSuccessful, TArray<class FString>& K2Node_CustomEvent_OfferIds, const class FString& K2Node_CustomEvent_Error, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& Temp_string_Variable, TArray<class FString>& Temp_string_Variable_1, bool Temp_bool_Variable, const class FString& Temp_string_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasOwnershipData_ReturnValue, const class FString& CallFunc_Get_Epic_Account_ID_Epic_ID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UOnlineStoreV2Subsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UOnlineStoreV2SubsystemQueryOffersByFilter* CallFunc_QueryOffersByFilter_ReturnValue, TArray<class FString>& CallFunc_ReadOwnershipData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1, TArray<class FString>& CallFunc_Get_All_Platforms_Platforms, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "ExecuteUbergraph_BP_BaseController");

	Params::ABP_BaseController_C_ExecuteUbergraph_BP_BaseController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bWasSuccessful_1 = K2Node_CustomEvent_bWasSuccessful_1;
	Parms.K2Node_CustomEvent_OfferIds_1 = K2Node_CustomEvent_OfferIds_1;
	Parms.K2Node_CustomEvent_Error_1 = K2Node_CustomEvent_Error_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.K2Node_CustomEvent_OfferIds = K2Node_CustomEvent_OfferIds;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasOwnershipData_ReturnValue = CallFunc_HasOwnershipData_ReturnValue;
	Parms.CallFunc_Get_Epic_Account_ID_Epic_ID = CallFunc_Get_Epic_Account_ID_Epic_ID;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_QueryOffersByFilter_ReturnValue = CallFunc_QueryOffersByFilter_ReturnValue;
	Parms.CallFunc_ReadOwnershipData_ReturnValue = CallFunc_ReadOwnershipData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1 = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1;
	Parms.CallFunc_Get_All_Platforms_Platforms = CallFunc_Get_All_Platforms_Platforms;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


