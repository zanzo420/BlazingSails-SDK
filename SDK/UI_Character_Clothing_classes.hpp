#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x350 - 0x331)
// WidgetBlueprintGeneratedClass UI_Character_Clothing.UI_Character_Clothing_C
class UUI_Character_Clothing_C : public UUI_CosmeticGridBase_C
{
public:
	uint8                                        Pad_2B10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FST_ClothingItems>             Hats;                                              // 0x340(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUI_Character_Clothing_C* GetDefaultObj();

	void AddToGrid(const struct FST_NewEOSInventoryItem& SteamItem, int32 Index, enum class E_SteamItemCategories Category, int32 Rarity, bool Secundary, int32 Amount, class UUserWidget** Widget, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUserWidget* CallFunc_AddToGrid_Widget, class UUserWidget* CallFunc_AddClothingItem_Widget, class UUserWidget* CallFunc_AddTattoo_Widget, class UUserWidget* CallFunc_AddHairColor_Widget, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void ValidatePirateCosmetics(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UUI_Character_C* K2Node_DynamicCast_AsUI_Character, bool K2Node_DynamicCast_bSuccess_3, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_4);
	void AddTattoo(const struct FST_NewEOSInventoryItem& Item, int32 Index, int32 Rarity, class UUserWidget** Widget, int32 Column, int32 Row, class UUI_Character_Tattoo_C* CallFunc_Create_ReturnValue, class UUI_Character_C* K2Node_DynamicCast_AsUI_Character, bool K2Node_DynamicCast_bSuccess);
	void AddHairColor(const struct FST_NewEOSInventoryItem& Item, int32 Index, int32 Rarity, class UUserWidget** Widget, int32 Column, int32 Row, class UUI_Character_HairColor_C* CallFunc_Create_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UUI_Character_C* K2Node_DynamicCast_AsUI_Character, bool K2Node_DynamicCast_bSuccess);
	void AddClothingItem(const struct FST_NewEOSInventoryItem& Item, int32 Index, enum class E_SteamItemCategories ItemCategory, int32 Rarity, class UUserWidget** Widget, int32 Column, int32 Row, const class FString& Temp_string_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUI_Cosmetic_Item_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class UTexture2D* CallFunc_GetEventIcon_Icon, const class FString& CallFunc_GetObjectName_ReturnValue, bool Temp_bool_Variable, class UUI_Character_C* K2Node_DynamicCast_AsUI_Character, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_Select_Default, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_1);
	void RefreshClothing();
	void LoadFaces();
	void LoadHats();
	void LoadPants();
	void LoadTorsos();
	void LoadBeards();
	void LoadLeftFoot();
	void LoadHairDyes();
	void LoadRightFoot();
	void LoadTattoos();
	void LoadAllItems();
	void LoadRightHand();
	void LoadLeftHand();
	void LoadLowerFaces();
	void Scroll(float ScrollValue);
	void Construct();
	void ExecuteUbergraph_UI_Character_Clothing(int32 EntryPoint, TArray<int32>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float K2Node_CustomEvent_ScrollValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_MainMenuCOntroller_C* K2Node_DynamicCast_AsBP_Main_Menu_COntroller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsVisible_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


