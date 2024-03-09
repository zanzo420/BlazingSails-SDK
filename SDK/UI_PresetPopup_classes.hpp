#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x400 - 0x260)
// WidgetBlueprintGeneratedClass UI_PresetPopup.UI_PresetPopup_C
class UUI_PresetPopup_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_6;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_0;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_0;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_191;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_220;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_6;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_9;                                       // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_102;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShipCosmeticPreset;                                // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_39C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Presets_C*                         PresetsUIRef;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UpdatePopup;                                       // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_39CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UpdateIndex;                                       // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                ExistingPresetName;                                // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FST_ShipCustomizationPreset           PresetTemp;                                        // 0x2E0(0x119)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_39CB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUI_PresetPopup_C* GetDefaultObj();

	void AddOrUpdatePreset(class UBP_GameInstance_C* GameInstanceRef, TArray<struct FST_ShipCustomizationPreset>& PresetArray, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization, int32 CallFunc_GetIconIndex_Index, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsChecked_ReturnValue, const struct FST_ShipCustomizationPreset& CallFunc_Array_Get_Item, float CallFunc_RandomFloatInRange_ReturnValue, class FText CallFunc_GetText_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FST_ShipCustomizationPreset& K2Node_MakeStruct_ST_ShipCustomizationPreset, int32 CallFunc_Array_Add_ReturnValue);
	void GetIconIndex(const struct FST_ShipCustomisations& Ship_Customisation, const struct FST_PlayerCustomisation& Player_Customisations, int32* Index);
	void SavePreset(class UBP_GameInstance_C* GameInstanceRef, bool ShipCosmeticPreset, class UBP_MainMenu_GameInstance_C* K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance, bool K2Node_DynamicCast_bSuccess);
	class FText Get_TextBlock_6_Text_0();
	enum class ESlateVisibility GetVisibility_0();
	class FText GetText_0();
	bool Get_Button_6_bIsEnabled_0(class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void Construct();
	void BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void ExecuteUbergraph_UI_PresetPopup(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item, const struct FMargin& K2Node_MakeStruct_Margin, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization, class FText CallFunc_Conv_StringToText_ReturnValue_2);
};

}


