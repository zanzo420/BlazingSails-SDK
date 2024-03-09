#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GeneralFunctions.GeneralFunctions_C
// (None)

class UClass* UGeneralFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeneralFunctions_C");

	return Clss;
}


// GeneralFunctions_C GeneralFunctions.Default__GeneralFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGeneralFunctions_C* UGeneralFunctions_C::GetDefaultObj()
{
	static class UGeneralFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeneralFunctions_C*>(UGeneralFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GeneralFunctions.GeneralFunctions_C.Random String Generator
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      RandomString                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Alphabet_Array                                                   (Edit, BlueprintVisible)
// class FString                      Temp_String                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGeneralFunctions_C::Random_String_Generator(int32 Length, class UObject* __WorldContext, class FString* RandomString, const TArray<class FString>& Alphabet_Array, const class FString& Temp_String, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Random String Generator");

	Params::UGeneralFunctions_C_Random_String_Generator_Params Parms{};

	Parms.Length = Length;
	Parms.__WorldContext = __WorldContext;
	Parms.Alphabet_Array = Alphabet_Array;
	Parms.Temp_String = Temp_String;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RandomString != nullptr)
		*RandomString = std::move(Parms.RandomString);

}


// Function GeneralFunctions.GeneralFunctions_C.Create Data From Request
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestJsonObject*           Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Request_Data                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Encoded_Json                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Json_Object                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Random_String_Generator_RandomString                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Random_String_Generator_RandomString_1                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_EncodeJsonToSingleString_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Base64Encode_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UGeneralFunctions_C::Create_Data_From_Request(class UVaRestJsonObject* Data, class UObject* __WorldContext, class UVaRestJsonObject** Request_Data, class UVaRestJsonObject* Encoded_Json, class UVaRestJsonObject* Json_Object, const class FString& CallFunc_Random_String_Generator_RandomString, const class FString& CallFunc_Random_String_Generator_RandomString_1, const class FString& CallFunc_EncodeJsonToSingleString_ReturnValue, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, const class FString& CallFunc_Base64Encode_ReturnValue, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Create Data From Request");

	Params::UGeneralFunctions_C_Create_Data_From_Request_Params Parms{};

	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;
	Parms.Encoded_Json = Encoded_Json;
	Parms.Json_Object = Json_Object;
	Parms.CallFunc_Random_String_Generator_RandomString = CallFunc_Random_String_Generator_RandomString;
	Parms.CallFunc_Random_String_Generator_RandomString_1 = CallFunc_Random_String_Generator_RandomString_1;
	Parms.CallFunc_EncodeJsonToSingleString_ReturnValue = CallFunc_EncodeJsonToSingleString_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Base64Encode_ReturnValue = CallFunc_Base64Encode_ReturnValue;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Request_Data != nullptr)
		*Request_Data = Parms.Request_Data;

}


// Function GeneralFunctions.GeneralFunctions_C.Get Data From Response
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Response_Data                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Json_Object                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_GetResponseObject_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Base64Decode_Dest                                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Base64Decode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DecodeJson_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::Get_Data_From_Response(class UVaRestRequestJSON* Data, class UObject* __WorldContext, class UVaRestJsonObject** Response_Data, class UVaRestJsonObject* Json_Object, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UVaRestJsonObject* CallFunc_GetResponseObject_ReturnValue, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue, class UVaRestJsonObject* CallFunc_GetObjectField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Base64Decode_Dest, bool CallFunc_Base64Decode_ReturnValue, bool CallFunc_DecodeJson_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Get Data From Response");

	Params::UGeneralFunctions_C_Get_Data_From_Response_Params Parms{};

	Parms.Data = Data;
	Parms.__WorldContext = __WorldContext;
	Parms.Json_Object = Json_Object;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetResponseObject_ReturnValue = CallFunc_GetResponseObject_ReturnValue;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Base64Decode_Dest = CallFunc_Base64Decode_Dest;
	Parms.CallFunc_Base64Decode_ReturnValue = CallFunc_Base64Decode_ReturnValue;
	Parms.CallFunc_DecodeJson_ReturnValue = CallFunc_DecodeJson_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Response_Data != nullptr)
		*Response_Data = Parms.Response_Data;

}


// Function GeneralFunctions.GeneralFunctions_C.GetWeaponInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Weapon_Data             Out_Row                                                          (Parm, OutParm, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ZoomMultiplier                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Weapon_Data             CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetWeaponInfo(int32 ItemId, class UObject* __WorldContext, struct FST_Weapon_Data* Out_Row, bool* Found, float ZoomMultiplier, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_Weapon_Data& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetWeaponInfo");

	Params::UGeneralFunctions_C_GetWeaponInfo_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.ZoomMultiplier = ZoomMultiplier;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function GeneralFunctions.GeneralFunctions_C.Current BR Alpha Player State
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABR_Alpha_PlayerState_C*     As_BR_Alpha_Player_State                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABR_Alpha_PlayerState_C*     K2Node_DynamicCast_AsBR_Alpha_Player_State                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::Current_BR_Alpha_Player_State(class UObject* __WorldContext, class ABR_Alpha_PlayerState_C** As_BR_Alpha_Player_State, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABR_Alpha_PlayerState_C* K2Node_DynamicCast_AsBR_Alpha_Player_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Current BR Alpha Player State");

	Params::UGeneralFunctions_C_Current_BR_Alpha_Player_State_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBR_Alpha_Player_State = K2Node_DynamicCast_AsBR_Alpha_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (As_BR_Alpha_Player_State != nullptr)
		*As_BR_Alpha_Player_State = Parms.As_BR_Alpha_Player_State;

}


// Function GeneralFunctions.GeneralFunctions_C.Current EOS Game State
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEOS_Game_State_C*           AsEOS_Game_State                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEOS_Game_State_C*           K2Node_DynamicCast_AsEOS_Game_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::Current_EOS_Game_State(class UObject* __WorldContext, class AEOS_Game_State_C** AsEOS_Game_State, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AEOS_Game_State_C* K2Node_DynamicCast_AsEOS_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Current EOS Game State");

	Params::UGeneralFunctions_C_Current_EOS_Game_State_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Game_State = K2Node_DynamicCast_AsEOS_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsEOS_Game_State != nullptr)
		*AsEOS_Game_State = Parms.AsEOS_Game_State;

}


// Function GeneralFunctions.GeneralFunctions_C.Current Alpha Game State
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         AsAlpha_Game_State                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         K2Node_DynamicCast_AsAlpha_Game_State                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::Current_Alpha_Game_State(class UObject* __WorldContext, class AAlpha_Game_State_C** AsAlpha_Game_State, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAlpha_Game_State_C* K2Node_DynamicCast_AsAlpha_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Current Alpha Game State");

	Params::UGeneralFunctions_C_Current_Alpha_Game_State_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlpha_Game_State = K2Node_DynamicCast_AsAlpha_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsAlpha_Game_State != nullptr)
		*AsAlpha_Game_State = Parms.AsAlpha_Game_State;

}


// Function GeneralFunctions.GeneralFunctions_C.Current Alpha Player State
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerState_C*        As_Alpha_Player_State                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_PlayerState_C*        K2Node_DynamicCast_AsAlpha_Player_State                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::Current_Alpha_Player_State(class UObject* __WorldContext, class AAlpha_PlayerState_C** As_Alpha_Player_State, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Current Alpha Player State");

	Params::UGeneralFunctions_C_Current_Alpha_Player_State_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAlpha_Player_State = K2Node_DynamicCast_AsAlpha_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (As_Alpha_Player_State != nullptr)
		*As_Alpha_Player_State = Parms.As_Alpha_Player_State;

}


// Function GeneralFunctions.GeneralFunctions_C.Current BP PlayerState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           AsBP_Player_State                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::Current_BP_PlayerState(class UObject* __WorldContext, class ABP_PlayerState_C** AsBP_Player_State, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Current BP PlayerState");

	Params::UGeneralFunctions_C_Current_BP_PlayerState_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Player_State != nullptr)
		*AsBP_Player_State = Parms.AsBP_Player_State;

}


// Function GeneralFunctions.GeneralFunctions_C.Current Game BP Instance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          AsBP_Game_Instance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::Current_Game_BP_Instance(class UObject* __WorldContext, class UBP_GameInstance_C** AsBP_Game_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Current Game BP Instance");

	Params::UGeneralFunctions_C_Current_Game_BP_Instance_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Game_Instance != nullptr)
		*AsBP_Game_Instance = Parms.AsBP_Game_Instance;

}


// Function GeneralFunctions.GeneralFunctions_C.Current Game EOS Instance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         AsEOS_Game_Instance                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::Current_Game_EOS_Instance(class UObject* __WorldContext, class UEOS_GameInstance_C** AsEOS_Game_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Current Game EOS Instance");

	Params::UGeneralFunctions_C_Current_Game_EOS_Instance_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsEOS_Game_Instance != nullptr)
		*AsEOS_Game_Instance = Parms.AsEOS_Game_Instance;

}


// Function GeneralFunctions.GeneralFunctions_C.CurrentPlayerState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEOS_PlayerState_C*          As_EOS_Player_State                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::CurrentPlayerState(class UObject* __WorldContext, class AEOS_PlayerState_C** As_EOS_Player_State, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "CurrentPlayerState");

	Params::UGeneralFunctions_C_CurrentPlayerState_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEOS_Player_State = K2Node_DynamicCast_AsEOS_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (As_EOS_Player_State != nullptr)
		*As_EOS_Player_State = Parms.As_EOS_Player_State;

}


// Function GeneralFunctions.GeneralFunctions_C.Current BP Game State
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             AsBP_Game_State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::Current_BP_Game_State(class UObject* __WorldContext, class ABP_GameState_C** AsBP_Game_State, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Current BP Game State");

	Params::UGeneralFunctions_C_Current_BP_Game_State_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Game_State != nullptr)
		*AsBP_Game_State = Parms.AsBP_Game_State;

}


// Function GeneralFunctions.GeneralFunctions_C.GetFOVVertical
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFOVAngle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetFOVVertical(class UObject* __WorldContext, float* FOV, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_GetFOVAngle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetFOVVertical");

	Params::UGeneralFunctions_C_GetFOVVertical_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetFOVAngle_ReturnValue = CallFunc_GetFOVAngle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FOV != nullptr)
		*FOV = Parms.FOV;

}


// Function GeneralFunctions.GeneralFunctions_C.GetFOVHorizontal
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeY                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFOVAngle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegTan_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAtan_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetFOVHorizontal(class UObject* __WorldContext, float* FOV, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, float CallFunc_GetFOVAngle_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_DegTan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetFOVHorizontal");

	Params::UGeneralFunctions_C_GetFOVHorizontal_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetViewportSize_SizeX = CallFunc_GetViewportSize_SizeX;
	Parms.CallFunc_GetViewportSize_SizeY = CallFunc_GetViewportSize_SizeY;
	Parms.CallFunc_GetFOVAngle_ReturnValue = CallFunc_GetFOVAngle_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_DegTan_ReturnValue = CallFunc_DegTan_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_DegAtan_ReturnValue = CallFunc_DegAtan_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FOV != nullptr)
		*FOV = Parms.FOV;

}


