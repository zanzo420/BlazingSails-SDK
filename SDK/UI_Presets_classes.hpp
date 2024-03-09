#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2B1 - 0x260)
// WidgetBlueprintGeneratedClass UI_Presets.UI_Presets_C
class UUI_Presets_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            ScrollBox_38;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SavedPreset_C*                     UI_SavedPreset;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SavedPreset_C*                     UI_SavedPreset_6;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SavedPreset_C*                     UI_SavedPreset_7;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_0;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShipCosmeticPresets;                               // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GridColumn;                                        // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GridRow;                                           // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Character_C*                       CharacterScreenRef;                                // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_StartMenu_C*                       MenuRef;                                           // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Menus                           MenuType;                                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Presets_C* GetDefaultObj();

	void GetPresetArray(bool ShipCosmeticPreset, TArray<struct FST_ShipCustomizationPreset>* PresetArray, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MainMenu_GameInstance_C* K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance, bool K2Node_DynamicCast_bSuccess);
	void LoadPreset(bool ShipCosmeticPreset, int32 Temp_int_Variable, TArray<struct FST_ShipCustomizationPreset>& CallFunc_GetPresetArray_PresetArray, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUI_SavedPreset_C* CallFunc_Create_ReturnValue, const struct FST_ShipCustomizationPreset& CallFunc_Array_Get_Item, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void Reload();
	void RefreshMannequin();
	void Construct();
	void Scroll(float ScrollValue);
	void ExecuteUbergraph_UI_Presets(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class ABP_UI_CrewLobbyManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess_1, class ABP_MainMenuCOntroller_C* K2Node_DynamicCast_AsBP_Main_Menu_COntroller, bool K2Node_DynamicCast_bSuccess_2, float K2Node_CustomEvent_ScrollValue, bool CallFunc_IsVisible_ReturnValue, TArray<class UUI_StartMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, float CallFunc_GetScrollOffset_ReturnValue, class UUI_StartMenu_C* CallFunc_Array_Get_Item, float CallFunc_Add_FloatFloat_ReturnValue, class UUI_NewSavedPreset_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


