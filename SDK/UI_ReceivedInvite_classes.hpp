#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2B0 - 0x260)
// WidgetBlueprintGeneratedClass UI_ReceivedInvite.UI_ReceivedInvite_C
class UUI_ReceivedInvite_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               AcceptButton;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DeclineButton;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FriendNameTxt;                                     // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FriendPersonaImg;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEOS_PartyInviteReference_C*           PartyInvite;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Fetching_Avatar_;                               // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Cached_Avatar;                                     // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Default_Avatar;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_StartMenu_C*                       Menu_Reference;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_ReceivedInvite_C* GetDefaultObj();

	class FText Get_FriendNameTxt_Text_0(bool Temp_bool_Variable, class FText Temp_text_Variable, const class FString& CallFunc_Get__Sender_Sender, const struct FUniqueNetIdRepl& CallFunc_Get__Sender_Sender_ID, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default);
	struct FSlateBrush Get_FriendPersonaImg_Brush_0(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Get__Sender_Sender, const struct FUniqueNetIdRepl& CallFunc_Get__Sender_Sender_ID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue_1);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Recieved_Avatar(bool Successful, class UTexture* Avatar, const struct FUniqueNetIdRepl& UserId);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void ExecuteUbergraph_UI_ReceivedInvite(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UEOS_PartyInviteReference_C* K2Node_DynamicCast_AsEOS_Party_Invite_Reference, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_Successful, class UTexture* K2Node_CustomEvent_Avatar, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Get__Sender_Sender, const struct FUniqueNetIdRepl& CallFunc_Get__Sender_Sender_ID, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Get_Combined_ID_Combined_ID, class ABP_MainMenuCOntroller_C* K2Node_DynamicCast_AsBP_Main_Menu_COntroller, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Add_ReturnValue);
};

}


