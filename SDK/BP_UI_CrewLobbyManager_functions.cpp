#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C
// (Actor)

class UClass* ABP_UI_CrewLobbyManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_CrewLobbyManager_C");

	return Clss;
}


// BP_UI_CrewLobbyManager_C BP_UI_CrewLobbyManager.Default__BP_UI_CrewLobbyManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_UI_CrewLobbyManager_C* ABP_UI_CrewLobbyManager_C::GetDefaultObj()
{
	static class ABP_UI_CrewLobbyManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_UI_CrewLobbyManager_C*>(ABP_UI_CrewLobbyManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Get All Player IDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_CrewLobbyManager_C::Get_All_Player_IDs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Get All Player IDs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Get Party Initial Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReadablePartyData*          Party_Member_Data                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadablePartyData*          CallFunc_Get_Party_Data_Party_Data                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttribute_OutFound                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue                               (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::Get_Party_Initial_Data(class UReadablePartyData* Party_Member_Data, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UReadablePartyData* CallFunc_Get_Party_Data_Party_Data, bool CallFunc_GetAttribute_OutFound, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Get Party Initial Data");

	Params::ABP_UI_CrewLobbyManager_C_Get_Party_Initial_Data_Params Parms{};

	Parms.Party_Member_Data = Party_Member_Data;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Party_Data_Party_Data = CallFunc_Get_Party_Data_Party_Data;
	Parms.CallFunc_GetAttribute_OutFound = CallFunc_GetAttribute_OutFound;
	Parms.CallFunc_GetAttribute_OutAttrValue = CallFunc_GetAttribute_OutAttrValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Check All CrewMembers Ran BeginPlay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               All_Crew_Member_Slots_Finished                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               All_Finished                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_UI_CrewMember_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::Check_All_CrewMembers_Ran_BeginPlay(bool* All_Crew_Member_Slots_Finished, bool All_Finished, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class ABP_UI_CrewMember_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_UI_CrewMember_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Check All CrewMembers Ran BeginPlay");

	Params::ABP_UI_CrewLobbyManager_C_Check_All_CrewMembers_Ran_BeginPlay_Params Parms{};

	Parms.All_Finished = All_Finished;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (All_Crew_Member_Slots_Finished != nullptr)
		*All_Crew_Member_Slots_Finished = Parms.All_Crew_Member_Slots_Finished;

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Send Local Ship Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization                    (HasGetValueTypeHash)
// class FString                      CallFunc_StructToJsonObjectStringV2_OutJsonString                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StructToJsonObjectStringV2_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP                                  (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP_1                                (None)
// TMap<class FString, struct FVariantDataBP>K2Node_MakeMap_Map                                               (None)

void ABP_UI_CrewLobbyManager_C::Send_Local_Ship_Data(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization, const class FString& CallFunc_StructToJsonObjectStringV2_OutJsonString, bool CallFunc_StructToJsonObjectStringV2_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_1, TMap<class FString, struct FVariantDataBP> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Send Local Ship Data");

	Params::ABP_UI_CrewLobbyManager_C_Send_Local_Ship_Data_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Ship_Customization_Customization = CallFunc_Get_Ship_Customization_Customization;
	Parms.CallFunc_StructToJsonObjectStringV2_OutJsonString = CallFunc_StructToJsonObjectStringV2_OutJsonString;
	Parms.CallFunc_StructToJsonObjectStringV2_ReturnValue = CallFunc_StructToJsonObjectStringV2_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_MakeStruct_VariantDataBP = K2Node_MakeStruct_VariantDataBP;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_VariantDataBP_1 = K2Node_MakeStruct_VariantDataBP_1;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Parse Party Member Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReadablePartyData*          Party_Member_Data                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         Crew_Member                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttribute_OutFound                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue                               (None)
// bool                               CallFunc_GetAttribute_OutFound_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue_1                             (None)
// bool                               CallFunc_GetAttribute_OutFound_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue_2                             (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAttribute_OutFound_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue_3                             (None)
// struct FST_ShipCustomisations      CallFunc_JsonStringToStructV2_Struct                             (HasGetValueTypeHash)
// bool                               CallFunc_JsonStringToStructV2_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAttribute_OutFound_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue_4                             (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttribute_OutFound_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue_5                             (None)
// struct FST_PlayerCustomisation     CallFunc_JsonStringToStructV2_Struct_1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_JsonStringToStructV2_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAttribute_OutFound_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue_6                             (None)

void ABP_UI_CrewLobbyManager_C::Parse_Party_Member_Data(class UReadablePartyData* Party_Member_Data, class ABP_UI_CrewMember_C* Crew_Member, bool CallFunc_GetAttribute_OutFound, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue, bool CallFunc_GetAttribute_OutFound_1, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_1, bool CallFunc_GetAttribute_OutFound_2, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetAttribute_OutFound_3, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_3, const struct FST_ShipCustomisations& CallFunc_JsonStringToStructV2_Struct, bool CallFunc_JsonStringToStructV2_ReturnValue, bool CallFunc_GetAttribute_OutFound_4, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_4, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_GetAttribute_OutFound_5, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_5, const struct FST_PlayerCustomisation& CallFunc_JsonStringToStructV2_Struct_1, bool CallFunc_JsonStringToStructV2_ReturnValue_1, bool CallFunc_GetAttribute_OutFound_6, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Parse Party Member Data");

	Params::ABP_UI_CrewLobbyManager_C_Parse_Party_Member_Data_Params Parms{};

	Parms.Party_Member_Data = Party_Member_Data;
	Parms.Crew_Member = Crew_Member;
	Parms.CallFunc_GetAttribute_OutFound = CallFunc_GetAttribute_OutFound;
	Parms.CallFunc_GetAttribute_OutAttrValue = CallFunc_GetAttribute_OutAttrValue;
	Parms.CallFunc_GetAttribute_OutFound_1 = CallFunc_GetAttribute_OutFound_1;
	Parms.CallFunc_GetAttribute_OutAttrValue_1 = CallFunc_GetAttribute_OutAttrValue_1;
	Parms.CallFunc_GetAttribute_OutFound_2 = CallFunc_GetAttribute_OutFound_2;
	Parms.CallFunc_GetAttribute_OutAttrValue_2 = CallFunc_GetAttribute_OutAttrValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttribute_OutFound_3 = CallFunc_GetAttribute_OutFound_3;
	Parms.CallFunc_GetAttribute_OutAttrValue_3 = CallFunc_GetAttribute_OutAttrValue_3;
	Parms.CallFunc_JsonStringToStructV2_Struct = CallFunc_JsonStringToStructV2_Struct;
	Parms.CallFunc_JsonStringToStructV2_ReturnValue = CallFunc_JsonStringToStructV2_ReturnValue;
	Parms.CallFunc_GetAttribute_OutFound_4 = CallFunc_GetAttribute_OutFound_4;
	Parms.CallFunc_GetAttribute_OutAttrValue_4 = CallFunc_GetAttribute_OutAttrValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetAttribute_OutFound_5 = CallFunc_GetAttribute_OutFound_5;
	Parms.CallFunc_GetAttribute_OutAttrValue_5 = CallFunc_GetAttribute_OutAttrValue_5;
	Parms.CallFunc_JsonStringToStructV2_Struct_1 = CallFunc_JsonStringToStructV2_Struct_1;
	Parms.CallFunc_JsonStringToStructV2_ReturnValue_1 = CallFunc_JsonStringToStructV2_ReturnValue_1;
	Parms.CallFunc_GetAttribute_OutFound_6 = CallFunc_GetAttribute_OutFound_6;
	Parms.CallFunc_GetAttribute_OutAttrValue_6 = CallFunc_GetAttribute_OutAttrValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Show Personal Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::Show_Personal_Info(int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class ABP_UI_CrewMember_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Show Personal Info");

	Params::ABP_UI_CrewLobbyManager_C_Show_Personal_Info_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Get Local Mannequin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Mannequin_C*             AsBP_Mannequin                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Mannequin_C*             K2Node_DynamicCast_AsBP_Mannequin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::Get_Local_Mannequin(class ABP_Mannequin_C** AsBP_Mannequin, int32 Temp_int_Variable, class ABP_UI_CrewMember_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class ABP_Mannequin_C* K2Node_DynamicCast_AsBP_Mannequin, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Get Local Mannequin");

	Params::ABP_UI_CrewLobbyManager_C_Get_Local_Mannequin_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Mannequin = K2Node_DynamicCast_AsBP_Mannequin;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Mannequin != nullptr)
		*AsBP_Mannequin = Parms.AsBP_Mannequin;

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Send Local Player Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Player_User_Name_Nickname                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_StructToJsonObjectStringV2_OutJsonString                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StructToJsonObjectStringV2_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP                                  (None)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP_1                                (None)
// class FString                      CallFunc_Get_Primary_Account_ID_Account_ID                       (ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP_2                                (None)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP_3                                (None)
// TMap<class FString, struct FVariantDataBP>K2Node_MakeMap_Map                                               (None)

void ABP_UI_CrewLobbyManager_C::Send_Local_Player_Data(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, const class FString& CallFunc_Get_Player_User_Name_Nickname, const class FString& CallFunc_StructToJsonObjectStringV2_OutJsonString, bool CallFunc_StructToJsonObjectStringV2_ReturnValue, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_1, const class FString& CallFunc_Get_Primary_Account_ID_Account_ID, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_2, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_3, TMap<class FString, struct FVariantDataBP> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Send Local Player Data");

	Params::ABP_UI_CrewLobbyManager_C_Send_Local_Player_Data_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Player_Customization_Customization = CallFunc_Get_Player_Customization_Customization;
	Parms.CallFunc_Get_Player_User_Name_Nickname = CallFunc_Get_Player_User_Name_Nickname;
	Parms.CallFunc_StructToJsonObjectStringV2_OutJsonString = CallFunc_StructToJsonObjectStringV2_OutJsonString;
	Parms.CallFunc_StructToJsonObjectStringV2_ReturnValue = CallFunc_StructToJsonObjectStringV2_ReturnValue;
	Parms.K2Node_MakeStruct_VariantDataBP = K2Node_MakeStruct_VariantDataBP;
	Parms.K2Node_MakeStruct_VariantDataBP_1 = K2Node_MakeStruct_VariantDataBP_1;
	Parms.CallFunc_Get_Primary_Account_ID_Account_ID = CallFunc_Get_Primary_Account_ID_Account_ID;
	Parms.K2Node_MakeStruct_VariantDataBP_2 = K2Node_MakeStruct_VariantDataBP_2;
	Parms.K2Node_MakeStruct_VariantDataBP_3 = K2Node_MakeStruct_VariantDataBP_3;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Get Other Player Initial Data 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         Crew_Member                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          Party_Member_Data                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadablePartyData*          CallFunc_Get_Party_Member_Data_Party_Member_Data                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_CrewLobbyManager_C::Get_Other_Player_Initial_Data_(const struct FUniqueNetIdRepl& Member_Id, class ABP_UI_CrewMember_C* Crew_Member, class UReadablePartyData* Party_Member_Data, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UReadablePartyData* CallFunc_Get_Party_Member_Data_Party_Member_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Get Other Player Initial Data ");

	Params::ABP_UI_CrewLobbyManager_C_Get_Other_Player_Initial_Data__Params Parms{};

	Parms.Member_Id = Member_Id;
	Parms.Crew_Member = Crew_Member;
	Parms.Party_Member_Data = Party_Member_Data;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Party_Member_Data_Party_Member_Data = CallFunc_Get_Party_Member_Data_Party_Member_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.OnRep_Cached Party Ready
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_CrewLobbyManager_C::OnRep_Cached_Party_Ready()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "OnRep_Cached Party Ready");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Get Party Ready
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Ready                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Member_Party_Leader_IsLeader                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::Get_Party_Ready(bool* Ready, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ABP_UI_CrewMember_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Is_In_Party_In_Party_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Is_Member_Party_Leader_IsLeader, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Get Party Ready");

	Params::ABP_UI_CrewLobbyManager_C_Get_Party_Ready_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_1 = K2Node_DynamicCast_AsEOS_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Is_Member_Party_Leader_IsLeader = CallFunc_Is_Member_Party_Leader_IsLeader;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.HideCrewUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewHide                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bOnlyHideInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::HideCrewUI(bool bNewHide, bool bOnlyHideInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "HideCrewUI");

	Params::ABP_UI_CrewLobbyManager_C_HideCrewUI_Params Parms{};

	Parms.bNewHide = bNewHide;
	Parms.bOnlyHideInfo = bOnlyHideInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_UI_CrewLobbyManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Other Member Joined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_CrewLobbyManager_C::Other_Member_Joined(const struct FUniqueNetIdRepl& Member_Id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Other Member Joined");

	Params::ABP_UI_CrewLobbyManager_C_Other_Member_Joined_Params Parms{};

	Parms.Member_Id = Member_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Party Member Data Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UReadablePartyData*          Party_Member_Data                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_CrewLobbyManager_C::Party_Member_Data_Received(const struct FUniqueNetIdRepl& Member_Id, class UReadablePartyData* Party_Member_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Party Member Data Received");

	Params::ABP_UI_CrewLobbyManager_C_Party_Member_Data_Received_Params Parms{};

	Parms.Member_Id = Member_Id;
	Parms.Party_Member_Data = Party_Member_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Self Joined Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::Self_Joined_Party(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Self Joined Party");

	Params::ABP_UI_CrewLobbyManager_C_Self_Joined_Party_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.RegisterCrewSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_UI_CrewMember_C*         Crew_Member                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_CrewLobbyManager_C::RegisterCrewSlot(class ABP_UI_CrewMember_C* Crew_Member)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "RegisterCrewSlot");

	Params::ABP_UI_CrewLobbyManager_C_RegisterCrewSlot_Params Parms{};

	Parms.Crew_Member = Crew_Member;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Self Created Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::Self_Created_Party(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Self Created Party");

	Params::ABP_UI_CrewLobbyManager_C_Self_Created_Party_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Left Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::Left_Party(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Left Party");

	Params::ABP_UI_CrewLobbyManager_C_Left_Party_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Party Member Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EMemberExitedReason_    Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_CrewLobbyManager_C::Party_Member_Left(const struct FUniqueNetIdRepl& MemberId, enum class EMemberExitedReason_ Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Party Member Left");

	Params::ABP_UI_CrewLobbyManager_C_Party_Member_Left_Params Parms{};

	Parms.MemberId = MemberId;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Player Cosmetics Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PlayerCustomisation     Player_Customization                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_CrewLobbyManager_C::Player_Cosmetics_Updated(const struct FST_PlayerCustomisation& Player_Customization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Player Cosmetics Updated");

	Params::ABP_UI_CrewLobbyManager_C_Player_Cosmetics_Updated_Params Parms{};

	Parms.Player_Customization = Player_Customization;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Ship Customization Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ShipCustomisations      Cosmetics                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_CrewLobbyManager_C::Ship_Customization_Updated(const struct FST_ShipCustomisations& Cosmetics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Ship Customization Updated");

	Params::ABP_UI_CrewLobbyManager_C_Ship_Customization_Updated_Params Parms{};

	Parms.Cosmetics = Cosmetics;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Ship Type Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ShipTypes             ShipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_CrewLobbyManager_C::Ship_Type_Updated(enum class E_ShipTypes ShipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Ship Type Updated");

	Params::ABP_UI_CrewLobbyManager_C_Ship_Type_Updated_Params Parms{};

	Parms.ShipType = ShipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Check Existing Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_CrewLobbyManager_C::Check_Existing_Party()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Check Existing Party");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Crew Member Begin Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_CrewLobbyManager_C::Crew_Member_Begin_Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Crew Member Begin Play");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Party Joined Session
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineSessionSearchResultBPSession                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_CrewLobbyManager_C::Party_Joined_Session(bool Successful, const struct FOnlineSessionSearchResultBP& Session)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Party Joined Session");

	Params::ABP_UI_CrewLobbyManager_C_Party_Joined_Session_Params Parms{};

	Parms.Successful = Successful;
	Parms.Session = Session;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ExecuteUbergraph_BP_UI_CrewLobbyManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UEOS_PartyMemberReference_C*>CallFunc_Get_Party_Members_Party_Member_Ids                      (ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         K2Node_CustomEvent_Crew_Member                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_PartyMemberReference_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_UI_CrewMember_C*         CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Successful_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Member_Id                                     (HasGetValueTypeHash)
// class UReadablePartyData*          K2Node_CustomEvent_Party_Member_Data                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Successful_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId                                      (HasGetValueTypeHash)
// enum class EMemberExitedReason_    K2Node_CustomEvent_Reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Member_Id_1                                   (HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_UI_CrewMember_C*         CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         CallFunc_Map_Find_Value_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_2                  (HasGetValueTypeHash)
// class ABP_UI_CrewMember_C*         CallFunc_Map_Find_Value_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FUniqueNetIdRepl>    K2Node_MakeArray_Array                                           (ReferenceParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     K2Node_CustomEvent_Player_Customization                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FST_ShipCustomisations      K2Node_CustomEvent_Cosmetics                                     (HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Is_Party_Leader_IsLeader                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_ShipTypes             K2Node_CustomEvent_ShipType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_MakeStruct_UniqueNetIdRepl                                (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_MakeStruct_UniqueNetIdRepl_1                              (HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_All_CrewMembers_Ran_BeginPlay_All_Crew_Member_Slots_Finished(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineSessionSearchResultBPK2Node_CustomEvent_Session                                       (None)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_CrewLobbyManager_C::ExecuteUbergraph_BP_UI_CrewLobbyManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Success, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class UEOS_PartyMemberReference_C*>& CallFunc_Get_Party_Members_Party_Member_Ids, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, class ABP_UI_CrewMember_C* K2Node_CustomEvent_Crew_Member, class UEOS_PartyMemberReference_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, class ABP_UI_CrewMember_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, bool K2Node_CustomEvent_Successful_2, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Member_Id, class UReadablePartyData* K2Node_CustomEvent_Party_Member_Data, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_Successful_1, int32 CallFunc_Map_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId, enum class EMemberExitedReason_ K2Node_CustomEvent_Reason, int32 CallFunc_Array_Find_ReturnValue, class ABP_UI_CrewMember_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Member_Id_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_UI_CrewMember_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 Temp_int_Variable, class ABP_UI_CrewMember_C* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_2, class ABP_UI_CrewMember_C* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, TArray<struct FUniqueNetIdRepl>& K2Node_MakeArray_Array, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, const struct FST_PlayerCustomisation& K2Node_CustomEvent_Player_Customization, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FST_ShipCustomisations& K2Node_CustomEvent_Cosmetics, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_Is_Party_Leader_IsLeader, enum class E_ShipTypes K2Node_CustomEvent_ShipType, const struct FUniqueNetIdRepl& K2Node_MakeStruct_UniqueNetIdRepl, const struct FUniqueNetIdRepl& K2Node_MakeStruct_UniqueNetIdRepl_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Is_In_Party_In_Party_, bool CallFunc_Check_All_CrewMembers_Ran_BeginPlay_All_Crew_Member_Slots_Finished, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_CustomEvent_Successful, const struct FOnlineSessionSearchResultBP& K2Node_CustomEvent_Session, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "ExecuteUbergraph_BP_UI_CrewLobbyManager");

	Params::ABP_UI_CrewLobbyManager_C_ExecuteUbergraph_BP_UI_CrewLobbyManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Party_Members_Party_Member_Ids = CallFunc_Get_Party_Members_Party_Member_Ids;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Crew_Member = K2Node_CustomEvent_Crew_Member;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.K2Node_CustomEvent_Successful_2 = K2Node_CustomEvent_Successful_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_CustomEvent_Member_Id = K2Node_CustomEvent_Member_Id;
	Parms.K2Node_CustomEvent_Party_Member_Data = K2Node_CustomEvent_Party_Member_Data;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Successful_1 = K2Node_CustomEvent_Successful_1;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_MemberId = K2Node_CustomEvent_MemberId;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_CustomEvent_Member_Id_1 = K2Node_CustomEvent_Member_Id_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_1 = K2Node_DynamicCast_AsEOS_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_2 = CallFunc_GetControllerUniqueNetId_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_CustomEvent_Player_Customization = K2Node_CustomEvent_Player_Customization;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_Cosmetics = K2Node_CustomEvent_Cosmetics;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_2 = K2Node_DynamicCast_AsEOS_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_Is_Party_Leader_IsLeader = CallFunc_Is_Party_Leader_IsLeader;
	Parms.K2Node_CustomEvent_ShipType = K2Node_CustomEvent_ShipType;
	Parms.K2Node_MakeStruct_UniqueNetIdRepl = K2Node_MakeStruct_UniqueNetIdRepl;
	Parms.K2Node_MakeStruct_UniqueNetIdRepl_1 = K2Node_MakeStruct_UniqueNetIdRepl_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_3 = K2Node_DynamicCast_AsEOS_Game_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_Check_All_CrewMembers_Ran_BeginPlay_All_Crew_Member_Slots_Finished = CallFunc_Check_All_CrewMembers_Ran_BeginPlay_All_Crew_Member_Slots_Finished;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_Successful = K2Node_CustomEvent_Successful;
	Parms.K2Node_CustomEvent_Session = K2Node_CustomEvent_Session;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.Crew Ready State Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Crew_Is_Ready                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_CrewLobbyManager_C::Crew_Ready_State_Changed__DelegateSignature(bool Crew_Is_Ready)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CrewLobbyManager_C", "Crew Ready State Changed__DelegateSignature");

	Params::ABP_UI_CrewLobbyManager_C_Crew_Ready_State_Changed__DelegateSignature_Params Parms{};

	Parms.Crew_Is_Ready = Crew_Is_Ready;

	UObject::ProcessEvent(Func, &Parms);

}

}


