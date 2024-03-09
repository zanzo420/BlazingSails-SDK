#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_PartyMemberReference.EOS_PartyMemberReference_C
// (None)

class UClass* UEOS_PartyMemberReference_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_PartyMemberReference_C");

	return Clss;
}


// EOS_PartyMemberReference_C EOS_PartyMemberReference.Default__EOS_PartyMemberReference_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEOS_PartyMemberReference_C* UEOS_PartyMemberReference_C::GetDefaultObj()
{
	static class UEOS_PartyMemberReference_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOS_PartyMemberReference_C*>(UEOS_PartyMemberReference_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Epic Token
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Token                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_PartyMemberReference_C::Set_Epic_Token(const class FString& Token)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Set Epic Token");

	Params::UEOS_PartyMemberReference_C_Set_Epic_Token_Params Parms{};

	Parms.Token = Token;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Steam Token
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Token                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_PartyMemberReference_C::Set_Steam_Token(const class FString& Token)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Set Steam Token");

	Params::UEOS_PartyMemberReference_C_Set_Steam_Token_Params Parms{};

	Parms.Token = Token;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Restricted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Restricted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_PartyMemberReference_C::Set_Restricted(bool Restricted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Set Restricted");

	Params::UEOS_PartyMemberReference_C_Set_Restricted_Params Parms{};

	Parms.Restricted = Restricted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Player Level
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_PartyMemberReference_C::Set_Player_Level(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Set Player Level");

	Params::UEOS_PartyMemberReference_C_Set_Player_Level_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Player Cosmetics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PlayerCustomisation     Player_Cosmetics                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_StructToJsonObjectStringV2_OutJsonString                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StructToJsonObjectStringV2_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_PartyMemberReference_C::Set_Player_Cosmetics(const struct FST_PlayerCustomisation& Player_Cosmetics, const class FString& CallFunc_StructToJsonObjectStringV2_OutJsonString, bool CallFunc_StructToJsonObjectStringV2_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Set Player Cosmetics");

	Params::UEOS_PartyMemberReference_C_Set_Player_Cosmetics_Params Parms{};

	Parms.Player_Cosmetics = Player_Cosmetics;
	Parms.CallFunc_StructToJsonObjectStringV2_OutJsonString = CallFunc_StructToJsonObjectStringV2_OutJsonString;
	Parms.CallFunc_StructToJsonObjectStringV2_ReturnValue = CallFunc_StructToJsonObjectStringV2_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Ship Cosmetics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ShipCustomisations      Ship_Cosmetics                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      CallFunc_StructToJsonObjectStringV2_OutJsonString                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StructToJsonObjectStringV2_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_PartyMemberReference_C::Set_Ship_Cosmetics(const struct FST_ShipCustomisations& Ship_Cosmetics, const class FString& CallFunc_StructToJsonObjectStringV2_OutJsonString, bool CallFunc_StructToJsonObjectStringV2_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Set Ship Cosmetics");

	Params::UEOS_PartyMemberReference_C_Set_Ship_Cosmetics_Params Parms{};

	Parms.Ship_Cosmetics = Ship_Cosmetics;
	Parms.CallFunc_StructToJsonObjectStringV2_OutJsonString = CallFunc_StructToJsonObjectStringV2_OutJsonString;
	Parms.CallFunc_StructToJsonObjectStringV2_ReturnValue = CallFunc_StructToJsonObjectStringV2_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set All Atributes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Primary_Acount_ID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Ready_State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Curse_State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      Ship_Cosmetics                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     Player_Cosmetics                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Restricted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Steam_Token                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Epic_Token                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_PartyMemberReference_C::Set_All_Atributes(const class FString& Name, const class FString& Primary_Acount_ID, bool Ready_State, bool Curse_State, const struct FST_ShipCustomisations& Ship_Cosmetics, const struct FST_PlayerCustomisation& Player_Cosmetics, int32 Level, bool Restricted, const class FString& Steam_Token, const class FString& Epic_Token)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Set All Atributes");

	Params::UEOS_PartyMemberReference_C_Set_All_Atributes_Params Parms{};

	Parms.Name = Name;
	Parms.Primary_Acount_ID = Primary_Acount_ID;
	Parms.Ready_State = Ready_State;
	Parms.Curse_State = Curse_State;
	Parms.Ship_Cosmetics = Ship_Cosmetics;
	Parms.Player_Cosmetics = Player_Cosmetics;
	Parms.Level = Level;
	Parms.Restricted = Restricted;
	Parms.Steam_Token = Steam_Token;
	Parms.Epic_Token = Epic_Token;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Request Existing Attributes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_PartyMemberReference_C::Request_Existing_Attributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Request Existing Attributes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Player Cosmetics Updated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_PlayerCustomisation     CallFunc_JsonStringToStructV2_Struct                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_JsonStringToStructV2_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_PartyMemberReference_C::Player_Cosmetics_Updated(int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, const struct FST_PlayerCustomisation& CallFunc_JsonStringToStructV2_Struct, bool CallFunc_JsonStringToStructV2_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Player Cosmetics Updated");

	Params::UEOS_PartyMemberReference_C_Player_Cosmetics_Updated_Params Parms{};

	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_JsonStringToStructV2_Struct = CallFunc_JsonStringToStructV2_Struct;
	Parms.CallFunc_JsonStringToStructV2_ReturnValue = CallFunc_JsonStringToStructV2_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Ship Cosmetics Updated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_JsonStringToStructV2_Struct                             (HasGetValueTypeHash)
// bool                               CallFunc_JsonStringToStructV2_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_PartyMemberReference_C::Ship_Cosmetics_Updated(int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, const struct FST_ShipCustomisations& CallFunc_JsonStringToStructV2_Struct, bool CallFunc_JsonStringToStructV2_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Ship Cosmetics Updated");

	Params::UEOS_PartyMemberReference_C_Ship_Cosmetics_Updated_Params Parms{};

	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_JsonStringToStructV2_Struct = CallFunc_JsonStringToStructV2_Struct;
	Parms.CallFunc_JsonStringToStructV2_ReturnValue = CallFunc_JsonStringToStructV2_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Get Ready
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_PartyMemberReference_C::Get_Ready(bool* Ready, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Get Ready");

	Params::UEOS_PartyMemberReference_C_Get_Ready_Params Parms{};

	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Ready
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_PartyMemberReference_C::Set_Ready(bool Ready)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Set Ready");

	Params::UEOS_PartyMemberReference_C_Set_Ready_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Create Attributes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Party_Member_Replicated_Attribute_C*CallFunc_SpawnObject_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_PartyMemberReference_C::Create_Attributes(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_6, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_2, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_7, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_4, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_5, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_6, uint8 CallFunc_MakeLiteralByte_ReturnValue_8, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_7, uint8 CallFunc_MakeLiteralByte_ReturnValue_9, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_8, class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Create Attributes");

	Params::UEOS_PartyMemberReference_C_Create_Attributes_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_4 = CallFunc_MakeLiteralByte_ReturnValue_4;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_5 = CallFunc_MakeLiteralByte_ReturnValue_5;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_6 = CallFunc_MakeLiteralByte_ReturnValue_6;
	Parms.CallFunc_SpawnObject_ReturnValue_2 = CallFunc_SpawnObject_ReturnValue_2;
	Parms.CallFunc_SpawnObject_ReturnValue_3 = CallFunc_SpawnObject_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_7 = CallFunc_MakeLiteralByte_ReturnValue_7;
	Parms.CallFunc_SpawnObject_ReturnValue_4 = CallFunc_SpawnObject_ReturnValue_4;
	Parms.CallFunc_SpawnObject_ReturnValue_5 = CallFunc_SpawnObject_ReturnValue_5;
	Parms.CallFunc_SpawnObject_ReturnValue_6 = CallFunc_SpawnObject_ReturnValue_6;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_8 = CallFunc_MakeLiteralByte_ReturnValue_8;
	Parms.CallFunc_SpawnObject_ReturnValue_7 = CallFunc_SpawnObject_ReturnValue_7;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_9 = CallFunc_MakeLiteralByte_ReturnValue_9;
	Parms.CallFunc_SpawnObject_ReturnValue_8 = CallFunc_SpawnObject_ReturnValue_8;
	Parms.CallFunc_SpawnObject_ReturnValue_9 = CallFunc_SpawnObject_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Get User ID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            User_ID                                                          (Parm, OutParm, HasGetValueTypeHash)

void UEOS_PartyMemberReference_C::Get_User_ID(struct FUniqueNetIdRepl* User_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Get User ID");

	Params::UEOS_PartyMemberReference_C_Get_User_ID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (User_ID != nullptr)
		*User_ID = std::move(Parms.User_ID);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.ToString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)

void UEOS_PartyMemberReference_C::ToString(class FString* Value, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "ToString");

	Params::UEOS_PartyMemberReference_C_ToString_Params Parms{};

	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_PartyMemberReference_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.ExecuteUbergraph_EOS_PartyMemberReference
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_PartyMemberReference_C::ExecuteUbergraph_EOS_PartyMemberReference(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_PartyMemberReference_C", "ExecuteUbergraph_EOS_PartyMemberReference");

	Params::UEOS_PartyMemberReference_C_ExecuteUbergraph_EOS_PartyMemberReference_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


