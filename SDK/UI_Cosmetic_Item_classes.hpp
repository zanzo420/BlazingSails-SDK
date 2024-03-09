#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x338 - 0x294)
// WidgetBlueprintGeneratedClass UI_Cosmetic_Item.UI_Cosmetic_Item_C
class UUI_Cosmetic_Item_C : public UUI_CosmeticItemBase_C
{
public:
	uint8                                        Pad_3E36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_EquipPreview;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_195;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg;                                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Border;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_EventIcon;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Icon;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Shine;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Owned;                                             // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Equiped;                                           // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TooExpensive;                                      // 0x2E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Preview;                                           // 0x2E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        Price;                                             // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            IconTexture;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_CosmeticGridBase_C*                GridUiRef;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Mannequin_C*                       MannequinRef;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_SteamItemCategories             Category;                                          // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Character_C*                       UI_CharacterRef;                                   // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_GameInstance_C*                    GameInstanceRef;                                   // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NewItem;                                           // 0x319(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E38[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BoatMeshBase_C*                    ShipRef;                                           // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Secundary;                                         // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Ship_C*                            ShipUiRef;                                         // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Cosmetic_Item_C* GetDefaultObj();

	class FText GetText_0(bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ESlateVisibility ShowSparkles(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	enum class ESlateVisibility ShowShine();
	struct FLinearColor SetBorderColor(const struct FLinearColor& CallFunc_GetItemRarityInfo_Color, class FText CallFunc_GetItemRarityInfo_RarityName, class USoundBase* CallFunc_GetItemRarityInfo_UnlockSound);
	struct FSlateBrush SetEquipedBorder(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void CheckIfPegLegCanBeWorn(int32 OtherFoot, int32 ThisFoot, bool* CanWear, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess);
	bool EnableButton();
	enum class ESlateVisibility ShowEquipButton();
	struct FLinearColor SetBgColor(const struct FLinearColor& CallFunc_GetItemRarityInfo_Color, class FText CallFunc_GetItemRarityInfo_RarityName, class USoundBase* CallFunc_GetItemRarityInfo_UnlockSound, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	struct FLinearColor SetIconOpacity();
	enum class ESlateVisibility SetShowEquiped();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CheckIfEquiped();
	void Equip();
	void BndEvt__Btn_EquipPreview_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ReInit();
	void BndEvt__Btn_EquipPreview_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Cosmetic_Item(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FGeometry& K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Fetch_Mannequin_bValid, class ABP_Mannequin_C* CallFunc_Fetch_Mannequin_MannequinRef, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_CheckIfPegLegCanBeWorn_CanWear, bool CallFunc_CheckIfPegLegCanBeWorn_CanWear_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, TArray<class UUI_Cosmetic_Item_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_Cosmetic_Item_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_10, bool CallFunc_EqualEqual_IntInt_ReturnValue_11, bool CallFunc_EqualEqual_IntInt_ReturnValue_12, bool CallFunc_EqualEqual_IntInt_ReturnValue_13, bool CallFunc_EqualEqual_IntInt_ReturnValue_14, bool CallFunc_EqualEqual_IntInt_ReturnValue_15, bool CallFunc_EqualEqual_IntInt_ReturnValue_16, bool CallFunc_EqualEqual_IntInt_ReturnValue_17, bool CallFunc_EqualEqual_IntInt_ReturnValue_18, bool CallFunc_EqualEqual_IntInt_ReturnValue_19, bool CallFunc_EqualEqual_IntInt_ReturnValue_20, bool CallFunc_EqualEqual_IntInt_ReturnValue_21, bool CallFunc_EqualEqual_IntInt_ReturnValue_22, bool CallFunc_EqualEqual_IntInt_ReturnValue_23, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_24, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