// Function GeneralFunctions.GeneralFunctions_C.GetChestInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TurnInTreasure        Chest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Image                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetChestInfo(enum class E_TurnInTreasure Chest, class UObject* __WorldContext, class UTexture2D** Icon, class UTexture2D* Image, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetChestInfo");

	Params::UGeneralFunctions_C_GetChestInfo_Params Parms{};

	Parms.Chest = Chest;
	Parms.__WorldContext = __WorldContext;
	Parms.Image = Image;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function GeneralFunctions.GeneralFunctions_C.GenerateMarkerInfoForPickup
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PickupBase_C*            PickUp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Background                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Message                                                          (Parm, OutParm)
// class FString                      MessageStr                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           RarityMaterial                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Image                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ABP_PickupBackpackUpgrade_C* K2Node_DynamicCast_AsBP_Pickup_Backpack_Upgrade                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PickupGoldBox_High_C*    K2Node_DynamicCast_AsBP_Pickup_Gold_Box_High                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PickupWeaponBase_C*      K2Node_DynamicCast_AsBP_Pickup_Weapon_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetChestInfo_Icon                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Weapon_Data             CallFunc_GetWeaponInfo_Out_Row                                   (HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponInfo_Found                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetItemInfo_Icon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemInfo_Weight                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetItemInfo_ItemObject                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_Throwable                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_ItemCategories        CallFunc_GetItemInfo_Category                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UGeneralFunctions_C::GenerateMarkerInfoForPickup(class ABP_PickupBase_C* PickUp, class UObject* __WorldContext, class UMaterialInstance** Background, class UTexture2D** Icon, struct FVector* Location, class FText* Message, const class FString& MessageStr, const struct FVector& Position, class UMaterialInstance* RarityMaterial, class UTexture2D* Image, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ABP_PickupBackpackUpgrade_C* K2Node_DynamicCast_AsBP_Pickup_Backpack_Upgrade, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class ABP_PickupGoldBox_High_C* K2Node_DynamicCast_AsBP_Pickup_Gold_Box_High, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, class ABP_PickupWeaponBase_C* K2Node_DynamicCast_AsBP_Pickup_Weapon_Base, bool K2Node_DynamicCast_bSuccess_2, class UTexture2D* CallFunc_GetChestInfo_Icon, bool CallFunc_IsValid_ReturnValue, const struct FST_Weapon_Data& CallFunc_GetWeaponInfo_Out_Row, bool CallFunc_GetWeaponInfo_Found, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UTexture2D* CallFunc_GetItemInfo_Icon, int32 CallFunc_GetItemInfo_Weight, class UClass* CallFunc_GetItemInfo_ItemObject, bool CallFunc_GetItemInfo_Throwable, enum class E_ItemCategories CallFunc_GetItemInfo_Category, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GenerateMarkerInfoForPickup");

	Params::UGeneralFunctions_C_GenerateMarkerInfoForPickup_Params Parms{};

	Parms.PickUp = PickUp;
	Parms.__WorldContext = __WorldContext;
	Parms.MessageStr = MessageStr;
	Parms.Position = Position;
	Parms.RarityMaterial = RarityMaterial;
	Parms.Image = Image;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pickup_Backpack_Upgrade = K2Node_DynamicCast_AsBP_Pickup_Backpack_Upgrade;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pickup_Gold_Box_High = K2Node_DynamicCast_AsBP_Pickup_Gold_Box_High;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Pickup_Weapon_Base = K2Node_DynamicCast_AsBP_Pickup_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetChestInfo_Icon = CallFunc_GetChestInfo_Icon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWeaponInfo_Out_Row = CallFunc_GetWeaponInfo_Out_Row;
	Parms.CallFunc_GetWeaponInfo_Found = CallFunc_GetWeaponInfo_Found;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetItemInfo_Icon = CallFunc_GetItemInfo_Icon;
	Parms.CallFunc_GetItemInfo_Weight = CallFunc_GetItemInfo_Weight;
	Parms.CallFunc_GetItemInfo_ItemObject = CallFunc_GetItemInfo_ItemObject;
	Parms.CallFunc_GetItemInfo_Throwable = CallFunc_GetItemInfo_Throwable;
	Parms.CallFunc_GetItemInfo_Category = CallFunc_GetItemInfo_Category;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Background != nullptr)
		*Background = Parms.Background;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Message != nullptr)
		*Message = Parms.Message;

}


// Function GeneralFunctions.GeneralFunctions_C.PrintWarning
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGeneralFunctions_C::PrintWarning(const class FString& Message, class UObject* __WorldContext, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "PrintWarning");

	Params::UGeneralFunctions_C_PrintWarning_Params Parms{};

	Parms.Message = Message;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.AddCosmeticItemSection
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UGridPanel*                  Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParentCol                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParentRow                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         Widgets                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              GridWidth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseHeader                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseFooter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_CosmeticItemSection_C*   NewSection                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasSectionAdded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_CosmeticItemSection_C*   Section                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Col                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Row                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_CosmeticItemSection_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::AddCosmeticItemSection(class FText Description, class UGridPanel* Parent, int32 ParentCol, int32 ParentRow, TArray<class UUserWidget*>& Widgets, int32 GridWidth, bool UseHeader, bool UseFooter, class UObject* __WorldContext, class UUI_CosmeticItemSection_C** NewSection, bool* WasSectionAdded, class UUI_CosmeticItemSection_C* Section, int32 Col, int32 Row, class UUI_CosmeticItemSection_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, class UUserWidget* CallFunc_Array_Get_Item, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "AddCosmeticItemSection");

	Params::UGeneralFunctions_C_AddCosmeticItemSection_Params Parms{};

	Parms.Description = Description;
	Parms.Parent = Parent;
	Parms.ParentCol = ParentCol;
	Parms.ParentRow = ParentRow;
	Parms.Widgets = Widgets;
	Parms.GridWidth = GridWidth;
	Parms.UseHeader = UseHeader;
	Parms.UseFooter = UseFooter;
	Parms.__WorldContext = __WorldContext;
	Parms.Section = Section;
	Parms.Col = Col;
	Parms.Row = Row;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (NewSection != nullptr)
		*NewSection = Parms.NewSection;

	if (WasSectionAdded != nullptr)
		*WasSectionAdded = Parms.WasSectionAdded;

}


// Function GeneralFunctions.GeneralFunctions_C.GetTeamGoldOrder
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Team_Info>       Teams                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_Team_Info>       OrderedTeams                                                     (Parm, OutParm)
// int32                              UnorderedTeamRemovalIndex                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Team_Info               TeamToBeAdded                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              GoldAmountTemp                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_Team_Info>       OrderedTeamsTemp                                                 (Edit, BlueprintVisible)
// TArray<struct FST_Team_Info>       UnorderedTeamsTemp                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Team_Info               CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetTeamGoldOrder(TArray<struct FST_Team_Info>& Teams, class UObject* __WorldContext, TArray<struct FST_Team_Info>* OrderedTeams, int32 UnorderedTeamRemovalIndex, const struct FST_Team_Info& TeamToBeAdded, int32 GoldAmountTemp, const TArray<struct FST_Team_Info>& OrderedTeamsTemp, const TArray<struct FST_Team_Info>& UnorderedTeamsTemp, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FST_Team_Info& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetTeamGoldOrder");

	Params::UGeneralFunctions_C_GetTeamGoldOrder_Params Parms{};

	Parms.Teams = Teams;
	Parms.__WorldContext = __WorldContext;
	Parms.UnorderedTeamRemovalIndex = UnorderedTeamRemovalIndex;
	Parms.TeamToBeAdded = TeamToBeAdded;
	Parms.GoldAmountTemp = GoldAmountTemp;
	Parms.OrderedTeamsTemp = OrderedTeamsTemp;
	Parms.UnorderedTeamsTemp = UnorderedTeamsTemp;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OrderedTeams != nullptr)
		*OrderedTeams = std::move(Parms.OrderedTeams);

}


// Function GeneralFunctions.GeneralFunctions_C.InventoryWarningMessage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUI_InventoryItem_C*         InventoryItemWidgetRef_optional_                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_InventoryError_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_InventoryError_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_InventoryError_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::InventoryWarningMessage(class FText Message, class UUI_InventoryItem_C* InventoryItemWidgetRef_optional_, class UObject* __WorldContext, class UUI_InventoryError_C* CallFunc_Create_ReturnValue, TArray<class UUI_InventoryError_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_InventoryError_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "InventoryWarningMessage");

	Params::UGeneralFunctions_C_InventoryWarningMessage_Params Parms{};

	Parms.Message = Message;
	Parms.InventoryItemWidgetRef_optional_ = InventoryItemWidgetRef_optional_;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.ValidatePirateGodTitle
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TitleIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PirateCurse_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ResultingTitleIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Invalid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::ValidatePirateGodTitle(int32 TitleIndex, bool PirateCurse_, class UObject* __WorldContext, int32* ResultingTitleIndex, bool* Invalid, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "ValidatePirateGodTitle");

	Params::UGeneralFunctions_C_ValidatePirateGodTitle_Params Parms{};

	Parms.TitleIndex = TitleIndex;
	Parms.PirateCurse_ = PirateCurse_;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingTitleIndex != nullptr)
		*ResultingTitleIndex = Parms.ResultingTitleIndex;

	if (Invalid != nullptr)
		*Invalid = Parms.Invalid;

}


// Function GeneralFunctions.GeneralFunctions_C.PlayVoiceLine
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VoiceTypeIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        VoiceLineRowName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OriginOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  VoiceLineToUse                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Voiceline               CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::PlayVoiceLine(int32 VoiceTypeIndex, class FName VoiceLineRowName, class USceneComponent* AttachComponent, float Volume, float Pitch, const struct FVector& OriginOffset, class UObject* __WorldContext, class USoundBase* VoiceLineToUse, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, const struct FST_Voiceline& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "PlayVoiceLine");

	Params::UGeneralFunctions_C_PlayVoiceLine_Params Parms{};

	Parms.VoiceTypeIndex = VoiceTypeIndex;
	Parms.VoiceLineRowName = VoiceLineRowName;
	Parms.AttachComponent = AttachComponent;
	Parms.Volume = Volume;
	Parms.Pitch = Pitch;
	Parms.OriginOffset = OriginOffset;
	Parms.__WorldContext = __WorldContext;
	Parms.VoiceLineToUse = VoiceLineToUse;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.GetNonSpectatorPlayerStates
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_GameState_C*             GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_PlayerState_C*>   FilteredPlayerStates                                             (Parm, OutParm)
// TArray<class ABP_PlayerState_C*>   FilteredStates                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetNonSpectatorPlayerStates(class ABP_GameState_C*& GameState, class UObject* __WorldContext, TArray<class ABP_PlayerState_C*>* FilteredPlayerStates, const TArray<class ABP_PlayerState_C*>& FilteredStates, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetNonSpectatorPlayerStates");

	Params::UGeneralFunctions_C_GetNonSpectatorPlayerStates_Params Parms{};

	Parms.GameState = GameState;
	Parms.__WorldContext = __WorldContext;
	Parms.FilteredStates = FilteredStates;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredPlayerStates != nullptr)
		*FilteredPlayerStates = std::move(Parms.FilteredPlayerStates);

}


