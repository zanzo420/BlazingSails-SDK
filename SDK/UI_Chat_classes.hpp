#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2F8 - 0x260)
// WidgetBlueprintGeneratedClass UI_Chat.UI_Chat_C
class UUI_Chat_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_155;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Blocker;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_ChatHistory;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      Textbox_EnterMessage;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSt_ComplexMessage>            ChatHistory;                                       // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MessageHistoryAmount;                              // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowEnterMessage;                                 // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Controller_C*                      ControllerRef;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Opened;                                            // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Servername;                                        // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         TeamChat;                                          // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HideChat;                                          // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        BadWordsKeyArray;                                  // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  BadWordsSTTableID;                                 // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Chat_C* GetDefaultObj();

	void CheckKilledName(const struct FSt_ComplexMessage& MessageIn, const class FString& PlayerId, struct FSt_ComplexMessage* MessageOut, bool DidNameChange, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class APlayerState* CallFunc_Array_Get_Item, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FSt_ComplexMessage& K2Node_SetFieldsInStruct_StructOut, const struct FSt_ComplexMessage& K2Node_Select_Default);
	void CheckUsername(const struct FSt_ComplexMessage& MessageIn, const class FString& PlayerId, struct FSt_ComplexMessage* MessageOut, bool DidNameChange, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_FindSubstring_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class APlayerState* CallFunc_Array_Get_Item, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FSt_ComplexMessage& K2Node_SetFieldsInStruct_StructOut, const struct FSt_ComplexMessage& K2Node_Select_Default);
	void CheckForProfanity(const class FString& Message, class FText* FilteredMessage, bool IsPartOfWhiteListedWord, const TArray<class FString>& ReplacementCharacterArray, const class FString& ReplacementCharacter, int32 NextSubstringStartPos, int32 CurrentSubstringStartPos, const TArray<int32>& AsterixPositions, const class FString& ReplacementString, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& Temp_string_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FST_Profanity& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_JoinStringArray_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Clamp_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_FindSubstring_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1);
	void TrimCommand(const class FString& Command, class FString* Trimmed, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue);
	enum class ESlateVisibility SetChatVisibility(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess);
	class FText SetChatChannelName(class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State);
	void Commands(class FText Message, bool* CommandFound, class UClass** ActionBlueprintClass, bool* ServerCommand, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_TrimCommand_Trimmed, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool CallFunc_WithEditor_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSt_ComplexMessage& K2Node_MakeStruct_St_ComplexMessage, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_BooleanOR_ReturnValue_1, class FName CallFunc_Array_Get_Item, const struct FST_Command& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSt_ComplexMessage& K2Node_MakeStruct_St_ComplexMessage_1, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	enum class ESlateVisibility ShowEnterMessage();
	void BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_168_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OpenEnterMessage(bool BringMouseToChatWindow);
	void FadeChatOut();
	void BndEvt__Button_155_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature();
	void ToggleTeamChat();
	void AddChatMessage(const struct FSt_ComplexMessage& NewChatMessage, bool FormatText, bool IsWrittenTextMessage, const class FString& PlayerUsernameId, const class FString& PlayerKillId);
	void Construct();
	void ExecuteUbergraph_UI_Chat(int32 EntryPoint, class UUI_KillFeed_C* CallFunc_Create_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class UUI_ChatMessage_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Commands_CommandFound, class UClass* CallFunc_Commands_ActionBlueprintClass, bool CallFunc_Commands_ServerCommand, bool CallFunc_TextIsEmpty_ReturnValue, bool K2Node_CustomEvent_BringMouseToChatWindow, bool CallFunc_RemoveChildAt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FSt_ComplexMessage& K2Node_CustomEvent_NewChatMessage, bool K2Node_CustomEvent_FormatText, bool K2Node_CustomEvent_IsWrittenTextMessage, const class FString& K2Node_CustomEvent_PlayerUsernameId, const class FString& K2Node_CustomEvent_PlayerKillId, const struct FSt_ComplexMessage& CallFunc_CheckUsername_MessageOut, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_CheckForProfanity_FilteredMessage, const struct FSt_ComplexMessage& CallFunc_CheckKilledName_MessageOut, int32 CallFunc_Array_Add_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class FName CallFunc_StringTableIdAndKeyFromText_OutTableId, const class FString& CallFunc_StringTableIdAndKeyFromText_OutKey, bool CallFunc_StringTableIdAndKeyFromText_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class FText Temp_text_Variable, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_1, class FText K2Node_Select_Default_1, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess_2, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_BooleanAND_ReturnValue_2, TArray<class FString>& CallFunc_GetKeysFromStringTable_ReturnValue);
};

}


