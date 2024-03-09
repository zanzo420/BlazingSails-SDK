#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x398 - 0x260)
// WidgetBlueprintGeneratedClass UI_ServerBrowser.UI_ServerBrowser_C
class UUI_ServerBrowser_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CloseButton;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RefreshListButton;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerBrowser_Category_C*          RegionCategory_AS;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerBrowser_Category_C*          RegionCategory_EU;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerBrowser_Category_C*          RegionCategory_Global;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerBrowser_Category_C*          RegionCategory_NA;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerBrowser_Category_C*          RegionCategory_OC;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerBrowser_Category_C*          RegionCategory_RU;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerBrowser_Category_C*          RegionCategory_SA;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ServerList;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ServerListView;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ShowEmptyCheckbox;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ShowFullCheckbox;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ShowLanServersCheckbox;                            // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ShowMatchMakingServersCheckbox;                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ShowOnlyDedicatedCheckbox;                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ShowPasswordedCheckbox;                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ShowProgressCheckbox;                              // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_166;                                     // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextFilterWarning;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextStatusFilterWarning;                           // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Loading_C*                         UI_Loading;                                        // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerBrowser_ListSorter_C*        UI_ServerBrowser_ListSorter;                       // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerBrowser_MapFilter_C*         UI_ServerBrowser_MapFilter;                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         LookingForServer;                                  // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Outdated;                                          // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2220[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HighestFoundVersion;                               // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FindLAN;                                           // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2221[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalPlayerAmount;                                 // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UEOS_SessionReference_C*>       ListenServers;                                     // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UEOS_SessionReference_C*>       DedicatedServers;                                  // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        Filter_Regions;                                    // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_StartMenu_C*                       StartMenuRef;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ServerPreview;                                     // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowMatchmaking;                                   // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2222[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEOS_SessionReference_C*>       MatchmakingServers;                                // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_ServerBrowser_C* GetDefaultObj();

	void ApplyFilter_Matchmaking(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Matchmaking_Server__Found, bool CallFunc_Is_Matchmaking_Server__Match_Making, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ApplyFilter_LanServers(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Dedicated_Server__Found_Attribute, bool CallFunc_Is_Dedicated_Server__Dedicated_Server, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void CheckFilters(bool* NotLastActiveFilter, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, bool CallFunc_IsChecked_ReturnValue_3, bool CallFunc_IsChecked_ReturnValue_4, bool CallFunc_IsChecked_ReturnValue_5);
	void SetJoiningGameUI(bool IsJoining, bool CallFunc_Not_PreBool_ReturnValue);
	void ApplyFilter_Empty(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Empty__Session_is_Empty, bool CallFunc_IsChecked_ReturnValue);
	void ApplyFilter_Full(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Full__Session_is_Full, bool CallFunc_IsChecked_ReturnValue);
	void FilterByTOD();
	void ApplyFilter_TOD(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Get_Time_of_Day_Found, enum class E_TimesOfDay CallFunc_Get_Time_of_Day_Time_of_Day, TArray<uint8>& CallFunc_GetCheckedMaps_MapBytesArr, bool CallFunc_Array_Contains_ReturnValue);
	struct FLinearColor GetRefreshButton_ColorAndOpacity(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsHovered_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void ApplyFilter_Inprogress(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Get_Session_State_Found, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ApplyFilter_Passworded(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Has_Password__Found, bool CallFunc_Has_Password__HasPassword, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsChecked_ReturnValue);
	void Apply_Filter_Only_Dedicated(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Dedicated_Server__Found_Attribute, bool CallFunc_Is_Dedicated_Server__Dedicated_Server, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsChecked_ReturnValue);
	void ApplyFilters(class UEOS_SessionReference_C* Session, bool* bPassedFilters, bool Result, bool CallFunc_ApplyFilter_Matchmaking_bPassedFilter, bool CallFunc_ApplyFilter_LanServers_bPassedFilter, bool CallFunc_ApplyFilter_TOD_bPassedFilter, bool CallFunc_ApplyFilter_Empty_bPassedFilter, bool CallFunc_ApplyFilter_Full_bPassedFilter, bool CallFunc_ApplyFilter_Inprogress_bPassedFilter, bool CallFunc_ApplyFilter_Passworded_bPassedFilter, bool CallFunc_Apply_Filter_Only_Dedicated_bPassedFilter, bool CallFunc_ApplyFilter_Region_bPassedFilter);
	void FilterByRegion(class UUI_ServerBrowser_Category_C* Invoker, const class FString& RegionVal, const TArray<class UUI_ServerBrowser_Category_C*>& CategoriesArray, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_ServerBrowser_Category_C* CallFunc_Array_Get_Item, const class FString& CallFunc_ToLower_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_ServerBrowser_Category_C*>& K2Node_MakeArray_Array, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void ApplyFilter_Region(class UEOS_SessionReference_C* Session, bool* bPassedFilter, const class FString& Temp_string_Variable, bool CallFunc_Get_Region_Found, const class FString& CallFunc_Get_Region_Region, const class FString& CallFunc_ToLower_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void AddSortedServers(class UEOS_SessionReference_C* SessionResult, uint8 ServerType, class UUI_ServerBrowserGame_C* WidgetRef, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UUI_ServerBrowserGame_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_GetProjectVersion_ReturnValue, class UEOS_SessionReference_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Is_Matchmaking_Server__Found, bool CallFunc_Is_Matchmaking_Server__Match_Making, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_Get_Session_State_Found, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State, bool CallFunc_Get_GameMode_Found, enum class E_GameModes CallFunc_Get_GameMode_Game_Mode, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Get_Map_Found, const class FString& CallFunc_Get_Map_Map, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_Get_Session_State_Found_1, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State_1, int32 CallFunc_Get_Open_Crew_Slot_Count_Open_Crew_Slots, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Is_Dedicated_Server__Found_Attribute, bool CallFunc_Is_Dedicated_Server__Dedicated_Server, bool CallFunc_BooleanAND_ReturnValue_3, int32 CallFunc_Get_Player_Count_Player_Count, bool CallFunc_Get_Time_of_Day_Found, enum class E_TimesOfDay CallFunc_Get_Time_of_Day_Time_of_Day, bool CallFunc_Get_MapName_Found, const class FString& CallFunc_Get_MapName_Version, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_Get_Password_Found, const class FString& CallFunc_Get_Password_Version, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Get_Session_State_Found_2, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Get_Version_Found, const class FString& CallFunc_Get_Version_Version, bool CallFunc_Get_Session_State_Found_3, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_Get_Session_Name_Found, const class FString& CallFunc_Get_Session_Name_Server_Name, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Get_Max_Player_Count_Player_Count, bool CallFunc_LessEqual_IntInt_ReturnValue, class UEOS_SessionReference_C* CallFunc_Array_Get_Item_1, class UEOS_SessionReference_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Get_Session_Ping_Ping_in_ms, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_3);
	void SortServer(class UEOS_SessionReference_C* SessionResult, bool CallFunc_Is_Matchmaking_Server__Found, bool CallFunc_Is_Matchmaking_Server__Match_Making, bool CallFunc_Is_Dedicated_Server__Found_Attribute, bool CallFunc_Is_Dedicated_Server__Dedicated_Server, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	class FText SetTotalPlayerAmount(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	enum class ESlateVisibility ShowOutdatedWarning();
	enum class ESlateVisibility ShowTopInfo(int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	enum class ESlateVisibility ShowThrobbler();
	class FText SetServersText();
	enum class ESlateVisibility SetNoServersVisibility(int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void FilterServersByRegion(class UUI_ServerBrowser_Category_C* Invoker, const class FString& Region);
	void PreConstruct(bool IsDesignTime);
	void RefreshServerList();
	void LoadServers();
	void BndEvt__RefreshListButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__FilterDedicatedCheckbox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__FilterPasswordedCheckbox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__FilterProgressCheckbox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__FilterFullCheckbox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__FilterEmptyCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void FilterEvent_TODChanged();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void ServerListDisabledTimeout();
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Found_Sessions(bool Successful, TArray<class UEOS_SessionReference_C*>& Search_Results);
	void BndEvt__UI_ServerBrowser_ShowMatchMakingServersCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_UI_ServerBrowser(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUI_ServerBrowser_Category_C* K2Node_CustomEvent_Invoker, const class FString& K2Node_CustomEvent_Region, bool K2Node_Event_IsDesignTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_ComponentBoundEvent_bIsChecked_6, bool K2Node_ComponentBoundEvent_bIsChecked_5, bool K2Node_ComponentBoundEvent_bIsChecked_4, bool K2Node_ComponentBoundEvent_bIsChecked_3, bool K2Node_ComponentBoundEvent_bIsChecked_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_WithEditor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_CheckFilters_NotLastActiveFilter, bool CallFunc_CheckFilters_NotLastActiveFilter_1, bool CallFunc_CheckFilters_NotLastActiveFilter_2, bool CallFunc_CheckFilters_NotLastActiveFilter_3, bool CallFunc_CheckFilters_NotLastActiveFilter_4, TArray<uint8>& CallFunc_GetCheckedMaps_MapBytesArr, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool K2Node_CustomEvent_Successful, TArray<class UEOS_SessionReference_C*>& K2Node_CustomEvent_Search_Results, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UEOS_SessionReference_C* CallFunc_Array_Get_Item, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UUI_ServerBrowserGame_C* CallFunc_Create_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked);
};

}