// Function GeneralFunctions.GeneralFunctions_C.GetGainedlevelsArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelPrevious                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelsGained                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      GainedLevels                                                     (Parm, OutParm)
// TArray<int32>                      Actually_Gained_Levels_Temp                                      (Edit, BlueprintVisible)
// int32                              LevelsGainedTemp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetGainedlevelsArray(int32 LevelPrevious, int32 LevelsGained, class UObject* __WorldContext, TArray<int32>* GainedLevels, const TArray<int32>& Actually_Gained_Levels_Temp, int32 LevelsGainedTemp, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetGainedlevelsArray");

	Params::UGeneralFunctions_C_GetGainedlevelsArray_Params Parms{};

	Parms.LevelPrevious = LevelPrevious;
	Parms.LevelsGained = LevelsGained;
	Parms.__WorldContext = __WorldContext;
	Parms.Actually_Gained_Levels_Temp = Actually_Gained_Levels_Temp;
	Parms.LevelsGainedTemp = LevelsGainedTemp;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GainedLevels != nullptr)
		*GainedLevels = std::move(Parms.GainedLevels);

}


// Function GeneralFunctions.GeneralFunctions_C.ValidateCosmeticItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     SteamEcoManager                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ItemIDToVerify                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::ValidateCosmeticItem(class UObject* SteamEcoManager, int32 ItemId, class UObject* __WorldContext, bool* IsValid, int32 ItemIDToVerify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "ValidateCosmeticItem");

	Params::UGeneralFunctions_C_ValidateCosmeticItem_Params Parms{};

	Parms.SteamEcoManager = SteamEcoManager;
	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.ItemIDToVerify = ItemIDToVerify;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function GeneralFunctions.GeneralFunctions_C.Apply Cosmetics
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_SteamItemCategories   ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSecundary                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Mannequin_C*             Mannequin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Mannequin_C*             MannequinRef                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secundary                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Customisation5          CustomisationTemp                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              ItemIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_SteamItemCategories   Category                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_2                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_3                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_4                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_5                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_6                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_7                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_8                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_9                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_10               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_11               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization                    (HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_13                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_14                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_12               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_1                  (HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_15                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_16                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_2                  (HasGetValueTypeHash)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_3                  (HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_17                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_18                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_4                  (HasGetValueTypeHash)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_5                  (HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_19                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_20                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_6                  (HasGetValueTypeHash)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_7                  (HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_21                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_22                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_21                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_22                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_8                  (HasGetValueTypeHash)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_9                  (HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_4                         (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_5                         (ReferenceParm)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_6                         (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_7                         (ReferenceParm)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_8                         (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_23                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_9                         (ReferenceParm)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_23                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_10                 (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_10                        (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_1                             (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_2                             (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_3                             (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_4                             (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_5                             (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_6                             (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_7                             (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_8                             (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_9                             (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_10                            (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_11                            (HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_SetFieldsInStruct_StructOut_12                            (HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_13                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_14                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_15                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_16                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_17                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_18                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_19                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_20                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_21                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_22                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_23                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_24                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_SetFieldsInStruct_StructOut_25                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::Apply_Cosmetics(int32 ItemId, enum class E_SteamItemCategories ItemCategory, bool bSecundary, class ABP_Mannequin_C* Mannequin, class UObject* __WorldContext, class ABP_Mannequin_C* MannequinRef, bool Secundary, const struct FST_Customisation5& CustomisationTemp, int32 ItemIndex, enum class E_SteamItemCategories Category, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_2, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_3, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_4, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_4, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_5, bool K2Node_DynamicCast_bSuccess_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_5, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_6, bool K2Node_DynamicCast_bSuccess_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_7, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_6, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_7, bool K2Node_DynamicCast_bSuccess_7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_8, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_7, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_8, bool K2Node_DynamicCast_bSuccess_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_9, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_8, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_9, bool K2Node_DynamicCast_bSuccess_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_10, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_9, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_10, bool K2Node_DynamicCast_bSuccess_10, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_11, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_10, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_11, bool K2Node_DynamicCast_bSuccess_11, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_12, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_11, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_12, bool K2Node_DynamicCast_bSuccess_12, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_13, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_14, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_13, bool K2Node_DynamicCast_bSuccess_13, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_14, bool K2Node_DynamicCast_bSuccess_14, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_12, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_15, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_16, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_15, bool K2Node_DynamicCast_bSuccess_15, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_16, bool K2Node_DynamicCast_bSuccess_16, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_2, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_17, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_18, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_17, bool K2Node_DynamicCast_bSuccess_17, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_18, bool K2Node_DynamicCast_bSuccess_18, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_4, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_19, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_20, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_19, bool K2Node_DynamicCast_bSuccess_19, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_20, bool K2Node_DynamicCast_bSuccess_20, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_6, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_21, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_22, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_21, bool K2Node_DynamicCast_bSuccess_21, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_22, bool K2Node_DynamicCast_bSuccess_22, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_8, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_9, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_1, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_4, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_3, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_4, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_5, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_6, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_5, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_6, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_7, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_8, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_7, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Greater_IntInt_ReturnValue_7, bool CallFunc_Greater_IntInt_ReturnValue_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_23, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_9, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_23, bool K2Node_DynamicCast_bSuccess_23, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_9, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_10, int32 CallFunc_Array_Length_ReturnValue_9, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_10, bool CallFunc_Greater_IntInt_ReturnValue_9, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_10, bool CallFunc_Greater_IntInt_ReturnValue_10, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_1, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_2, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_3, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_4, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_5, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_6, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_7, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_8, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_9, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_10, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_11, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut_12, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_13, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_14, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_15, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_16, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_17, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_18, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_19, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_20, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_21, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_22, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_23, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_24, const struct FST_PlayerCustomisation& K2Node_SetFieldsInStruct_StructOut_25)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Apply Cosmetics");

	Params::UGeneralFunctions_C_Apply_Cosmetics_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.ItemCategory = ItemCategory;
	Parms.bSecundary = bSecundary;
	Parms.Mannequin = Mannequin;
	Parms.__WorldContext = __WorldContext;
	Parms.MannequinRef = MannequinRef;
	Parms.Secundary = Secundary;
	Parms.CustomisationTemp = CustomisationTemp;
	Parms.ItemIndex = ItemIndex;
	Parms.Category = Category;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_Get_Player_Customization_Customization = CallFunc_Get_Player_Customization_Customization;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_1 = K2Node_DynamicCast_AsBP_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_Get_Player_Customization_Customization_1 = CallFunc_Get_Player_Customization_Customization_1;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_2 = K2Node_DynamicCast_AsBP_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.CallFunc_Get_Player_Customization_Customization_2 = CallFunc_Get_Player_Customization_Customization_2;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_3 = K2Node_DynamicCast_AsBP_Game_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.CallFunc_Get_Player_Customization_Customization_3 = CallFunc_Get_Player_Customization_Customization_3;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_4 = K2Node_DynamicCast_AsBP_Game_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.CallFunc_Get_Player_Customization_Customization_4 = CallFunc_Get_Player_Customization_Customization_4;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_5 = K2Node_DynamicCast_AsBP_Game_Instance_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.CallFunc_Get_Player_Customization_Customization_5 = CallFunc_Get_Player_Customization_Customization_5;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_6 = K2Node_DynamicCast_AsBP_Game_Instance_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGameInstance_ReturnValue_7 = CallFunc_GetGameInstance_ReturnValue_7;
	Parms.CallFunc_Get_Player_Customization_Customization_6 = CallFunc_Get_Player_Customization_Customization_6;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_7 = K2Node_DynamicCast_AsBP_Game_Instance_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetGameInstance_ReturnValue_8 = CallFunc_GetGameInstance_ReturnValue_8;
	Parms.CallFunc_Get_Player_Customization_Customization_7 = CallFunc_Get_Player_Customization_Customization_7;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_8 = K2Node_DynamicCast_AsBP_Game_Instance_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetGameInstance_ReturnValue_9 = CallFunc_GetGameInstance_ReturnValue_9;
	Parms.CallFunc_Get_Player_Customization_Customization_8 = CallFunc_Get_Player_Customization_Customization_8;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_9 = K2Node_DynamicCast_AsBP_Game_Instance_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetGameInstance_ReturnValue_10 = CallFunc_GetGameInstance_ReturnValue_10;
	Parms.CallFunc_Get_Player_Customization_Customization_9 = CallFunc_Get_Player_Customization_Customization_9;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_10 = K2Node_DynamicCast_AsBP_Game_Instance_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetGameInstance_ReturnValue_11 = CallFunc_GetGameInstance_ReturnValue_11;
	Parms.CallFunc_Get_Player_Customization_Customization_10 = CallFunc_Get_Player_Customization_Customization_10;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_11 = K2Node_DynamicCast_AsBP_Game_Instance_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetGameInstance_ReturnValue_12 = CallFunc_GetGameInstance_ReturnValue_12;
	Parms.CallFunc_Get_Player_Customization_Customization_11 = CallFunc_Get_Player_Customization_Customization_11;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_12 = K2Node_DynamicCast_AsBP_Game_Instance_12;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Get_Ship_Customization_Customization = CallFunc_Get_Ship_Customization_Customization;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_13 = CallFunc_GetGameInstance_ReturnValue_13;
	Parms.CallFunc_GetGameInstance_ReturnValue_14 = CallFunc_GetGameInstance_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_13 = K2Node_DynamicCast_AsBP_Game_Instance_13;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_14 = K2Node_DynamicCast_AsBP_Game_Instance_14;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Get_Player_Customization_Customization_12 = CallFunc_Get_Player_Customization_Customization_12;
	Parms.CallFunc_Get_Ship_Customization_Customization_1 = CallFunc_Get_Ship_Customization_Customization_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_15 = CallFunc_GetGameInstance_ReturnValue_15;
	Parms.CallFunc_GetGameInstance_ReturnValue_16 = CallFunc_GetGameInstance_ReturnValue_16;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_15 = K2Node_DynamicCast_AsBP_Game_Instance_15;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_16 = K2Node_DynamicCast_AsBP_Game_Instance_16;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_Get_Ship_Customization_Customization_2 = CallFunc_Get_Ship_Customization_Customization_2;
	Parms.CallFunc_Get_Ship_Customization_Customization_3 = CallFunc_Get_Ship_Customization_Customization_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_17 = CallFunc_GetGameInstance_ReturnValue_17;
	Parms.CallFunc_GetGameInstance_ReturnValue_18 = CallFunc_GetGameInstance_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_17 = K2Node_DynamicCast_AsBP_Game_Instance_17;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_18 = K2Node_DynamicCast_AsBP_Game_Instance_18;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_Get_Ship_Customization_Customization_4 = CallFunc_Get_Ship_Customization_Customization_4;
	Parms.CallFunc_Get_Ship_Customization_Customization_5 = CallFunc_Get_Ship_Customization_Customization_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_19 = CallFunc_GetGameInstance_ReturnValue_19;
	Parms.CallFunc_GetGameInstance_ReturnValue_20 = CallFunc_GetGameInstance_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_19 = K2Node_DynamicCast_AsBP_Game_Instance_19;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_20 = K2Node_DynamicCast_AsBP_Game_Instance_20;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_Get_Ship_Customization_Customization_6 = CallFunc_Get_Ship_Customization_Customization_6;
	Parms.CallFunc_Get_Ship_Customization_Customization_7 = CallFunc_Get_Ship_Customization_Customization_7;
	Parms.CallFunc_GetGameInstance_ReturnValue_21 = CallFunc_GetGameInstance_ReturnValue_21;
	Parms.CallFunc_GetGameInstance_ReturnValue_22 = CallFunc_GetGameInstance_ReturnValue_22;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_21 = K2Node_DynamicCast_AsBP_Game_Instance_21;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_22 = K2Node_DynamicCast_AsBP_Game_Instance_22;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_Get_Ship_Customization_Customization_8 = CallFunc_Get_Ship_Customization_Customization_8;
	Parms.CallFunc_Get_Ship_Customization_Customization_9 = CallFunc_Get_Ship_Customization_Customization_9;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_4 = CallFunc_GetAllActorsOfClass_OutActors_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_5 = CallFunc_GetAllActorsOfClass_OutActors_5;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_6 = CallFunc_GetAllActorsOfClass_OutActors_6;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Greater_IntInt_ReturnValue_5 = CallFunc_Greater_IntInt_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue_6 = CallFunc_Greater_IntInt_ReturnValue_6;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_7 = CallFunc_GetAllActorsOfClass_OutActors_7;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_8 = CallFunc_GetAllActorsOfClass_OutActors_8;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Greater_IntInt_ReturnValue_7 = CallFunc_Greater_IntInt_ReturnValue_7;
	Parms.CallFunc_Greater_IntInt_ReturnValue_8 = CallFunc_Greater_IntInt_ReturnValue_8;
	Parms.CallFunc_GetGameInstance_ReturnValue_23 = CallFunc_GetGameInstance_ReturnValue_23;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_9 = CallFunc_GetAllActorsOfClass_OutActors_9;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_23 = K2Node_DynamicCast_AsBP_Game_Instance_23;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Get_Ship_Customization_Customization_10 = CallFunc_Get_Ship_Customization_Customization_10;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_10 = CallFunc_GetAllActorsOfClass_OutActors_10;
	Parms.CallFunc_Greater_IntInt_ReturnValue_9 = CallFunc_Greater_IntInt_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Greater_IntInt_ReturnValue_10 = CallFunc_Greater_IntInt_ReturnValue_10;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.K2Node_SetFieldsInStruct_StructOut_2 = K2Node_SetFieldsInStruct_StructOut_2;
	Parms.K2Node_SetFieldsInStruct_StructOut_3 = K2Node_SetFieldsInStruct_StructOut_3;
	Parms.K2Node_SetFieldsInStruct_StructOut_4 = K2Node_SetFieldsInStruct_StructOut_4;
	Parms.K2Node_SetFieldsInStruct_StructOut_5 = K2Node_SetFieldsInStruct_StructOut_5;
	Parms.K2Node_SetFieldsInStruct_StructOut_6 = K2Node_SetFieldsInStruct_StructOut_6;
	Parms.K2Node_SetFieldsInStruct_StructOut_7 = K2Node_SetFieldsInStruct_StructOut_7;
	Parms.K2Node_SetFieldsInStruct_StructOut_8 = K2Node_SetFieldsInStruct_StructOut_8;
	Parms.K2Node_SetFieldsInStruct_StructOut_9 = K2Node_SetFieldsInStruct_StructOut_9;
	Parms.K2Node_SetFieldsInStruct_StructOut_10 = K2Node_SetFieldsInStruct_StructOut_10;
	Parms.K2Node_SetFieldsInStruct_StructOut_11 = K2Node_SetFieldsInStruct_StructOut_11;
	Parms.K2Node_SetFieldsInStruct_StructOut_12 = K2Node_SetFieldsInStruct_StructOut_12;
	Parms.K2Node_SetFieldsInStruct_StructOut_13 = K2Node_SetFieldsInStruct_StructOut_13;
	Parms.K2Node_SetFieldsInStruct_StructOut_14 = K2Node_SetFieldsInStruct_StructOut_14;
	Parms.K2Node_SetFieldsInStruct_StructOut_15 = K2Node_SetFieldsInStruct_StructOut_15;
	Parms.K2Node_SetFieldsInStruct_StructOut_16 = K2Node_SetFieldsInStruct_StructOut_16;
	Parms.K2Node_SetFieldsInStruct_StructOut_17 = K2Node_SetFieldsInStruct_StructOut_17;
	Parms.K2Node_SetFieldsInStruct_StructOut_18 = K2Node_SetFieldsInStruct_StructOut_18;
	Parms.K2Node_SetFieldsInStruct_StructOut_19 = K2Node_SetFieldsInStruct_StructOut_19;
	Parms.K2Node_SetFieldsInStruct_StructOut_20 = K2Node_SetFieldsInStruct_StructOut_20;
	Parms.K2Node_SetFieldsInStruct_StructOut_21 = K2Node_SetFieldsInStruct_StructOut_21;
	Parms.K2Node_SetFieldsInStruct_StructOut_22 = K2Node_SetFieldsInStruct_StructOut_22;
	Parms.K2Node_SetFieldsInStruct_StructOut_23 = K2Node_SetFieldsInStruct_StructOut_23;
	Parms.K2Node_SetFieldsInStruct_StructOut_24 = K2Node_SetFieldsInStruct_StructOut_24;
	Parms.K2Node_SetFieldsInStruct_StructOut_25 = K2Node_SetFieldsInStruct_StructOut_25;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.GetKeyDisplayName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                        InputKey                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Display_Name                                                     (Parm, OutParm)
// TMap<struct FKey, class FText>     ControllerKeyDisplayNames                                        (Edit, BlueprintVisible)
// TMap<struct FKey, class FText>     K2Node_MakeVariable_MakeVariableOutput                           (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetKeyDisplayName(const struct FKey& InputKey, class UObject* __WorldContext, class FText* Display_Name, TMap<struct FKey, class FText> ControllerKeyDisplayNames, TMap<struct FKey, class FText> K2Node_MakeVariable_MakeVariableOutput, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Key_GetDisplayName_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetKeyDisplayName");

	Params::UGeneralFunctions_C_GetKeyDisplayName_Params Parms{};

	Parms.InputKey = InputKey;
	Parms.__WorldContext = __WorldContext;
	Parms.ControllerKeyDisplayNames = ControllerKeyDisplayNames;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Display_Name != nullptr)
		*Display_Name = Parms.Display_Name;

}


// Function GeneralFunctions.GeneralFunctions_C.GetLowestLoadoutMultiplier
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerState_C*           PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Lowest                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LowestMultiplier                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Weapon_Data             CallFunc_GetWeaponInfo_Out_Row                                   (HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponInfo_Found                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Weapon_Data             CallFunc_GetWeaponInfo_Out_Row_1                                 (HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponInfo_Found_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWeaponRewardMultiplier_Multiplier                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWeaponRewardMultiplier_Multiplier_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Weapon_Data             CallFunc_GetWeaponInfo_Out_Row_2                                 (HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponInfo_Found_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWeaponRewardMultiplier_Multiplier_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetLowestLoadoutMultiplier(class ABP_PlayerState_C* PlayerState, class UObject* __WorldContext, float* Lowest, float LowestMultiplier, const struct FST_Weapon_Data& CallFunc_GetWeaponInfo_Out_Row, bool CallFunc_GetWeaponInfo_Found, const struct FST_Weapon_Data& CallFunc_GetWeaponInfo_Out_Row_1, bool CallFunc_GetWeaponInfo_Found_1, float CallFunc_GetWeaponRewardMultiplier_Multiplier, float CallFunc_GetWeaponRewardMultiplier_Multiplier_1, const struct FST_Weapon_Data& CallFunc_GetWeaponInfo_Out_Row_2, bool CallFunc_GetWeaponInfo_Found_2, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetWeaponRewardMultiplier_Multiplier_2, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetLowestLoadoutMultiplier");

	Params::UGeneralFunctions_C_GetLowestLoadoutMultiplier_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.__WorldContext = __WorldContext;
	Parms.LowestMultiplier = LowestMultiplier;
	Parms.CallFunc_GetWeaponInfo_Out_Row = CallFunc_GetWeaponInfo_Out_Row;
	Parms.CallFunc_GetWeaponInfo_Found = CallFunc_GetWeaponInfo_Found;
	Parms.CallFunc_GetWeaponInfo_Out_Row_1 = CallFunc_GetWeaponInfo_Out_Row_1;
	Parms.CallFunc_GetWeaponInfo_Found_1 = CallFunc_GetWeaponInfo_Found_1;
	Parms.CallFunc_GetWeaponRewardMultiplier_Multiplier = CallFunc_GetWeaponRewardMultiplier_Multiplier;
	Parms.CallFunc_GetWeaponRewardMultiplier_Multiplier_1 = CallFunc_GetWeaponRewardMultiplier_Multiplier_1;
	Parms.CallFunc_GetWeaponInfo_Out_Row_2 = CallFunc_GetWeaponInfo_Out_Row_2;
	Parms.CallFunc_GetWeaponInfo_Found_2 = CallFunc_GetWeaponInfo_Found_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWeaponRewardMultiplier_Multiplier_2 = CallFunc_GetWeaponRewardMultiplier_Multiplier_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Lowest != nullptr)
		*Lowest = Parms.Lowest;

}


// Function GeneralFunctions.GeneralFunctions_C.CheckIfFleetCanBeJoined
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Fleet                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanJoin                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FleetFull                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RedFleetPlayers                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BlueFleetPlayers                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::CheckIfFleetCanBeJoined(int32 Fleet, class UObject* __WorldContext, bool* CanJoin, bool* FleetFull, int32 RedFleetPlayers, int32 BlueFleetPlayers, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class APlayerState* CallFunc_Array_Get_Item, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "CheckIfFleetCanBeJoined");

	Params::UGeneralFunctions_C_CheckIfFleetCanBeJoined_Params Parms{};

	Parms.Fleet = Fleet;
	Parms.__WorldContext = __WorldContext;
	Parms.RedFleetPlayers = RedFleetPlayers;
	Parms.BlueFleetPlayers = BlueFleetPlayers;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CanJoin != nullptr)
		*CanJoin = Parms.CanJoin;

	if (FleetFull != nullptr)
		*FleetFull = Parms.FleetFull;

}


// Function GeneralFunctions.GeneralFunctions_C.GetWeaponRewardMultiplier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_Weapons               Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Multiplier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetWeaponRewardMultiplier(enum class E_Weapons Weapon, class UObject* __WorldContext, float* Multiplier, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetWeaponRewardMultiplier");

	Params::UGeneralFunctions_C_GetWeaponRewardMultiplier_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;

}


// Function GeneralFunctions.GeneralFunctions_C.CurrentGameMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           As_Alpha_Game_Mode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           K2Node_DynamicCast_AsAlpha_Game_Mode                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::CurrentGameMode(class UObject* __WorldContext, class AAlpha_GameMode_C** As_Alpha_Game_Mode, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAlpha_GameMode_C* K2Node_DynamicCast_AsAlpha_Game_Mode, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "CurrentGameMode");

	Params::UGeneralFunctions_C_CurrentGameMode_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlpha_Game_Mode = K2Node_DynamicCast_AsAlpha_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (As_Alpha_Game_Mode != nullptr)
		*As_Alpha_Game_Mode = Parms.As_Alpha_Game_Mode;

}


// Function GeneralFunctions.GeneralFunctions_C.GetShipBlueprintClass
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_ShipTypes             ShipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ShipClass                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetShipBlueprintClass(enum class E_ShipTypes ShipType, class UObject* __WorldContext, class UClass** ShipClass, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetShipBlueprintClass");

	Params::UGeneralFunctions_C_GetShipBlueprintClass_Params Parms{};

	Parms.ShipType = ShipType;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ShipClass != nullptr)
		*ShipClass = Parms.ShipClass;

}


// Function GeneralFunctions.GeneralFunctions_C.GetCrewFleetID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FleetID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FleetIDTemp                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Team_Info               CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetCrewFleetID(int32 TeamID, class UObject* __WorldContext, int32* FleetID, int32 FleetIDTemp, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FST_Team_Info& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetCrewFleetID");

	Params::UGeneralFunctions_C_GetCrewFleetID_Params Parms{};

	Parms.TeamID = TeamID;
	Parms.__WorldContext = __WorldContext;
	Parms.FleetIDTemp = FleetIDTemp;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FleetID != nullptr)
		*FleetID = Parms.FleetID;

}


// Function GeneralFunctions.GeneralFunctions_C.Get Team With ID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Team_Info               Team                                                             (Parm, OutParm, HasGetValueTypeHash)
// bool                               TeamFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Team_Info               CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::Get_Team_With_ID(int32 TeamID, class UObject* __WorldContext, struct FST_Team_Info* Team, bool* TeamFound, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FST_Team_Info& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "Get Team With ID");

	Params::UGeneralFunctions_C_Get_Team_With_ID_Params Parms{};

	Parms.TeamID = TeamID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Team != nullptr)
		*Team = std::move(Parms.Team);

	if (TeamFound != nullptr)
		*TeamFound = Parms.TeamFound;

}


// Function GeneralFunctions.GeneralFunctions_C.CheckIfCrewLeader
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CrewLeader                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeader                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_PlayerState_C*        CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::CheckIfCrewLeader(class AController* CrewLeader, class UObject* __WorldContext, bool* IsLeader, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "CheckIfCrewLeader");

	Params::UGeneralFunctions_C_CheckIfCrewLeader_Params Parms{};

	Parms.CrewLeader = CrewLeader;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State = CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLeader != nullptr)
		*IsLeader = Parms.IsLeader;

}


// Function GeneralFunctions.GeneralFunctions_C.SwapCharacterFigure
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CharMatInstRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           MaterialToUse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaterialIndexToUseForSkin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    MaterialInstanceRef                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CharacterMaterialInstanceRef                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::SwapCharacterFigure(class USkeletalMeshComponent* SkeletalMeshComponent, class UMaterialInstanceDynamic* CharMatInstRef, class UMaterialInstance* MaterialToUse, int32 MaterialIndexToUseForSkin, class UObject* __WorldContext, class UMaterialInstanceDynamic** MaterialInstanceRef, class UMaterialInstanceDynamic* CharacterMaterialInstanceRef, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "SwapCharacterFigure");

	Params::UGeneralFunctions_C_SwapCharacterFigure_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.CharMatInstRef = CharMatInstRef;
	Parms.MaterialToUse = MaterialToUse;
	Parms.MaterialIndexToUseForSkin = MaterialIndexToUseForSkin;
	Parms.__WorldContext = __WorldContext;
	Parms.CharacterMaterialInstanceRef = CharacterMaterialInstanceRef;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MaterialInstanceRef != nullptr)
		*MaterialInstanceRef = Parms.MaterialInstanceRef;

}


// Function GeneralFunctions.GeneralFunctions_C.ApplyCharacterCustomisation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PlayerCustomisation     Player_Customizations_                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Player_Curse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CharacterMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        HatMesh                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      BeardMesh                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      LeftFootMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        PegLegLeft                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      RightFootMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        PegLegRight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      TorsoMesh                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      PantsMesh                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      FaceMesh                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter_New_AnimBlueprint_C*AnimationBP                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMannequin_AnimationBlueprint_C*MannequinAnimationBP                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CharMatInstRef_ForValidating_                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      RightHand                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      LeftHand                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      LowerFaceMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        HammerMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      SkeletalHat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VoicePitch                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              VoiceType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CharacterMaterialInstance                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HammerSkin                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Title                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Piratecurse                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ResetTitle                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ResetCharacterFigure                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DontLoadBeard                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DontLoadLowerFaceItems                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TriedToCheatCurseSkelleton                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DontLoadFaceItems                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DontAdjustSkinTexture                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    EyebrowMaterialInsanceRef                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    BeardMaterialInstanceRef                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UtilitySlotToUse                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CharacterMaterialInstanceRef                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              VoiceTypeTemp                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VoiceLinePitchTemp                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_ValidatePirateGodTitle_ResultingTitleIndex              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ValidatePirateGodTitle_Invalid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_HamerSkin               CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_2                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_3                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_4                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_5                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_6                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_6                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_7                          (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_7                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_6                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_7                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_8                          (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_8                         (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_8                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_9                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_9                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_9                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_10                         (ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetCorrectSkinColor_Color                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_10                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_11                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_11                        (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_10                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_11                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetMaterialSlotNames_ReturnValue                        (ReferenceParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_12                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_12                        (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_12                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetMaterialSlotNames_ReturnValue_1                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetMaterialSlotNames_ReturnValue_2                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Trim_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_TrimTrailing_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_13                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_1                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_2                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_14                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_15                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SwapCharacterFigure_MaterialInstanceRef_9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Trim_ReturnValue_1                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_TrimTrailing_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::ApplyCharacterCustomisation(const struct FST_PlayerCustomisation& Player_Customizations_, bool Player_Curse, class USkeletalMeshComponent* CharacterMesh, class UStaticMeshComponent* HatMesh, class USkeletalMeshComponent* BeardMesh, class USkeletalMeshComponent* LeftFootMesh, class UStaticMeshComponent* PegLegLeft, class USkeletalMeshComponent* RightFootMesh, class UStaticMeshComponent* PegLegRight, class USkeletalMeshComponent* TorsoMesh, class USkeletalMeshComponent* PantsMesh, class USkeletalMeshComponent* FaceMesh, class UCharacter_New_AnimBlueprint_C* AnimationBP, class UMannequin_AnimationBlueprint_C* MannequinAnimationBP, class UMaterialInstanceDynamic* CharMatInstRef_ForValidating_, class USkeletalMeshComponent* RightHand, class USkeletalMeshComponent* LeftHand, class USkeletalMeshComponent* LowerFaceMesh, class UStaticMeshComponent* HammerMesh, class USkeletalMeshComponent* SkeletalHat, class UObject* __WorldContext, float* VoicePitch, int32* VoiceType, class UMaterialInstanceDynamic** CharacterMaterialInstance, int32* HammerSkin, int32* Title, bool* Piratecurse, bool* ResetTitle, bool* ResetCharacterFigure, bool DontLoadBeard, bool DontLoadLowerFaceItems, bool TriedToCheatCurseSkelleton, bool DontLoadFaceItems, bool DontAdjustSkinTexture, class UMaterialInstanceDynamic* EyebrowMaterialInsanceRef, class UMaterialInstanceDynamic* BeardMaterialInstanceRef, int32 UtilitySlotToUse, class UMaterialInstanceDynamic* CharacterMaterialInstanceRef, int32 VoiceTypeTemp, float VoiceLinePitchTemp, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_ValidatePirateGodTitle_ResultingTitleIndex, bool CallFunc_ValidatePirateGodTitle_Invalid, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FST_HamerSkin& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_MakeLiteralString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue_2, const class FString& CallFunc_MakeLiteralString_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_3, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const class FString& CallFunc_MakeLiteralString_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_6, const class FString& CallFunc_MakeLiteralString_ReturnValue_6, const class FString& CallFunc_Conv_IntToString_ReturnValue_7, class FName CallFunc_Conv_StringToName_ReturnValue_6, const class FString& CallFunc_MakeLiteralString_ReturnValue_7, class FName CallFunc_MakeLiteralName_ReturnValue_6, class FName CallFunc_Conv_StringToName_ReturnValue_7, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_7, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue_8, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_8, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_8, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_8, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, const class FString& CallFunc_Conv_IntToString_ReturnValue_9, const class FString& CallFunc_MakeLiteralString_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, const class FString& CallFunc_Conv_IntToString_ReturnValue_10, const struct FLinearColor& CallFunc_GetCorrectSkinColor_Color, const class FString& CallFunc_MakeLiteralString_ReturnValue_10, const class FString& CallFunc_Conv_IntToString_ReturnValue_11, class FName CallFunc_Conv_StringToName_ReturnValue_10, const class FString& CallFunc_MakeLiteralString_ReturnValue_11, class FName CallFunc_MakeLiteralName_ReturnValue_10, class FName CallFunc_Conv_StringToName_ReturnValue_11, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, class FName CallFunc_MakeLiteralName_ReturnValue_11, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& CallFunc_GetMaterialSlotNames_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_12, const class FString& CallFunc_MakeLiteralString_ReturnValue_12, class FName CallFunc_Conv_StringToName_ReturnValue_12, class FName CallFunc_MakeLiteralName_ReturnValue_12, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_12, bool CallFunc_GetDataTableRowFromName_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, TArray<class FName>& CallFunc_GetMaterialSlotNames_ReturnValue_1, TArray<class FName>& CallFunc_GetMaterialSlotNames_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool K2Node_SwitchInteger_CmpSuccess_3, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Trim_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_13, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_4, bool K2Node_SwitchInteger_CmpSuccess_5, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_IsValid_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, int32 Temp_int_Array_Index_Variable_3, bool K2Node_SwitchInteger_CmpSuccess_6, bool K2Node_SwitchInteger_CmpSuccess_7, bool K2Node_SwitchInteger_CmpSuccess_8, bool K2Node_SwitchInteger_CmpSuccess_9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_10, bool K2Node_SwitchInteger_CmpSuccess_11, bool K2Node_SwitchInteger_CmpSuccess_12, bool K2Node_SwitchInteger_CmpSuccess_13, bool CallFunc_SetStaticMesh_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UMaterialInterface* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_14, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess_15, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef_1, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef_2, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef_3, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef_4, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef_5, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef_6, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef_7, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef_8, class UMaterialInstanceDynamic* CallFunc_SwapCharacterFigure_MaterialInstanceRef_9, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, bool CallFunc_IsValid_ReturnValue_7, class FName CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Trim_ReturnValue_1, const class FString& CallFunc_TrimTrailing_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_14, bool CallFunc_EqualEqual_NameName_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "ApplyCharacterCustomisation");

	Params::UGeneralFunctions_C_ApplyCharacterCustomisation_Params Parms{};

	Parms.Player_Customizations_ = Player_Customizations_;
	Parms.Player_Curse = Player_Curse;
	Parms.CharacterMesh = CharacterMesh;
	Parms.HatMesh = HatMesh;
	Parms.BeardMesh = BeardMesh;
	Parms.LeftFootMesh = LeftFootMesh;
	Parms.PegLegLeft = PegLegLeft;
	Parms.RightFootMesh = RightFootMesh;
	Parms.PegLegRight = PegLegRight;
	Parms.TorsoMesh = TorsoMesh;
	Parms.PantsMesh = PantsMesh;
	Parms.FaceMesh = FaceMesh;
	Parms.AnimationBP = AnimationBP;
	Parms.MannequinAnimationBP = MannequinAnimationBP;
	Parms.CharMatInstRef_ForValidating_ = CharMatInstRef_ForValidating_;
	Parms.RightHand = RightHand;
	Parms.LeftHand = LeftHand;
	Parms.LowerFaceMesh = LowerFaceMesh;
	Parms.HammerMesh = HammerMesh;
	Parms.SkeletalHat = SkeletalHat;
	Parms.__WorldContext = __WorldContext;
	Parms.DontLoadBeard = DontLoadBeard;
	Parms.DontLoadLowerFaceItems = DontLoadLowerFaceItems;
	Parms.TriedToCheatCurseSkelleton = TriedToCheatCurseSkelleton;
	Parms.DontLoadFaceItems = DontLoadFaceItems;
	Parms.DontAdjustSkinTexture = DontAdjustSkinTexture;
	Parms.EyebrowMaterialInsanceRef = EyebrowMaterialInsanceRef;
	Parms.BeardMaterialInstanceRef = BeardMaterialInstanceRef;
	Parms.UtilitySlotToUse = UtilitySlotToUse;
	Parms.CharacterMaterialInstanceRef = CharacterMaterialInstanceRef;
	Parms.VoiceTypeTemp = VoiceTypeTemp;
	Parms.VoiceLinePitchTemp = VoiceLinePitchTemp;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_ValidatePirateGodTitle_ResultingTitleIndex = CallFunc_ValidatePirateGodTitle_ResultingTitleIndex;
	Parms.CallFunc_ValidatePirateGodTitle_Invalid = CallFunc_ValidatePirateGodTitle_Invalid;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue_1 = CallFunc_MakeLiteralString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_MakeLiteralString_ReturnValue_2 = CallFunc_MakeLiteralString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_MakeLiteralString_ReturnValue_3 = CallFunc_MakeLiteralString_ReturnValue_3;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_3 = CallFunc_Conv_StringToName_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue_4 = CallFunc_MakeLiteralString_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_4 = CallFunc_Conv_StringToName_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_4 = CallFunc_MakeLiteralName_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_5 = CallFunc_Conv_IntToString_ReturnValue_5;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_MakeLiteralString_ReturnValue_5 = CallFunc_MakeLiteralString_ReturnValue_5;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_5 = CallFunc_Conv_StringToName_ReturnValue_5;
	Parms.CallFunc_MakeLiteralName_ReturnValue_5 = CallFunc_MakeLiteralName_ReturnValue_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_6 = CallFunc_Conv_IntToString_ReturnValue_6;
	Parms.CallFunc_MakeLiteralString_ReturnValue_6 = CallFunc_MakeLiteralString_ReturnValue_6;
	Parms.CallFunc_Conv_IntToString_ReturnValue_7 = CallFunc_Conv_IntToString_ReturnValue_7;
	Parms.CallFunc_Conv_StringToName_ReturnValue_6 = CallFunc_Conv_StringToName_ReturnValue_6;
	Parms.CallFunc_MakeLiteralString_ReturnValue_7 = CallFunc_MakeLiteralString_ReturnValue_7;
	Parms.CallFunc_MakeLiteralName_ReturnValue_6 = CallFunc_MakeLiteralName_ReturnValue_6;
	Parms.CallFunc_Conv_StringToName_ReturnValue_7 = CallFunc_Conv_StringToName_ReturnValue_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_MakeLiteralName_ReturnValue_7 = CallFunc_MakeLiteralName_ReturnValue_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.CallFunc_Conv_IntToString_ReturnValue_8 = CallFunc_Conv_IntToString_ReturnValue_8;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue_8 = CallFunc_MakeLiteralString_ReturnValue_8;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_8 = CallFunc_Conv_StringToName_ReturnValue_8;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_8 = CallFunc_MakeLiteralName_ReturnValue_8;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue_1 = CallFunc_Conv_LinearColorToVector_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_Conv_IntToString_ReturnValue_9 = CallFunc_Conv_IntToString_ReturnValue_9;
	Parms.CallFunc_MakeLiteralString_ReturnValue_9 = CallFunc_MakeLiteralString_ReturnValue_9;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_9 = CallFunc_Conv_StringToName_ReturnValue_9;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_9 = CallFunc_MakeLiteralName_ReturnValue_9;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.CallFunc_Conv_IntToString_ReturnValue_10 = CallFunc_Conv_IntToString_ReturnValue_10;
	Parms.CallFunc_GetCorrectSkinColor_Color = CallFunc_GetCorrectSkinColor_Color;
	Parms.CallFunc_MakeLiteralString_ReturnValue_10 = CallFunc_MakeLiteralString_ReturnValue_10;
	Parms.CallFunc_Conv_IntToString_ReturnValue_11 = CallFunc_Conv_IntToString_ReturnValue_11;
	Parms.CallFunc_Conv_StringToName_ReturnValue_10 = CallFunc_Conv_StringToName_ReturnValue_10;
	Parms.CallFunc_MakeLiteralString_ReturnValue_11 = CallFunc_MakeLiteralString_ReturnValue_11;
	Parms.CallFunc_MakeLiteralName_ReturnValue_10 = CallFunc_MakeLiteralName_ReturnValue_10;
	Parms.CallFunc_Conv_StringToName_ReturnValue_11 = CallFunc_Conv_StringToName_ReturnValue_11;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_10 = CallFunc_GetDataTableRowFromName_OutRow_10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_10 = CallFunc_GetDataTableRowFromName_ReturnValue_10;
	Parms.CallFunc_MakeLiteralName_ReturnValue_11 = CallFunc_MakeLiteralName_ReturnValue_11;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_11 = CallFunc_GetDataTableRowFromName_OutRow_11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_11 = CallFunc_GetDataTableRowFromName_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetMaterialSlotNames_ReturnValue = CallFunc_GetMaterialSlotNames_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_12 = CallFunc_Conv_IntToString_ReturnValue_12;
	Parms.CallFunc_MakeLiteralString_ReturnValue_12 = CallFunc_MakeLiteralString_ReturnValue_12;
	Parms.CallFunc_Conv_StringToName_ReturnValue_12 = CallFunc_Conv_StringToName_ReturnValue_12;
	Parms.CallFunc_MakeLiteralName_ReturnValue_12 = CallFunc_MakeLiteralName_ReturnValue_12;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_12 = CallFunc_GetDataTableRowFromName_OutRow_12;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_12 = CallFunc_GetDataTableRowFromName_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetMaterialSlotNames_ReturnValue_1 = CallFunc_GetMaterialSlotNames_ReturnValue_1;
	Parms.CallFunc_GetMaterialSlotNames_ReturnValue_2 = CallFunc_GetMaterialSlotNames_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Trim_ReturnValue = CallFunc_Trim_ReturnValue;
	Parms.CallFunc_TrimTrailing_ReturnValue = CallFunc_TrimTrailing_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_13 = CallFunc_Conv_StringToName_ReturnValue_13;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_3 = CallFunc_K2_SetRelativeLocation_SweepHitResult_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_8 = K2Node_SwitchInteger_CmpSuccess_8;
	Parms.K2Node_SwitchInteger_CmpSuccess_9 = K2Node_SwitchInteger_CmpSuccess_9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_10 = K2Node_SwitchInteger_CmpSuccess_10;
	Parms.K2Node_SwitchInteger_CmpSuccess_11 = K2Node_SwitchInteger_CmpSuccess_11;
	Parms.K2Node_SwitchInteger_CmpSuccess_12 = K2Node_SwitchInteger_CmpSuccess_12;
	Parms.K2Node_SwitchInteger_CmpSuccess_13 = K2Node_SwitchInteger_CmpSuccess_13;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue_1 = CallFunc_GetMaterials_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetMaterials_ReturnValue_2 = CallFunc_GetMaterials_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_14 = K2Node_SwitchInteger_CmpSuccess_14;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_15 = K2Node_SwitchInteger_CmpSuccess_15;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef = CallFunc_SwapCharacterFigure_MaterialInstanceRef;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef_1 = CallFunc_SwapCharacterFigure_MaterialInstanceRef_1;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef_2 = CallFunc_SwapCharacterFigure_MaterialInstanceRef_2;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef_3 = CallFunc_SwapCharacterFigure_MaterialInstanceRef_3;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef_4 = CallFunc_SwapCharacterFigure_MaterialInstanceRef_4;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef_5 = CallFunc_SwapCharacterFigure_MaterialInstanceRef_5;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef_6 = CallFunc_SwapCharacterFigure_MaterialInstanceRef_6;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef_7 = CallFunc_SwapCharacterFigure_MaterialInstanceRef_7;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef_8 = CallFunc_SwapCharacterFigure_MaterialInstanceRef_8;
	Parms.CallFunc_SwapCharacterFigure_MaterialInstanceRef_9 = CallFunc_SwapCharacterFigure_MaterialInstanceRef_9;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Trim_ReturnValue_1 = CallFunc_Trim_ReturnValue_1;
	Parms.CallFunc_TrimTrailing_ReturnValue_1 = CallFunc_TrimTrailing_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_14 = CallFunc_Conv_StringToName_ReturnValue_14;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (VoicePitch != nullptr)
		*VoicePitch = Parms.VoicePitch;

	if (VoiceType != nullptr)
		*VoiceType = Parms.VoiceType;

	if (CharacterMaterialInstance != nullptr)
		*CharacterMaterialInstance = Parms.CharacterMaterialInstance;

	if (HammerSkin != nullptr)
		*HammerSkin = Parms.HammerSkin;

	if (Title != nullptr)
		*Title = Parms.Title;

	if (Piratecurse != nullptr)
		*Piratecurse = Parms.Piratecurse;

	if (ResetTitle != nullptr)
		*ResetTitle = Parms.ResetTitle;

	if (ResetCharacterFigure != nullptr)
		*ResetCharacterFigure = Parms.ResetCharacterFigure;

}


// Function GeneralFunctions.GeneralFunctions_C.PlayLocationalClientCameraShake
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Shake                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ShakeLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ShakeDistanceRadius                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::PlayLocationalClientCameraShake(class UClass* Shake, const struct FVector& ShakeLocation, float ShakeDistanceRadius, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "PlayLocationalClientCameraShake");

	Params::UGeneralFunctions_C_PlayLocationalClientCameraShake_Params Parms{};

	Parms.Shake = Shake;
	Parms.ShakeLocation = ShakeLocation;
	Parms.ShakeDistanceRadius = ShakeDistanceRadius;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.GetDistanceBetweenComponents
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Component1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Component2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetDistanceBetweenComponents(class USceneComponent* Component1, class USceneComponent* Component2, class UObject* __WorldContext, float* Distance, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetDistanceBetweenComponents");

	Params::UGeneralFunctions_C_GetDistanceBetweenComponents_Params Parms{};

	Parms.Component1 = Component1;
	Parms.Component2 = Component2;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function GeneralFunctions.GeneralFunctions_C.GetEventIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetEventIcon(int32 EventId, class UObject* __WorldContext, class UTexture2D** Icon, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetEventIcon");

	Params::UGeneralFunctions_C_GetEventIcon_Params Parms{};

	Parms.EventId = EventId;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function GeneralFunctions.GeneralFunctions_C.GetItemRarityInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        RarityName                                                       (Parm, OutParm)
// class USoundBase*                  UnlockSound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetItemRarityInfo(int32 Rarity, class UObject* __WorldContext, struct FLinearColor* Color, class FText* RarityName, class USoundBase** UnlockSound, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetItemRarityInfo");

	Params::UGeneralFunctions_C_GetItemRarityInfo_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (RarityName != nullptr)
		*RarityName = Parms.RarityName;

	if (UnlockSound != nullptr)
		*UnlockSound = Parms.UnlockSound;

}


// Function GeneralFunctions.GeneralFunctions_C.GetCorrectSkinColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              SkinColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetCorrectSkinColor(float SkinColor, class UObject* __WorldContext, struct FLinearColor* Color, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetCorrectSkinColor");

	Params::UGeneralFunctions_C_GetCorrectSkinColor_Params Parms{};

	Parms.SkinColor = SkinColor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function GeneralFunctions.GeneralFunctions_C.RefreshKeybindsOnUI
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_HUDBase_C*>       CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// TArray<class UUI_Actionbar_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUI_HUDBase_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Actionbar_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::RefreshKeybindsOnUI(class UObject* __WorldContext, TArray<class UUI_HUDBase_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, TArray<class UUI_Actionbar_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUI_HUDBase_C* CallFunc_Array_Get_Item, class UUI_Actionbar_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "RefreshKeybindsOnUI");

	Params::UGeneralFunctions_C_RefreshKeybindsOnUI_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.GetMostCommonElementInActorArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountOfTimes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorRef                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HighestAmount                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexTemp                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_ActorAmount>     ActorRefAmount                                                   (Edit, BlueprintVisible)

void UGeneralFunctions_C::GetMostCommonElementInActorArray(TArray<class AActor*>& Array, class UObject* __WorldContext, int32* Index, int32* AmountOfTimes, class AActor** Actor, class AActor* ActorRef, int32 HighestAmount, int32 IndexTemp, const TArray<struct FST_ActorAmount>& ActorRefAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetMostCommonElementInActorArray");

	Params::UGeneralFunctions_C_GetMostCommonElementInActorArray_Params Parms{};

	Parms.Array = Array;
	Parms.__WorldContext = __WorldContext;
	Parms.ActorRef = ActorRef;
	Parms.HighestAmount = HighestAmount;
	Parms.IndexTemp = IndexTemp;
	Parms.ActorRefAmount = ActorRefAmount;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (AmountOfTimes != nullptr)
		*AmountOfTimes = Parms.AmountOfTimes;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Function GeneralFunctions.GeneralFunctions_C.GetScar
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Scar                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  RGB                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Alpha                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Scar                    CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetScar(int32 Scar, class UObject* __WorldContext, class UTexture2D** RGB, class UTexture2D** Alpha, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FST_Scar& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetScar");

	Params::UGeneralFunctions_C_GetScar_Params Parms{};

	Parms.Scar = Scar;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RGB != nullptr)
		*RGB = Parms.RGB;

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;

}


// Function GeneralFunctions.GeneralFunctions_C.OwnAllCullingVolumes
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::OwnAllCullingVolumes(class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "OwnAllCullingVolumes");

	Params::UGeneralFunctions_C_OwnAllCullingVolumes_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.GetLookAtWindDirection
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        WindDirection                                                    (Parm, OutParm)
// enum class E_WindDirections        DirectionEnum                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetLookAtWindDirection(const struct FRotator& Direction, class UObject* __WorldContext, class FText* WindDirection, enum class E_WindDirections* DirectionEnum, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetLookAtWindDirection");

	Params::UGeneralFunctions_C_GetLookAtWindDirection_Params Parms{};

	Parms.Direction = Direction;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (WindDirection != nullptr)
		*WindDirection = Parms.WindDirection;

	if (DirectionEnum != nullptr)
		*DirectionEnum = Parms.DirectionEnum;

}


// Function GeneralFunctions.GeneralFunctions_C.AddScore
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ScoreAmount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_ScoreType>     ScoreType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               FromServer_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Controller_C*            Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GoldMultiplier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Score_Modifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Calculated_Score                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetLowestLoadoutMultiplier_Lowest                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::AddScore(class APlayerState* PlayerState, int32 ScoreAmount, TArray<enum class E_ScoreType>& ScoreType, bool FromServer_, class ABP_Controller_C* Controller, float GoldMultiplier, float Score_Modifier, class UObject* __WorldContext, int32 Calculated_Score, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetLowestLoadoutMultiplier_Lowest, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "AddScore");

	Params::UGeneralFunctions_C_AddScore_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ScoreAmount = ScoreAmount;
	Parms.ScoreType = ScoreType;
	Parms.FromServer_ = FromServer_;
	Parms.Controller = Controller;
	Parms.GoldMultiplier = GoldMultiplier;
	Parms.Score_Modifier = Score_Modifier;
	Parms.__WorldContext = __WorldContext;
	Parms.Calculated_Score = Calculated_Score;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLowestLoadoutMultiplier_Lowest = CallFunc_GetLowestLoadoutMultiplier_Lowest;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.CheckIfChildActorsAreReady
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ChildActors                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Ready                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NotReady                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::CheckIfChildActorsAreReady(TArray<class UObject*>& ChildActors, class UObject* __WorldContext, bool* Ready, bool NotReady, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "CheckIfChildActorsAreReady");

	Params::UGeneralFunctions_C_CheckIfChildActorsAreReady_Params Parms{};

	Parms.ChildActors = ChildActors;
	Parms.__WorldContext = __WorldContext;
	Parms.NotReady = NotReady;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;

}


// Function GeneralFunctions.GeneralFunctions_C.CreateDistortionWave
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WaveSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WaveMaxRadius                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AttachToActorComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             AttachComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_SpawnActor_Actor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AA_DistortionWave_C*         K2Node_DynamicCast_AsA_Distortion_Wave                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::CreateDistortionWave(const struct FVector& Location, float WaveSpeed, float WaveMaxRadius, bool AttachToActorComponent, class USceneComponent* AttachComponent, class UObject* __WorldContext, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_SpawnActor_Actor, class AA_DistortionWave_C* K2Node_DynamicCast_AsA_Distortion_Wave, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "CreateDistortionWave");

	Params::UGeneralFunctions_C_CreateDistortionWave_Params Parms{};

	Parms.Location = Location;
	Parms.WaveSpeed = WaveSpeed;
	Parms.WaveMaxRadius = WaveMaxRadius;
	Parms.AttachToActorComponent = AttachToActorComponent;
	Parms.AttachComponent = AttachComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnActor_Actor = CallFunc_SpawnActor_Actor;
	Parms.K2Node_DynamicCast_AsA_Distortion_Wave = K2Node_DynamicCast_AsA_Distortion_Wave;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.SetKeyBind
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Actions               Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class E_KeybindCategories     Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Succesful_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Actions               ConflictingAction                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SuccesfullySet                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_VehicleBase_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_VehicleBase_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_Keybind>         K2Node_Select_Default                                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Keybind                 CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Keybind                 CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Keybind                 K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::SetKeyBind(enum class E_Actions Action, const struct FKey& Key, enum class E_KeybindCategories Category, class UObject* __WorldContext, bool* Succesful_, enum class E_Actions* ConflictingAction, bool SuccesfullySet, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class ABP_VehicleBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_VehicleBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Key_GetDisplayName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Variable, TArray<struct FST_Keybind>& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_1, const struct FST_Keybind& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, const struct FST_Keybind& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FST_Keybind& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "SetKeyBind");

	Params::UGeneralFunctions_C_SetKeyBind_Params Parms{};

	Parms.Action = Action;
	Parms.Key = Key;
	Parms.Category = Category;
	Parms.__WorldContext = __WorldContext;
	Parms.SuccesfullySet = SuccesfullySet;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Succesful_ != nullptr)
		*Succesful_ = Parms.Succesful_;

	if (ConflictingAction != nullptr)
		*ConflictingAction = Parms.ConflictingAction;

}


// Function GeneralFunctions.GeneralFunctions_C.GetKeyBind
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Actions               Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Key                                                              (Parm, OutParm, HasGetValueTypeHash)
// struct FKey                        KeyBind                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_Keybind>         CallFunc_GetKeyBinds_KeyBinds                                    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Keybind                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetKeyBind(enum class E_Actions Action, class UObject* __WorldContext, struct FKey* Key, const struct FKey& KeyBind, bool Temp_bool_True_if_break_was_hit_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FST_Keybind>& CallFunc_GetKeyBinds_KeyBinds, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FST_Keybind& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetKeyBind");

	Params::UGeneralFunctions_C_GetKeyBind_Params Parms{};

	Parms.Action = Action;
	Parms.__WorldContext = __WorldContext;
	Parms.KeyBind = KeyBind;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetKeyBinds_KeyBinds = CallFunc_GetKeyBinds_KeyBinds;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

}


// Function GeneralFunctions.GeneralFunctions_C.PostTopScreenMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ExtraInformation                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::PostTopScreenMessage(class UClass* Widget, class FText ExtraInformation, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "PostTopScreenMessage");

	Params::UGeneralFunctions_C_PostTopScreenMessage_Params Parms{};

	Parms.Widget = Widget;
	Parms.ExtraInformation = ExtraInformation;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.GetWaterHeight
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WaterHeight                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASeaCollisionRepresentation_C*>SeaColInsideArray                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class AActor*>              DeadZoneVolumes                                                  (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              LoopSafeguardWater                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InitialCheck_                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              InWaveValue                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WaterHeightLocal                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASeaCollisionRepresentation_C*WaterHeightUsed                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              WaterHeighVolumes                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASeaCollisionRepresentation_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGradientSphere_InWavesValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetWaterHeight(const struct FVector& Location, class ABP_GameState_C* GameState, class UObject* __WorldContext, float* WaterHeight, const TArray<class ASeaCollisionRepresentation_C*>& SeaColInsideArray, const TArray<class AActor*>& DeadZoneVolumes, int32 LoopSafeguardWater, bool InitialCheck_, float InWaveValue, float WaterHeightLocal, class ASeaCollisionRepresentation_C* WaterHeightUsed, const TArray<class AActor*>& WaterHeighVolumes, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, class ASeaCollisionRepresentation_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetGradientSphere_InWavesValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetWaterHeight");

	Params::UGeneralFunctions_C_GetWaterHeight_Params Parms{};

	Parms.Location = Location;
	Parms.GameState = GameState;
	Parms.__WorldContext = __WorldContext;
	Parms.SeaColInsideArray = SeaColInsideArray;
	Parms.DeadZoneVolumes = DeadZoneVolumes;
	Parms.LoopSafeguardWater = LoopSafeguardWater;
	Parms.InitialCheck_ = InitialCheck_;
	Parms.InWaveValue = InWaveValue;
	Parms.WaterHeightLocal = WaterHeightLocal;
	Parms.WaterHeightUsed = WaterHeightUsed;
	Parms.WaterHeighVolumes = WaterHeighVolumes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGradientSphere_InWavesValue = CallFunc_GetGradientSphere_InWavesValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (WaterHeight != nullptr)
		*WaterHeight = Parms.WaterHeight;

}


// Function GeneralFunctions.GeneralFunctions_C.GetClothingInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ClothingItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 StaticMesh                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               SkeletalMesh                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ClothingItemName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Price                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ClothingCategories    Category                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ClothingItems           CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetClothingInfo(int32 ClothingItemIndex, class UObject* __WorldContext, class UStaticMesh** StaticMesh, class USkeletalMesh** SkeletalMesh, class UTexture2D** Texture, class FString* ClothingItemName, int32* Price, class UTexture2D** Icon, enum class E_ClothingCategories* Category, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FST_ClothingItems& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetClothingInfo");

	Params::UGeneralFunctions_C_GetClothingInfo_Params Parms{};

	Parms.ClothingItemIndex = ClothingItemIndex;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StaticMesh != nullptr)
		*StaticMesh = Parms.StaticMesh;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = Parms.SkeletalMesh;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (ClothingItemName != nullptr)
		*ClothingItemName = std::move(Parms.ClothingItemName);

	if (Price != nullptr)
		*Price = Parms.Price;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (Category != nullptr)
		*Category = Parms.Category;

}


// Function GeneralFunctions.GeneralFunctions_C.GetDatatableAmount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetDatatableAmount(class UDataTable* DataTable, class UObject* __WorldContext, int32* Amount, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetDatatableAmount");

	Params::UGeneralFunctions_C_GetDatatableAmount_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function GeneralFunctions.GeneralFunctions_C.GetFaceInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FaceIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  FaceTexture                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      FaceName                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Faces                   CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetFaceInfo(int32 FaceIndex, class UObject* __WorldContext, class UTexture2D** FaceTexture, class FString* FaceName, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FST_Faces& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetFaceInfo");

	Params::UGeneralFunctions_C_GetFaceInfo_Params Parms{};

	Parms.FaceIndex = FaceIndex;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FaceTexture != nullptr)
		*FaceTexture = Parms.FaceTexture;

	if (FaceName != nullptr)
		*FaceName = std::move(Parms.FaceName);

}


// Function GeneralFunctions.GeneralFunctions_C.GetUpgradeInfo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      UpgradeBlueprint                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetUpgradeInfo(int32 Upgrade, class UObject* __WorldContext, class UClass** UpgradeBlueprint, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetUpgradeInfo");

	Params::UGeneralFunctions_C_GetUpgradeInfo_Params Parms{};

	Parms.Upgrade = Upgrade;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeBlueprint != nullptr)
		*UpgradeBlueprint = Parms.UpgradeBlueprint;

}


// Function GeneralFunctions.GeneralFunctions_C.SortItems
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_InventoryArray>  ItemArray                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_InventoryArray>  SortedArray                                                      (Parm, OutParm)
// TArray<struct FST_InventoryArray>  SortedItemArray                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_InventoryArray          CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_InventoryItem           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::SortItems(TArray<struct FST_InventoryArray>& ItemArray, class UObject* __WorldContext, TArray<struct FST_InventoryArray>* SortedArray, const TArray<struct FST_InventoryArray>& SortedItemArray, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FST_InventoryArray& CallFunc_Array_Get_Item, int32 CallFunc_MakeLiteralInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_InventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "SortItems");

	Params::UGeneralFunctions_C_SortItems_Params Parms{};

	Parms.ItemArray = ItemArray;
	Parms.__WorldContext = __WorldContext;
	Parms.SortedItemArray = SortedItemArray;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SortedArray != nullptr)
		*SortedArray = std::move(Parms.SortedArray);

}


