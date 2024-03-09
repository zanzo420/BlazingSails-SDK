#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_GameInstance.EOS_GameInstance_C
// (None)

class UClass* UEOS_GameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_GameInstance_C");

	return Clss;
}


// EOS_GameInstance_C EOS_GameInstance.Default__EOS_GameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEOS_GameInstance_C* UEOS_GameInstance_C::GetDefaultObj()
{
	static class UEOS_GameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOS_GameInstance_C*>(UEOS_GameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_GameInstance.EOS_GameInstance_C.Update Tokens
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Update_Tokens(class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue, bool CallFunc_GetAuthAttribute_Found_1, const class FString& CallFunc_GetAuthAttribute_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Update Tokens");

	Params::UEOS_GameInstance_C_Update_Tokens_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found_1 = CallFunc_GetAuthAttribute_Found_1;
	Parms.CallFunc_GetAuthAttribute_ReturnValue_1 = CallFunc_GetAuthAttribute_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Restrict User
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USG_BanData_C*               BanData                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USG_BanData_C*               CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WriteToRegistry_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Restrict_User(class USG_BanData_C* BanData, class USG_BanData_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, bool CallFunc_WriteToRegistry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Restrict User");

	Params::UEOS_GameInstance_C_Restrict_User_Params Parms{};

	Parms.BanData = BanData;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_WriteToRegistry_ReturnValue = CallFunc_WriteToRegistry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Handle Restricted List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Restricted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP                                  (None)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Handle_Restricted_List(const class FString& Restricted, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP, bool CallFunc_Is_In_Party_In_Party_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Handle Restricted List");

	Params::UEOS_GameInstance_C_Handle_Restricted_List_Params Parms{};

	Parms.Restricted = Restricted;
	Parms.K2Node_MakeStruct_VariantDataBP = K2Node_MakeStruct_VariantDataBP;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Validate Matchmaking Party Restrictions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Restricted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Party_Member_Primary_Account_Net_IDs                             (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ReadFromRegistry_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FUniqueNetIdRepl>    CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class UEOS_PartyMemberReference_C* CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Validate_Matchmaking_Party_Restrictions(bool* Restricted, const TArray<class FString>& Party_Member_Primary_Account_Net_IDs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_ReadFromRegistry_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_Map_Keys_Keys, bool CallFunc_Is_In_Party_In_Party_, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, class UEOS_PartyMemberReference_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Validate Matchmaking Party Restrictions");

	Params::UEOS_GameInstance_C_Validate_Matchmaking_Party_Restrictions_Params Parms{};

	Parms.Party_Member_Primary_Account_Net_IDs = Party_Member_Primary_Account_Net_IDs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ReadFromRegistry_ReturnValue = CallFunc_ReadFromRegistry_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;

	UObject::ProcessEvent(Func, &Parms);

	if (Restricted != nullptr)
		*Restricted = Parms.Restricted;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Party Unique Net Ids
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Party_Member_Unique_Net_IDs_as_Strings                           (Parm, OutParm)
// TArray<class FString>              Party_Member_Unique_Net_IDs                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FUniqueNetIdRepl            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class UEOS_PartyMemberReference_C* CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Construct_Matchmaking_Party_Unique_Net_Ids(TArray<class FString>* Party_Member_Unique_Net_IDs_as_Strings, const TArray<class FString>& Party_Member_Unique_Net_IDs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_Map_Keys_Keys, TArray<class FString>& K2Node_MakeArray_Array, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, class UEOS_PartyMemberReference_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1, bool CallFunc_Is_In_Party_In_Party_, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Construct Matchmaking Party Unique Net Ids");

	Params::UEOS_GameInstance_C_Construct_Matchmaking_Party_Unique_Net_Ids_Params Parms{};

	Parms.Party_Member_Unique_Net_IDs = Party_Member_Unique_Net_IDs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1 = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Party_Member_Unique_Net_IDs_as_Strings != nullptr)
		*Party_Member_Unique_Net_IDs_as_Strings = std::move(Parms.Party_Member_Unique_Net_IDs_as_Strings);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Compare Check Sum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      B                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      C                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      D                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSHA256Hash                 CheckSum                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Expected                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FSHA256Hash                 K2Node_MakeStruct_SHA256Hash                                     (None)
// class FString                      CallFunc_GetHash_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetHash_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Compare_Check_Sum(const class FString& A, const class FString& B, const class FString& C, const class FString& D, const struct FSHA256Hash& CheckSum, bool* Valid, class FString* Expected, const struct FSHA256Hash& K2Node_MakeStruct_SHA256Hash, const class FString& CallFunc_GetHash_ReturnValue, const class FString& CallFunc_GetHash_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Compare Check Sum");

	Params::UEOS_GameInstance_C_Compare_Check_Sum_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.C = C;
	Parms.D = D;
	Parms.CheckSum = CheckSum;
	Parms.K2Node_MakeStruct_SHA256Hash = K2Node_MakeStruct_SHA256Hash;
	Parms.CallFunc_GetHash_ReturnValue = CallFunc_GetHash_ReturnValue;
	Parms.CallFunc_GetHash_ReturnValue_1 = CallFunc_GetHash_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (Expected != nullptr)
		*Expected = std::move(Parms.Expected);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Calculate Check Sum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSHA256Hash                 Check_Sum                                                        (Parm, OutParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDeviceId_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHA256Hash                 K2Node_MakeStruct_SHA256Hash                                     (None)
// class FString                      CallFunc_Get_Primary_Account_ID_Account_ID                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Calculate_Check_Sum(struct FSHA256Hash* Check_Sum, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetDeviceId_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, const class FString& CallFunc_GetProjectVersion_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, const struct FSHA256Hash& K2Node_MakeStruct_SHA256Hash, const class FString& CallFunc_Get_Primary_Account_ID_Account_ID, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Calculate Check Sum");

	Params::UEOS_GameInstance_C_Calculate_Check_Sum_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetDeviceId_ReturnValue = CallFunc_GetDeviceId_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.K2Node_MakeStruct_SHA256Hash = K2Node_MakeStruct_SHA256Hash;
	Parms.CallFunc_Get_Primary_Account_ID_Account_ID = CallFunc_Get_Primary_Account_ID_Account_ID;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Check_Sum != nullptr)
		*Check_Sum = std::move(Parms.Check_Sum);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Ready
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Party_Ready                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FUniqueNetIdRepl>    CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_PartyMemberReference_C* CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Member_Party_Leader_IsLeader                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Get_Party_Ready(bool* Party_Ready, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Is_In_Party_In_Party_, TArray<struct FUniqueNetIdRepl>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UEOS_PartyMemberReference_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Is_Member_Party_Leader_IsLeader, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Party Ready");

	Params::UEOS_GameInstance_C_Get_Party_Ready_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Is_Member_Party_Leader_IsLeader = CallFunc_Is_Member_Party_Leader_IsLeader;
	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;

	UObject::ProcessEvent(Func, &Parms);

	if (Party_Ready != nullptr)
		*Party_Ready = Parms.Party_Ready;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Set Default Attributes on Personal Party Object
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_PartyMemberReference_C* Party_Member_Reference                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Restricted                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USG_BanData_C*               K2Node_DynamicCast_AsSG_Ban_Data                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ReadFromRegistry_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Primary_Account_ID_Account_ID                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Player_User_Name_Nickname                           (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Set_Default_Attributes_on_Personal_Party_Object(class UEOS_PartyMemberReference_C* Party_Member_Reference, bool Is_Restricted, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue, bool CallFunc_GetAuthAttribute_Found_1, const class FString& CallFunc_GetAuthAttribute_ReturnValue_1, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USG_BanData_C* K2Node_DynamicCast_AsSG_Ban_Data, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_ReadFromRegistry_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Get_Primary_Account_ID_Account_ID, const class FString& CallFunc_Get_Player_User_Name_Nickname)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Set Default Attributes on Personal Party Object");

	Params::UEOS_GameInstance_C_Set_Default_Attributes_on_Personal_Party_Object_Params Parms{};

	Parms.Party_Member_Reference = Party_Member_Reference;
	Parms.Is_Restricted = Is_Restricted;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found_1 = CallFunc_GetAuthAttribute_Found_1;
	Parms.CallFunc_GetAuthAttribute_ReturnValue_1 = CallFunc_GetAuthAttribute_ReturnValue_1;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsSG_Ban_Data = K2Node_DynamicCast_AsSG_Ban_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ReadFromRegistry_ReturnValue = CallFunc_ReadFromRegistry_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Get_Primary_Account_ID_Account_ID = CallFunc_Get_Primary_Account_ID_Account_ID;
	Parms.CallFunc_Get_Player_User_Name_Nickname = CallFunc_Get_Player_User_Name_Nickname;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Clear Party Members
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Clear_Party_Members(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Clear Party Members");

	Params::UEOS_GameInstance_C_Clear_Party_Members_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Session Follow Received
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Is_Party_Leader_IsLeader                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Session_Follow_Received(bool CallFunc_Is_Party_Leader_IsLeader, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Is_In_Party_In_Party_, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Session Follow Received");

	Params::UEOS_GameInstance_C_Session_Follow_Received_Params Parms{};

	Parms.CallFunc_Is_Party_Leader_IsLeader = CallFunc_Is_Party_Leader_IsLeader;
	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Force Reset Party Attributes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Force_Reset_Party_Attributes(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Force Reset Party Attributes");

	Params::UEOS_GameInstance_C_Force_Reset_Party_Attributes_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Validate Saved Session Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Validate_Saved_Session_Data(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Validate Saved Session Data");

	Params::UEOS_GameInstance_C_Validate_Saved_Session_Data_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Load Joined Session Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USG_EOS_Session_Save_C*      K2Node_DynamicCast_AsSG_EOS_Session_Save                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Load_Joined_Session_Data(bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USG_EOS_Session_Save_C* K2Node_DynamicCast_AsSG_EOS_Session_Save, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Load Joined Session Data");

	Params::UEOS_GameInstance_C_Load_Joined_Session_Data_Params Parms{};

	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsSG_EOS_Session_Save = K2Node_DynamicCast_AsSG_EOS_Session_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Save Joined Session Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USG_EOS_Session_Save_C*      CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Save_Joined_Session_Data(const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, class USG_EOS_Session_Save_C* CallFunc_CreateSaveGameObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Save Joined Session Data");

	Params::UEOS_GameInstance_C_Save_Joined_Session_Data_Params Parms{};

	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Party ID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyId                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class FString                      CallFunc_MakeJoinInfoJson_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FEOS_Party_Info             CallFunc_JsonStringToStructV2_Struct                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_JsonStringToStructV2_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Get_Party_ID(class FString* PartyId, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const class FString& CallFunc_MakeJoinInfoJson_ReturnValue, const struct FEOS_Party_Info& CallFunc_JsonStringToStructV2_Struct, bool CallFunc_JsonStringToStructV2_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Party ID");

	Params::UEOS_GameInstance_C_Get_Party_ID_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_MakeJoinInfoJson_ReturnValue = CallFunc_MakeJoinInfoJson_ReturnValue;
	Parms.CallFunc_JsonStringToStructV2_Struct = CallFunc_JsonStringToStructV2_Struct;
	Parms.CallFunc_JsonStringToStructV2_ReturnValue = CallFunc_JsonStringToStructV2_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyId != nullptr)
		*PartyId = std::move(Parms.PartyId);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Custom Popup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUI_DisconnectPopup_C*       UI_element                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_DisconnectPopup_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Custom_Popup(class FText Title, class FText Text, class UUI_DisconnectPopup_C** UI_element, class UUI_DisconnectPopup_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Custom Popup");

	Params::UEOS_GameInstance_C_Custom_Popup_Params Parms{};

	Parms.Title = Title;
	Parms.Text = Text;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UI_element != nullptr)
		*UI_element = Parms.UI_element;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Global Data Response
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVaRestRequestStatus    CallFunc_GetStatus_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_GetResponseObject_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Global_Data_Response(class UVaRestRequestJSON* Request, enum class EVaRestRequestStatus CallFunc_GetStatus_ReturnValue, class UVaRestJsonObject* CallFunc_GetResponseObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Global Data Response");

	Params::UEOS_GameInstance_C_Global_Data_Response_Params Parms{};

	Parms.Request = Request;
	Parms.CallFunc_GetStatus_ReturnValue = CallFunc_GetStatus_ReturnValue;
	Parms.CallFunc_GetResponseObject_ReturnValue = CallFunc_GetResponseObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Construct Global Data Request
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestJsonObject*           Json_Object_Local                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          Json_Request_Local                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          CallFunc_ConstructVaRestRequestExt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Construct_Global_Data_Request(class UVaRestJsonObject* Json_Object_Local, class UVaRestRequestJSON* Json_Request_Local, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UVaRestRequestJSON* CallFunc_ConstructVaRestRequestExt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Construct Global Data Request");

	Params::UEOS_GameInstance_C_Construct_Global_Data_Request_Params Parms{};

	Parms.Json_Object_Local = Json_Object_Local;
	Parms.Json_Request_Local = Json_Request_Local;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_ConstructVaRestRequestExt_ReturnValue = CallFunc_ConstructVaRestRequestExt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Compare Version
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Other_Version                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Compare_Version(const class FString& Other_Version, const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Compare Version");

	Params::UEOS_GameInstance_C_Compare_Version_Params Parms{};

	Parms.Other_Version = Other_Version;
	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Is Matchmaking Busy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Matchmaking_Busy                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Is_Matchmaking_Busy(bool* Matchmaking_Busy, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Is Matchmaking Busy");

	Params::UEOS_GameInstance_C_Is_Matchmaking_Busy_Params Parms{};

	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Matchmaking_Busy != nullptr)
		*Matchmaking_Busy = Parms.Matchmaking_Busy;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Set Ready State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP                                  (None)

void UEOS_GameInstance_C::Set_Ready_State(bool Ready, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Set Ready State");

	Params::UEOS_GameInstance_C_Set_Ready_State_Params Parms{};

	Parms.Ready = Ready;
	Parms.K2Node_MakeStruct_VariantDataBP = K2Node_MakeStruct_VariantDataBP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Ping Request
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Json_Request                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Json_Object                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          CallFunc_ConstructVaRestRequestExt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UEOS_GameInstance_C::Construct_Matchmaking_Ping_Request(class UVaRestRequestJSON* Json_Request, class UVaRestJsonObject* Json_Object, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue, const class FString& CallFunc_GetProjectVersion_ReturnValue, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, class UVaRestRequestJSON* CallFunc_ConstructVaRestRequestExt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Construct Matchmaking Ping Request");

	Params::UEOS_GameInstance_C_Construct_Matchmaking_Ping_Request_Params Parms{};

	Parms.Json_Request = Json_Request;
	Parms.Json_Object = Json_Object;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;
	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_ConstructVaRestRequestExt_ReturnValue = CallFunc_ConstructVaRestRequestExt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Stop Request
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Json_Request                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Json_Object                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          CallFunc_ConstructVaRestRequestExt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UEOS_GameInstance_C::Construct_Matchmaking_Stop_Request(class UVaRestRequestJSON* Json_Request, class UVaRestJsonObject* Json_Object, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UVaRestRequestJSON* CallFunc_ConstructVaRestRequestExt_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Construct Matchmaking Stop Request");

	Params::UEOS_GameInstance_C_Construct_Matchmaking_Stop_Request_Params Parms{};

	Parms.Json_Request = Json_Request;
	Parms.Json_Object = Json_Object;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_ConstructVaRestRequestExt_ReturnValue = CallFunc_ConstructVaRestRequestExt_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Join Request
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_GameModes             Game_Mode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          Json_Request                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Json_Object                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Product_User_ID_PUID                                (ZeroConstructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Validate_Matchmaking_Party_Restrictions_Restricted      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVaRestRequestJSON*          CallFunc_ConstructVaRestRequestExt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Construct_Matchmaking_Party_Unique_Net_Ids_Party_Member_Unique_Net_IDs_as_Strings(ReferenceParm)
// class FString                      CallFunc_GetDeviceId_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Primary_Account_ID_Account_ID                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Construct_Matchmaking_Party_Ids_Party_Member_Primary_Account_Net_IDs_as_Strings(ReferenceParm)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Construct_Matchmaking_Join_Request(enum class E_GameModes Game_Mode, class UVaRestRequestJSON* Json_Request, class UVaRestJsonObject* Json_Object, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue, const class FString& CallFunc_Get_Product_User_ID_PUID, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_Validate_Matchmaking_Party_Restrictions_Restricted, class UVaRestRequestJSON* CallFunc_ConstructVaRestRequestExt_ReturnValue, TArray<class FString>& CallFunc_Construct_Matchmaking_Party_Unique_Net_Ids_Party_Member_Unique_Net_IDs_as_Strings, const class FString& CallFunc_GetDeviceId_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Get_Primary_Account_ID_Account_ID, const class FString& CallFunc_GetProjectVersion_ReturnValue, TArray<class FString>& CallFunc_Construct_Matchmaking_Party_Ids_Party_Member_Primary_Account_Net_IDs_as_Strings, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue, bool CallFunc_GetAuthAttribute_Found_1, const class FString& CallFunc_GetAuthAttribute_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Construct Matchmaking Join Request");

	Params::UEOS_GameInstance_C_Construct_Matchmaking_Join_Request_Params Parms{};

	Parms.Game_Mode = Game_Mode;
	Parms.Json_Request = Json_Request;
	Parms.Json_Object = Json_Object;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;
	Parms.CallFunc_Get_Product_User_ID_PUID = CallFunc_Get_Product_User_ID_PUID;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_Validate_Matchmaking_Party_Restrictions_Restricted = CallFunc_Validate_Matchmaking_Party_Restrictions_Restricted;
	Parms.CallFunc_ConstructVaRestRequestExt_ReturnValue = CallFunc_ConstructVaRestRequestExt_ReturnValue;
	Parms.CallFunc_Construct_Matchmaking_Party_Unique_Net_Ids_Party_Member_Unique_Net_IDs_as_Strings = CallFunc_Construct_Matchmaking_Party_Unique_Net_Ids_Party_Member_Unique_Net_IDs_as_Strings;
	Parms.CallFunc_GetDeviceId_ReturnValue = CallFunc_GetDeviceId_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Get_Primary_Account_ID_Account_ID = CallFunc_Get_Primary_Account_ID_Account_ID;
	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.CallFunc_Construct_Matchmaking_Party_Ids_Party_Member_Primary_Account_Net_IDs_as_Strings = CallFunc_Construct_Matchmaking_Party_Ids_Party_Member_Primary_Account_Net_IDs_as_Strings;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found_1 = CallFunc_GetAuthAttribute_Found_1;
	Parms.CallFunc_GetAuthAttribute_ReturnValue_1 = CallFunc_GetAuthAttribute_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Party Ids
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Party_Member_Primary_Account_Net_IDs_as_Strings                  (Parm, OutParm)
// TArray<class FString>              Party_Member_Primary_Account_Net_IDs                             (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Primary_Account_ID_Account_ID                       (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FUniqueNetIdRepl            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class UEOS_PartyMemberReference_C* CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Construct_Matchmaking_Party_Ids(TArray<class FString>* Party_Member_Primary_Account_Net_IDs_as_Strings, const TArray<class FString>& Party_Member_Primary_Account_Net_IDs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Get_Primary_Account_ID_Account_ID, TArray<struct FUniqueNetIdRepl>& CallFunc_Map_Keys_Keys, TArray<class FString>& K2Node_MakeArray_Array, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, class UEOS_PartyMemberReference_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, bool CallFunc_Is_In_Party_In_Party_, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Construct Matchmaking Party Ids");

	Params::UEOS_GameInstance_C_Construct_Matchmaking_Party_Ids_Params Parms{};

	Parms.Party_Member_Primary_Account_Net_IDs = Party_Member_Primary_Account_Net_IDs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Primary_Account_ID_Account_ID = CallFunc_Get_Primary_Account_ID_Account_ID;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Party_Member_Primary_Account_Net_IDs_as_Strings != nullptr)
		*Party_Member_Primary_Account_Net_IDs_as_Strings = std::move(Parms.Party_Member_Primary_Account_Net_IDs_as_Strings);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Create Default Match Maker Attributes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Repicated_Attribute_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Create_Default_Match_Maker_Attributes(uint8 CallFunc_MakeLiteralByte_ReturnValue, class UEOS_Party_Repicated_Attribute_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Create Default Match Maker Attributes");

	Params::UEOS_GameInstance_C_Create_Default_Match_Maker_Attributes_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get All Platforms
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FString>              Platforms                                                        (Parm, OutParm)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUserAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)

void UEOS_GameInstance_C::Get_All_Platforms(TArray<class FString>* Platforms, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get All Platforms");

	Params::UEOS_GameInstance_C_Get_All_Platforms_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;
	Parms.CallFunc_GetUserAttribute_Found = CallFunc_GetUserAttribute_Found;
	Parms.CallFunc_GetUserAttribute_ReturnValue = CallFunc_GetUserAttribute_ReturnValue;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Platforms != nullptr)
		*Platforms = std::move(Parms.Platforms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Primary Platform Custom
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Primary_Platform                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Signed_In__Signed_in_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUserAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Get_Primary_Platform_Custom(class FString* Primary_Platform, bool CallFunc_Is_Signed_In__Signed_in_, bool CallFunc_WithEditor_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Primary Platform Custom");

	Params::UEOS_GameInstance_C_Get_Primary_Platform_Custom_Params Parms{};

	Parms.CallFunc_Is_Signed_In__Signed_in_ = CallFunc_Is_Signed_In__Signed_in_;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;
	Parms.CallFunc_GetUserAttribute_Found = CallFunc_GetUserAttribute_Found;
	Parms.CallFunc_GetUserAttribute_ReturnValue = CallFunc_GetUserAttribute_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Primary_Platform != nullptr)
		*Primary_Platform = std::move(Parms.Primary_Platform);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Read Presence
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            User_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     OutPresence                                                      (Parm, OutParm)
// enum class EOnlineCachedResult_    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePresenceSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     CallFunc_GetCachedPresence_OutPresence                           (None)
// enum class EOnlineCachedResult_    CallFunc_GetCachedPresence_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EOnlineCachedResult_ UEOS_GameInstance_C::Read_Presence(const struct FUniqueNetIdRepl& User_ID, struct FOnlineUserPresenceData* OutPresence, class UOnlinePresenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FOnlineUserPresenceData& CallFunc_GetCachedPresence_OutPresence, enum class EOnlineCachedResult_ CallFunc_GetCachedPresence_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Read Presence");

	Params::UEOS_GameInstance_C_Read_Presence_Params Parms{};

	Parms.User_ID = User_ID;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetCachedPresence_OutPresence = CallFunc_GetCachedPresence_OutPresence;
	Parms.CallFunc_GetCachedPresence_ReturnValue = CallFunc_GetCachedPresence_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPresence != nullptr)
		*OutPresence = std::move(Parms.OutPresence);

	return Parms.ReturnValue;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Check If Should Leave Current Party
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPartyId*                    Party_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_PartyIdPartyId_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UEOS_GameInstance_C::Check_If_Should_Leave_Current_Party(class UPartyId* Party_ID, bool CallFunc_Is_In_Party_In_Party_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_PartyIdPartyId_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Check If Should Leave Current Party");

	Params::UEOS_GameInstance_C_Check_If_Should_Leave_Current_Party_Params Parms{};

	Parms.Party_ID = Party_ID;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_PartyIdPartyId_ReturnValue = CallFunc_EqualEqual_PartyIdPartyId_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Internal Update Server Settings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FOnlineSessionSettingBP>Server_Settings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<class FName, struct FOnlineSessionSettingBP>Updated_Server_Settings                                          (Parm, OutParm)
// TMap<class FName, struct FOnlineSessionSettingBP>Local_Server_Settings                                            (Edit, BlueprintVisible)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP                                  (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     K2Node_MakeStruct_OnlineSessionSettingBP                         (None)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP_1                                (None)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     K2Node_MakeStruct_OnlineSessionSettingBP_1                       (None)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP_2                                (None)
// class FName                        Temp_name_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     K2Node_MakeStruct_OnlineSessionSettingBP_2                       (None)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP_3                                (None)
// struct FOnlineSessionSettingBP     K2Node_MakeStruct_OnlineSessionSettingBP_3                       (None)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP_4                                (None)
// struct FOnlineSessionSettingBP     K2Node_MakeStruct_OnlineSessionSettingBP_4                       (None)

void UEOS_GameInstance_C::Internal_Update_Server_Settings(TMap<class FName, struct FOnlineSessionSettingBP> Server_Settings, TMap<class FName, struct FOnlineSessionSettingBP>* Updated_Server_Settings, TMap<class FName, struct FOnlineSessionSettingBP> Local_Server_Settings, class FName Temp_name_Variable, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const struct FOnlineSessionSettingBP& K2Node_MakeStruct_OnlineSessionSettingBP, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_1, class FName Temp_name_Variable_1, const struct FOnlineSessionSettingBP& K2Node_MakeStruct_OnlineSessionSettingBP_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_2, class FName Temp_name_Variable_4, const struct FOnlineSessionSettingBP& K2Node_MakeStruct_OnlineSessionSettingBP_2, const class FString& CallFunc_GetProjectVersion_ReturnValue, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_3, const struct FOnlineSessionSettingBP& K2Node_MakeStruct_OnlineSessionSettingBP_3, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_4, const struct FOnlineSessionSettingBP& K2Node_MakeStruct_OnlineSessionSettingBP_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Internal Update Server Settings");

	Params::UEOS_GameInstance_C_Internal_Update_Server_Settings_Params Parms{};

	Parms.Server_Settings = Server_Settings;
	Parms.Local_Server_Settings = Local_Server_Settings;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_MakeStruct_VariantDataBP = K2Node_MakeStruct_VariantDataBP;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.K2Node_MakeStruct_OnlineSessionSettingBP = K2Node_MakeStruct_OnlineSessionSettingBP;
	Parms.K2Node_MakeStruct_VariantDataBP_1 = K2Node_MakeStruct_VariantDataBP_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_MakeStruct_OnlineSessionSettingBP_1 = K2Node_MakeStruct_OnlineSessionSettingBP_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_MakeStruct_VariantDataBP_2 = K2Node_MakeStruct_VariantDataBP_2;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.K2Node_MakeStruct_OnlineSessionSettingBP_2 = K2Node_MakeStruct_OnlineSessionSettingBP_2;
	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.K2Node_MakeStruct_VariantDataBP_3 = K2Node_MakeStruct_VariantDataBP_3;
	Parms.K2Node_MakeStruct_OnlineSessionSettingBP_3 = K2Node_MakeStruct_OnlineSessionSettingBP_3;
	Parms.K2Node_MakeStruct_VariantDataBP_4 = K2Node_MakeStruct_VariantDataBP_4;
	Parms.K2Node_MakeStruct_OnlineSessionSettingBP_4 = K2Node_MakeStruct_OnlineSessionSettingBP_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Server_Settings != nullptr)
		*Updated_Server_Settings = Parms.Updated_Server_Settings;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Is Member Party Leader
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            Party_Member                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsLeader                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// bool                               CallFunc_IsMemberLeader_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Is_Member_Party_Leader(const struct FUniqueNetIdRepl& Party_Member, bool* IsLeader, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, bool CallFunc_IsMemberLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Is Member Party Leader");

	Params::UEOS_GameInstance_C_Is_Member_Party_Leader_Params Parms{};

	Parms.Party_Member = Party_Member;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_IsMemberLeader_ReturnValue = CallFunc_IsMemberLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLeader != nullptr)
		*IsLeader = Parms.IsLeader;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Send Party Data Map
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, struct FVariantDataBP>Attributes                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FString>              Attribute_Keys                                                   (Edit, BlueprintVisible)
// class UMutablePartyData*           Mutable_Party_Member_Data                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Party_Leader_IsLeader                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdatePartyData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// class UReadablePartyData*          CallFunc_GetPartyData_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMutablePartyData*           CallFunc_CreateMutablePartyData_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Send_Party_Data_Map(TMap<class FString, struct FVariantDataBP> Attributes, const TArray<class FString>& Attribute_Keys, class UMutablePartyData* Mutable_Party_Member_Data, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Is_Party_Leader_IsLeader, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Is_In_Party_In_Party_, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_UpdatePartyData_ReturnValue, const struct FVariantDataBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, class UReadablePartyData* CallFunc_GetPartyData_ReturnValue, class UMutablePartyData* CallFunc_CreateMutablePartyData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Send Party Data Map");

	Params::UEOS_GameInstance_C_Send_Party_Data_Map_Params Parms{};

	Parms.Attributes = Attributes;
	Parms.Attribute_Keys = Attribute_Keys;
	Parms.Mutable_Party_Member_Data = Mutable_Party_Member_Data;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Is_Party_Leader_IsLeader = CallFunc_Is_Party_Leader_IsLeader;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_UpdatePartyData_ReturnValue = CallFunc_UpdatePartyData_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.CallFunc_GetPartyData_ReturnValue = CallFunc_GetPartyData_ReturnValue;
	Parms.CallFunc_CreateMutablePartyData_ReturnValue = CallFunc_CreateMutablePartyData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Send Party Member Data Map
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, struct FVariantDataBP>Attributes                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FString>              Attribute_Keys                                                   (Edit, BlueprintVisible)
// class UMutablePartyData*           Mutable_Party_Member_Data                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdatePartyMemberData_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// class UReadablePartyData*          CallFunc_GetPartyMemberData_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMutablePartyData*           CallFunc_CreateMutablePartyData_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Send_Party_Member_Data_Map(TMap<class FString, struct FVariantDataBP> Attributes, const TArray<class FString>& Attribute_Keys, class UMutablePartyData* Mutable_Party_Member_Data, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Is_In_Party_In_Party_, int32 CallFunc_Subtract_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, const struct FVariantDataBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_UpdatePartyMemberData_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, class UReadablePartyData* CallFunc_GetPartyMemberData_ReturnValue, class UMutablePartyData* CallFunc_CreateMutablePartyData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Send Party Member Data Map");

	Params::UEOS_GameInstance_C_Send_Party_Member_Data_Map_Params Parms{};

	Parms.Attributes = Attributes;
	Parms.Attribute_Keys = Attribute_Keys;
	Parms.Mutable_Party_Member_Data = Mutable_Party_Member_Data;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_UpdatePartyMemberData_ReturnValue = CallFunc_UpdatePartyMemberData_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.CallFunc_GetPartyMemberData_ReturnValue = CallFunc_GetPartyMemberData_ReturnValue;
	Parms.CallFunc_CreateMutablePartyData_ReturnValue = CallFunc_CreateMutablePartyData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Set Party Locked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Party_Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP                                  (None)
// bool                               CallFunc_Is_Party_Leader_IsLeader                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Set_Party_Locked(bool Party_Locked, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP, bool CallFunc_Is_Party_Leader_IsLeader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Set Party Locked");

	Params::UEOS_GameInstance_C_Set_Party_Locked_Params Parms{};

	Parms.Party_Locked = Party_Locked;
	Parms.K2Node_MakeStruct_VariantDataBP = K2Node_MakeStruct_VariantDataBP;
	Parms.CallFunc_Is_Party_Leader_IsLeader = CallFunc_Is_Party_Leader_IsLeader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Member Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FUniqueNetIdIsValid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UBlueprintPartyMember*       CallFunc_GetPartyMember_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUserAttribute_OutAttrValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUserAttribute_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Party_Member_Name(const struct FUniqueNetIdRepl& Member_Id, class FString* Name, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, bool CallFunc_FUniqueNetIdIsValid_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UBlueprintPartyMember* CallFunc_GetPartyMember_ReturnValue, const class FString& CallFunc_GetUserAttribute_OutAttrValue, bool CallFunc_GetUserAttribute_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Party Member Name");

	Params::UEOS_GameInstance_C_Get_Party_Member_Name_Params Parms{};

	Parms.Member_Id = Member_Id;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_FUniqueNetIdIsValid_ReturnValue = CallFunc_FUniqueNetIdIsValid_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetPartyMember_ReturnValue = CallFunc_GetPartyMember_ReturnValue;
	Parms.CallFunc_GetUserAttribute_OutAttrValue = CallFunc_GetUserAttribute_OutAttrValue;
	Parms.CallFunc_GetUserAttribute_ReturnValue = CallFunc_GetUserAttribute_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Member Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UReadablePartyData*          Party_Member_Data                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          CallFunc_GetPartyMemberData_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Party_Member_Data(const struct FUniqueNetIdRepl& Member_Id, class UReadablePartyData** Party_Member_Data, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UReadablePartyData* CallFunc_GetPartyMemberData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Party Member Data");

	Params::UEOS_GameInstance_C_Get_Party_Member_Data_Params Parms{};

	Parms.Member_Id = Member_Id;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPartyMemberData_ReturnValue = CallFunc_GetPartyMemberData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Party_Member_Data != nullptr)
		*Party_Member_Data = Parms.Party_Member_Data;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Member Count
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Party_Member_Count                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UEOS_PartyMemberReference_C*>Results                                                          (Edit, BlueprintVisible)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// int64                              CallFunc_GetPartyMemberCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Party_Member_Count(int32* Party_Member_Count, const TArray<class UEOS_PartyMemberReference_C*>& Results, bool CallFunc_Is_In_Party_In_Party_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int64 CallFunc_GetPartyMemberCount_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Party Member Count");

	Params::UEOS_GameInstance_C_Get_Party_Member_Count_Params Parms{};

	Parms.Results = Results;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetPartyMemberCount_ReturnValue = CallFunc_GetPartyMemberCount_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Party_Member_Count != nullptr)
		*Party_Member_Count = Parms.Party_Member_Count;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UReadablePartyData*          Party_Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          CallFunc_GetPartyData_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Party_Data(class UReadablePartyData** Party_Data, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UReadablePartyData* CallFunc_GetPartyData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Party Data");

	Params::UEOS_GameInstance_C_Get_Party_Data_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPartyData_ReturnValue = CallFunc_GetPartyData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Party_Data != nullptr)
		*Party_Data = Parms.Party_Data;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Is In Party
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               In_Party_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Is_In_Party(bool* In_Party_, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Is In Party");

	Params::UEOS_GameInstance_C_Is_In_Party_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (In_Party_ != nullptr)
		*In_Party_ = Parms.In_Party_;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Player User Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            User_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      Nickname                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerNickname_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FUniqueNetIdIsValid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Primary_Platform_Custom_Primary_Platform            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineUserSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UOnlineUserRef*              CallFunc_GetUserInfo_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUserAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue_1                         (HasGetValueTypeHash)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUserAttribute_Found_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Player_User_Name(const struct FUniqueNetIdRepl& User_ID, class FString* Nickname, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_GetPlayerNickname_ReturnValue, bool CallFunc_FUniqueNetIdIsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_Get_Primary_Platform_Custom_Primary_Platform, bool K2Node_SwitchString_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UOnlineUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UOnlineUserRef* CallFunc_GetUserInfo_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue_1, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetUserAttribute_Found_1, const class FString& CallFunc_GetUserAttribute_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Player User Name");

	Params::UEOS_GameInstance_C_Get_Player_User_Name_Params Parms{};

	Parms.User_ID = User_ID;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerNickname_ReturnValue = CallFunc_GetPlayerNickname_ReturnValue;
	Parms.CallFunc_FUniqueNetIdIsValid_ReturnValue = CallFunc_FUniqueNetIdIsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Get_Primary_Platform_Custom_Primary_Platform = CallFunc_Get_Primary_Platform_Custom_Primary_Platform;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetUserInfo_ReturnValue = CallFunc_GetUserInfo_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_GetUserAttribute_Found = CallFunc_GetUserAttribute_Found;
	Parms.CallFunc_GetUserAttribute_ReturnValue = CallFunc_GetUserAttribute_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue_1 = CallFunc_GetUniquePlayerId_ReturnValue_1;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetUserAttribute_Found_1 = CallFunc_GetUserAttribute_Found_1;
	Parms.CallFunc_GetUserAttribute_ReturnValue_1 = CallFunc_GetUserAttribute_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Nickname != nullptr)
		*Nickname = std::move(Parms.Nickname);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Request Party Members Follow Leader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Session_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UNamedOnlineSession*         CallFunc_GetNamedSession_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNamedOnlineSessionBP       CallFunc_GetValue_ReturnValue                                    (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Request_Party_Members_Follow_Leader(class FName Session_Name, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UNamedOnlineSession* CallFunc_GetNamedSession_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FNamedOnlineSessionBP& CallFunc_GetValue_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Request Party Members Follow Leader");

	Params::UEOS_GameInstance_C_Request_Party_Members_Follow_Leader_Params Parms{};

	Parms.Session_Name = Session_Name;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetNamedSession_ReturnValue = CallFunc_GetNamedSession_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Resolved Connect String From Search Result
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineSessionSearchResultBPSearch_Result                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      Connection_String                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetResolvedConnectStringBySearchResult_bWasSuccessful   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetResolvedConnectStringBySearchResult_OutConnectInfo   (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Resolved_Connect_String_From_Search_Result(const struct FOnlineSessionSearchResultBP& Search_Result, class FString* Connection_String, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetResolvedConnectStringBySearchResult_bWasSuccessful, const class FString& CallFunc_GetResolvedConnectStringBySearchResult_OutConnectInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Resolved Connect String From Search Result");

	Params::UEOS_GameInstance_C_Get_Resolved_Connect_String_From_Search_Result_Params Parms{};

	Parms.Search_Result = Search_Result;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetResolvedConnectStringBySearchResult_bWasSuccessful = CallFunc_GetResolvedConnectStringBySearchResult_bWasSuccessful;
	Parms.CallFunc_GetResolvedConnectStringBySearchResult_OutConnectInfo = CallFunc_GetResolvedConnectStringBySearchResult_OutConnectInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Connection_String != nullptr)
		*Connection_String = std::move(Parms.Connection_String);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Resolved Connect String From Session Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Session_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Connection_String                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetResolvedConnectStringByName_bWasSuccessful           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetResolvedConnectStringByName_OutConnectInfo           (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Resolved_Connect_String_From_Session_Name(class FName Session_Name, class FString* Connection_String, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetResolvedConnectStringByName_bWasSuccessful, const class FString& CallFunc_GetResolvedConnectStringByName_OutConnectInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Resolved Connect String From Session Name");

	Params::UEOS_GameInstance_C_Get_Resolved_Connect_String_From_Session_Name_Params Parms{};

	Parms.Session_Name = Session_Name;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetResolvedConnectStringByName_bWasSuccessful = CallFunc_GetResolvedConnectStringByName_bWasSuccessful;
	Parms.CallFunc_GetResolvedConnectStringByName_OutConnectInfo = CallFunc_GetResolvedConnectStringByName_OutConnectInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Connection_String != nullptr)
		*Connection_String = std::move(Parms.Connection_String);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Players in Session
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUniqueNetIdRepl>    Registered_Players                                               (Parm, OutParm)
// TArray<class FString>              Players_Names                                                    (Parm, OutParm)
// TArray<class FString>              Players                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNamedOnlineSession*         CallFunc_GetNamedSession_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNamedOnlineSessionBP       CallFunc_GetValue_ReturnValue                                    (None)
// struct FUniqueNetIdRepl            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Player_User_Name_Nickname                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Players_in_Session(TArray<struct FUniqueNetIdRepl>* Registered_Players, TArray<class FString>* Players_Names, const TArray<class FString>& Players, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UNamedOnlineSession* CallFunc_GetNamedSession_ReturnValue, const struct FNamedOnlineSessionBP& CallFunc_GetValue_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Get_Player_User_Name_Nickname, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Players in Session");

	Params::UEOS_GameInstance_C_Get_Players_in_Session_Params Parms{};

	Parms.Players = Players;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetNamedSession_ReturnValue = CallFunc_GetNamedSession_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Get_Player_User_Name_Nickname = CallFunc_Get_Player_User_Name_Nickname;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Registered_Players != nullptr)
		*Registered_Players = std::move(Parms.Registered_Players);

	if (Players_Names != nullptr)
		*Players_Names = std::move(Parms.Players_Names);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Current Session Id
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Session_ID                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNamedOnlineSession*         CallFunc_GetNamedSession_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNamedOnlineSessionBP       CallFunc_GetValue_ReturnValue                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Get_Current_Session_Id(class FString* Session_ID, bool CallFunc_IsEmpty_ReturnValue, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UNamedOnlineSession* CallFunc_GetNamedSession_ReturnValue, const struct FNamedOnlineSessionBP& CallFunc_GetValue_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Current Session Id");

	Params::UEOS_GameInstance_C_Get_Current_Session_Id_Params Parms{};

	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetNamedSession_ReturnValue = CallFunc_GetNamedSession_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Session_ID != nullptr)
		*Session_ID = std::move(Parms.Session_ID);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Can Kick Member
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UEOS_PartyReference_C*>Parties                                                          (Parm, OutParm)
// TArray<class UEOS_PartyReference_C*>Results                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_PartyReference_C*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPartyId*>            CallFunc_GetJoinedParties_OutPartyIdArray                        (ReferenceParm)
// bool                               CallFunc_GetJoinedParties_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Can_Kick_Member(TArray<class UEOS_PartyReference_C*>* Parties, const TArray<class UEOS_PartyReference_C*>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UEOS_PartyReference_C* CallFunc_SpawnObject_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class UPartyId*>& CallFunc_GetJoinedParties_OutPartyIdArray, bool CallFunc_GetJoinedParties_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPartyId* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Can Kick Member");

	Params::UEOS_GameInstance_C_Can_Kick_Member_Params Parms{};

	Parms.Results = Results;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetJoinedParties_OutPartyIdArray = CallFunc_GetJoinedParties_OutPartyIdArray;
	Parms.CallFunc_GetJoinedParties_ReturnValue = CallFunc_GetJoinedParties_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Parties != nullptr)
		*Parties = std::move(Parms.Parties);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Invites
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UEOS_PartyInviteReference_C*>Invites                                                          (Parm, OutParm)
// TArray<class UEOS_PartyInviteReference_C*>Results                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_PartyInviteReference_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UOnlinePartyJoinInfo*>CallFunc_GetPendingInvites_OutPendingInvitesArray                (ReferenceParm)
// bool                               CallFunc_GetPendingInvites_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartyJoinInfo*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Get_Invites(TArray<class UEOS_PartyInviteReference_C*>* Invites, const TArray<class UEOS_PartyInviteReference_C*>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UEOS_PartyInviteReference_C* CallFunc_SpawnObject_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class UOnlinePartyJoinInfo*>& CallFunc_GetPendingInvites_OutPendingInvitesArray, bool CallFunc_GetPendingInvites_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UOnlinePartyJoinInfo* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Invites");

	Params::UEOS_GameInstance_C_Get_Invites_Params Parms{};

	Parms.Results = Results;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetPendingInvites_OutPendingInvitesArray = CallFunc_GetPendingInvites_OutPendingInvitesArray;
	Parms.CallFunc_GetPendingInvites_ReturnValue = CallFunc_GetPendingInvites_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Invites != nullptr)
		*Invites = std::move(Parms.Invites);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Is Party Leader
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLeader                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// bool                               CallFunc_IsMemberLeader_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Is_Party_Leader(bool* IsLeader, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, bool CallFunc_IsMemberLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Is Party Leader");

	Params::UEOS_GameInstance_C_Is_Party_Leader_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_IsMemberLeader_ReturnValue = CallFunc_IsMemberLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLeader != nullptr)
		*IsLeader = Parms.IsLeader;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Members
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UEOS_PartyMemberReference_C*>Party_Member_Ids                                                 (Parm, OutParm)
// TArray<class UEOS_PartyMemberReference_C*>Results                                                          (Edit, BlueprintVisible)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_PartyMemberReference_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBlueprintPartyMember*>CallFunc_GetPartyMembers_OutPartyMembersArray                    (ReferenceParm)
// bool                               CallFunc_GetPartyMembers_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlueprintPartyMember*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue                                   (HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Party_Members(TArray<class UEOS_PartyMemberReference_C*>* Party_Member_Ids, const TArray<class UEOS_PartyMemberReference_C*>& Results, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UEOS_PartyMemberReference_C* CallFunc_SpawnObject_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class UBlueprintPartyMember*>& CallFunc_GetPartyMembers_OutPartyMembersArray, bool CallFunc_GetPartyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBlueprintPartyMember* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Party Members");

	Params::UEOS_GameInstance_C_Get_Party_Members_Params Parms{};

	Parms.Results = Results;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetPartyMembers_OutPartyMembersArray = CallFunc_GetPartyMembers_OutPartyMembersArray;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetUserId_ReturnValue = CallFunc_GetUserId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Party_Member_Ids != nullptr)
		*Party_Member_Ids = std::move(Parms.Party_Member_Ids);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Joined Parties
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UEOS_PartyReference_C*>Parties                                                          (Parm, OutParm)
// TArray<class UEOS_PartyReference_C*>Results                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_PartyReference_C*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// TArray<class UPartyId*>            CallFunc_GetJoinedParties_OutPartyIdArray                        (ReferenceParm)
// bool                               CallFunc_GetJoinedParties_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Get_Joined_Parties(TArray<class UEOS_PartyReference_C*>* Parties, const TArray<class UEOS_PartyReference_C*>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UEOS_PartyReference_C* CallFunc_SpawnObject_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, TArray<class UPartyId*>& CallFunc_GetJoinedParties_OutPartyIdArray, bool CallFunc_GetJoinedParties_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPartyId* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Joined Parties");

	Params::UEOS_GameInstance_C_Get_Joined_Parties_Params Parms{};

	Parms.Results = Results;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetJoinedParties_OutPartyIdArray = CallFunc_GetJoinedParties_OutPartyIdArray;
	Parms.CallFunc_GetJoinedParties_ReturnValue = CallFunc_GetJoinedParties_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Parties != nullptr)
		*Parties = std::move(Parms.Parties);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Create Default Party Attributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UEOS_PartyMemberReference_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Repicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UEOS_Party_Repicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Create_Default_Party_Attributes(uint8 CallFunc_MakeLiteralByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEOS_PartyMemberReference_C* CallFunc_SpawnObject_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class UEOS_Party_Repicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UEOS_Party_Repicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Create Default Party Attributes");

	Params::UEOS_GameInstance_C_Create_Default_Party_Attributes_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SpawnObject_ReturnValue_2 = CallFunc_SpawnObject_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get User ID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            User_ID                                                          (Parm, OutParm, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_User_ID(struct FUniqueNetIdRepl* User_ID, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get User ID");

	Params::UEOS_GameInstance_C_Get_User_ID_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (User_ID != nullptr)
		*User_ID = std::move(Parms.User_ID);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Logged In Auth Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Attribute_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Signed_In__Signed_in_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Logged_In_Auth_Attribute(const class FString& Attribute_Name, class FString* Value, bool CallFunc_Is_Signed_In__Signed_in_, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Logged In Auth Attribute");

	Params::UEOS_GameInstance_C_Get_Logged_In_Auth_Attribute_Params Parms{};

	Parms.Attribute_Name = Attribute_Name;
	Parms.CallFunc_Is_Signed_In__Signed_in_ = CallFunc_Is_Signed_In__Signed_in_;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Can Link To Epic Games Account?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanLink_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Signed_In__Signed_in_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Can_Link_To_Epic_Games_Account_(bool* CanLink_, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_Is_Signed_In__Signed_in_, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Can Link To Epic Games Account?");

	Params::UEOS_GameInstance_C_Can_Link_To_Epic_Games_Account__Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_Is_Signed_In__Signed_in_ = CallFunc_Is_Signed_In__Signed_in_;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanLink_ != nullptr)
		*CanLink_ = Parms.CanLink_;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Product User ID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      PUID                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// bool                               CallFunc_Is_Signed_In__Signed_in_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUserAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Product_User_ID(class FString* PUID, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, bool CallFunc_Is_Signed_In__Signed_in_, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Product User ID");

	Params::UEOS_GameInstance_C_Get_Product_User_ID_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_Is_Signed_In__Signed_in_ = CallFunc_Is_Signed_In__Signed_in_;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetUserAttribute_Found = CallFunc_GetUserAttribute_Found;
	Parms.CallFunc_GetUserAttribute_ReturnValue = CallFunc_GetUserAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PUID != nullptr)
		*PUID = std::move(Parms.PUID);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Primary Account ID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Account_ID                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUserAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUserAttribute_Found_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Primary_Platform_Custom_Primary_Platform            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Signed_In__Signed_in_                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Get_Primary_Account_ID(class FString* Account_ID, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_GetUserAttribute_Found_1, const class FString& CallFunc_GetUserAttribute_ReturnValue_1, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue, bool CallFunc_WithEditor_ReturnValue, const class FString& CallFunc_Get_Primary_Platform_Custom_Primary_Platform, bool K2Node_SwitchString_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Is_Signed_In__Signed_in_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Primary Account ID");

	Params::UEOS_GameInstance_C_Get_Primary_Account_ID_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetUserAttribute_Found = CallFunc_GetUserAttribute_Found;
	Parms.CallFunc_GetUserAttribute_ReturnValue = CallFunc_GetUserAttribute_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetUserAttribute_Found_1 = CallFunc_GetUserAttribute_Found_1;
	Parms.CallFunc_GetUserAttribute_ReturnValue_1 = CallFunc_GetUserAttribute_ReturnValue_1;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_Get_Primary_Platform_Custom_Primary_Platform = CallFunc_Get_Primary_Platform_Custom_Primary_Platform;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Is_Signed_In__Signed_in_ = CallFunc_Is_Signed_In__Signed_in_;

	UObject::ProcessEvent(Func, &Parms);

	if (Account_ID != nullptr)
		*Account_ID = std::move(Parms.Account_ID);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Epic Account ID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Epic_ID                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// bool                               CallFunc_Is_Signed_In__Signed_in_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Get_Epic_Account_ID(class FString* Epic_ID, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, bool CallFunc_Is_Signed_In__Signed_in_, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue, bool CallFunc_GetAuthAttribute_Found_1, const class FString& CallFunc_GetAuthAttribute_ReturnValue_1, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Epic Account ID");

	Params::UEOS_GameInstance_C_Get_Epic_Account_ID_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_Is_Signed_In__Signed_in_ = CallFunc_Is_Signed_In__Signed_in_;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found_1 = CallFunc_GetAuthAttribute_Found_1;
	Parms.CallFunc_GetAuthAttribute_ReturnValue_1 = CallFunc_GetAuthAttribute_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Epic_ID != nullptr)
		*Epic_ID = std::move(Parms.Epic_ID);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Is Signed In with Epic Games Account?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Signed_In_With_Epic_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// bool                               CallFunc_Is_Signed_In__Signed_in_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserOnlineAccountRef*       CallFunc_GetUserAccount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuthAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAuthAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Is_Signed_In_with_Epic_Games_Account_(bool* Signed_In_With_Epic_, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, bool CallFunc_Is_Signed_In__Signed_in_, class UUserOnlineAccountRef* CallFunc_GetUserAccount_ReturnValue, bool CallFunc_GetAuthAttribute_Found, const class FString& CallFunc_GetAuthAttribute_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Is Signed In with Epic Games Account?");

	Params::UEOS_GameInstance_C_Is_Signed_In_with_Epic_Games_Account__Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_Is_Signed_In__Signed_in_ = CallFunc_Is_Signed_In__Signed_in_;
	Parms.CallFunc_GetUserAccount_ReturnValue = CallFunc_GetUserAccount_ReturnValue;
	Parms.CallFunc_GetAuthAttribute_Found = CallFunc_GetAuthAttribute_Found;
	Parms.CallFunc_GetAuthAttribute_ReturnValue = CallFunc_GetAuthAttribute_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Signed_In_With_Epic_ != nullptr)
		*Signed_In_With_Epic_ = Parms.Signed_In_With_Epic_;

}


// Function EOS_GameInstance.EOS_GameInstance_C.Is Signed In?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Signed_in_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnlineLoginStatus      CallFunc_GetLoginStatus_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Is_Signed_In_(bool* Signed_in_, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, enum class EOnlineLoginStatus CallFunc_GetLoginStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Is Signed In?");

	Params::UEOS_GameInstance_C_Is_Signed_In__Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetLoginStatus_ReturnValue = CallFunc_GetLoginStatus_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Signed_in_ != nullptr)
		*Signed_in_ = Parms.Signed_in_;

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnPresenceTaskComplete_302D1894400B4CD2AEC044B0DFE1862C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnPresenceTaskComplete_302D1894400B4CD2AEC044B0DFE1862C(const struct FUniqueNetIdRepl& UserId, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnPresenceTaskComplete_302D1894400B4CD2AEC044B0DFE1862C");

	Params::UEOS_GameInstance_C_OnPresenceTaskComplete_302D1894400B4CD2AEC044B0DFE1862C_Params Parms{};

	Parms.UserId = UserId;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_302D1894400B4CD2AEC044B0DFE1862C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnCallFailed_302D1894400B4CD2AEC044B0DFE1862C(const struct FUniqueNetIdRepl& UserId, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_302D1894400B4CD2AEC044B0DFE1862C");

	Params::UEOS_GameInstance_C_OnCallFailed_302D1894400B4CD2AEC044B0DFE1862C_Params Parms{};

	Parms.UserId = UserId;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnPresenceTaskComplete_11D1165F4D7BF63A2CE88A8B9AFF4C8B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnPresenceTaskComplete_11D1165F4D7BF63A2CE88A8B9AFF4C8B(const struct FUniqueNetIdRepl& UserId, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnPresenceTaskComplete_11D1165F4D7BF63A2CE88A8B9AFF4C8B");

	Params::UEOS_GameInstance_C_OnPresenceTaskComplete_11D1165F4D7BF63A2CE88A8B9AFF4C8B_Params Parms{};

	Parms.UserId = UserId;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_11D1165F4D7BF63A2CE88A8B9AFF4C8B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnCallFailed_11D1165F4D7BF63A2CE88A8B9AFF4C8B(const struct FUniqueNetIdRepl& UserId, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_11D1165F4D7BF63A2CE88A8B9AFF4C8B");

	Params::UEOS_GameInstance_C_OnCallFailed_11D1165F4D7BF63A2CE88A8B9AFF4C8B_Params Parms{};

	Parms.UserId = UserId;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnFindSessionsComplete_A2159F9E4575DCCCA2BB228CE2FAB39C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnFindSessionsComplete_A2159F9E4575DCCCA2BB228CE2FAB39C(bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnFindSessionsComplete_A2159F9E4575DCCCA2BB228CE2FAB39C");

	Params::UEOS_GameInstance_C_OnFindSessionsComplete_A2159F9E4575DCCCA2BB228CE2FAB39C_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_A2159F9E4575DCCCA2BB228CE2FAB39C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnCallFailed_A2159F9E4575DCCCA2BB228CE2FAB39C(bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_A2159F9E4575DCCCA2BB228CE2FAB39C");

	Params::UEOS_GameInstance_C_OnCallFailed_A2159F9E4575DCCCA2BB228CE2FAB39C_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnJoinSessionComplete_94973A284644EB4A38882BBEBED5E33B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnJoinSessionCompleteResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnJoinSessionComplete_94973A284644EB4A38882BBEBED5E33B(class FName SessionName, enum class EOnJoinSessionCompleteResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnJoinSessionComplete_94973A284644EB4A38882BBEBED5E33B");

	Params::UEOS_GameInstance_C_OnJoinSessionComplete_94973A284644EB4A38882BBEBED5E33B_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_94973A284644EB4A38882BBEBED5E33B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnJoinSessionCompleteResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCallFailed_94973A284644EB4A38882BBEBED5E33B(class FName SessionName, enum class EOnJoinSessionCompleteResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_94973A284644EB4A38882BBEBED5E33B");

	Params::UEOS_GameInstance_C_OnCallFailed_94973A284644EB4A38882BBEBED5E33B_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCreateSessionComplete_B4AB608F474AFCFD8D0253B744CA3EF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnCreateSessionComplete_B4AB608F474AFCFD8D0253B744CA3EF2(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCreateSessionComplete_B4AB608F474AFCFD8D0253B744CA3EF2");

	Params::UEOS_GameInstance_C_OnCreateSessionComplete_B4AB608F474AFCFD8D0253B744CA3EF2_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_B4AB608F474AFCFD8D0253B744CA3EF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnCallFailed_B4AB608F474AFCFD8D0253B744CA3EF2(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_B4AB608F474AFCFD8D0253B744CA3EF2");

	Params::UEOS_GameInstance_C_OnCallFailed_B4AB608F474AFCFD8D0253B744CA3EF2_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnDestroySessionComplete_3F47825A4427C8EDBEB424A49C25FA71
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnDestroySessionComplete_3F47825A4427C8EDBEB424A49C25FA71(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnDestroySessionComplete_3F47825A4427C8EDBEB424A49C25FA71");

	Params::UEOS_GameInstance_C_OnDestroySessionComplete_3F47825A4427C8EDBEB424A49C25FA71_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_3F47825A4427C8EDBEB424A49C25FA71
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnCallFailed_3F47825A4427C8EDBEB424A49C25FA71(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_3F47825A4427C8EDBEB424A49C25FA71");

	Params::UEOS_GameInstance_C_OnCallFailed_3F47825A4427C8EDBEB424A49C25FA71_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnSingleSessionResultComplete_ECCF253642672CDE726E0DB1137DB519
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalUserNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineSessionSearchResultBPSearchResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::OnSingleSessionResultComplete_ECCF253642672CDE726E0DB1137DB519(int32 LocalUserNum, bool bWasSuccessful, const struct FOnlineSessionSearchResultBP& SearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnSingleSessionResultComplete_ECCF253642672CDE726E0DB1137DB519");

	Params::UEOS_GameInstance_C_OnSingleSessionResultComplete_ECCF253642672CDE726E0DB1137DB519_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.SearchResult = SearchResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_ECCF253642672CDE726E0DB1137DB519
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalUserNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineSessionSearchResultBPSearchResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::OnCallFailed_ECCF253642672CDE726E0DB1137DB519(int32 LocalUserNum, bool bWasSuccessful, const struct FOnlineSessionSearchResultBP& SearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_ECCF253642672CDE726E0DB1137DB519");

	Params::UEOS_GameInstance_C_OnCallFailed_ECCF253642672CDE726E0DB1137DB519_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.SearchResult = SearchResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnFindFriendSessionComplete_4B89E9BB4A28A03232A7948C963B204D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FOnlineSessionSearchResultBP>FriendSearchResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEOS_GameInstance_C::OnFindFriendSessionComplete_4B89E9BB4A28A03232A7948C963B204D(bool bWasSuccessful, TArray<struct FOnlineSessionSearchResultBP>& FriendSearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnFindFriendSessionComplete_4B89E9BB4A28A03232A7948C963B204D");

	Params::UEOS_GameInstance_C_OnFindFriendSessionComplete_4B89E9BB4A28A03232A7948C963B204D_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.FriendSearchResult = FriendSearchResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_4B89E9BB4A28A03232A7948C963B204D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FOnlineSessionSearchResultBP>FriendSearchResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEOS_GameInstance_C::OnCallFailed_4B89E9BB4A28A03232A7948C963B204D(bool bWasSuccessful, TArray<struct FOnlineSessionSearchResultBP>& FriendSearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_4B89E9BB4A28A03232A7948C963B204D");

	Params::UEOS_GameInstance_C_OnCallFailed_4B89E9BB4A28A03232A7948C963B204D_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.FriendSearchResult = FriendSearchResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnUpdateSessionComplete_E3F7734C40560B130D78F48346A3CCB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnUpdateSessionComplete_E3F7734C40560B130D78F48346A3CCB0(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnUpdateSessionComplete_E3F7734C40560B130D78F48346A3CCB0");

	Params::UEOS_GameInstance_C_OnUpdateSessionComplete_E3F7734C40560B130D78F48346A3CCB0_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_E3F7734C40560B130D78F48346A3CCB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SessionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::OnCallFailed_E3F7734C40560B130D78F48346A3CCB0(class FName SessionName, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_E3F7734C40560B130D78F48346A3CCB0");

	Params::UEOS_GameInstance_C_OnCallFailed_E3F7734C40560B130D78F48346A3CCB0_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCreatePartyComplete_8EAF2E3B4B7F7D0DFD35A4882CD57819
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCreatePartyComplete_8EAF2E3B4B7F7D0DFD35A4882CD57819(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ECreatePartyCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCreatePartyComplete_8EAF2E3B4B7F7D0DFD35A4882CD57819");

	Params::UEOS_GameInstance_C_OnCreatePartyComplete_8EAF2E3B4B7F7D0DFD35A4882CD57819_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_8EAF2E3B4B7F7D0DFD35A4882CD57819
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCallFailed_8EAF2E3B4B7F7D0DFD35A4882CD57819(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ECreatePartyCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_8EAF2E3B4B7F7D0DFD35A4882CD57819");

	Params::UEOS_GameInstance_C_OnCallFailed_8EAF2E3B4B7F7D0DFD35A4882CD57819_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnSendPartyInvitationComplete_32091BA1452A8FA022409C9D5D53760F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            RecipientId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class ESendPartyInvitationCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnSendPartyInvitationComplete_32091BA1452A8FA022409C9D5D53760F(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, enum class ESendPartyInvitationCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnSendPartyInvitationComplete_32091BA1452A8FA022409C9D5D53760F");

	Params::UEOS_GameInstance_C_OnSendPartyInvitationComplete_32091BA1452A8FA022409C9D5D53760F_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.RecipientId = RecipientId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_32091BA1452A8FA022409C9D5D53760F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            RecipientId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class ESendPartyInvitationCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCallFailed_32091BA1452A8FA022409C9D5D53760F(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, enum class ESendPartyInvitationCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_32091BA1452A8FA022409C9D5D53760F");

	Params::UEOS_GameInstance_C_OnCallFailed_32091BA1452A8FA022409C9D5D53760F_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.RecipientId = RecipientId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnJoinPartyComplete_D9193FAF46512D4925FB5AAC5E694B71
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NotApprovedReason                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnJoinPartyComplete_D9193FAF46512D4925FB5AAC5E694B71(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class EJoinPartyCompletionResult_ Result, int32 NotApprovedReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnJoinPartyComplete_D9193FAF46512D4925FB5AAC5E694B71");

	Params::UEOS_GameInstance_C_OnJoinPartyComplete_D9193FAF46512D4925FB5AAC5E694B71_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;
	Parms.NotApprovedReason = NotApprovedReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_D9193FAF46512D4925FB5AAC5E694B71
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NotApprovedReason                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCallFailed_D9193FAF46512D4925FB5AAC5E694B71(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class EJoinPartyCompletionResult_ Result, int32 NotApprovedReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_D9193FAF46512D4925FB5AAC5E694B71");

	Params::UEOS_GameInstance_C_OnCallFailed_D9193FAF46512D4925FB5AAC5E694B71_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;
	Parms.NotApprovedReason = NotApprovedReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnKickPartyMemberComplete_7E53908D4B9F239876878F8C1C6A14FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EKickMemberCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnKickPartyMemberComplete_7E53908D4B9F239876878F8C1C6A14FB(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, enum class EKickMemberCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnKickPartyMemberComplete_7E53908D4B9F239876878F8C1C6A14FB");

	Params::UEOS_GameInstance_C_OnKickPartyMemberComplete_7E53908D4B9F239876878F8C1C6A14FB_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_7E53908D4B9F239876878F8C1C6A14FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EKickMemberCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCallFailed_7E53908D4B9F239876878F8C1C6A14FB(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, enum class EKickMemberCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_7E53908D4B9F239876878F8C1C6A14FB");

	Params::UEOS_GameInstance_C_OnCallFailed_7E53908D4B9F239876878F8C1C6A14FB_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnLeavePartyComplete_4CCA085B4EE35E33E312DE9F76C193C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnLeavePartyComplete_4CCA085B4EE35E33E312DE9F76C193C6(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnLeavePartyComplete_4CCA085B4EE35E33E312DE9F76C193C6");

	Params::UEOS_GameInstance_C_OnLeavePartyComplete_4CCA085B4EE35E33E312DE9F76C193C6_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_4CCA085B4EE35E33E312DE9F76C193C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCallFailed_4CCA085B4EE35E33E312DE9F76C193C6(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_4CCA085B4EE35E33E312DE9F76C193C6");

	Params::UEOS_GameInstance_C_OnCallFailed_4CCA085B4EE35E33E312DE9F76C193C6_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnReadFriendsListComplete_0C288BDF4874A442F09639904B36D53E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalUserNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ListName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ErrorStr                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnReadFriendsListComplete_0C288BDF4874A442F09639904B36D53E(int32 LocalUserNum, bool bWasSuccessful, const class FString& ListName, const class FString& ErrorStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnReadFriendsListComplete_0C288BDF4874A442F09639904B36D53E");

	Params::UEOS_GameInstance_C_OnReadFriendsListComplete_0C288BDF4874A442F09639904B36D53E_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ListName = ListName;
	Parms.ErrorStr = ErrorStr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_0C288BDF4874A442F09639904B36D53E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalUserNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ListName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ErrorStr                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCallFailed_0C288BDF4874A442F09639904B36D53E(int32 LocalUserNum, bool bWasSuccessful, const class FString& ListName, const class FString& ErrorStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_0C288BDF4874A442F09639904B36D53E");

	Params::UEOS_GameInstance_C_OnCallFailed_0C288BDF4874A442F09639904B36D53E_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ListName = ListName;
	Parms.ErrorStr = ErrorStr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnGetAvatarComplete_97A8BF3541875BC08341B2B383B4D161
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    ResultTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnGetAvatarComplete_97A8BF3541875BC08341B2B383B4D161(bool bWasSuccessful, class UTexture* ResultTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnGetAvatarComplete_97A8BF3541875BC08341B2B383B4D161");

	Params::UEOS_GameInstance_C_OnGetAvatarComplete_97A8BF3541875BC08341B2B383B4D161_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ResultTexture = ResultTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_97A8BF3541875BC08341B2B383B4D161
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    ResultTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCallFailed_97A8BF3541875BC08341B2B383B4D161(bool bWasSuccessful, class UTexture* ResultTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_97A8BF3541875BC08341B2B383B4D161");

	Params::UEOS_GameInstance_C_OnCallFailed_97A8BF3541875BC08341B2B383B4D161_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ResultTexture = ResultTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnLoginComplete_2BE8B34546FB4D223E30AC819336B27A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnLoginComplete_2BE8B34546FB4D223E30AC819336B27A(bool bWasSuccessful, const struct FUniqueNetIdRepl& UserId, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnLoginComplete_2BE8B34546FB4D223E30AC819336B27A");

	Params::UEOS_GameInstance_C_OnLoginComplete_2BE8B34546FB4D223E30AC819336B27A_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.UserId = UserId;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_2BE8B34546FB4D223E30AC819336B27A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnCallFailed_2BE8B34546FB4D223E30AC819336B27A(bool bWasSuccessful, const struct FUniqueNetIdRepl& UserId, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnCallFailed_2BE8B34546FB4D223E30AC819336B27A");

	Params::UEOS_GameInstance_C_OnCallFailed_2BE8B34546FB4D223E30AC819336B27A_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.UserId = UserId;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Initialize Websockets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Initialize_Websockets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Initialize Websockets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::CustomEvent_1(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "CustomEvent_1");

	Params::UEOS_GameInstance_C_CustomEvent_1_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Connection Closed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StatusCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bWasClean                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Game_Services_Connection_Closed(int32 StatusCode, const class FString& Reason, bool bWasClean)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Game Services Connection Closed");

	Params::UEOS_GameInstance_C_Game_Services_Connection_Closed_Params Parms{};

	Parms.StatusCode = StatusCode;
	Parms.Reason = Reason;
	Parms.bWasClean = bWasClean;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Connected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Game_Services_Connected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Game Services Connected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Connection Error
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Game_Services_Connection_Error(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Game Services Connection Error");

	Params::UEOS_GameInstance_C_Game_Services_Connection_Error_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Message Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Game_Services_Message_Received(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Game Services Message Received");

	Params::UEOS_GameInstance_C_Game_Services_Message_Received_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Message Sent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Game_Services_Message_Sent(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Game Services Message Sent");

	Params::UEOS_GameInstance_C_Game_Services_Message_Sent_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Send Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Game_Services_Send_Message(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Game Services Send Message");

	Params::UEOS_GameInstance_C_Game_Services_Send_Message_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.AWS Initialize Match Maker Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::AWS_Initialize_Match_Maker_Events()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "AWS Initialize Match Maker Events");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Stop Match Making
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Stop_Match_Making(bool Force, const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Stop Match Making");

	Params::UEOS_GameInstance_C_Stop_Match_Making_Params Parms{};

	Parms.Force = Force;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Start Match Making
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_GameModes             Game_Mode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Start_Match_Making(enum class E_GameModes Game_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Start Match Making");

	Params::UEOS_GameInstance_C_Start_Match_Making_Params Parms{};

	Parms.Game_Mode = Game_Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Party Events Stopped Match Making
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Party_Events_Stopped_Match_Making(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Party Events Stopped Match Making");

	Params::UEOS_GameInstance_C_Party_Events_Stopped_Match_Making_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Party Member Joining Stopped Match Making
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEOS_GameInstance_C::Party_Member_Joining_Stopped_Match_Making(const struct FUniqueNetIdRepl& Member_Id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Party Member Joining Stopped Match Making");

	Params::UEOS_GameInstance_C_Party_Member_Joining_Stopped_Match_Making_Params Parms{};

	Parms.Member_Id = Member_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Join Matchmaking Queue Response
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Join_Matchmaking_Queue_Response(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Join Matchmaking Queue Response");

	Params::UEOS_GameInstance_C_Join_Matchmaking_Queue_Response_Params Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Stop Matchmaking Queue Response
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Stop_Matchmaking_Queue_Response(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Stop Matchmaking Queue Response");

	Params::UEOS_GameInstance_C_Stop_Matchmaking_Queue_Response_Params Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Ping Matchmaking 
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Ping_Matchmaking_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Ping Matchmaking ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Ping Matchmaking Queue Response
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Ping_Matchmaking_Queue_Response(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Ping Matchmaking Queue Response");

	Params::UEOS_GameInstance_C_Ping_Matchmaking_Queue_Response_Params Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Change Presence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Presence_Status                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Change_Presence(const class FString& Presence_Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Change Presence");

	Params::UEOS_GameInstance_C_Change_Presence_Params Parms{};

	Parms.Presence_Status = Presence_Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Get Presence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Unique_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEOS_GameInstance_C::Get_Presence(const struct FUniqueNetIdRepl& Unique_Id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Get Presence");

	Params::UEOS_GameInstance_C_Get_Presence_Params Parms{};

	Parms.Unique_Id = Unique_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Initialize Presence Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Initialize_Presence_Events()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Initialize Presence Events");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Receive Presence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     Presence                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::Receive_Presence(const struct FUniqueNetIdRepl& UserId, const struct FOnlineUserPresenceData& Presence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Receive Presence");

	Params::UEOS_GameInstance_C_Receive_Presence_Params Parms{};

	Parms.UserId = UserId;
	Parms.Presence = Presence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Fetch Global Config
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Fetch_Global_Config()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Fetch Global Config");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Received Global Config
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Received_Global_Config(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Received Global Config");

	Params::UEOS_GameInstance_C_Received_Global_Config_Params Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Process Authorized Request
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Request_JSON                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           JsonObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Url_Extension                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Process_Authorized_Request(class UVaRestRequestJSON* Request_JSON, class UVaRestJsonObject* JsonObject, const class FString& Url_Extension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Process Authorized Request");

	Params::UEOS_GameInstance_C_Process_Authorized_Request_Params Parms{};

	Parms.Request_JSON = Request_JSON;
	Parms.JsonObject = JsonObject;
	Parms.Url_Extension = Url_Extension;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Process Authorized Encoded Request
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Request_JSON                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           JsonObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Url_Extension                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Process_Authorized_Encoded_Request(class UVaRestRequestJSON* Request_JSON, class UVaRestJsonObject* JsonObject, const class FString& Url_Extension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Process Authorized Encoded Request");

	Params::UEOS_GameInstance_C_Process_Authorized_Encoded_Request_Params Parms{};

	Parms.Request_JSON = Request_JSON;
	Parms.JsonObject = JsonObject;
	Parms.Url_Extension = Url_Extension;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Create Session
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Session_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Create_Session(class FName Session_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Create Session");

	Params::UEOS_GameInstance_C_Create_Session_Params Parms{};

	Parms.Session_Name = Session_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Find Sessions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Find_Sessions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Find Sessions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Join Session
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Session_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSearchResultBPSession_Reference                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Auto_Connect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Bring_Party                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Join_Session(class FName Session_Name, const struct FOnlineSessionSearchResultBP& Session_Reference, bool Auto_Connect, bool Bring_Party)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Join Session");

	Params::UEOS_GameInstance_C_Join_Session_Params Parms{};

	Parms.Session_Name = Session_Name;
	Parms.Session_Reference = Session_Reference;
	Parms.Auto_Connect = Auto_Connect;
	Parms.Bring_Party = Bring_Party;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Create Session Advanced
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Session_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingsBP    Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::Create_Session_Advanced(class FName Session_Name, const struct FOnlineSessionSettingsBP& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Create Session Advanced");

	Params::UEOS_GameInstance_C_Create_Session_Advanced_Params Parms{};

	Parms.Session_Name = Session_Name;
	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Create Session Moderate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Session_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FOnlineSessionSettingBP>Server_Settings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::Create_Session_Moderate(class FName Session_Name, TMap<class FName, struct FOnlineSessionSettingBP> Server_Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Create Session Moderate");

	Params::UEOS_GameInstance_C_Create_Session_Moderate_Params Parms{};

	Parms.Session_Name = Session_Name;
	Parms.Server_Settings = Server_Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Destroy Session
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Session_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Destroy_Session(class FName Session_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Destroy Session");

	Params::UEOS_GameInstance_C_Destroy_Session_Params Parms{};

	Parms.Session_Name = Session_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Destroy Current Session
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Destroy_Current_Session()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Destroy Current Session");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Join Session From Session Id String
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Session_ID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Auto_Connect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Join_Session_From_Session_Id_String(const class FString& Session_ID, bool Auto_Connect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Join Session From Session Id String");

	Params::UEOS_GameInstance_C_Join_Session_From_Session_Id_String_Params Parms{};

	Parms.Session_ID = Session_ID;
	Parms.Auto_Connect = Auto_Connect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Find Previously Connected Sessions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Find_Previously_Connected_Sessions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Find Previously Connected Sessions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Update Session Settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineSessionSettingsBP    Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::Update_Session_Settings(const struct FOnlineSessionSettingsBP& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Update Session Settings");

	Params::UEOS_GameInstance_C_Update_Session_Settings_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsServer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "HandleNetworkError");

	Params::UEOS_GameInstance_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Initialize Party Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::EOS_Initialize_Party_Events()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Initialize Party Events");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.On Party Invite Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            SenderId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEOS_GameInstance_C::On_Party_Invite_Received(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& SenderId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "On Party Invite Received");

	Params::UEOS_GameInstance_C_On_Party_Invite_Received_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.SenderId = SenderId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.On Party Data Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMutablePartyData*           PartyData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::On_Party_Data_Updated(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class UMutablePartyData* PartyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "On Party Data Updated");

	Params::UEOS_GameInstance_C_On_Party_Data_Updated_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.PartyData = PartyData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Create Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Create_Party()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Create Party");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Invite Friend To Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_PartyReference_C*       Party_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_FriendReference_C*      Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Invite_Friend_To_Party(class UEOS_PartyReference_C* Party_ID, class UEOS_FriendReference_C* Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Invite Friend To Party");

	Params::UEOS_GameInstance_C_Invite_Friend_To_Party_Params Parms{};

	Parms.Party_ID = Party_ID;
	Parms.Friend = Friend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Join Party From Invite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_PartyInviteReference_C* Invite                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Join_Party_From_Invite(class UEOS_PartyInviteReference_C* Invite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Join Party From Invite");

	Params::UEOS_GameInstance_C_Join_Party_From_Invite_Params Parms{};

	Parms.Invite = Invite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Kick Member
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Party_Member_Id                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEOS_GameInstance_C::Kick_Member(const struct FUniqueNetIdRepl& Party_Member_Id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Kick Member");

	Params::UEOS_GameInstance_C_Kick_Member_Params Parms{};

	Parms.Party_Member_Id = Party_Member_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Leave Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Leave_Party()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Leave Party");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Party Member Data Receieved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        Namespace                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          PartyData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Party_Member_Data_Receieved(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, class FName Namespace, class UReadablePartyData* PartyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Party Member Data Receieved");

	Params::UEOS_GameInstance_C_Party_Member_Data_Receieved_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Namespace = Namespace;
	Parms.PartyData = PartyData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Party Data Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Namespace                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          PartyData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Party_Data_Received(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class FName Namespace, class UReadablePartyData* PartyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Party Data Received");

	Params::UEOS_GameInstance_C_Party_Data_Received_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Namespace = Namespace;
	Parms.PartyData = PartyData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Reject Invitation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_PartyInviteReference_C* Rejected_Invite                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Reject_Invitation(class UEOS_PartyInviteReference_C* Rejected_Invite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Reject Invitation");

	Params::UEOS_GameInstance_C_Reject_Invitation_Params Parms{};

	Parms.Rejected_Invite = Rejected_Invite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Send Party Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Attribute_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::Send_Party_Data(const class FString& Attribute_Name, const struct FVariantDataBP& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Send Party Data");

	Params::UEOS_GameInstance_C_Send_Party_Data_Params Parms{};

	Parms.Attribute_Name = Attribute_Name;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Send Party Member Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Attribute_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::Send_Party_Member_Data(const class FString& Attribute_Name, const struct FVariantDataBP& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Send Party Member Data");

	Params::UEOS_GameInstance_C_Send_Party_Member_Data_Params Parms{};

	Parms.Attribute_Name = Attribute_Name;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Party Member Joined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEOS_GameInstance_C::Party_Member_Joined(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Party Member Joined");

	Params::UEOS_GameInstance_C_Party_Member_Joined_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Party Member Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EMemberExitedReason_    Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Party_Member_Left(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, enum class EMemberExitedReason_ Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Party Member Left");

	Params::UEOS_GameInstance_C_Party_Member_Left_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Joined Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Joined_Party(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Joined Party");

	Params::UEOS_GameInstance_C_Joined_Party_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Got Kicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Got_Kicked(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Got Kicked");

	Params::UEOS_GameInstance_C_Got_Kicked_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Join Party From ID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LobbyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Join_Party_From_ID(const class FString& LobbyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Join Party From ID");

	Params::UEOS_GameInstance_C_Join_Party_From_ID_Params Parms{};

	Parms.LobbyId = LobbyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Join Party From Party Join Object
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOnlinePartyJoinInfo*        Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Join_Party_From_Party_Join_Object(class UOnlinePartyJoinInfo* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Join Party From Party Join Object");

	Params::UEOS_GameInstance_C_Join_Party_From_Party_Join_Object_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Read And Get Friends
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::EOS_Read_And_Get_Friends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Read And Get Friends");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Fetch Avatar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            User_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTexture*                    Default_Avatar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Fetch_Avatar(const struct FUniqueNetIdRepl& User_ID, class UTexture* Default_Avatar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Fetch Avatar");

	Params::UEOS_GameInstance_C_Fetch_Avatar_Params Parms{};

	Parms.User_ID = User_ID;
	Parms.Default_Avatar = Default_Avatar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Fetch Avatar Friend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_FriendReference_C*      Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Default_Avatar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Fetch_Avatar_Friend(class UEOS_FriendReference_C* Friend, class UTexture* Default_Avatar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Fetch Avatar Friend");

	Params::UEOS_GameInstance_C_Fetch_Avatar_Friend_Params Parms{};

	Parms.Friend = Friend;
	Parms.Default_Avatar = Default_Avatar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Friend_number                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Friend_Changed(int32 Friend_number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Friend Changed");

	Params::UEOS_GameInstance_C_EOS_Friend_Changed_Params Parms{};

	Parms.Friend_number = Friend_number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Initialize Friend Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::EOS_Initialize_Friend_Events()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Initialize Friend Events");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Presence Event Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     Presence                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::Presence_Event_Received(const struct FUniqueNetIdRepl& UserId, const struct FOnlineUserPresenceData& Presence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Presence Event Received");

	Params::UEOS_GameInstance_C_Presence_Event_Received_Params Parms{};

	Parms.UserId = UserId;
	Parms.Presence = Presence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Start Login
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_User_Num                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Start_Login(int32 Local_User_Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Start Login");

	Params::UEOS_GameInstance_C_EOS_Start_Login_Params Parms{};

	Parms.Local_User_Num = Local_User_Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Initialize Auth Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::EOS_Initialize_Auth_Events()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Initialize Auth Events");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.OnSignedInComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalUserNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::OnSignedInComplete(int32 LocalUserNum, bool bWasSuccessful, const struct FUniqueNetIdRepl& UserId, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "OnSignedInComplete");

	Params::UEOS_GameInstance_C_OnSignedInComplete_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.UserId = UserId;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Initialize EOS
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Initialize_EOS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Initialize EOS");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.ExecuteUbergraph_EOS_GameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_SessionName_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_13                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LocalUserNum_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_12                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineSessionSearchResultBPK2Node_CustomEvent_SearchResult_1                                (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_LocalUserNum_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_11                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineSessionSearchResultBPK2Node_CustomEvent_SearchResult                                  (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FOnlineSessionSearchResultBPTemp_struct_Variable                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_10                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FOnlineSessionSearchResultBP>K2Node_CustomEvent_FriendSearchResult_1                          (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful_9                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FOnlineSessionSearchResultBP>K2Node_CustomEvent_FriendSearchResult                            (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// TArray<struct FOnlineSessionSearchResultBP>Temp_struct_Variable_1                                           (ReferenceParm)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineSessionSearchResultBPCallFunc_Array_Get_Item                                          (None)
// class FName                        K2Node_CustomEvent_SessionName_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_8                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_SessionName                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_17                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_17                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatePartyCompletionResult_K2Node_CustomEvent_Result_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_16                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_16                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatePartyCompletionResult_K2Node_CustomEvent_Result_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// enum class ECreatePartyCompletionResult_Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_15                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_15                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_RecipientId_1                                 (HasGetValueTypeHash)
// enum class ESendPartyInvitationCompletionResult_K2Node_CustomEvent_Result_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_14                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_14                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_RecipientId                                   (HasGetValueTypeHash)
// enum class ESendPartyInvitationCompletionResult_K2Node_CustomEvent_Result_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// enum class ESendPartyInvitationCompletionResult_Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPartyId*                    Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_4                                           (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_13                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_13                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_K2Node_CustomEvent_Result_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NotApprovedReason_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_12                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_12                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_K2Node_CustomEvent_Result_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NotApprovedReason                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPartyId*                    Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_5                                           (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_11                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_11                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId_4                                    (HasGetValueTypeHash)
// enum class EKickMemberCompletionResult_K2Node_CustomEvent_Result_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_10                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_10                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId_3                                    (HasGetValueTypeHash)
// enum class EKickMemberCompletionResult_K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// enum class EKickMemberCompletionResult_Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_6                                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPartyId*                    Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_7                                           (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_9                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_9                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_8                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_8                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// enum class ELeavePartyCompletionResult_Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            Temp_struct_Variable_8                                           (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineLobbySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_14                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_15                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendsSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_16                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendsSubsystemReadFriendsList*CallFunc_ReadFriendsList_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_LocalUserNum_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ListName_1                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ErrorStr_1                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LocalUserNum_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ListName                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ErrorStr                                      (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendsSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_17                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UOnlineFriendRef*>    CallFunc_GetFriendsList_OutFriends                               (ReferenceParm)
// bool                               CallFunc_GetFriendsList_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineAvatarSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_18                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_CustomEvent_ResultTexture_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_CustomEvent_ResultTexture                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class UTexture*                    Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineFriendsSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_19                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendsSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_20                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePresenceSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_21                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_22                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_4                                      (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Error_3                                       (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_3                                      (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Error_2                                       (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_9                                           (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_23                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_SessionName_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_14                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineFriendRef*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class UWebSocket*                  CallFunc_CreateWebSocket_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Message_3                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StatusCode                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Reason_2                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasClean                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Error_1                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Message_2                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UUI_DisconnectPopup_C*       CallFunc_Custom_Popup_UI_element                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Message_1                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Message                                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Force                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Reason_1                                      (ZeroConstructor, HasGetValueTypeHash)
// enum class E_GameModes             K2Node_CustomEvent_Game_Mode                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Member_Id                                     (HasGetValueTypeHash)
// class UVaRestRequestJSON*          K2Node_CustomEvent_Request_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          K2Node_CustomEvent_Request_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_Get_Data_From_Response_Response_Data                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_Get_Data_From_Response_Response_Data_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolField_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIntegerField_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolField_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetStringField_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_4                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UUI_DisconnectPopup_C*       CallFunc_Custom_Popup_UI_element_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVaRestRequestStatus    CallFunc_GetStatus_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVaRestRequestStatus    CallFunc_GetStatus_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVaRestRequestJSON*          K2Node_CustomEvent_Request_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_Get_Data_From_Response_Response_Data_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_5                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolField_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class UUI_DisconnectPopup_C*       CallFunc_Custom_Popup_UI_element_2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_GetObjectField_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_6                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntegerField_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntegerField_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_7                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_8                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_9                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetStringField_ReturnValue_10                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_11                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVaRestRequestStatus    CallFunc_GetStatus_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_24                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_DisconnectPopup_C*       CallFunc_Custom_Popup_UI_element_3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Data_Int_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string_1                                       (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Data_Int_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string_2                                       (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Presence_Status                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineUserPresenceStatusDataK2Node_MakeStruct_OnlineUserPresenceStatusData                   (None)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Unique_Id                                     (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_8                                      (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_22                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_2                                      (HasGetValueTypeHash)
// struct FOnlineUserPresenceData     K2Node_CustomEvent_Presence_1                                    (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_SessionName_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_15                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVaRestRequestJSON*          K2Node_CustomEvent_Request                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_GetResponseObject_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UVaRestJsonValue*>    CallFunc_GetArrayField_ReturnValue                               (ReferenceParm)
// class FString                      CallFunc_GetStringField_ReturnValue_12                           (ZeroConstructor, HasGetValueTypeHash)
// class UVaRestJsonValue*            CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          K2Node_CustomEvent_Request_JSON_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           K2Node_CustomEvent_JsonObject_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Url_Extension_1                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AsString_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FGlobalConfig               K2Node_MakeStruct_GlobalConfig                                   (HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WithEditor_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          K2Node_CustomEvent_Request_JSON                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           K2Node_CustomEvent_JsonObject                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Url_Extension                                 (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)
// class UVaRestJsonObject*           CallFunc_Create_Data_From_Request_Request_Data                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Session_Name_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_34                          (ZeroConstructor, NoDestructor)
// class UOnlineSessionSearch*        CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_SessionName_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_16                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// TArray<class UEOS_SessionReference_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FOnlineSessionSearchResultBP>CallFunc_GetSearchResults_ReturnValue                            (ReferenceParm)
// struct FOnlineSessionSearchResultBPCallFunc_Array_Get_Item_3                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_SessionReference_C*     CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Session_Name_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSearchResultBPK2Node_CustomEvent_Session_Reference                             (None)
// bool                               K2Node_CustomEvent_Auto_Connect_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Bring_Party                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_2                  (HasGetValueTypeHash)
// class FString                      CallFunc_Get_Resolved_Connect_String_From_Search_Result_Connection_String(ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_35                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_Session_Name_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingsBP    K2Node_CustomEvent_Settings_1                                    (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_3                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Session_Name_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FOnlineSessionSettingBP>K2Node_CustomEvent_Server_Settings                               (None)
// TMap<class FName, struct FOnlineSessionSettingBP>CallFunc_Internal_Update_Server_Settings_Updated_Server_Settings (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Session_Name                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingsBP    K2Node_MakeStruct_OnlineSessionSettingsBP                        (None)
// class UOnlineSessionSubsystemDestroySession*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlinePresenceSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_25                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePresenceSubsystemSetPresence*CallFunc_SetPresence_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_26                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_27                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_CreateUniquePlayerId_ReturnValue                        (HasGetValueTypeHash)
// class UOnlineSessionSubsystemCreateSession*CallFunc_CreateSession_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Session_Id                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Auto_Connect                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_CreateSessionIdFromString_ReturnValue                   (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_4                  (HasGetValueTypeHash)
// class UOnlineSessionSubsystemFindSessionById*CallFunc_FindSessionById_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnJoinSessionCompleteResult_Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_SessionName_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnJoinSessionCompleteResult_K2Node_CustomEvent_Result_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_SessionName_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnJoinSessionCompleteResult_K2Node_CustomEvent_Result_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_36                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Party_Leader_IsLeader                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_37                          (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingsBP    K2Node_CustomEvent_Settings                                      (None)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_5                  (HasGetValueTypeHash)
// class UOnlineSessionSubsystemFindFriendSession*CallFunc_FindFriendSession_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystemUpdateSession*CallFunc_UpdateSession_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ENetworkFailure         K2Node_Event_FailureType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsServer                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_28                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_7                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_7                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_SenderId                                      (HasGetValueTypeHash)
// class UOnlineSessionSubsystemJoinSession*CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_6                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_6                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMutablePartyData*           K2Node_CustomEvent_PartyData_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttribute_OutFound                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue                               (None)
// bool                               CallFunc_GetAttribute_OutFound_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue_1                             (None)
// class FString                      CallFunc_Base64Decode_Dest                                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Base64Decode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAttribute_OutFound_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue_2                             (None)
// class UParty*                      CallFunc_GetParty_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetLeaderId_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_6                  (HasGetValueTypeHash)
// int64                              CallFunc_GetPrimaryPartyType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_PartyReference_C*       K2Node_CustomEvent_Party_Id                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_FriendReference_C*      K2Node_CustomEvent_Friend                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_7                  (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue                                   (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_17                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlinePartySubsystemSendInvitation*CallFunc_SendInvitation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_PartyInviteReference_C* K2Node_CustomEvent_Invite                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_38                          (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_8                  (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Party_Member_Id                               (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_39                          (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_9                  (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_10                 (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_40                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful_18                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_5                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId_2                                    (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Namespace_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          K2Node_CustomEvent_PartyData_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_PartyReference_C*       CallFunc_SpawnObject_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_4                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Namespace                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          K2Node_CustomEvent_PartyData                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMutablePartyData*           CallFunc_CreateMutablePartyData_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_41                          (ZeroConstructor, NoDestructor)
// class UEOS_PartyInviteReference_C* K2Node_CustomEvent_Rejected_Invite                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get__Sender_Sender                                      (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_Get__Sender_Sender_ID                                   (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_11                 (HasGetValueTypeHash)
// bool                               CallFunc_RejectInvitation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_42                          (ZeroConstructor, NoDestructor)
// class UEOS_PartyReference_C*       CallFunc_SpawnObject_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Attribute_Name_1                              (ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_CustomEvent_Data_1                                        (None)
// TMap<class FString, struct FVariantDataBP>K2Node_MakeMap_Map                                               (None)
// class FString                      K2Node_CustomEvent_Attribute_Name                                (ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_CustomEvent_Data                                          (None)
// TMap<class FString, struct FVariantDataBP>K2Node_MakeMap_Map_1                                             (None)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_3                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId_1                                    (HasGetValueTypeHash)
// class UBlueprintPartyMember*       CallFunc_GetPartyMember_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_2                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId                                      (HasGetValueTypeHash)
// enum class EMemberExitedReason_    K2Node_CustomEvent_Reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlinePartySubsystemLeaveParty*CallFunc_LeaveParty_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemKickMember*CallFunc_KickMember_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_1                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_43                          (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId                                   (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_29                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineSessionSubsystemFindSessions*CallFunc_FindSessions_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_12                 (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_44                          (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_LobbyId                                       (ZeroConstructor, HasGetValueTypeHash)
// struct FOnlinePartyConfiguration   K2Node_MakeStruct_OnlinePartyConfiguration                       (None)
// class ULobbyId*                    CallFunc_ParseSerializedLobbyId_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemCreateParty*CallFunc_CreateParty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartyJoinInfo*        CallFunc_Conv_ULobbyIdToUOnlinePartyJoinInfo_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlinePartyJoinInfo*        K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemJoinParty*CallFunc_JoinParty_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    CallFunc_GetPartyId_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_If_Should_Leave_Current_Party_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlinePresenceSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_30                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_45                          (ZeroConstructor, NoDestructor)
// class UEOS_PartyMemberReference_C* CallFunc_SpawnObject_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_10                                          (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     CallFunc_Read_Presence_OutPresence                               (None)
// enum class EOnlineCachedResult_    CallFunc_Read_Presence_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_13                 (HasGetValueTypeHash)
// TArray<class UBlueprintPartyMember*>CallFunc_GetPartyMembers_OutPartyMembersArray                    (ReferenceParm)
// bool                               CallFunc_GetPartyMembers_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlueprintPartyMember*       CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_46                          (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue_1                                 (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_PartyMemberReference_C* CallFunc_SpawnObject_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_14                 (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_15                 (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_5                                      (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_19                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Party_Leader_IsLeader_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Primary_Account_ID_Account_ID                       (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_16                 (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_47                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UEOS_FriendReference_C*>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_48                          (ZeroConstructor, NoDestructor)
// class UEOS_FriendReference_C*      CallFunc_SpawnObject_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_User_Id                                       (HasGetValueTypeHash)
// class UTexture*                    K2Node_CustomEvent_Default_Avatar                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_6                                      (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_20                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_FriendReference_C*      K2Node_Event_Friend                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Event_Default_Avatar                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_17                 (HasGetValueTypeHash)
// class UOnlineAvatarSubsystemGetAvatar*CallFunc_GetAvatar_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue_2                                 (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_49                          (ZeroConstructor, NoDestructor)
// class UTexture*                    CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Friend_number                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendRef*            CallFunc_GetFriend_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_FriendReference_C*      CallFunc_SpawnObject_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_50                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_51                          (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_1                                      (HasGetValueTypeHash)
// struct FOnlineUserPresenceData     K2Node_CustomEvent_Presence                                      (None)
// class UOnlinePresenceSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_31                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_FriendReference_C*      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePresenceSubsystemQueryPresence*CallFunc_QueryPresence_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     CallFunc_GetPresence_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_Get_Unique_Net_Id_ReturnValue                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            Temp_struct_Variable_11                                          (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Local_User_Num                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystemAutoLogin*CallFunc_AutoLogin_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_7                                      (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_21                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_52                          (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_LocalUserNum                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId                                        (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Error                                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Can_Link_To_Epic_Games_Account__CanLink_                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Can_Link_To_Epic_Games_Account__CanLink__1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Player_User_Name_Nickname                           (ZeroConstructor, HasGetValueTypeHash)
// class UEvents_Manager_C*           CallFunc_CreateObject_Object                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::ExecuteUbergraph_EOS_GameInstance(int32 EntryPoint, class FName K2Node_CustomEvent_SessionName_2, bool K2Node_CustomEvent_bWasSuccessful_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class FName Temp_name_Variable, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, int32 K2Node_CustomEvent_LocalUserNum_4, bool K2Node_CustomEvent_bWasSuccessful_12, const struct FOnlineSessionSearchResultBP& K2Node_CustomEvent_SearchResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_LocalUserNum_3, bool K2Node_CustomEvent_bWasSuccessful_11, const struct FOnlineSessionSearchResultBP& K2Node_CustomEvent_SearchResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FOnlineSessionSearchResultBP& Temp_struct_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool K2Node_CustomEvent_bWasSuccessful_10, TArray<struct FOnlineSessionSearchResultBP>& K2Node_CustomEvent_FriendSearchResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_bWasSuccessful_9, TArray<struct FOnlineSessionSearchResultBP>& K2Node_CustomEvent_FriendSearchResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<struct FOnlineSessionSearchResultBP>& Temp_struct_Variable_1, bool Temp_bool_Variable_2, const struct FOnlineSessionSearchResultBP& CallFunc_Array_Get_Item, class FName K2Node_CustomEvent_SessionName_1, bool K2Node_CustomEvent_bWasSuccessful_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_SessionName, bool K2Node_CustomEvent_bWasSuccessful_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable_3, class FName Temp_name_Variable_1, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_17, class UPartyId* K2Node_CustomEvent_PartyId_17, enum class ECreatePartyCompletionResult_ K2Node_CustomEvent_Result_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_16, class UPartyId* K2Node_CustomEvent_PartyId_16, enum class ECreatePartyCompletionResult_ K2Node_CustomEvent_Result_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, enum class ECreatePartyCompletionResult_ Temp_byte_Variable, class UPartyId* Temp_object_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FUniqueNetIdRepl& Temp_struct_Variable_2, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_15, class UPartyId* K2Node_CustomEvent_PartyId_15, const struct FUniqueNetIdRepl& K2Node_CustomEvent_RecipientId_1, enum class ESendPartyInvitationCompletionResult_ K2Node_CustomEvent_Result_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_14, class UPartyId* K2Node_CustomEvent_PartyId_14, const struct FUniqueNetIdRepl& K2Node_CustomEvent_RecipientId, enum class ESendPartyInvitationCompletionResult_ K2Node_CustomEvent_Result_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, enum class ESendPartyInvitationCompletionResult_ Temp_byte_Variable_1, const struct FUniqueNetIdRepl& Temp_struct_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UPartyId* Temp_object_Variable_1, const struct FUniqueNetIdRepl& Temp_struct_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_13, class UPartyId* K2Node_CustomEvent_PartyId_13, enum class EJoinPartyCompletionResult_ K2Node_CustomEvent_Result_5, int32 K2Node_CustomEvent_NotApprovedReason_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_12, class UPartyId* K2Node_CustomEvent_PartyId_12, enum class EJoinPartyCompletionResult_ K2Node_CustomEvent_Result_4, int32 K2Node_CustomEvent_NotApprovedReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, int32 Temp_int_Variable_1, enum class EJoinPartyCompletionResult_ Temp_byte_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UPartyId* Temp_object_Variable_2, const struct FUniqueNetIdRepl& Temp_struct_Variable_5, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_11, class UPartyId* K2Node_CustomEvent_PartyId_11, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId_4, enum class EKickMemberCompletionResult_ K2Node_CustomEvent_Result_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_10, class UPartyId* K2Node_CustomEvent_PartyId_10, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId_3, enum class EKickMemberCompletionResult_ K2Node_CustomEvent_Result_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, enum class EKickMemberCompletionResult_ Temp_byte_Variable_3, const struct FUniqueNetIdRepl& Temp_struct_Variable_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, class UPartyId* Temp_object_Variable_3, const struct FUniqueNetIdRepl& Temp_struct_Variable_7, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_9, class UPartyId* K2Node_CustomEvent_PartyId_9, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_Result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_8, class UPartyId* K2Node_CustomEvent_PartyId_8, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, enum class ELeavePartyCompletionResult_ Temp_byte_Variable_4, class UPartyId* Temp_object_Variable_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, const struct FUniqueNetIdRepl& Temp_struct_Variable_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, class UOnlineLobbySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_15, class UOnlineFriendsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_16, class UOnlineFriendsSubsystemReadFriendsList* CallFunc_ReadFriendsList_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_LocalUserNum_2, bool K2Node_CustomEvent_bWasSuccessful_6, const class FString& K2Node_CustomEvent_ListName_1, const class FString& K2Node_CustomEvent_ErrorStr_1, int32 K2Node_CustomEvent_LocalUserNum_1, bool K2Node_CustomEvent_bWasSuccessful_5, const class FString& K2Node_CustomEvent_ListName, const class FString& K2Node_CustomEvent_ErrorStr, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_4, int32 Temp_int_Variable_2, class UOnlineFriendsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_17, TArray<class UOnlineFriendRef*>& CallFunc_GetFriendsList_OutFriends, bool CallFunc_GetFriendsList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UOnlineAvatarSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_18, bool K2Node_CustomEvent_bWasSuccessful_4, class UTexture* K2Node_CustomEvent_ResultTexture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, bool K2Node_CustomEvent_bWasSuccessful_3, class UTexture* K2Node_CustomEvent_ResultTexture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class UTexture* Temp_object_Variable_5, bool Temp_bool_Variable_5, class UOnlineFriendsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_19, class UOnlineFriendsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_20, class UOnlinePresenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_21, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_22, bool K2Node_CustomEvent_bWasSuccessful_2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_4, const class FString& K2Node_CustomEvent_Error_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool K2Node_CustomEvent_bWasSuccessful_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_3, const class FString& K2Node_CustomEvent_Error_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, const class FString& Temp_string_Variable_2, const struct FUniqueNetIdRepl& Temp_struct_Variable_9, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_23, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName K2Node_CustomEvent_SessionName_3, bool K2Node_CustomEvent_bWasSuccessful_14, class UOnlineFriendRef* CallFunc_Array_Get_Item_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class UWebSocket* CallFunc_CreateWebSocket_ReturnValue, const class FString& K2Node_CustomEvent_Message_3, int32 K2Node_CustomEvent_StatusCode, const class FString& K2Node_CustomEvent_Reason_2, bool K2Node_CustomEvent_bWasClean, const class FString& K2Node_CustomEvent_Error_1, const class FString& K2Node_CustomEvent_Message_2, class FText CallFunc_Conv_StringToText_ReturnValue, class UUI_DisconnectPopup_C* CallFunc_Custom_Popup_UI_element, const class FString& K2Node_CustomEvent_Message_1, const class FString& K2Node_CustomEvent_Message, bool K2Node_CustomEvent_Force, const class FString& K2Node_CustomEvent_Reason_1, enum class E_GameModes K2Node_CustomEvent_Game_Mode, bool CallFunc_IsEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, bool K2Node_CustomEvent_Successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Member_Id, class UVaRestRequestJSON* K2Node_CustomEvent_Request_3, class UVaRestRequestJSON* K2Node_CustomEvent_Request_2, class UVaRestJsonObject* CallFunc_Get_Data_From_Response_Response_Data, class UVaRestJsonObject* CallFunc_Get_Data_From_Response_Response_Data_1, const class FString& CallFunc_GetStringField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_1, bool CallFunc_GetBoolField_ReturnValue, int32 CallFunc_GetIntegerField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_2, bool CallFunc_GetBoolField_ReturnValue_1, const class FString& CallFunc_GetStringField_ReturnValue_3, const class FString& CallFunc_GetStringField_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UUI_DisconnectPopup_C* CallFunc_Custom_Popup_UI_element_1, enum class EVaRestRequestStatus CallFunc_GetStatus_ReturnValue, enum class EVaRestRequestStatus CallFunc_GetStatus_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, class UVaRestRequestJSON* K2Node_CustomEvent_Request_1, class UVaRestJsonObject* CallFunc_Get_Data_From_Response_Response_Data_2, const class FString& CallFunc_GetStringField_ReturnValue_5, bool CallFunc_GetBoolField_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, class UUI_DisconnectPopup_C* CallFunc_Custom_Popup_UI_element_2, class UVaRestJsonObject* CallFunc_GetObjectField_ReturnValue, class UVaRestJsonObject* CallFunc_GetObjectField_ReturnValue_1, const class FString& CallFunc_GetStringField_ReturnValue_6, int32 CallFunc_GetIntegerField_ReturnValue_1, int32 CallFunc_GetIntegerField_ReturnValue_2, const class FString& CallFunc_GetStringField_ReturnValue_7, const class FString& CallFunc_GetStringField_ReturnValue_8, const class FString& CallFunc_GetStringField_ReturnValue_9, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_GetStringField_ReturnValue_10, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_11, bool CallFunc_IsEmpty_ReturnValue_1, enum class EVaRestRequestStatus CallFunc_GetStatus_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_24, class UUI_DisconnectPopup_C* CallFunc_Custom_Popup_UI_element_3, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, bool CallFunc_Not_PreBool_ReturnValue_4, int32 CallFunc_Get_Data_Int_1, const class FString& CallFunc_Get_Data_string_1, float CallFunc_Get_Data_float_1, bool CallFunc_Get_Data_bool_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Get_Data_Int_2, const class FString& CallFunc_Get_Data_string_2, float CallFunc_Get_Data_float_2, bool CallFunc_Get_Data_bool_2, const class FString& K2Node_CustomEvent_Presence_Status, class FName Temp_name_Variable_2, const struct FOnlineUserPresenceStatusData& K2Node_MakeStruct_OnlineUserPresenceStatusData, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Unique_Id, bool Temp_bool_Variable_8, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_8, bool K2Node_CustomEvent_bWasSuccessful_22, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_2, const struct FOnlineUserPresenceData& K2Node_CustomEvent_Presence_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class FName K2Node_CustomEvent_SessionName_4, bool K2Node_CustomEvent_bWasSuccessful_15, class UVaRestRequestJSON* K2Node_CustomEvent_Request, class UVaRestJsonObject* CallFunc_GetResponseObject_ReturnValue, TArray<class UVaRestJsonValue*>& CallFunc_GetArrayField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_12, class UVaRestJsonValue* CallFunc_Array_Get_Item_2, class UVaRestRequestJSON* K2Node_CustomEvent_Request_JSON_1, class UVaRestJsonObject* K2Node_CustomEvent_JsonObject_1, const class FString& K2Node_CustomEvent_Url_Extension_1, const class FString& CallFunc_AsString_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const struct FGlobalConfig& K2Node_MakeStruct_GlobalConfig, bool CallFunc_WithEditor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_WithEditor_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UVaRestRequestJSON* K2Node_CustomEvent_Request_JSON, class UVaRestJsonObject* K2Node_CustomEvent_JsonObject, const class FString& K2Node_CustomEvent_Url_Extension, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, class UVaRestJsonObject* CallFunc_Create_Data_From_Request_Request_Data, class FName K2Node_CustomEvent_Session_Name_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, class UOnlineSessionSearch* CallFunc_SpawnObject_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, class FName K2Node_CustomEvent_SessionName_5, bool K2Node_CustomEvent_bWasSuccessful_16, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, TArray<class UEOS_SessionReference_C*>& K2Node_MakeArray_Array_1, TArray<struct FOnlineSessionSearchResultBP>& CallFunc_GetSearchResults_ReturnValue, const struct FOnlineSessionSearchResultBP& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, class UEOS_SessionReference_C* CallFunc_SpawnObject_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class FName K2Node_CustomEvent_Session_Name_3, const struct FOnlineSessionSearchResultBP& K2Node_CustomEvent_Session_Reference, bool K2Node_CustomEvent_Auto_Connect_1, bool K2Node_CustomEvent_Bring_Party, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_2, const class FString& CallFunc_Get_Resolved_Connect_String_From_Search_Result_Connection_String, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, class FName K2Node_CustomEvent_Session_Name_2, const struct FOnlineSessionSettingsBP& K2Node_CustomEvent_Settings_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_Session_Name_1, TMap<class FName, struct FOnlineSessionSettingBP> K2Node_CustomEvent_Server_Settings, TMap<class FName, struct FOnlineSessionSettingBP> CallFunc_Internal_Update_Server_Settings_Updated_Server_Settings, bool CallFunc_IsDedicatedServer_ReturnValue_1, class FName K2Node_CustomEvent_Session_Name, const struct FOnlineSessionSettingsBP& K2Node_MakeStruct_OnlineSessionSettingsBP, class UOnlineSessionSubsystemDestroySession* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UOnlinePresenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_25, class UOnlinePresenceSubsystemSetPresence* CallFunc_SetPresence_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_26, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_27, const struct FUniqueNetIdRepl& CallFunc_CreateUniquePlayerId_ReturnValue, class UOnlineSessionSubsystemCreateSession* CallFunc_CreateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const class FString& K2Node_CustomEvent_Session_Id, bool K2Node_CustomEvent_Auto_Connect, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FUniqueNetIdRepl& CallFunc_CreateSessionIdFromString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class FName Temp_name_Variable_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_4, class UOnlineSessionSubsystemFindSessionById* CallFunc_FindSessionById_ReturnValue, enum class EOnJoinSessionCompleteResult_ Temp_byte_Variable_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_SessionName_6, enum class EOnJoinSessionCompleteResult_ K2Node_CustomEvent_Result_10, class FName K2Node_CustomEvent_SessionName_7, enum class EOnJoinSessionCompleteResult_ K2Node_CustomEvent_Result_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, bool CallFunc_Is_In_Party_In_Party_, bool CallFunc_Is_Party_Leader_IsLeader, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, const struct FOnlineSessionSettingsBP& K2Node_CustomEvent_Settings, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_5, class UOnlineSessionSubsystemFindFriendSession* CallFunc_FindFriendSession_ReturnValue, class UOnlineSessionSubsystemUpdateSession* CallFunc_UpdateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, enum class ENetworkFailure K2Node_Event_FailureType, bool K2Node_Event_bIsServer, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_28, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_7, class UPartyId* K2Node_CustomEvent_PartyId_7, const struct FUniqueNetIdRepl& K2Node_CustomEvent_SenderId, class UOnlineSessionSubsystemJoinSession* CallFunc_JoinSession_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_6, class UPartyId* K2Node_CustomEvent_PartyId_6, class UMutablePartyData* K2Node_CustomEvent_PartyData_2, bool CallFunc_GetAttribute_OutFound, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue, bool CallFunc_GetAttribute_OutFound_1, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_1, const class FString& CallFunc_Base64Decode_Dest, bool CallFunc_Base64Decode_ReturnValue, bool CallFunc_GetAttribute_OutFound_2, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_2, class UParty* CallFunc_GetParty_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetLeaderId_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool Temp_bool_Variable_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_6, int64 CallFunc_GetPrimaryPartyType_ReturnValue, class UEOS_PartyReference_C* K2Node_CustomEvent_Party_Id, class UEOS_FriendReference_C* K2Node_CustomEvent_Friend, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_7, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue, bool K2Node_CustomEvent_bWasSuccessful_17, class UOnlinePartySubsystemSendInvitation* CallFunc_SendInvitation_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class UEOS_PartyInviteReference_C* K2Node_CustomEvent_Invite, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_38, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_8, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Party_Member_Id, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_39, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_10, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_40, bool K2Node_CustomEvent_bWasSuccessful_18, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_5, class UPartyId* K2Node_CustomEvent_PartyId_5, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId_2, class FName K2Node_CustomEvent_Namespace_1, class UReadablePartyData* K2Node_CustomEvent_PartyData_1, class UEOS_PartyReference_C* CallFunc_SpawnObject_ReturnValue_2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_4, class UPartyId* K2Node_CustomEvent_PartyId_4, class FName K2Node_CustomEvent_Namespace, class UReadablePartyData* K2Node_CustomEvent_PartyData, class UMutablePartyData* CallFunc_CreateMutablePartyData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_41, class UEOS_PartyInviteReference_C* K2Node_CustomEvent_Rejected_Invite, class APlayerController* CallFunc_GetPlayerController_ReturnValue_11, const class FString& CallFunc_Get__Sender_Sender, const struct FUniqueNetIdRepl& CallFunc_Get__Sender_Sender_ID, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_11, bool CallFunc_RejectInvitation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_42, class UEOS_PartyReference_C* CallFunc_SpawnObject_ReturnValue_3, const class FString& K2Node_CustomEvent_Attribute_Name_1, const struct FVariantDataBP& K2Node_CustomEvent_Data_1, TMap<class FString, struct FVariantDataBP> K2Node_MakeMap_Map, const class FString& K2Node_CustomEvent_Attribute_Name, const struct FVariantDataBP& K2Node_CustomEvent_Data, TMap<class FString, struct FVariantDataBP> K2Node_MakeMap_Map_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_3, class UPartyId* K2Node_CustomEvent_PartyId_3, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId_1, class UBlueprintPartyMember* CallFunc_GetPartyMember_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_2, class UPartyId* K2Node_CustomEvent_PartyId_2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId, enum class EMemberExitedReason_ K2Node_CustomEvent_Reason, bool CallFunc_IsValid_ReturnValue_10, class UOnlinePartySubsystemLeaveParty* CallFunc_LeaveParty_ReturnValue, class UOnlinePartySubsystemKickMember* CallFunc_KickMember_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_1, class UPartyId* K2Node_CustomEvent_PartyId_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_43, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId, class UPartyId* K2Node_CustomEvent_PartyId, class UOnlineSessionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_29, class UOnlineSessionSubsystemFindSessions* CallFunc_FindSessions_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, class APlayerController* CallFunc_GetPlayerController_ReturnValue_12, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_44, const class FString& K2Node_CustomEvent_LobbyId, const struct FOnlinePartyConfiguration& K2Node_MakeStruct_OnlinePartyConfiguration, class ULobbyId* CallFunc_ParseSerializedLobbyId_ReturnValue, class UOnlinePartySubsystemCreateParty* CallFunc_CreateParty_ReturnValue, class UOnlinePartyJoinInfo* CallFunc_Conv_ULobbyIdToUOnlinePartyJoinInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_14, class UOnlinePartyJoinInfo* K2Node_CustomEvent_Target, class UOnlinePartySubsystemJoinParty* CallFunc_JoinParty_ReturnValue, class UPartyId* CallFunc_GetPartyId_ReturnValue, bool CallFunc_Check_If_Should_Leave_Current_Party_ReturnValue, bool CallFunc_IsValid_ReturnValue_15, class UOnlinePresenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_30, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_45, class UEOS_PartyMemberReference_C* CallFunc_SpawnObject_ReturnValue_4, const struct FUniqueNetIdRepl& Temp_struct_Variable_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_13, const struct FOnlineUserPresenceData& CallFunc_Read_Presence_OutPresence, enum class EOnlineCachedResult_ CallFunc_Read_Presence_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_13, TArray<class UBlueprintPartyMember*>& CallFunc_GetPartyMembers_OutPartyMembersArray, bool CallFunc_GetPartyMembers_ReturnValue, class UBlueprintPartyMember* CallFunc_Array_Get_Item_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_46, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UEOS_PartyMemberReference_C* CallFunc_SpawnObject_ReturnValue_5, bool Temp_bool_Variable_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_14, class APlayerController* CallFunc_GetPlayerController_ReturnValue_15, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_14, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_15, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_5, bool K2Node_CustomEvent_bWasSuccessful_19, bool CallFunc_Is_Party_Leader_IsLeader_1, const class FString& CallFunc_Get_Primary_Account_ID_Account_ID, class APlayerController* CallFunc_GetPlayerController_ReturnValue_16, bool CallFunc_Contains_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_16, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_47, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, TArray<class UEOS_FriendReference_C*>& K2Node_MakeArray_Array_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_48, class UEOS_FriendReference_C* CallFunc_SpawnObject_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_User_Id, class UTexture* K2Node_CustomEvent_Default_Avatar, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_6, bool K2Node_CustomEvent_bWasSuccessful_20, bool CallFunc_NotEqual_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_17, class UEOS_FriendReference_C* K2Node_Event_Friend, class UTexture* K2Node_Event_Default_Avatar, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_17, class UOnlineAvatarSubsystemGetAvatar* CallFunc_GetAvatar_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_49, class UTexture* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 K2Node_CustomEvent_Friend_number, class UOnlineFriendRef* CallFunc_GetFriend_ReturnValue, class UEOS_FriendReference_C* CallFunc_SpawnObject_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_50, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_51, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_1, const struct FOnlineUserPresenceData& K2Node_CustomEvent_Presence, class UOnlinePresenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_31, class UEOS_FriendReference_C* CallFunc_Array_Get_Item_5, class UOnlinePresenceSubsystemQueryPresence* CallFunc_QueryPresence_ReturnValue, const struct FOnlineUserPresenceData& CallFunc_GetPresence_ReturnValue, bool CallFunc_IsValid_ReturnValue_17, const struct FUniqueNetIdRepl& CallFunc_Get_Unique_Net_Id_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_5, const struct FUniqueNetIdRepl& Temp_struct_Variable_11, bool Temp_bool_Variable_11, int32 K2Node_CustomEvent_Local_User_Num, class UOnlineIdentitySubsystemAutoLogin* CallFunc_AutoLogin_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_18, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_7, bool K2Node_CustomEvent_bWasSuccessful_21, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_52, int32 K2Node_CustomEvent_LocalUserNum, bool K2Node_CustomEvent_bWasSuccessful, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_Error, bool CallFunc_Can_Link_To_Epic_Games_Account__CanLink_, bool CallFunc_Can_Link_To_Epic_Games_Account__CanLink__1, const class FString& CallFunc_Get_Player_User_Name_Nickname, class UEvents_Manager_C* CallFunc_CreateObject_Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "ExecuteUbergraph_EOS_GameInstance");

	Params::UEOS_GameInstance_C_ExecuteUbergraph_EOS_GameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SessionName_2 = K2Node_CustomEvent_SessionName_2;
	Parms.K2Node_CustomEvent_bWasSuccessful_13 = K2Node_CustomEvent_bWasSuccessful_13;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_LocalUserNum_4 = K2Node_CustomEvent_LocalUserNum_4;
	Parms.K2Node_CustomEvent_bWasSuccessful_12 = K2Node_CustomEvent_bWasSuccessful_12;
	Parms.K2Node_CustomEvent_SearchResult_1 = K2Node_CustomEvent_SearchResult_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_LocalUserNum_3 = K2Node_CustomEvent_LocalUserNum_3;
	Parms.K2Node_CustomEvent_bWasSuccessful_11 = K2Node_CustomEvent_bWasSuccessful_11;
	Parms.K2Node_CustomEvent_SearchResult = K2Node_CustomEvent_SearchResult;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CustomEvent_bWasSuccessful_10 = K2Node_CustomEvent_bWasSuccessful_10;
	Parms.K2Node_CustomEvent_FriendSearchResult_1 = K2Node_CustomEvent_FriendSearchResult_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_bWasSuccessful_9 = K2Node_CustomEvent_bWasSuccessful_9;
	Parms.K2Node_CustomEvent_FriendSearchResult = K2Node_CustomEvent_FriendSearchResult;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_SessionName_1 = K2Node_CustomEvent_SessionName_1;
	Parms.K2Node_CustomEvent_bWasSuccessful_8 = K2Node_CustomEvent_bWasSuccessful_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_SessionName = K2Node_CustomEvent_SessionName;
	Parms.K2Node_CustomEvent_bWasSuccessful_7 = K2Node_CustomEvent_bWasSuccessful_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.K2Node_CustomEvent_LocalUserId_17 = K2Node_CustomEvent_LocalUserId_17;
	Parms.K2Node_CustomEvent_PartyId_17 = K2Node_CustomEvent_PartyId_17;
	Parms.K2Node_CustomEvent_Result_9 = K2Node_CustomEvent_Result_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_LocalUserId_16 = K2Node_CustomEvent_LocalUserId_16;
	Parms.K2Node_CustomEvent_PartyId_16 = K2Node_CustomEvent_PartyId_16;
	Parms.K2Node_CustomEvent_Result_8 = K2Node_CustomEvent_Result_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.K2Node_CustomEvent_LocalUserId_15 = K2Node_CustomEvent_LocalUserId_15;
	Parms.K2Node_CustomEvent_PartyId_15 = K2Node_CustomEvent_PartyId_15;
	Parms.K2Node_CustomEvent_RecipientId_1 = K2Node_CustomEvent_RecipientId_1;
	Parms.K2Node_CustomEvent_Result_7 = K2Node_CustomEvent_Result_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_LocalUserId_14 = K2Node_CustomEvent_LocalUserId_14;
	Parms.K2Node_CustomEvent_PartyId_14 = K2Node_CustomEvent_PartyId_14;
	Parms.K2Node_CustomEvent_RecipientId = K2Node_CustomEvent_RecipientId;
	Parms.K2Node_CustomEvent_Result_6 = K2Node_CustomEvent_Result_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_LocalUserId_13 = K2Node_CustomEvent_LocalUserId_13;
	Parms.K2Node_CustomEvent_PartyId_13 = K2Node_CustomEvent_PartyId_13;
	Parms.K2Node_CustomEvent_Result_5 = K2Node_CustomEvent_Result_5;
	Parms.K2Node_CustomEvent_NotApprovedReason_1 = K2Node_CustomEvent_NotApprovedReason_1;
	Parms.K2Node_CustomEvent_LocalUserId_12 = K2Node_CustomEvent_LocalUserId_12;
	Parms.K2Node_CustomEvent_PartyId_12 = K2Node_CustomEvent_PartyId_12;
	Parms.K2Node_CustomEvent_Result_4 = K2Node_CustomEvent_Result_4;
	Parms.K2Node_CustomEvent_NotApprovedReason = K2Node_CustomEvent_NotApprovedReason;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = CallFunc_GetGameInstanceSubsystem_ReturnValue_8;
	Parms.K2Node_CustomEvent_LocalUserId_11 = K2Node_CustomEvent_LocalUserId_11;
	Parms.K2Node_CustomEvent_PartyId_11 = K2Node_CustomEvent_PartyId_11;
	Parms.K2Node_CustomEvent_MemberId_4 = K2Node_CustomEvent_MemberId_4;
	Parms.K2Node_CustomEvent_Result_3 = K2Node_CustomEvent_Result_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_LocalUserId_10 = K2Node_CustomEvent_LocalUserId_10;
	Parms.K2Node_CustomEvent_PartyId_10 = K2Node_CustomEvent_PartyId_10;
	Parms.K2Node_CustomEvent_MemberId_3 = K2Node_CustomEvent_MemberId_3;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_9 = CallFunc_GetGameInstanceSubsystem_ReturnValue_9;
	Parms.K2Node_CustomEvent_LocalUserId_9 = K2Node_CustomEvent_LocalUserId_9;
	Parms.K2Node_CustomEvent_PartyId_9 = K2Node_CustomEvent_PartyId_9;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_LocalUserId_8 = K2Node_CustomEvent_LocalUserId_8;
	Parms.K2Node_CustomEvent_PartyId_8 = K2Node_CustomEvent_PartyId_8;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_10 = CallFunc_GetGameInstanceSubsystem_ReturnValue_10;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_11 = CallFunc_GetGameInstanceSubsystem_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_12 = CallFunc_GetGameInstanceSubsystem_ReturnValue_12;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_13 = CallFunc_GetGameInstanceSubsystem_ReturnValue_13;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_14 = CallFunc_GetGameInstanceSubsystem_ReturnValue_14;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_15 = CallFunc_GetGameInstanceSubsystem_ReturnValue_15;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_16 = CallFunc_GetGameInstanceSubsystem_ReturnValue_16;
	Parms.CallFunc_ReadFriendsList_ReturnValue = CallFunc_ReadFriendsList_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserNum_2 = K2Node_CustomEvent_LocalUserNum_2;
	Parms.K2Node_CustomEvent_bWasSuccessful_6 = K2Node_CustomEvent_bWasSuccessful_6;
	Parms.K2Node_CustomEvent_ListName_1 = K2Node_CustomEvent_ListName_1;
	Parms.K2Node_CustomEvent_ErrorStr_1 = K2Node_CustomEvent_ErrorStr_1;
	Parms.K2Node_CustomEvent_LocalUserNum_1 = K2Node_CustomEvent_LocalUserNum_1;
	Parms.K2Node_CustomEvent_bWasSuccessful_5 = K2Node_CustomEvent_bWasSuccessful_5;
	Parms.K2Node_CustomEvent_ListName = K2Node_CustomEvent_ListName;
	Parms.K2Node_CustomEvent_ErrorStr = K2Node_CustomEvent_ErrorStr;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_17 = CallFunc_GetGameInstanceSubsystem_ReturnValue_17;
	Parms.CallFunc_GetFriendsList_OutFriends = CallFunc_GetFriendsList_OutFriends;
	Parms.CallFunc_GetFriendsList_ReturnValue = CallFunc_GetFriendsList_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_18 = CallFunc_GetGameInstanceSubsystem_ReturnValue_18;
	Parms.K2Node_CustomEvent_bWasSuccessful_4 = K2Node_CustomEvent_bWasSuccessful_4;
	Parms.K2Node_CustomEvent_ResultTexture_1 = K2Node_CustomEvent_ResultTexture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_CustomEvent_bWasSuccessful_3 = K2Node_CustomEvent_bWasSuccessful_3;
	Parms.K2Node_CustomEvent_ResultTexture = K2Node_CustomEvent_ResultTexture;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_19 = CallFunc_GetGameInstanceSubsystem_ReturnValue_19;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_20 = CallFunc_GetGameInstanceSubsystem_ReturnValue_20;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_21 = CallFunc_GetGameInstanceSubsystem_ReturnValue_21;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_22 = CallFunc_GetGameInstanceSubsystem_ReturnValue_22;
	Parms.K2Node_CustomEvent_bWasSuccessful_2 = K2Node_CustomEvent_bWasSuccessful_2;
	Parms.K2Node_CustomEvent_UserId_4 = K2Node_CustomEvent_UserId_4;
	Parms.K2Node_CustomEvent_Error_3 = K2Node_CustomEvent_Error_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.K2Node_CustomEvent_bWasSuccessful_1 = K2Node_CustomEvent_bWasSuccessful_1;
	Parms.K2Node_CustomEvent_UserId_3 = K2Node_CustomEvent_UserId_3;
	Parms.K2Node_CustomEvent_Error_2 = K2Node_CustomEvent_Error_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_23 = CallFunc_GetGameInstanceSubsystem_ReturnValue_23;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_SessionName_3 = K2Node_CustomEvent_SessionName_3;
	Parms.K2Node_CustomEvent_bWasSuccessful_14 = K2Node_CustomEvent_bWasSuccessful_14;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.CallFunc_CreateWebSocket_ReturnValue = CallFunc_CreateWebSocket_ReturnValue;
	Parms.K2Node_CustomEvent_Message_3 = K2Node_CustomEvent_Message_3;
	Parms.K2Node_CustomEvent_StatusCode = K2Node_CustomEvent_StatusCode;
	Parms.K2Node_CustomEvent_Reason_2 = K2Node_CustomEvent_Reason_2;
	Parms.K2Node_CustomEvent_bWasClean = K2Node_CustomEvent_bWasClean;
	Parms.K2Node_CustomEvent_Error_1 = K2Node_CustomEvent_Error_1;
	Parms.K2Node_CustomEvent_Message_2 = K2Node_CustomEvent_Message_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Custom_Popup_UI_element = CallFunc_Custom_Popup_UI_element;
	Parms.K2Node_CustomEvent_Message_1 = K2Node_CustomEvent_Message_1;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_CustomEvent_Force = K2Node_CustomEvent_Force;
	Parms.K2Node_CustomEvent_Reason_1 = K2Node_CustomEvent_Reason_1;
	Parms.K2Node_CustomEvent_Game_Mode = K2Node_CustomEvent_Game_Mode;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.K2Node_CustomEvent_Successful = K2Node_CustomEvent_Successful;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.K2Node_CustomEvent_Member_Id = K2Node_CustomEvent_Member_Id;
	Parms.K2Node_CustomEvent_Request_3 = K2Node_CustomEvent_Request_3;
	Parms.K2Node_CustomEvent_Request_2 = K2Node_CustomEvent_Request_2;
	Parms.CallFunc_Get_Data_From_Response_Response_Data = CallFunc_Get_Data_From_Response_Response_Data;
	Parms.CallFunc_Get_Data_From_Response_Response_Data_1 = CallFunc_Get_Data_From_Response_Response_Data_1;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue_1 = CallFunc_GetStringField_ReturnValue_1;
	Parms.CallFunc_GetBoolField_ReturnValue = CallFunc_GetBoolField_ReturnValue;
	Parms.CallFunc_GetIntegerField_ReturnValue = CallFunc_GetIntegerField_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue_2 = CallFunc_GetStringField_ReturnValue_2;
	Parms.CallFunc_GetBoolField_ReturnValue_1 = CallFunc_GetBoolField_ReturnValue_1;
	Parms.CallFunc_GetStringField_ReturnValue_3 = CallFunc_GetStringField_ReturnValue_3;
	Parms.CallFunc_GetStringField_ReturnValue_4 = CallFunc_GetStringField_ReturnValue_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Custom_Popup_UI_element_1 = CallFunc_Custom_Popup_UI_element_1;
	Parms.CallFunc_GetStatus_ReturnValue = CallFunc_GetStatus_ReturnValue;
	Parms.CallFunc_GetStatus_ReturnValue_1 = CallFunc_GetStatus_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.K2Node_CustomEvent_Request_1 = K2Node_CustomEvent_Request_1;
	Parms.CallFunc_Get_Data_From_Response_Response_Data_2 = CallFunc_Get_Data_From_Response_Response_Data_2;
	Parms.CallFunc_GetStringField_ReturnValue_5 = CallFunc_GetStringField_ReturnValue_5;
	Parms.CallFunc_GetBoolField_ReturnValue_2 = CallFunc_GetBoolField_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Custom_Popup_UI_element_2 = CallFunc_Custom_Popup_UI_element_2;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_1 = CallFunc_GetObjectField_ReturnValue_1;
	Parms.CallFunc_GetStringField_ReturnValue_6 = CallFunc_GetStringField_ReturnValue_6;
	Parms.CallFunc_GetIntegerField_ReturnValue_1 = CallFunc_GetIntegerField_ReturnValue_1;
	Parms.CallFunc_GetIntegerField_ReturnValue_2 = CallFunc_GetIntegerField_ReturnValue_2;
	Parms.CallFunc_GetStringField_ReturnValue_7 = CallFunc_GetStringField_ReturnValue_7;
	Parms.CallFunc_GetStringField_ReturnValue_8 = CallFunc_GetStringField_ReturnValue_8;
	Parms.CallFunc_GetStringField_ReturnValue_9 = CallFunc_GetStringField_ReturnValue_9;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetStringField_ReturnValue_10 = CallFunc_GetStringField_ReturnValue_10;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue_11 = CallFunc_GetStringField_ReturnValue_11;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_GetStatus_ReturnValue_2 = CallFunc_GetStatus_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_24 = CallFunc_GetGameInstanceSubsystem_ReturnValue_24;
	Parms.CallFunc_Custom_Popup_UI_element_3 = CallFunc_Custom_Popup_UI_element_3;
	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Get_Data_Int_1 = CallFunc_Get_Data_Int_1;
	Parms.CallFunc_Get_Data_string_1 = CallFunc_Get_Data_string_1;
	Parms.CallFunc_Get_Data_float_1 = CallFunc_Get_Data_float_1;
	Parms.CallFunc_Get_Data_bool_1 = CallFunc_Get_Data_bool_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Get_Data_Int_2 = CallFunc_Get_Data_Int_2;
	Parms.CallFunc_Get_Data_string_2 = CallFunc_Get_Data_string_2;
	Parms.CallFunc_Get_Data_float_2 = CallFunc_Get_Data_float_2;
	Parms.CallFunc_Get_Data_bool_2 = CallFunc_Get_Data_bool_2;
	Parms.K2Node_CustomEvent_Presence_Status = K2Node_CustomEvent_Presence_Status;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_MakeStruct_OnlineUserPresenceStatusData = K2Node_MakeStruct_OnlineUserPresenceStatusData;
	Parms.K2Node_CustomEvent_Unique_Id = K2Node_CustomEvent_Unique_Id;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_CustomEvent_UserId_8 = K2Node_CustomEvent_UserId_8;
	Parms.K2Node_CustomEvent_bWasSuccessful_22 = K2Node_CustomEvent_bWasSuccessful_22;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_UserId_2 = K2Node_CustomEvent_UserId_2;
	Parms.K2Node_CustomEvent_Presence_1 = K2Node_CustomEvent_Presence_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.K2Node_CustomEvent_SessionName_4 = K2Node_CustomEvent_SessionName_4;
	Parms.K2Node_CustomEvent_bWasSuccessful_15 = K2Node_CustomEvent_bWasSuccessful_15;
	Parms.K2Node_CustomEvent_Request = K2Node_CustomEvent_Request;
	Parms.CallFunc_GetResponseObject_ReturnValue = CallFunc_GetResponseObject_ReturnValue;
	Parms.CallFunc_GetArrayField_ReturnValue = CallFunc_GetArrayField_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue_12 = CallFunc_GetStringField_ReturnValue_12;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_CustomEvent_Request_JSON_1 = K2Node_CustomEvent_Request_JSON_1;
	Parms.K2Node_CustomEvent_JsonObject_1 = K2Node_CustomEvent_JsonObject_1;
	Parms.K2Node_CustomEvent_Url_Extension_1 = K2Node_CustomEvent_Url_Extension_1;
	Parms.CallFunc_AsString_ReturnValue = CallFunc_AsString_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_GlobalConfig = K2Node_MakeStruct_GlobalConfig;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_WithEditor_ReturnValue_1 = CallFunc_WithEditor_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_CustomEvent_Request_JSON = K2Node_CustomEvent_Request_JSON;
	Parms.K2Node_CustomEvent_JsonObject = K2Node_CustomEvent_JsonObject;
	Parms.K2Node_CustomEvent_Url_Extension = K2Node_CustomEvent_Url_Extension;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;
	Parms.CallFunc_Create_Data_From_Request_Request_Data = CallFunc_Create_Data_From_Request_Request_Data;
	Parms.K2Node_CustomEvent_Session_Name_4 = K2Node_CustomEvent_Session_Name_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_34 = K2Node_CreateDelegate_OutputDelegate_34;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.K2Node_CustomEvent_SessionName_5 = K2Node_CustomEvent_SessionName_5;
	Parms.K2Node_CustomEvent_bWasSuccessful_16 = K2Node_CustomEvent_bWasSuccessful_16;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetSearchResults_ReturnValue = CallFunc_GetSearchResults_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CustomEvent_Session_Name_3 = K2Node_CustomEvent_Session_Name_3;
	Parms.K2Node_CustomEvent_Session_Reference = K2Node_CustomEvent_Session_Reference;
	Parms.K2Node_CustomEvent_Auto_Connect_1 = K2Node_CustomEvent_Auto_Connect_1;
	Parms.K2Node_CustomEvent_Bring_Party = K2Node_CustomEvent_Bring_Party;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_2 = CallFunc_GetControllerUniqueNetId_ReturnValue_2;
	Parms.CallFunc_Get_Resolved_Connect_String_From_Search_Result_Connection_String = CallFunc_Get_Resolved_Connect_String_From_Search_Result_Connection_String;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_35 = K2Node_CreateDelegate_OutputDelegate_35;
	Parms.K2Node_CustomEvent_Session_Name_2 = K2Node_CustomEvent_Session_Name_2;
	Parms.K2Node_CustomEvent_Settings_1 = K2Node_CustomEvent_Settings_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_3 = CallFunc_GetControllerUniqueNetId_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Session_Name_1 = K2Node_CustomEvent_Session_Name_1;
	Parms.K2Node_CustomEvent_Server_Settings = K2Node_CustomEvent_Server_Settings;
	Parms.CallFunc_Internal_Update_Server_Settings_Updated_Server_Settings = CallFunc_Internal_Update_Server_Settings_Updated_Server_Settings;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_Session_Name = K2Node_CustomEvent_Session_Name;
	Parms.K2Node_MakeStruct_OnlineSessionSettingsBP = K2Node_MakeStruct_OnlineSessionSettingsBP;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_25 = CallFunc_GetGameInstanceSubsystem_ReturnValue_25;
	Parms.CallFunc_SetPresence_ReturnValue = CallFunc_SetPresence_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_26 = CallFunc_GetGameInstanceSubsystem_ReturnValue_26;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_27 = CallFunc_GetGameInstanceSubsystem_ReturnValue_27;
	Parms.CallFunc_CreateUniquePlayerId_ReturnValue = CallFunc_CreateUniquePlayerId_ReturnValue;
	Parms.CallFunc_CreateSession_ReturnValue = CallFunc_CreateSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_Session_Id = K2Node_CustomEvent_Session_Id;
	Parms.K2Node_CustomEvent_Auto_Connect = K2Node_CustomEvent_Auto_Connect;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_CreateSessionIdFromString_ReturnValue = CallFunc_CreateSessionIdFromString_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_4 = CallFunc_GetControllerUniqueNetId_ReturnValue_4;
	Parms.CallFunc_FindSessionById_ReturnValue = CallFunc_FindSessionById_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_SessionName_6 = K2Node_CustomEvent_SessionName_6;
	Parms.K2Node_CustomEvent_Result_10 = K2Node_CustomEvent_Result_10;
	Parms.K2Node_CustomEvent_SessionName_7 = K2Node_CustomEvent_SessionName_7;
	Parms.K2Node_CustomEvent_Result_11 = K2Node_CustomEvent_Result_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_36 = K2Node_CreateDelegate_OutputDelegate_36;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_Is_Party_Leader_IsLeader = CallFunc_Is_Party_Leader_IsLeader;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_37 = K2Node_CreateDelegate_OutputDelegate_37;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_CustomEvent_Settings = K2Node_CustomEvent_Settings;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_5 = CallFunc_GetControllerUniqueNetId_ReturnValue_5;
	Parms.CallFunc_FindFriendSession_ReturnValue = CallFunc_FindFriendSession_ReturnValue;
	Parms.CallFunc_UpdateSession_ReturnValue = CallFunc_UpdateSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_Event_FailureType = K2Node_Event_FailureType;
	Parms.K2Node_Event_bIsServer = K2Node_Event_bIsServer;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_28 = CallFunc_GetGameInstanceSubsystem_ReturnValue_28;
	Parms.K2Node_CustomEvent_LocalUserId_7 = K2Node_CustomEvent_LocalUserId_7;
	Parms.K2Node_CustomEvent_PartyId_7 = K2Node_CustomEvent_PartyId_7;
	Parms.K2Node_CustomEvent_SenderId = K2Node_CustomEvent_SenderId;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserId_6 = K2Node_CustomEvent_LocalUserId_6;
	Parms.K2Node_CustomEvent_PartyId_6 = K2Node_CustomEvent_PartyId_6;
	Parms.K2Node_CustomEvent_PartyData_2 = K2Node_CustomEvent_PartyData_2;
	Parms.CallFunc_GetAttribute_OutFound = CallFunc_GetAttribute_OutFound;
	Parms.CallFunc_GetAttribute_OutAttrValue = CallFunc_GetAttribute_OutAttrValue;
	Parms.CallFunc_GetAttribute_OutFound_1 = CallFunc_GetAttribute_OutFound_1;
	Parms.CallFunc_GetAttribute_OutAttrValue_1 = CallFunc_GetAttribute_OutAttrValue_1;
	Parms.CallFunc_Base64Decode_Dest = CallFunc_Base64Decode_Dest;
	Parms.CallFunc_Base64Decode_ReturnValue = CallFunc_Base64Decode_ReturnValue;
	Parms.CallFunc_GetAttribute_OutFound_2 = CallFunc_GetAttribute_OutFound_2;
	Parms.CallFunc_GetAttribute_OutAttrValue_2 = CallFunc_GetAttribute_OutAttrValue_2;
	Parms.CallFunc_GetParty_ReturnValue = CallFunc_GetParty_ReturnValue;
	Parms.CallFunc_GetLeaderId_ReturnValue = CallFunc_GetLeaderId_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_6 = CallFunc_GetControllerUniqueNetId_ReturnValue_6;
	Parms.CallFunc_GetPrimaryPartyType_ReturnValue = CallFunc_GetPrimaryPartyType_ReturnValue;
	Parms.K2Node_CustomEvent_Party_Id = K2Node_CustomEvent_Party_Id;
	Parms.K2Node_CustomEvent_Friend = K2Node_CustomEvent_Friend;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_7 = CallFunc_GetControllerUniqueNetId_ReturnValue_7;
	Parms.CallFunc_GetUserId_ReturnValue = CallFunc_GetUserId_ReturnValue;
	Parms.K2Node_CustomEvent_bWasSuccessful_17 = K2Node_CustomEvent_bWasSuccessful_17;
	Parms.CallFunc_SendInvitation_ReturnValue = CallFunc_SendInvitation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CustomEvent_Invite = K2Node_CustomEvent_Invite;
	Parms.K2Node_CreateDelegate_OutputDelegate_38 = K2Node_CreateDelegate_OutputDelegate_38;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_8 = CallFunc_GetControllerUniqueNetId_ReturnValue_8;
	Parms.K2Node_CustomEvent_Party_Member_Id = K2Node_CustomEvent_Party_Member_Id;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_39 = K2Node_CreateDelegate_OutputDelegate_39;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_9 = CallFunc_GetControllerUniqueNetId_ReturnValue_9;
	Parms.CallFunc_GetPlayerController_ReturnValue_10 = CallFunc_GetPlayerController_ReturnValue_10;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_10 = CallFunc_GetControllerUniqueNetId_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_40 = K2Node_CreateDelegate_OutputDelegate_40;
	Parms.K2Node_CustomEvent_bWasSuccessful_18 = K2Node_CustomEvent_bWasSuccessful_18;
	Parms.K2Node_CustomEvent_LocalUserId_5 = K2Node_CustomEvent_LocalUserId_5;
	Parms.K2Node_CustomEvent_PartyId_5 = K2Node_CustomEvent_PartyId_5;
	Parms.K2Node_CustomEvent_MemberId_2 = K2Node_CustomEvent_MemberId_2;
	Parms.K2Node_CustomEvent_Namespace_1 = K2Node_CustomEvent_Namespace_1;
	Parms.K2Node_CustomEvent_PartyData_1 = K2Node_CustomEvent_PartyData_1;
	Parms.CallFunc_SpawnObject_ReturnValue_2 = CallFunc_SpawnObject_ReturnValue_2;
	Parms.K2Node_CustomEvent_LocalUserId_4 = K2Node_CustomEvent_LocalUserId_4;
	Parms.K2Node_CustomEvent_PartyId_4 = K2Node_CustomEvent_PartyId_4;
	Parms.K2Node_CustomEvent_Namespace = K2Node_CustomEvent_Namespace;
	Parms.K2Node_CustomEvent_PartyData = K2Node_CustomEvent_PartyData;
	Parms.CallFunc_CreateMutablePartyData_ReturnValue = CallFunc_CreateMutablePartyData_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_41 = K2Node_CreateDelegate_OutputDelegate_41;
	Parms.K2Node_CustomEvent_Rejected_Invite = K2Node_CustomEvent_Rejected_Invite;
	Parms.CallFunc_GetPlayerController_ReturnValue_11 = CallFunc_GetPlayerController_ReturnValue_11;
	Parms.CallFunc_Get__Sender_Sender = CallFunc_Get__Sender_Sender;
	Parms.CallFunc_Get__Sender_Sender_ID = CallFunc_Get__Sender_Sender_ID;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_11 = CallFunc_GetControllerUniqueNetId_ReturnValue_11;
	Parms.CallFunc_RejectInvitation_ReturnValue = CallFunc_RejectInvitation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_42 = K2Node_CreateDelegate_OutputDelegate_42;
	Parms.CallFunc_SpawnObject_ReturnValue_3 = CallFunc_SpawnObject_ReturnValue_3;
	Parms.K2Node_CustomEvent_Attribute_Name_1 = K2Node_CustomEvent_Attribute_Name_1;
	Parms.K2Node_CustomEvent_Data_1 = K2Node_CustomEvent_Data_1;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.K2Node_CustomEvent_Attribute_Name = K2Node_CustomEvent_Attribute_Name;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;
	Parms.K2Node_MakeMap_Map_1 = K2Node_MakeMap_Map_1;
	Parms.K2Node_CustomEvent_LocalUserId_3 = K2Node_CustomEvent_LocalUserId_3;
	Parms.K2Node_CustomEvent_PartyId_3 = K2Node_CustomEvent_PartyId_3;
	Parms.K2Node_CustomEvent_MemberId_1 = K2Node_CustomEvent_MemberId_1;
	Parms.CallFunc_GetPartyMember_ReturnValue = CallFunc_GetPartyMember_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserId_2 = K2Node_CustomEvent_LocalUserId_2;
	Parms.K2Node_CustomEvent_PartyId_2 = K2Node_CustomEvent_PartyId_2;
	Parms.K2Node_CustomEvent_MemberId = K2Node_CustomEvent_MemberId;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_LeaveParty_ReturnValue = CallFunc_LeaveParty_ReturnValue;
	Parms.CallFunc_KickMember_ReturnValue = CallFunc_KickMember_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_CustomEvent_LocalUserId_1 = K2Node_CustomEvent_LocalUserId_1;
	Parms.K2Node_CustomEvent_PartyId_1 = K2Node_CustomEvent_PartyId_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_43 = K2Node_CreateDelegate_OutputDelegate_43;
	Parms.K2Node_CustomEvent_LocalUserId = K2Node_CustomEvent_LocalUserId;
	Parms.K2Node_CustomEvent_PartyId = K2Node_CustomEvent_PartyId;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_29 = CallFunc_GetGameInstanceSubsystem_ReturnValue_29;
	Parms.CallFunc_FindSessions_ReturnValue = CallFunc_FindSessions_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_GetPlayerController_ReturnValue_12 = CallFunc_GetPlayerController_ReturnValue_12;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_12 = CallFunc_GetControllerUniqueNetId_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_44 = K2Node_CreateDelegate_OutputDelegate_44;
	Parms.K2Node_CustomEvent_LobbyId = K2Node_CustomEvent_LobbyId;
	Parms.K2Node_MakeStruct_OnlinePartyConfiguration = K2Node_MakeStruct_OnlinePartyConfiguration;
	Parms.CallFunc_ParseSerializedLobbyId_ReturnValue = CallFunc_ParseSerializedLobbyId_ReturnValue;
	Parms.CallFunc_CreateParty_ReturnValue = CallFunc_CreateParty_ReturnValue;
	Parms.CallFunc_Conv_ULobbyIdToUOnlinePartyJoinInfo_ReturnValue = CallFunc_Conv_ULobbyIdToUOnlinePartyJoinInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_JoinParty_ReturnValue = CallFunc_JoinParty_ReturnValue;
	Parms.CallFunc_GetPartyId_ReturnValue = CallFunc_GetPartyId_ReturnValue;
	Parms.CallFunc_Check_If_Should_Leave_Current_Party_ReturnValue = CallFunc_Check_If_Should_Leave_Current_Party_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_30 = CallFunc_GetGameInstanceSubsystem_ReturnValue_30;
	Parms.K2Node_CreateDelegate_OutputDelegate_45 = K2Node_CreateDelegate_OutputDelegate_45;
	Parms.CallFunc_SpawnObject_ReturnValue_4 = CallFunc_SpawnObject_ReturnValue_4;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_13 = CallFunc_GetPlayerController_ReturnValue_13;
	Parms.CallFunc_Read_Presence_OutPresence = CallFunc_Read_Presence_OutPresence;
	Parms.CallFunc_Read_Presence_ReturnValue = CallFunc_Read_Presence_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_13 = CallFunc_GetControllerUniqueNetId_ReturnValue_13;
	Parms.CallFunc_GetPartyMembers_OutPartyMembersArray = CallFunc_GetPartyMembers_OutPartyMembersArray;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_46 = K2Node_CreateDelegate_OutputDelegate_46;
	Parms.CallFunc_GetUserId_ReturnValue_1 = CallFunc_GetUserId_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue_5 = CallFunc_SpawnObject_ReturnValue_5;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_14 = CallFunc_GetPlayerController_ReturnValue_14;
	Parms.CallFunc_GetPlayerController_ReturnValue_15 = CallFunc_GetPlayerController_ReturnValue_15;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_14 = CallFunc_GetControllerUniqueNetId_ReturnValue_14;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_15 = CallFunc_GetControllerUniqueNetId_ReturnValue_15;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1 = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1;
	Parms.K2Node_CustomEvent_UserId_5 = K2Node_CustomEvent_UserId_5;
	Parms.K2Node_CustomEvent_bWasSuccessful_19 = K2Node_CustomEvent_bWasSuccessful_19;
	Parms.CallFunc_Is_Party_Leader_IsLeader_1 = CallFunc_Is_Party_Leader_IsLeader_1;
	Parms.CallFunc_Get_Primary_Account_ID_Account_ID = CallFunc_Get_Primary_Account_ID_Account_ID;
	Parms.CallFunc_GetPlayerController_ReturnValue_16 = CallFunc_GetPlayerController_ReturnValue_16;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_16 = CallFunc_GetControllerUniqueNetId_ReturnValue_16;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_47 = K2Node_CreateDelegate_OutputDelegate_47;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_48 = K2Node_CreateDelegate_OutputDelegate_48;
	Parms.CallFunc_SpawnObject_ReturnValue_6 = CallFunc_SpawnObject_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_CustomEvent_User_Id = K2Node_CustomEvent_User_Id;
	Parms.K2Node_CustomEvent_Default_Avatar = K2Node_CustomEvent_Default_Avatar;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1 = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1;
	Parms.K2Node_CustomEvent_UserId_6 = K2Node_CustomEvent_UserId_6;
	Parms.K2Node_CustomEvent_bWasSuccessful_20 = K2Node_CustomEvent_bWasSuccessful_20;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_17 = CallFunc_GetPlayerController_ReturnValue_17;
	Parms.K2Node_Event_Friend = K2Node_Event_Friend;
	Parms.K2Node_Event_Default_Avatar = K2Node_Event_Default_Avatar;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_17 = CallFunc_GetControllerUniqueNetId_ReturnValue_17;
	Parms.CallFunc_GetAvatar_ReturnValue = CallFunc_GetAvatar_ReturnValue;
	Parms.CallFunc_GetUserId_ReturnValue_2 = CallFunc_GetUserId_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_49 = K2Node_CreateDelegate_OutputDelegate_49;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CustomEvent_Friend_number = K2Node_CustomEvent_Friend_number;
	Parms.CallFunc_GetFriend_ReturnValue = CallFunc_GetFriend_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_7 = CallFunc_SpawnObject_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_50 = K2Node_CreateDelegate_OutputDelegate_50;
	Parms.K2Node_CreateDelegate_OutputDelegate_51 = K2Node_CreateDelegate_OutputDelegate_51;
	Parms.K2Node_CustomEvent_UserId_1 = K2Node_CustomEvent_UserId_1;
	Parms.K2Node_CustomEvent_Presence = K2Node_CustomEvent_Presence;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_31 = CallFunc_GetGameInstanceSubsystem_ReturnValue_31;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_QueryPresence_ReturnValue = CallFunc_QueryPresence_ReturnValue;
	Parms.CallFunc_GetPresence_ReturnValue = CallFunc_GetPresence_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_Get_Unique_Net_Id_ReturnValue = CallFunc_Get_Unique_Net_Id_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2 = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.K2Node_CustomEvent_Local_User_Num = K2Node_CustomEvent_Local_User_Num;
	Parms.CallFunc_AutoLogin_ReturnValue = CallFunc_AutoLogin_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CustomEvent_UserId_7 = K2Node_CustomEvent_UserId_7;
	Parms.K2Node_CustomEvent_bWasSuccessful_21 = K2Node_CustomEvent_bWasSuccessful_21;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_52 = K2Node_CreateDelegate_OutputDelegate_52;
	Parms.K2Node_CustomEvent_LocalUserNum = K2Node_CustomEvent_LocalUserNum;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.CallFunc_Can_Link_To_Epic_Games_Account__CanLink_ = CallFunc_Can_Link_To_Epic_Games_Account__CanLink_;
	Parms.CallFunc_Can_Link_To_Epic_Games_Account__CanLink__1 = CallFunc_Can_Link_To_Epic_Games_Account__CanLink__1;
	Parms.CallFunc_Get_Player_User_Name_Nickname = CallFunc_Get_Player_User_Name_Nickname;
	Parms.CallFunc_CreateObject_Object = CallFunc_CreateObject_Object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.WS Game Services Message Sent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::WS_Game_Services_Message_Sent__DelegateSignature(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "WS Game Services Message Sent__DelegateSignature");

	Params::UEOS_GameInstance_C_WS_Game_Services_Message_Sent__DelegateSignature_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.WS Game Services Message Received__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::WS_Game_Services_Message_Received__DelegateSignature(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "WS Game Services Message Received__DelegateSignature");

	Params::UEOS_GameInstance_C_WS_Game_Services_Message_Received__DelegateSignature_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.WS Game Services Connection Error__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::WS_Game_Services_Connection_Error__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "WS Game Services Connection Error__DelegateSignature");

	Params::UEOS_GameInstance_C_WS_Game_Services_Connection_Error__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.WS Game Services Connected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::WS_Game_Services_Connected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "WS Game Services Connected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Initialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::EOS_Initialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Initialized__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Size Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::EOS_Party_On_Party_Size_Changed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Party Size Changed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.DestroyedSession__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::DestroyedSession__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "DestroyedSession__DelegateSignature");

	Params::UEOS_GameInstance_C_DestroyedSession__DelegateSignature_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Left Match Making Queue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Found_Match                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Left_Reason                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Aborted                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Left_Match_Making_Queue__DelegateSignature(bool Success, bool Found_Match, const class FString& Left_Reason, bool Aborted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Left Match Making Queue__DelegateSignature");

	Params::UEOS_GameInstance_C_Left_Match_Making_Queue__DelegateSignature_Params Parms{};

	Parms.Success = Success;
	Parms.Found_Match = Found_Match;
	Parms.Left_Reason = Left_Reason;
	Parms.Aborted = Aborted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Joined Match Making Queue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Party_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::Joined_Match_Making_Queue__DelegateSignature(bool Success, const class FString& Party_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Joined Match Making Queue__DelegateSignature");

	Params::UEOS_GameInstance_C_Joined_Match_Making_Queue__DelegateSignature_Params Parms{};

	Parms.Success = Success;
	Parms.Party_id = Party_id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Received Presence__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            User_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     Presence_Data                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::Received_Presence__DelegateSignature(const struct FUniqueNetIdRepl& User_ID, const struct FOnlineUserPresenceData& Presence_Data, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Received Presence__DelegateSignature");

	Params::UEOS_GameInstance_C_Received_Presence__DelegateSignature_Params Parms{};

	Parms.User_ID = User_ID;
	Parms.Presence_Data = Presence_Data;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.Fetched Global Config__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::Fetched_Global_Config__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "Fetched Global Config__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Presence Change__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_FriendReference_C*      Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     Presence                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::EOS_Friend_Presence_Change__DelegateSignature(class UEOS_FriendReference_C* Friend, const struct FOnlineUserPresenceData& Presence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Friend Presence Change__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Friend_Presence_Change__DelegateSignature_Params Parms{};

	Parms.Friend = Friend;
	Parms.Presence = Presence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Change__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_FriendReference_C*      Updated_Friend                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Friend_Change__DelegateSignature(class UEOS_FriendReference_C* Updated_Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Friend Change__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Friend_Change__DelegateSignature_Params Parms{};

	Parms.Updated_Friend = Updated_Friend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Member Left__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EMemberExitedReason_    Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Party_On_Party_Member_Left__DelegateSignature(const struct FUniqueNetIdRepl& MemberId, enum class EMemberExitedReason_ Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Party Member Left__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Party_Member_Left__DelegateSignature_Params Parms{};

	Parms.MemberId = MemberId;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Joined Member__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Party_On_Joined_Member__DelegateSignature(const struct FUniqueNetIdRepl& Member_Id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Joined Member__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Joined_Member__DelegateSignature_Params Parms{};

	Parms.Member_Id = Member_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Member Data Received__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UReadablePartyData*          Party_Member_Data                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Party_On_Party_Member_Data_Received__DelegateSignature(const struct FUniqueNetIdRepl& Member_Id, class UReadablePartyData* Party_Member_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Party Member Data Received__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Party_Member_Data_Received__DelegateSignature_Params Parms{};

	Parms.Member_Id = Member_Id;
	Parms.Party_Member_Data = Party_Member_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Data Received__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReadablePartyData*          Party_Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Party_On_Party_Data_Received__DelegateSignature(class UReadablePartyData* Party_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Party Data Received__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Party_Data_Received__DelegateSignature_Params Parms{};

	Parms.Party_Data = Party_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.JoinedSession__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineSessionSearchResultBPSession                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UEOS_GameInstance_C::JoinedSession__DelegateSignature(bool Successful, const struct FOnlineSessionSearchResultBP& Session)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "JoinedSession__DelegateSignature");

	Params::UEOS_GameInstance_C_JoinedSession__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;
	Parms.Session = Session;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.FoundSessions__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UEOS_SessionReference_C*>Search_Results                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEOS_GameInstance_C::FoundSessions__DelegateSignature(bool Successful, TArray<class UEOS_SessionReference_C*>& Search_Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "FoundSessions__DelegateSignature");

	Params::UEOS_GameInstance_C_FoundSessions__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;
	Parms.Search_Results = Search_Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.CreatedSession__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::CreatedSession__DelegateSignature(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "CreatedSession__DelegateSignature");

	Params::UEOS_GameInstance_C_CreatedSession__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Left Party__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::EOS_Party_On_Left_Party__DelegateSignature(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Left Party__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Left_Party__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Kicked Member__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::EOS_Party_On_Kicked_Member__DelegateSignature(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Kicked Member__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Kicked_Member__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Joined Party__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::EOS_Party_On_Joined_Party__DelegateSignature(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Joined Party__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Joined_Party__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Friend Invited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::EOS_Party_On_Friend_Invited__DelegateSignature(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Friend Invited__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Friend_Invited__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Created__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_GameInstance_C::EOS_Party_On_Party_Created__DelegateSignature(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Party Created__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Party_Created__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Leader Was Followed to Session__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Session_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Party_On_Party_Leader_Was_Followed_to_Session__DelegateSignature(class FName Session_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Party Leader Was Followed to Session__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Party_On_Party_Leader_Was_Followed_to_Session__DelegateSignature_Params Parms{};

	Parms.Session_Name = Session_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Invites Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_GameInstance_C::EOS_Party_On_Invites_Changed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Party On Invites Changed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Fetched Friends__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UEOS_FriendReference_C*>Friends                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEOS_GameInstance_C::EOS_Friend_Fetched_Friends__DelegateSignature(bool Successful, TArray<class UEOS_FriendReference_C*>& Friends)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Friend Fetched Friends__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Friend_Fetched_Friends__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;
	Parms.Friends = Friends;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Auth Logged In__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Error_Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Auth_Logged_In__DelegateSignature(bool Successful, const class FString& Error_Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Auth Logged In__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Auth_Logged_In__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;
	Parms.Error_Message = Error_Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Get Avatar__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            User_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEOS_GameInstance_C::EOS_Friend_Get_Avatar__DelegateSignature(bool Successful, class UTexture* Avatar, const struct FUniqueNetIdRepl& User_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_GameInstance_C", "EOS Friend Get Avatar__DelegateSignature");

	Params::UEOS_GameInstance_C_EOS_Friend_Get_Avatar__DelegateSignature_Params Parms{};

	Parms.Successful = Successful;
	Parms.Avatar = Avatar;
	Parms.User_ID = User_ID;

	UObject::ProcessEvent(Func, &Parms);

}

}


