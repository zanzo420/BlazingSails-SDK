#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x8A1 - 0x880)
// BlueprintGeneratedClass BP_InventoryScrollBox.BP_InventoryScrollBox_C
class UBP_InventoryScrollBox_C : public UScrollBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInventory_C*                          Inventory;                                         // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_CharacterInventory_C*              CharacterInventoryWidgetRef;                       // 0x890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Container_C*                       ContainerWidgetRef;                                // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemAlreadyInList;                                 // 0x8A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_InventoryScrollBox_C* GetDefaultObj();

	void LoadInventoryWidgets(enum class E_InventoryItemWidgetType WidgetType, class ABP_Character_C* CharacterRef, class UInventory_C* Inventory);
	void ExecuteUbergraph_BP_InventoryScrollBox(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, enum class E_InventoryItemWidgetType K2Node_CustomEvent_WidgetType, class ABP_Character_C* K2Node_CustomEvent_CharacterRef, class UInventory_C* K2Node_CustomEvent_Inventory, TArray<class UWidget*>& CallFunc_CreateWidgetList_WidgetList, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUI_InventoryItem_C* K2Node_DynamicCast_AsUI_Inventory_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