// Function GeneralFunctions.GeneralFunctions_C.GetItemCategoryAndColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Items                 Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ItemCategories        Category                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CategoryLiteralText                                              (Parm, OutParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_InventoryItem           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UGeneralFunctions_C::GetItemCategoryAndColor(enum class E_Items Item, class UObject* __WorldContext, enum class E_ItemCategories* Category, class FText* CategoryLiteralText, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_InventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetItemCategoryAndColor");

	Params::UGeneralFunctions_C_GetItemCategoryAndColor_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = Parms.Category;

	if (CategoryLiteralText != nullptr)
		*CategoryLiteralText = Parms.CategoryLiteralText;

	return Parms.ReturnValue;

}


// Function GeneralFunctions.GeneralFunctions_C.CheckIfInventoryHasItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Items                 Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory_C*                InventoryRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasItem                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FoundAmount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasItem                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_InventoryArray          CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::CheckIfInventoryHasItem(enum class E_Items Item, class UInventory_C* InventoryRef, class UObject* __WorldContext, bool* HasItem, int32* Amount, int32 FoundAmount, bool bHasItem, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FST_InventoryArray& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "CheckIfInventoryHasItem");

	Params::UGeneralFunctions_C_CheckIfInventoryHasItem_Params Parms{};

	Parms.Item = Item;
	Parms.InventoryRef = InventoryRef;
	Parms.__WorldContext = __WorldContext;
	Parms.FoundAmount = FoundAmount;
	Parms.bHasItem = bHasItem;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasItem != nullptr)
		*HasItem = Parms.HasItem;

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function GeneralFunctions.GeneralFunctions_C.GetItemInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Items                 Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Weight                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemObject                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Throwable                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_ItemCategories        Category                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_InventoryItem           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetItemInfo(enum class E_Items Item, class UObject* __WorldContext, class UTexture2D** Icon, int32* Weight, class UClass** ItemObject, bool* Throwable, enum class E_ItemCategories* Category, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_InventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetItemInfo");

	Params::UGeneralFunctions_C_GetItemInfo_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (Weight != nullptr)
		*Weight = Parms.Weight;

	if (ItemObject != nullptr)
		*ItemObject = Parms.ItemObject;

	if (Throwable != nullptr)
		*Throwable = Parms.Throwable;

	if (Category != nullptr)
		*Category = Parms.Category;

}


