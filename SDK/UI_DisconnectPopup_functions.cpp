#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DisconnectPopup.UI_DisconnectPopup_C
// (None)

class UClass* UUI_DisconnectPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DisconnectPopup_C");

	return Clss;
}


// UI_DisconnectPopup_C UI_DisconnectPopup.Default__UI_DisconnectPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DisconnectPopup_C* UUI_DisconnectPopup_C::GetDefaultObj()
{
	static class UUI_DisconnectPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DisconnectPopup_C*>(UUI_DisconnectPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DisconnectPopup.UI_DisconnectPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_DisconnectPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DisconnectPopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DisconnectPopup.UI_DisconnectPopup_C.SetDisconnectReasonText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReasonString                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_DisconnectReasons     ReasonType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DisconnectPopup_C::SetDisconnectReasonText(class FText ReasonString, enum class E_DisconnectReasons ReasonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DisconnectPopup_C", "SetDisconnectReasonText");

	Params::UUI_DisconnectPopup_C_SetDisconnectReasonText_Params Parms{};

	Parms.ReasonString = ReasonString;
	Parms.ReasonType = ReasonType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DisconnectPopup.UI_DisconnectPopup_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_DisconnectPopup_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DisconnectPopup_C", "BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DisconnectPopup.UI_DisconnectPopup_C.SetCustomTitleAndText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_DisconnectPopup_C::SetCustomTitleAndText(class FText Title, class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DisconnectPopup_C", "SetCustomTitleAndText");

	Params::UUI_DisconnectPopup_C_SetCustomTitleAndText_Params Parms{};

	Parms.Title = Title;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DisconnectPopup.UI_DisconnectPopup_C.ClosePopUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_DisconnectPopup_C::ClosePopUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DisconnectPopup_C", "ClosePopUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DisconnectPopup.UI_DisconnectPopup_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_DisconnectPopup_C::UpdateText(class FText NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DisconnectPopup_C", "UpdateText");

	Params::UUI_DisconnectPopup_C_UpdateText_Params Parms{};

	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DisconnectPopup.UI_DisconnectPopup_C.ExecuteUbergraph_UI_DisconnectPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ReasonString                                  (None)
// enum class E_DisconnectReasons     K2Node_CustomEvent_ReasonType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Title                                         (None)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// class FText                        K2Node_CustomEvent_NewText                                       (None)

void UUI_DisconnectPopup_C::ExecuteUbergraph_UI_DisconnectPopup(int32 EntryPoint, class FText K2Node_CustomEvent_ReasonString, enum class E_DisconnectReasons K2Node_CustomEvent_ReasonType, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText K2Node_CustomEvent_Title, class FText K2Node_CustomEvent_Text, class FText K2Node_CustomEvent_NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DisconnectPopup_C", "ExecuteUbergraph_UI_DisconnectPopup");

	Params::UUI_DisconnectPopup_C_ExecuteUbergraph_UI_DisconnectPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ReasonString = K2Node_CustomEvent_ReasonString;
	Parms.K2Node_CustomEvent_ReasonType = K2Node_CustomEvent_ReasonType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Title = K2Node_CustomEvent_Title;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_NewText = K2Node_CustomEvent_NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DisconnectPopup.UI_DisconnectPopup_C.ClosedPopupEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_DisconnectPopup_C::ClosedPopupEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DisconnectPopup_C", "ClosedPopupEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


