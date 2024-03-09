#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass UI_CategoryButton.UI_CategoryButton_C
class UUI_CategoryButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_Category;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Selection;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             IconSize;                                          // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ClickSound;                                        // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HoverSound;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Disabled;                                          // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2617[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            HighLightImage;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HighLighted;                                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2618[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_CategoryButton_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Highlight();
	void Unhighlight();
	void BndEvt__Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ButtonPress();
	void ExecuteUbergraph_UI_CategoryButton(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9, const struct FSlateColor& K2Node_MakeStruct_SlateColor_10, const struct FSlateColor& K2Node_MakeStruct_SlateColor_11, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, TArray<class UUI_CategoryButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_CategoryButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_4, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_5, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FSlateSound& K2Node_MakeStruct_SlateSound, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_6, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_7, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_8, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_9, const struct FSlateSound& K2Node_MakeStruct_SlateSound_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_10, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_11, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_12, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_13, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_3);
	void OnPressed__DelegateSignature();
};

}