// Function GeneralFunctions.GeneralFunctions_C.GetCrewFlagCosmetics
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EmblemIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ColorSetIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BaseColor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                AccentColor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Emblem                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  EmblemTemp                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                AccentColorTemp                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BaseColorTemp                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_NewEOSInventoryItem     CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::GetCrewFlagCosmetics(int32 EmblemIndex, int32 ColorSetIndex, class UObject* __WorldContext, struct FLinearColor* BaseColor, struct FLinearColor* AccentColor, class UTexture2D** Emblem, class UTexture2D* EmblemTemp, const struct FLinearColor& AccentColorTemp, const struct FLinearColor& BaseColorTemp, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetCrewFlagCosmetics");

	Params::UGeneralFunctions_C_GetCrewFlagCosmetics_Params Parms{};

	Parms.EmblemIndex = EmblemIndex;
	Parms.ColorSetIndex = ColorSetIndex;
	Parms.__WorldContext = __WorldContext;
	Parms.EmblemTemp = EmblemTemp;
	Parms.AccentColorTemp = AccentColorTemp;
	Parms.BaseColorTemp = BaseColorTemp;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (BaseColor != nullptr)
		*BaseColor = std::move(Parms.BaseColor);

	if (AccentColor != nullptr)
		*AccentColor = std::move(Parms.AccentColor);

	if (Emblem != nullptr)
		*Emblem = Parms.Emblem;

}


