#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3D8 - 0x388)
// BlueprintGeneratedClass BP_AmmoBox.BP_AmmoBox_C
class ABP_AmmoBox_C : public ABP_QuickAccesPointBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      AmountWidgetCannonAmmo;                            // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      AmountWidgetArrowAmmo;                             // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      AmountWidgetFishAmmo;                              // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cube;                                              // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<enum class E_Items>                   Items;                                             // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWidgetComponent*>              AmountWidgets;                                     // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_AmmoBox_C* GetDefaultObj();

	void InitAmountWidgets(const TArray<class UUI_QuickAccessAmount_C*>& Widgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_QuickAccessAmount_C* K2Node_DynamicCast_AsUI_Quick_Access_Amount, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UUI_QuickAccessAmount_C* K2Node_DynamicCast_AsUI_Quick_Access_Amount_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue_1, class UUI_QuickAccessAmount_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UUI_QuickAccessAmount_C* K2Node_DynamicCast_AsUI_Quick_Access_Amount_2, bool K2Node_DynamicCast_bSuccess_2, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_3, class UUI_QuickAccessAmount_C* K2Node_DynamicCast_AsUI_Quick_Access_Amount_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3);
	void GiveWeaponAmmo(class UInventory_C*& InventoryRef, enum class E_Items WeaponAmmoType, int32 Amount, int32* AmmoAmountGiven, bool CallFunc_CheckIfInventoryHasItem_HasItem, int32 CallFunc_CheckIfInventoryHasItem_Amount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_AddItem_allItemsAdded_1, int32 CallFunc_AddItem_amountAdded_1);
	void GiveAmmo(bool InventoryFull, int32 SideArmAmmoGiven, enum class E_Items SideArmAmmo, enum class E_Items MainWeaponAmmo, int32 MainWeaponAmmoGiven, class UInventory_C* ShipInventoryRef, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GiveWeaponAmmo_AmmoAmountGiven, int32 CallFunc_GiveWeaponAmmo_AmmoAmountGiven_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray, class AActor* CallFunc_GetAttachParentActor_ReturnValue, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray_1, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, const struct FST_Weapon_Data& CallFunc_GetWeaponInfo_Out_Row, bool CallFunc_GetWeaponInfo_Found, int32 CallFunc_GiveWeaponAmmo_AmmoAmountGiven_2, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class UChildActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, const struct FST_Weapon_Data& CallFunc_GetWeaponInfo_Out_Row_1, bool CallFunc_GetWeaponInfo_Found_1, class UChildActorComponent* CallFunc_Array_Get_Item, class ABP_ContainerBase_C* K2Node_DynamicCast_AsBP_Container_Base, bool K2Node_DynamicCast_bSuccess_2);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowReceivedIndicatorCustom(const struct FST_InventoryArray& MainAmmo, const struct FST_InventoryArray& SideAmmo, bool NoRoom);
	void GiveResources();
	void ShowAmountWidget();
	void HideAmountWidget();
	void RefreshAmount();
	void ExecuteUbergraph_BP_AmmoBox(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, float K2Node_Event_DeltaSeconds, const struct FST_InventoryArray& K2Node_CustomEvent_MainAmmo, const struct FST_InventoryArray& K2Node_CustomEvent_SideAmmo, bool K2Node_CustomEvent_NoRoom, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, enum class E_Items CallFunc_Array_Get_Item, TArray<class UChildActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UChildActorComponent* CallFunc_Array_Get_Item_1, class ABP_ContainerBase_C* K2Node_DynamicCast_AsBP_Container_Base, bool K2Node_DynamicCast_bSuccess_1, class UWidgetComponent* CallFunc_Array_Get_Item_2, bool CallFunc_CheckIfInventoryHasItem_HasItem, int32 CallFunc_CheckIfInventoryHasItem_Amount, class UWidgetComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3);
};

}


