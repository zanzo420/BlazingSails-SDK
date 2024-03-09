#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass UI_InteractableInfo.UI_InteractableInfo_C
class UUI_InteractableInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_1;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Border;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BorderBg;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Cross;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_1;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_2;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Amount;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_InteractableText;                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Key;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Progress_C*                        UI_Progress;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HUDBase_C*                         HUDRef;                                            // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnoughRoom;                                        // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnoughRoomForAll;                                  // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BE4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CantPickupMessage;                                 // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_InteractableInfo_C* GetDefaultObj();

	enum class ESlateVisibility ShowInteractToolTip();
	void SetInteractableInfo(bool CallFunc_IsValid_ReturnValue, class ABP_PickupBackpackUpgrade_C* K2Node_DynamicCast_AsBP_Pickup_Backpack_Upgrade, bool K2Node_DynamicCast_bSuccess, class ABP_PickupBase_C* K2Node_DynamicCast_AsBP_Pickup_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_CheckIfEnoughRoom_EnoughRoom, bool CallFunc_CheckIfEnoughRoom_RoomForAll, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FKey& CallFunc_GetKeyBind_Key, class FText CallFunc_GetKeyDisplayName_Display_Name, const struct FKey& CallFunc_GetKeyBind_Key_1, class FText CallFunc_GetKeyDisplayName_Display_Name_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FKey& CallFunc_GetKeyBind_Key_2, class FText CallFunc_GetKeyDisplayName_Display_Name_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ABP_QuickAccesPointBase_C* K2Node_DynamicCast_AsBP_Quick_Acces_Point_Base, bool K2Node_DynamicCast_bSuccess_3, class ABP_PickupBase_C* K2Node_DynamicCast_AsBP_Pickup_Base_1, bool K2Node_DynamicCast_bSuccess_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, enum class E_ItemCategories CallFunc_GetItemCategoryAndColor_Category, const struct FLinearColor& CallFunc_GetItemCategoryAndColor_ReturnValue, class FText CallFunc_GetItemCategoryAndColor_CategoryLiteralText, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class ABP_PickupWeaponBase_C* K2Node_DynamicCast_AsBP_Pickup_Weapon_Base, bool K2Node_DynamicCast_bSuccess_5, class FText CallFunc_Format_ReturnValue, enum class E_ItemCategories CallFunc_GetItemCategoryAndColor_Category_1, const struct FLinearColor& CallFunc_GetItemCategoryAndColor_ReturnValue_1, class FText CallFunc_GetItemCategoryAndColor_CategoryLiteralText_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Refresh();
	void ExecuteUbergraph_UI_InteractableInfo(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FKey& CallFunc_GetKeyBind_Key, class FText CallFunc_GetKeyDisplayName_Display_Name, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_QuickAccesPointBase_C* K2Node_DynamicCast_AsBP_Quick_Acces_Point_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, const struct FKey& CallFunc_GetKeyBind_Key_1, class FText CallFunc_GetKeyDisplayName_Display_Name_1);
};

}