// Function GeneralFunctions.GeneralFunctions_C.GenerateRandomShipName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        RandomShipName                                                   (Parm, OutParm)
// class FString                      SecundaryName                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      FirstName                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_FirstName               CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_SecondaryName           CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GenerateRandomShipName(class UObject* __WorldContext, class FText* RandomShipName, const class FString& SecundaryName, const class FString& FirstName, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FST_FirstName& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, const struct FST_SecondaryName& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GenerateRandomShipName");

	Params::UGeneralFunctions_C_GenerateRandomShipName_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.SecundaryName = SecundaryName;
	Parms.FirstName = FirstName;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

	if (RandomShipName != nullptr)
		*RandomShipName = Parms.RandomShipName;

}


// Function GeneralFunctions.GeneralFunctions_C.CheckIfEnoughRoom
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Items                 Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnoughRoom                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RoomForAll                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfRoomForItems_hasSpace                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckIfRoomForItems_amountOfRoom                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CheckIfRoomForItems_totalWeight                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralFunctions_C::CheckIfEnoughRoom(class ABP_Character_C* Character, enum class E_Items Item, int32 Amount, class UObject* __WorldContext, bool* EnoughRoom, bool* RoomForAll, bool CallFunc_CheckIfRoomForItems_hasSpace, int32 CallFunc_CheckIfRoomForItems_amountOfRoom, int32 CallFunc_CheckIfRoomForItems_totalWeight, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "CheckIfEnoughRoom");

	Params::UGeneralFunctions_C_CheckIfEnoughRoom_Params Parms{};

	Parms.Character = Character;
	Parms.Item = Item;
	Parms.Amount = Amount;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_CheckIfRoomForItems_hasSpace = CallFunc_CheckIfRoomForItems_hasSpace;
	Parms.CallFunc_CheckIfRoomForItems_amountOfRoom = CallFunc_CheckIfRoomForItems_amountOfRoom;
	Parms.CallFunc_CheckIfRoomForItems_totalWeight = CallFunc_CheckIfRoomForItems_totalWeight;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EnoughRoom != nullptr)
		*EnoughRoom = Parms.EnoughRoom;

	if (RoomForAll != nullptr)
		*RoomForAll = Parms.RoomForAll;

}


