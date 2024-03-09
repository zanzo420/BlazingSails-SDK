#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ConquestLoadout.UI_ConquestLoadout_C
// (None)

class UClass* UUI_ConquestLoadout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ConquestLoadout_C");

	return Clss;
}


// UI_ConquestLoadout_C UI_ConquestLoadout.Default__UI_ConquestLoadout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ConquestLoadout_C* UUI_ConquestLoadout_C::GetDefaultObj()
{
	static class UUI_ConquestLoadout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ConquestLoadout_C*>(UUI_ConquestLoadout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ConquestLoadout.UI_ConquestLoadout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ConquestLoadout_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadout_C", "PreConstruct");

	Params::UUI_ConquestLoadout_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConquestLoadout.UI_ConquestLoadout_C.Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConquestLoadout_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadout_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConquestLoadout.UI_ConquestLoadout_C.Deselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConquestLoadout_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadout_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConquestLoadout.UI_ConquestLoadout_C.BndEvt__UI_ConquestLoadout_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ConquestLoadout_C::BndEvt__UI_ConquestLoadout_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadout_C", "BndEvt__UI_ConquestLoadout_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConquestLoadout.UI_ConquestLoadout_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConquestLoadout_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadout_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConquestLoadout.UI_ConquestLoadout_C.ExecuteUbergraph_UI_ConquestLoadout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ConquestLoadout_C::ExecuteUbergraph_UI_ConquestLoadout(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadout_C", "ExecuteUbergraph_UI_ConquestLoadout");

	Params::UUI_ConquestLoadout_C_ExecuteUbergraph_UI_ConquestLoadout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConquestLoadout.UI_ConquestLoadout_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ConquestLoadout_C*       Selected_Element                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConquestLoadout_C::OnSelected__DelegateSignature(class UUI_ConquestLoadout_C* Selected_Element)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadout_C", "OnSelected__DelegateSignature");

	Params::UUI_ConquestLoadout_C_OnSelected__DelegateSignature_Params Parms{};

	Parms.Selected_Element = Selected_Element;

	UObject::ProcessEvent(Func, &Parms);

}

}


