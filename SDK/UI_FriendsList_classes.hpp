#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x2C9 - 0x260)
// WidgetBlueprintGeneratedClass UI_FriendsList.UI_FriendsList_C
class UUI_FriendsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               AwayButton;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             AwayFriendsListView;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DropDownIcon_Away;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DropDownIcon_Online;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DropDownIcon_SameGame;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             InGameFriendsListView_Epic;                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               OnlineButton;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             OnlineFriendsListView;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RefreshFriendsList;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SameGameButton;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      SearchFriendBox;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsSearchingFriend;                                // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsSameGameExpanded;                               // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsOnlineExpanded;                                 // 0x2C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsAwayExpanded;                                   // 0x2C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsSameGameExpanded_Backup;                        // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsOnlineExpanded_Backup;                          // 0x2C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsAwayExpanded_Backup;                            // 0x2C6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanFetchFriendsListAgain;                          // 0x2C7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InGameBackup;                                      // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_FriendsList_C* GetDefaultObj();

	void Remove_Friend_from_List(class UListView* List, class UEOS_FriendReference_C* FriendToRemove, int32 Temp_int_Loop_Counter_Variable, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, class UEOS_FriendReference_C* K2Node_DynamicCast_AsEOS_Friend_Reference, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Sort_Friend_And_Add(class UEOS_FriendReference_C* Unsorted_Friend, const struct FOnlineUserPresenceData& Presence, class UEOS_FriendReference_C* CurrentFriend, const TArray<class UEOS_FriendReference_C*>& AwayFriends, const TArray<class UEOS_FriendReference_C*>& SameGameFriends, const TArray<class UEOS_FriendReference_C*>& IngameFriends, const TArray<class UEOS_FriendReference_C*>& OnlineFriends, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetIndexForItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetIndexForItem_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_GetIndexForItem_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2);
	void SetAllCategoriesExpanded(bool bOverrideValue);
	void SetCategoryExpanded(bool bOverride, bool bResetToPrevious, class UWidget*& ListView, class UWidget*& CollapsedIndicator, bool& bCurrentValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3);
	void HideEmptyLists(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, TArray<class UButton*>& K2Node_MakeArray_Array, class UButton* CallFunc_Array_Get_Item, TArray<class UListView*>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Length_ReturnValue, class UListView* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility ShowSearchFriendsList(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void AddSortedToListView(TArray<class UEOS_FriendReference_C*>& SameGame, TArray<class UEOS_FriendReference_C*>& Online, TArray<class UEOS_FriendReference_C*>& Ingame, TArray<class UEOS_FriendReference_C*>& Away, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class UEOS_FriendReference_C* CallFunc_Array_Get_Item, class UEOS_FriendReference_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Get_Platform_Platform_Name, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UEOS_FriendReference_C* CallFunc_Array_Get_Item_2, const class FString& CallFunc_Get_Platform_Platform_Name_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UEOS_FriendReference_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_Get_Platform_Platform_Name_2, bool CallFunc_Less_IntInt_ReturnValue_3);
	void SortFriends(TArray<class UEOS_FriendReference_C*>& Unsorted, class UEOS_FriendReference_C* CurrentFriend, const TArray<class UEOS_FriendReference_C*>& AwayFriends, const TArray<class UEOS_FriendReference_C*>& SameGameFriends, const TArray<class UEOS_FriendReference_C*>& IngameFriends, const TArray<class UEOS_FriendReference_C*>& OnlineFriends, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FOnlineUserPresenceData& CallFunc_GetPresence_ReturnValue, class UEOS_FriendReference_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UEOS_FriendReference_C*>& K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void RefreshListView(class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance);
	void Construct();
	void BndEvt__SameGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OnlineButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AwayButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SearchFriendBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void Fetched_Friends(bool Successful, TArray<class UEOS_FriendReference_C*>& Friends);
	void Presence_Changed(class UEOS_FriendReference_C* Friend, const struct FOnlineUserPresenceData& Presence);
	void Backup_Expand_Settings();
	void Friend_Changed(class UEOS_FriendReference_C* Updated_Friend);
	void BndEvt__UI_FriendsList_RefreshFriendsList_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_FriendsList(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_Successful, TArray<class UEOS_FriendReference_C*>& K2Node_CustomEvent_Friends, class UEOS_FriendReference_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FOnlineUserPresenceData& CallFunc_GetPresence_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UEOS_FriendReference_C* K2Node_CustomEvent_Friend, const struct FOnlineUserPresenceData& K2Node_CustomEvent_Presence, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UEOS_FriendReference_C* K2Node_CustomEvent_Updated_Friend, bool CallFunc_IsValid_ReturnValue, const struct FOnlineUserPresenceData& CallFunc_GetPresence_ReturnValue_1);
};

}


