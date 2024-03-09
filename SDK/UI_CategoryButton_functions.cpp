#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CategoryButton.UI_CategoryButton_C
// (None)

class UClass* UUI_CategoryButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CategoryButton_C");

	return Clss;
}


// UI_CategoryButton_C UI_CategoryButton.Default__UI_CategoryButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CategoryButton_C* UUI_CategoryButton_C::GetDefaultObj()
{
	static class UUI_CategoryButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CategoryButton_C*>(UUI_CategoryButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CategoryButton.UI_CategoryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoryButton_C", "PreConstruct");

	Params::UUI_CategoryButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CategoryButton.UI_CategoryButton_C.BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CategoryButton_C::BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoryButton_C", "BndEvt__Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CategoryButton.UI_CategoryButton_C.Highlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CategoryButton_C::Highlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoryButton_C", "Highlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CategoryButton.UI_CategoryButton_C.Unhighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CategoryButton_C::Unhighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoryButton_C", "Unhighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CategoryButton.UI_CategoryButton_C.BndEvt__Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CategoryButton_C::BndEvt__Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoryButton_C", "BndEvt__Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CategoryButton.UI_CategoryButton_C.BndEvt__Btn_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CategoryButton_C::BndEvt__Btn_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoryButton_C", "BndEvt__Btn_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CategoryButton.UI_CategoryButton_C.ButtonPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CategoryButton_C::ButtonPress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoryButton_C", "ButtonPress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CategoryButton.UI_CategoryButton_C.ExecuteUbergraph_UI_CategoryButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_8                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_9                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_10                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_11                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_CategoryButton_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_CategoryButton_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_4                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_5                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_1                                  (None)
// struct FSlateSound                 K2Node_MakeStruct_SlateSound                                     (NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_6                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_7                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_8                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_9                                   (None)
// struct FSlateSound                 K2Node_MakeStruct_SlateSound_1                                   (NoDestructor)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_2                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_10                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_11                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_12                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_13                                  (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_3                                  (None)

void UUI_CategoryButton_C::ExecuteUbergraph_UI_CategoryButton(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9, const struct FSlateColor& K2Node_MakeStruct_SlateColor_10, const struct FSlateColor& K2Node_MakeStruct_SlateColor_11, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, TArray<class UUI_CategoryButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_CategoryButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_4, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_5, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FSlateSound& K2Node_MakeStruct_SlateSound, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_6, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_7, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_8, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_9, const struct FSlateSound& K2Node_MakeStruct_SlateSound_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_10, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_11, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_12, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_13, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoryButton_C", "ExecuteUbergraph_UI_CategoryButton");

	Params::UUI_CategoryButton_C_ExecuteUbergraph_UI_CategoryButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.K2Node_MakeStruct_SlateColor_6 = K2Node_MakeStruct_SlateColor_6;
	Parms.K2Node_MakeStruct_SlateColor_7 = K2Node_MakeStruct_SlateColor_7;
	Parms.K2Node_MakeStruct_SlateColor_8 = K2Node_MakeStruct_SlateColor_8;
	Parms.K2Node_MakeStruct_SlateColor_9 = K2Node_MakeStruct_SlateColor_9;
	Parms.K2Node_MakeStruct_SlateColor_10 = K2Node_MakeStruct_SlateColor_10;
	Parms.K2Node_MakeStruct_SlateColor_11 = K2Node_MakeStruct_SlateColor_11;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.K2Node_MakeStruct_SlateBrush_4 = K2Node_MakeStruct_SlateBrush_4;
	Parms.K2Node_MakeStruct_SlateBrush_5 = K2Node_MakeStruct_SlateBrush_5;
	Parms.K2Node_MakeStruct_ButtonStyle_1 = K2Node_MakeStruct_ButtonStyle_1;
	Parms.K2Node_MakeStruct_SlateSound = K2Node_MakeStruct_SlateSound;
	Parms.K2Node_MakeStruct_SlateBrush_6 = K2Node_MakeStruct_SlateBrush_6;
	Parms.K2Node_MakeStruct_SlateBrush_7 = K2Node_MakeStruct_SlateBrush_7;
	Parms.K2Node_MakeStruct_SlateBrush_8 = K2Node_MakeStruct_SlateBrush_8;
	Parms.K2Node_MakeStruct_SlateBrush_9 = K2Node_MakeStruct_SlateBrush_9;
	Parms.K2Node_MakeStruct_SlateSound_1 = K2Node_MakeStruct_SlateSound_1;
	Parms.K2Node_MakeStruct_ButtonStyle_2 = K2Node_MakeStruct_ButtonStyle_2;
	Parms.K2Node_MakeStruct_SlateBrush_10 = K2Node_MakeStruct_SlateBrush_10;
	Parms.K2Node_MakeStruct_SlateBrush_11 = K2Node_MakeStruct_SlateBrush_11;
	Parms.K2Node_MakeStruct_SlateBrush_12 = K2Node_MakeStruct_SlateBrush_12;
	Parms.K2Node_MakeStruct_SlateBrush_13 = K2Node_MakeStruct_SlateBrush_13;
	Parms.K2Node_MakeStruct_ButtonStyle_3 = K2Node_MakeStruct_ButtonStyle_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CategoryButton.UI_CategoryButton_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CategoryButton_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoryButton_C", "OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


