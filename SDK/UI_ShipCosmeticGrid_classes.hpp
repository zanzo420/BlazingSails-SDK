#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x340 - 0x331)
// WidgetBlueprintGeneratedClass UI_ShipCosmeticGrid.UI_ShipCosmeticGrid_C
class UUI_ShipCosmeticGrid_C : public UUI_CosmeticGridBase_C
{
public:
	uint8                                        Pad_223B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_ShipCosmeticGrid_C* GetDefaultObj();

	void AddToGrid(const struct FST_NewEOSInventoryItem& SteamItem, int32 Index, enum class E_SteamItemCategories Category, int32 Rarity, bool Secundary, int32 Amount, class UUserWidget** Widget, class UUI_Cosmetic_Item_C* CallFunc_Create_ReturnValue, class UUserWidget* CallFunc_AddToGrid_Widget, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetEventIcon_Icon, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Construct();
	void Refresh();
	void Scroll(float ScrollValue);
	void InitializeWidgets(bool InitializeSortingDropdown);
	void ChangeSortingDropdownSelection_1(const class FString& SelectedItem);
	void ExecuteUbergraph_UI_ShipCosmeticGrid(int32 EntryPoint, const class FString& K2Node_Event_SelectedItem, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float K2Node_CustomEvent_ScrollValue, bool CallFunc_IsVisible_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_MainMenuCOntroller_C* K2Node_DynamicCast_AsBP_Main_Menu_COntroller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Event_InitializeSortingDropdown, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, TArray<int32>& K2Node_MakeArray_Array, const class FString& K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& K2Node_Select_Default_1);
};

}


