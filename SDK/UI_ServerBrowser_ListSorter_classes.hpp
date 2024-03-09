#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x350 - 0x260)
// WidgetBlueprintGeneratedClass UI_ServerBrowser_ListSorter.UI_ServerBrowser_ListSorter_C
class UUI_ServerBrowser_ListSorter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Relevance_0;                                       // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Relevance_20;                                      // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Relevance_40;                                      // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Relevance_60;                                      // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SortByNameButton;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SortByOfficialButton;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SortByPasswordButton;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SortByPlayersButton;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SortByRelevancyButton;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SortBySlots;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SortByStatusButton;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SortByTODButton;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SortByVersionButton;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_0;                                          // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_10;                                      // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_11;                                      // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_12;                                      // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_13;                                      // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_14;                                      // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bInvertSort;                                       // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SortingByColumn;                                   // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnServerSortMethodChanged;                         // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UListView*                             ListViewRef;                                       // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListView*                             NewVar_0;                                          // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MatchmakingManagerRef;                             // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_ServerBrowser_ListSorter_C* GetDefaultObj();

	void Open_Crew_Slots_Count_Comparator(class UObject* ObjectA, class UObject* ObjectB, bool* Result, class UEOS_SessionReference_C* K2Node_DynamicCast_AsEOS_Session_Reference, bool K2Node_DynamicCast_bSuccess, class UEOS_SessionReference_C* K2Node_DynamicCast_AsEOS_Session_Reference_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Get_Open_Crew_Slot_Count_Open_Crew_Slots, int32 CallFunc_Get_Open_Crew_Slot_Count_Open_Crew_Slots_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void Player_Count_Comparator(class UObject* ObjectA, class UObject* ObjectB, bool* Result, class UEOS_SessionReference_C* K2Node_DynamicCast_AsEOS_Session_Reference, bool K2Node_DynamicCast_bSuccess, class UEOS_SessionReference_C* K2Node_DynamicCast_AsEOS_Session_Reference_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Get_Player_Count_Player_Count, int32 CallFunc_Get_Player_Count_Player_Count_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void Relevancy_Comparator(class UObject* ObjectA, class UObject* ObjectB, bool* Result);
	void Time_Of_Day_Comparator(class UObject* ObjectA, class UObject* ObjectB, bool* Result, class UEOS_SessionReference_C* K2Node_DynamicCast_AsEOS_Session_Reference, bool K2Node_DynamicCast_bSuccess, class UEOS_SessionReference_C* K2Node_DynamicCast_AsEOS_Session_Reference_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Get_Time_of_Day_Found, enum class E_TimesOfDay CallFunc_Get_Time_of_Day_Time_of_Day, bool CallFunc_Get_Time_of_Day_Found_1, enum class E_TimesOfDay CallFunc_Get_Time_of_Day_Time_of_Day_1, bool CallFunc_Greater_ByteByte_ReturnValue);
	void Name_Comparator(class UObject* ObjectA, class UObject* ObjectB, bool* Result, class UEOS_SessionReference_C* K2Node_DynamicCast_AsEOS_Session_Reference, bool K2Node_DynamicCast_bSuccess, class UEOS_SessionReference_C* K2Node_DynamicCast_AsEOS_Session_Reference_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Get_Time_of_Day_Found, enum class E_TimesOfDay CallFunc_Get_Time_of_Day_Time_of_Day, bool CallFunc_Get_Time_of_Day_Found_1, enum class E_TimesOfDay CallFunc_Get_Time_of_Day_Time_of_Day_1, bool CallFunc_Greater_ByteByte_ReturnValue);
	struct FSlateColor GetSlot_SlateColor(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void SortByFreeCrewSlots(TArray<class UEOS_SessionReference_C*>& Server_List, int32 Compareval, int32 CurrentVal, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	enum class ESlateVisibility GetRightsideSpacer_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	struct FSlateColor GetVersion_SlateColor(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	struct FSlateColor GetTOD_SlateColor(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	struct FSlateColor GetPlayers_SlateColor(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	struct FSlateColor GetStatus_SlateColor(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	struct FSlateColor GetName_SlateColor(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	struct FLinearColor GetOfficial_ColorAndOpacity(bool Temp_bool_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	struct FLinearColor GetPassword_ColorAndOpacity(bool Temp_bool_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	struct FLinearColor GetRelevance_ColorAndOpacity(bool Temp_bool_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void SortByOfficial(TArray<class UEOS_SessionReference_C*>& ServerList);
	void Sort_By_Player_Count(TArray<class UEOS_SessionReference_C*>& ServerList, int32 CurrentVal, int32 Compareval, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SortByVersion(TArray<class UEOS_SessionReference_C*>& ServerList);
	void SortByStatus(TArray<class UEOS_SessionReference_C*>& ServerList, const TArray<class UEOS_SessionReference_C*>& PregameServers, const TArray<class UEOS_SessionReference_C*>& InProgressServers, class UEOS_SessionReference_C* CurrentVal, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Get_Session_State_Found, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UEOS_SessionReference_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void SortByRelevancy(TArray<class UEOS_SessionReference_C*>& ServerList, float Compareval, float CurrentVal, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SortByPassword(TArray<class UEOS_SessionReference_C*>& ServerList, class UEOS_SessionReference_C* CurrentVal, const TArray<class UEOS_SessionReference_C*>& OpenServers, const TArray<class UEOS_SessionReference_C*>& PassServers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Has_Password__Found, bool CallFunc_Has_Password__HasPassword, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UEOS_SessionReference_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SortByTOD(TArray<class UEOS_SessionReference_C*>& ServerList, enum class E_TimesOfDay Compareval, enum class E_TimesOfDay CurrentVal, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SortByName(TArray<class UEOS_SessionReference_C*>& ServerList, const class FString& CompareServername, const class FString& CurrentServername, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void EnableSortBy(int32 ColumnIndex, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SortServers(TArray<class UEOS_SessionReference_C*>& UnsortedServers, bool K2Node_SwitchInteger_CmpSuccess);
	void BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByOfficialButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByPasswordButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByPlayersButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByRelevancyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByStatusButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByTODButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SortByVersionButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SortBySlots_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_ServerBrowser_ListSorter(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void OnServerSortMethodChanged__DelegateSignature();
};

}


