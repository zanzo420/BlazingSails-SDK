#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD1 (0x331 - 0x260)
// WidgetBlueprintGeneratedClass UI_CosmeticGridBase.UI_CosmeticGridBase_C
class UUI_CosmeticGridBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             Checkbox_Rarity1;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             Checkbox_Rarity2;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             Checkbox_Rarity3;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             Checkbox_Rarity4;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             Checkbox_Rarity5;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             Checkbox_Rarity6;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_ReverseSortingOrder;                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       Dropdown_SortingOrder;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            List;                                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            SectionGrid;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GameInstance_C*                    GameInstanceRef;                                   // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MainCustomizationMenuBase_C*       UI_ParentRef;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_SteamItemCategories             CurrentFilter;                                     // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C89[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SteamEcoManagerRef;                                // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanRefreshItems;                                  // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   ToShowWidgetsList;                                 // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class E_SortingMethods                  SortingMethod;                                     // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldReverseSortingOrder;                         // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldUseSections;                                 // 0x2F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C8B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 ShouldShowRarityArr;                               // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                DefaultItemIndices;                                // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CurrentSecundary;                                  // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanSaveData;                                       // 0x319(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FST_NewSortOptions                    Current_Sort_Options;                              // 0x31A(0x3)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RarityFilterArray;                                 // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Ignore_Sort_Update;                                // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_CosmeticGridBase_C* GetDefaultObj();

	void Set_Global_Filter_Rarity_Options(int32 Rarity, bool Value, const TArray<int32>& Temp_Rarities, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess);
	void CompareEvent(class UObject* ObjectA, class UObject* ObjectB, bool* Return, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base, bool K2Node_DynamicCast_bSuccess, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DefaultCompare_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ApplyRarityFilter(TArray<class UUserWidget*>& ToFilterArray, bool ShowUnreleasedItems, TArray<class UUserWidget*>* NewArray_, const TArray<class UUserWidget*>& NewArray, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUserWidget* CallFunc_Array_Get_Item, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_Contains_ReturnValue);
	void CompareType(class UObject* ObjectA, class UObject* ObjectB, bool* Return, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base, bool K2Node_DynamicCast_bSuccess, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DefaultCompare_ReturnValue);
	enum class ECheckBoxState Get_Rarity6_CheckedState(int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	enum class ECheckBoxState Get_Rarity5_CheckedState(int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	enum class ECheckBoxState Get_Rarity4_CheckedState(int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	enum class ECheckBoxState Get_Rarity3_CheckedState(int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	enum class ECheckBoxState Get_Rarity2_CheckedState(int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	enum class ECheckBoxState Get_Rarity1_CheckedState(int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	bool DefaultCompare(class UUI_CosmeticItemBase_C* ItemA, class UUI_CosmeticItemBase_C* ItemB, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessStringString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SplitArray(TArray<class UUserWidget*>& ToSplitArr, TArray<class UUserWidget*>* Default, TArray<class UUserWidget*>* AllOtherItems, TArray<class UUserWidget*>* Unreleased, const TArray<class UUserWidget*>& AllOtherItemsArr, const TArray<class UUserWidget*>& UnreleasedArr, const TArray<class UUserWidget*>& DefaultArr, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_Array_Get_Item, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	void CompareReceiveDate(class UObject* ObjectA, class UObject* ObjectB, bool* Return, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base, bool K2Node_DynamicCast_bSuccess, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue);
	void SortAndUpdateList(enum class E_SortingMethods SortingMethod, bool ReverseList, TArray<class UUserWidget*>& CallFunc_SplitArray_Default, TArray<class UUserWidget*>& CallFunc_SplitArray_AllOtherItems, TArray<class UUserWidget*>& CallFunc_SplitArray_Unreleased, class UUI_CosmeticItemSection_C* CallFunc_AddCosmeticItemSection_NewSection, bool CallFunc_AddCosmeticItemSection_WasSectionAdded, class UUI_CosmeticItemSection_C* CallFunc_AddCosmeticItemSection_NewSection_1, bool CallFunc_AddCosmeticItemSection_WasSectionAdded_1, class UUI_CosmeticItemSection_C* CallFunc_AddCosmeticItemSection_NewSection_2, bool CallFunc_AddCosmeticItemSection_WasSectionAdded_2, class UUI_CosmeticItemSection_C* CallFunc_AddCosmeticItemSection_NewSection_3, bool CallFunc_AddCosmeticItemSection_WasSectionAdded_3);
	void InitializeWidgets(bool InitializeSortingDropdown, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FLinearColor& CallFunc_GetItemRarityInfo_Color, class FText CallFunc_GetItemRarityInfo_RarityName, class USoundBase* CallFunc_GetItemRarityInfo_UnlockSound, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, TArray<class UCheckBox*>& K2Node_MakeArray_Array, int32 CallFunc_MakeLiteralInt_ReturnValue, class UCheckBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_4, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_5, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const struct FCheckBoxStyle& K2Node_MakeStruct_CheckBoxStyle);
	void CompareRarity(class UObject* ObjectA, class UObject* ObjectB, bool* Return, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base, bool K2Node_DynamicCast_bSuccess, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DefaultCompare_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReverseArray(TArray<class UUserWidget*>& ToReverseArray, int32 ReverseIterator, int32 Iterator, int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SortItems(TArray<class UUserWidget*>& ToSortArray, enum class E_SortingMethods SortingMethod, bool ShouldReverseList, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void AddToGrid(const struct FST_NewEOSInventoryItem& SteamItem, int32 Index, enum class E_SteamItemCategories Category, int32 Rarity, bool Secundary, int32 Amount, class UUserWidget** Widget);
	void LoadItems(enum class E_SteamItemCategories Category, bool Secundary, const TArray<class UUserWidget*>& TempWidgetList, const TArray<int32>& UniqueUnlockedItemsInCategory, float NumberOfUnlockedItems, float NumberOfAllItemsInCategory, class UUserWidget* WidgetRef, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UUserWidget* CallFunc_AddToGrid_Widget, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_2, TArray<struct FST_InventoryTrackingItem>& CallFunc_Get_Filtered_Sorted_Inventory_Global_Category_Sorted_Inventory, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_3, const struct FST_InventoryTrackingItem& CallFunc_Array_Get_Item_1, bool CallFunc_Array_Contains_ReturnValue_1, class UUserWidget* CallFunc_AddToGrid_Widget_1, float Temp_float_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_2, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UUserWidget* CallFunc_AddToGrid_Widget_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_3, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, int32 CallFunc_Conv_StringToInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, class UUserWidget* CallFunc_AddToGrid_Widget_3, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Add_ReturnValue_1);
	void Construct();
	void UnlockItem(const class FString& UnlockItemName);
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Dropdown_SortingOrder_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void BndEvt__Checkbox_Rarity1_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Checkbox_Rarity2_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Checkbox_Rarity3_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Checkbox_Rarity4_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Checkbox_Rarity5_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Checkbox_Rarity6_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void RefreshRevertOrder(bool Reverse);
	void ExecuteUbergraph_UI_CosmeticGridBase(int32 EntryPoint, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable_3, const class FString& K2Node_CustomEvent_UnlockItemName, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_ComponentBoundEvent_bIsChecked_6, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_CosmeticItemSection_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Section, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UUI_CosmeticItemBase_C* K2Node_DynamicCast_AsUI_Cosmetic_Item_Base, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_ComponentBoundEvent_bIsChecked_5, class UUI_Cosmetic_Item_C* K2Node_DynamicCast_AsUI_Cosmetic_Item, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_ComponentBoundEvent_bIsChecked_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool K2Node_ComponentBoundEvent_bIsChecked_3, bool K2Node_ComponentBoundEvent_bIsChecked_2, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool K2Node_ComponentBoundEvent_bIsChecked, bool K2Node_CustomEvent_Reverse, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess_3, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller_1, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller_2, bool K2Node_DynamicCast_bSuccess_5, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1);
};

}