// Function GeneralFunctions.GeneralFunctions_C.GetWeaponInfo_Old
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      WeaponClass                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Weapon_Name                                                      (Parm, OutParm)
// enum class E_Items                 AmmoType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     FPSOffset                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AimZoomMultiplier                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                ReloadAnimation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HideCharacter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Tiers                 Tier                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)
// int32                              ClipSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    FPSOffsetRot                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_WeaponDamageType      WeaponDamageType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               Weapon                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_EquipmentSlots        WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ZoomMultiplier                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::GetWeaponInfo_Old(int32 ItemId, class UObject* __WorldContext, class UClass** WeaponClass, class UTexture2D** Icon, class FText* Weapon_Name, enum class E_Items* AmmoType, struct FVector* FPSOffset, float* AimZoomMultiplier, class UAnimMontage** ReloadAnimation, bool* HideCharacter, enum class E_Tiers* Tier, class FText* Description, int32* ClipSize, struct FRotator* FPSOffsetRot, enum class E_WeaponDamageType* WeaponDamageType, enum class E_Weapons* Weapon, enum class E_EquipmentSlots* WeaponType, float ZoomMultiplier, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_MakeLiteralFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "GetWeaponInfo_Old");

	Params::UGeneralFunctions_C_GetWeaponInfo_Old_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.ZoomMultiplier = ZoomMultiplier;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponClass != nullptr)
		*WeaponClass = Parms.WeaponClass;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (Weapon_Name != nullptr)
		*Weapon_Name = Parms.Weapon_Name;

	if (AmmoType != nullptr)
		*AmmoType = Parms.AmmoType;

	if (FPSOffset != nullptr)
		*FPSOffset = std::move(Parms.FPSOffset);

	if (AimZoomMultiplier != nullptr)
		*AimZoomMultiplier = Parms.AimZoomMultiplier;

	if (ReloadAnimation != nullptr)
		*ReloadAnimation = Parms.ReloadAnimation;

	if (HideCharacter != nullptr)
		*HideCharacter = Parms.HideCharacter;

	if (Tier != nullptr)
		*Tier = Parms.Tier;

	if (Description != nullptr)
		*Description = Parms.Description;

	if (ClipSize != nullptr)
		*ClipSize = Parms.ClipSize;

	if (FPSOffsetRot != nullptr)
		*FPSOffsetRot = std::move(Parms.FPSOffsetRot);

	if (WeaponDamageType != nullptr)
		*WeaponDamageType = Parms.WeaponDamageType;

	if (Weapon != nullptr)
		*Weapon = Parms.Weapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function GeneralFunctions.GeneralFunctions_C.LeaveUIMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::LeaveUIMode(class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "LeaveUIMode");

	Params::UGeneralFunctions_C_LeaveUIMode_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralFunctions.GeneralFunctions_C.EnterUIMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableMouseCursor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DontDisableGameInput                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CenterMouseCursor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetViewportSize_SizeX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeY                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralFunctions_C::EnterUIMode(bool EnableMouseCursor, bool DontDisableGameInput, bool CenterMouseCursor, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralFunctions_C", "EnterUIMode");

	Params::UGeneralFunctions_C_EnterUIMode_Params Parms{};

	Parms.EnableMouseCursor = EnableMouseCursor;
	Parms.DontDisableGameInput = DontDisableGameInput;
	Parms.CenterMouseCursor = CenterMouseCursor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetViewportSize_SizeX = CallFunc_GetViewportSize_SizeX;
	Parms.CallFunc_GetViewportSize_SizeY = CallFunc_GetViewportSize_SizeY;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


