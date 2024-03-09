#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x284 - 0x260)
// WidgetBlueprintGeneratedClass UI_LootChestItems.UI_LootChestItems_C
class UUI_LootChestItems_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FlyUp;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                            GridPanel_1;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_NewItemPopupItem_C*                UI_NewItemPopupItem;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Max_Elements_Per_Row;                              // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_LootChestItems_C* GetDefaultObj();

	void Add_Item_To_Grid(TArray<int32>& Array, int32 Elements_per_row, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_CheckIfItemIsNew_IsNewItem, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& CallFunc_GetItemRarityInfo_Color, class FText CallFunc_GetItemRarityInfo_RarityName, class USoundBase* CallFunc_GetItemRarityInfo_UnlockSound, class UTexture2D* CallFunc_GetEventIcon_Icon, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UUI_NewItemPopupItem_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void CheckIfItemIsNew(int32 ItemId, bool* IsNewItem);
	void Construct();
	void ShowItems(TArray<int32>& Items);
	void ConfirmItems();
	void WidgetAnimationEvt_FlyUp_K2Node_WidgetAnimationEvent_0();
	void ExecuteUbergraph_UI_LootChestItems(int32 EntryPoint, TArray<int32>& K2Node_CustomEvent_Items);
};

}


