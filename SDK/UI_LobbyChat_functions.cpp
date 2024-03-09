#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LobbyChat.UI_LobbyChat_C
// (None)

class UClass* UUI_LobbyChat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LobbyChat_C");

	return Clss;
}


// UI_LobbyChat_C UI_LobbyChat.Default__UI_LobbyChat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LobbyChat_C* UUI_LobbyChat_C::GetDefaultObj()
{
	static class UUI_LobbyChat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LobbyChat_C*>(UUI_LobbyChat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_LobbyChat.UI_LobbyChat_C.RefreshChatHistory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LobbyChat_C::RefreshChatHistory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "RefreshChatHistory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LobbyChat.UI_LobbyChat_C.AddNewChatMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        UserName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               WarningMessage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_ComplexMessage          K2Node_MakeStruct_St_ComplexMessage                              (HasGetValueTypeHash)
// class UUI_LobbyChatEntry_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LobbyChat_C::AddNewChatMessage(class FText UserName, class FText Message, bool WarningMessage, const struct FSt_ComplexMessage& K2Node_MakeStruct_St_ComplexMessage, class UUI_LobbyChatEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "AddNewChatMessage");

	Params::UUI_LobbyChat_C_AddNewChatMessage_Params Parms{};

	Parms.UserName = UserName;
	Parms.Message = Message;
	Parms.WarningMessage = WarningMessage;
	Parms.K2Node_MakeStruct_St_ComplexMessage = K2Node_MakeStruct_St_ComplexMessage;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyChat.UI_LobbyChat_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LobbyChat_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "Tick");

	Params::UUI_LobbyChat_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyChat.UI_LobbyChat_C.OpenChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LobbyChat_C::OpenChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "OpenChat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LobbyChat.UI_LobbyChat_C.BndEvt__EditableTextBox_112_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LobbyChat_C::BndEvt__EditableTextBox_112_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "BndEvt__EditableTextBox_112_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UUI_LobbyChat_C_BndEvt__EditableTextBox_112_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyChat.UI_LobbyChat_C.CloseChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LobbyChat_C::CloseChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "CloseChat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LobbyChat.UI_LobbyChat_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_LobbyChat_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LobbyChat.UI_LobbyChat_C.Bind To EOS Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LobbyChat_C::Bind_To_EOS_Events()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "Bind To EOS Events");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LobbyChat.UI_LobbyChat_C.Other Member Joined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_LobbyChat_C::Other_Member_Joined(const struct FUniqueNetIdRepl& Member_Id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "Other Member Joined");

	Params::UUI_LobbyChat_C_Other_Member_Joined_Params Parms{};

	Parms.Member_Id = Member_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyChat.UI_LobbyChat_C.Party Member Data Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Member_Id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UReadablePartyData*          Party_Member_Data                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LobbyChat_C::Party_Member_Data_Received(const struct FUniqueNetIdRepl& Member_Id, class UReadablePartyData* Party_Member_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "Party Member Data Received");

	Params::UUI_LobbyChat_C_Party_Member_Data_Received_Params Parms{};

	Parms.Member_Id = Member_Id;
	Parms.Party_Member_Data = Party_Member_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyChat.UI_LobbyChat_C.Self Joined Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LobbyChat_C::Self_Joined_Party(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "Self Joined Party");

	Params::UUI_LobbyChat_C_Self_Joined_Party_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyChat.UI_LobbyChat_C.Send Party Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Warning                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LobbyChat_C::Send_Party_Message(class FText Message, bool Warning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "Send Party Message");

	Params::UUI_LobbyChat_C_Send_Party_Message_Params Parms{};

	Parms.Message = Message;
	Parms.Warning = Warning;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyChat.UI_LobbyChat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_LobbyChat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LobbyChat.UI_LobbyChat_C.Left Match Making Queue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Found_Match                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Left_Reason                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Aborted                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LobbyChat_C::Left_Match_Making_Queue(bool Success, bool Found_Match, const class FString& Left_Reason, bool Aborted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "Left Match Making Queue");

	Params::UUI_LobbyChat_C_Left_Match_Making_Queue_Params Parms{};

	Parms.Success = Success;
	Parms.Found_Match = Found_Match;
	Parms.Left_Reason = Left_Reason;
	Parms.Aborted = Aborted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyChat.UI_LobbyChat_C.ExecuteUbergraph_UI_LobbyChat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Member_Id_1                                   (HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FUniqueNetIdIsValid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Member_Id                                     (HasGetValueTypeHash)
// class UReadablePartyData*          K2Node_CustomEvent_Party_Member_Data                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAttribute_OutFound                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue                               (None)
// bool                               CallFunc_GetAttribute_OutFound_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue_1                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// bool                               K2Node_CustomEvent_Warning                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP                                  (None)
// class FString                      CallFunc_Get_Party_Member_Name_Name                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Party_Member_Name_Name_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP_1                                (None)
// TMap<class FString, struct FVariantDataBP>K2Node_MakeMap_Map                                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Found_Match                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Left_Reason                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Aborted                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LobbyChat_C::ExecuteUbergraph_UI_LobbyChat(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Member_Id_1, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, bool CallFunc_FUniqueNetIdIsValid_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Member_Id, class UReadablePartyData* K2Node_CustomEvent_Party_Member_Data, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetAttribute_OutFound, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue, bool CallFunc_GetAttribute_OutFound_1, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Success_1, bool Temp_bool_IsClosed_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class FText K2Node_CustomEvent_Message, bool K2Node_CustomEvent_Warning, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP, const class FString& CallFunc_Get_Party_Member_Name_Name, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_Get_Party_Member_Name_Name_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_1, TMap<class FString, struct FVariantDataBP> K2Node_MakeMap_Map, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_Success, bool K2Node_CustomEvent_Found_Match, const class FString& K2Node_CustomEvent_Left_Reason, bool K2Node_CustomEvent_Aborted, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyChat_C", "ExecuteUbergraph_UI_LobbyChat");

	Params::UUI_LobbyChat_C_ExecuteUbergraph_UI_LobbyChat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_HasKeyboardFocus_ReturnValue = CallFunc_HasKeyboardFocus_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_CustomEvent_Member_Id_1 = K2Node_CustomEvent_Member_Id_1;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_FUniqueNetIdIsValid_ReturnValue = CallFunc_FUniqueNetIdIsValid_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_Member_Id = K2Node_CustomEvent_Member_Id;
	Parms.K2Node_CustomEvent_Party_Member_Data = K2Node_CustomEvent_Party_Member_Data;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAttribute_OutFound = CallFunc_GetAttribute_OutFound;
	Parms.CallFunc_GetAttribute_OutAttrValue = CallFunc_GetAttribute_OutAttrValue;
	Parms.CallFunc_GetAttribute_OutFound_1 = CallFunc_GetAttribute_OutFound_1;
	Parms.CallFunc_GetAttribute_OutAttrValue_1 = CallFunc_GetAttribute_OutAttrValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_CustomEvent_Warning = K2Node_CustomEvent_Warning;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_1 = K2Node_DynamicCast_AsEOS_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_VariantDataBP = K2Node_MakeStruct_VariantDataBP;
	Parms.CallFunc_Get_Party_Member_Name_Name = CallFunc_Get_Party_Member_Name_Name;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_2 = K2Node_DynamicCast_AsEOS_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_3 = K2Node_DynamicCast_AsEOS_Game_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Get_Party_Member_Name_Name_1 = CallFunc_Get_Party_Member_Name_Name_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeStruct_VariantDataBP_1 = K2Node_MakeStruct_VariantDataBP_1;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Found_Match = K2Node_CustomEvent_Found_Match;
	Parms.K2Node_CustomEvent_Left_Reason = K2Node_CustomEvent_Left_Reason;
	Parms.K2Node_CustomEvent_Aborted = K2Node_CustomEvent_Aborted;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


