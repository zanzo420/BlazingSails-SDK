#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2F8 - 0x260)
// WidgetBlueprintGeneratedClass UI_LobbyChat.UI_LobbyChat_C
class UUI_LobbyChat_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_112;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_ChatHistory;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSt_ComplexMessage>            ChatHistory;                                       // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                               LocalSteamBeaconPlayerStateRef;                    // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChatActive;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FUniqueNetIdRepl, class FString> ChatFixer;                                         // 0x2A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_LobbyChat_C* GetDefaultObj();

	void RefreshChatHistory();
	void AddNewChatMessage(class FText UserName, class FText Message, bool WarningMessage, const struct FSt_ComplexMessage& K2Node_MakeStruct_St_ComplexMessage, class UUI_LobbyChatEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OpenChat();
	void BndEvt__EditableTextBox_112_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void CloseChat();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Bind_To_EOS_Events();
	void Other_Member_Joined(const struct FUniqueNetIdRepl& Member_Id);
	void Party_Member_Data_Received(const struct FUniqueNetIdRepl& Member_Id, class UReadablePartyData* Party_Member_Data);
	void Self_Joined_Party(bool Success);
	void Send_Party_Message(class FText Message, bool Warning);
	void Construct();
	void Left_Match_Making_Queue(bool Success, bool Found_Match, const class FString& Left_Reason, bool Aborted);
	void ExecuteUbergraph_UI_LobbyChat(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Member_Id_1, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, bool CallFunc_FUniqueNetIdIsValid_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Member_Id, class UReadablePartyData* K2Node_CustomEvent_Party_Member_Data, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetAttribute_OutFound, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue, bool CallFunc_GetAttribute_OutFound_1, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Success_1, bool Temp_bool_IsClosed_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class FText K2Node_CustomEvent_Message, bool K2Node_CustomEvent_Warning, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP, const class FString& CallFunc_Get_Party_Member_Name_Name, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_Get_Party_Member_Name_Name_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP_1, TMap<class FString, struct FVariantDataBP> K2Node_MakeMap_Map, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_Success, bool K2Node_CustomEvent_Found_Match, const class FString& K2Node_CustomEvent_Left_Reason, bool K2Node_CustomEvent_Aborted, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable);
};

}


