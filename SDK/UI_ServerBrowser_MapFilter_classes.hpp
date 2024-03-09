#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass UI_ServerBrowser_MapFilter.UI_ServerBrowser_MapFilter_C
class UUI_ServerBrowser_MapFilter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        MapsHorizontalBox;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        MapsHorizontalBox2;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<enum class E_TimesOfDay>              MapEntries;                                        // 0x278(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	TArray<class UTexture2D*>                    TODIcons;                                          // 0x288(0x10)(Edit, BlueprintVisible)
	TArray<class UUI_ServerBrowser_MapFilter_Map_C*> MapWidgets;                                        // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnMapSelectionChanged;                             // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_ServerBrowser_MapFilter_C* GetDefaultObj();

	void GetIcon(enum class E_TimesOfDay TOD, class UTexture2D** IconStyle, bool K2Node_SwitchEnum_CmpSuccess);
	void GetCheckedMaps(TArray<uint8>* MapBytesArr, const TArray<uint8>& ResultArr, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_ServerBrowser_MapFilter_Map_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsChecked_bIsChecked);
	void PreConstruct(bool IsDesignTime);
	void OnMapSelectionChange_Event();
	void Construct();
	void ExecuteUbergraph_UI_ServerBrowser_MapFilter(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, enum class E_TimesOfDay CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector2D& Temp_struct_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget_Spacer_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UUI_ServerBrowser_MapFilter_Map_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, bool CallFunc_Array_Get_Item_2);
	void OnMapSelectionChanged__DelegateSignature();
};

}


