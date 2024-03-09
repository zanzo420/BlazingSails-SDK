#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C0 (0x820 - 0x260)
// WidgetBlueprintGeneratedClass UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C
class UUI_ServerBrowser_MapFilter_Map_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             MapCheckbox;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x278(0x580)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	uint8                                        Value;                                             // 0x7F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_39D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMapCheckedChanged;                               // 0x800(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MapFilterIndex;                                    // 0x810(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_39D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x818(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_ServerBrowser_MapFilter_Map_C* GetDefaultObj();

	struct FSlateBrush GetBrush_0(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_IsChecked_ReturnValue, const struct FSlateBrush& K2Node_Select_Default);
	void IsChecked(bool* bIsChecked, bool CallFunc_IsChecked_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MapCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_UI_ServerBrowser_MapFilter_Map(int32 EntryPoint, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool K2Node_Event_IsDesignTime, const struct FCheckBoxStyle& K2Node_MakeStruct_CheckBoxStyle, bool K2Node_ComponentBoundEvent_bIsChecked, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess);
	void OnMapCheckedChanged__DelegateSignature();
};

}


