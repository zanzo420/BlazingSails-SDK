#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C
// (None)

class UClass* UUI_ServerBrowser_MapFilter_Map_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ServerBrowser_MapFilter_Map_C");

	return Clss;
}


// UI_ServerBrowser_MapFilter_Map_C UI_ServerBrowser_MapFilter_Map.Default__UI_ServerBrowser_MapFilter_Map_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ServerBrowser_MapFilter_Map_C* UUI_ServerBrowser_MapFilter_Map_C::GetDefaultObj()
{
	static class UUI_ServerBrowser_MapFilter_Map_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ServerBrowser_MapFilter_Map_C*>(UUI_ServerBrowser_MapFilter_Map_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.GetBrush_0
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)

struct FSlateBrush UUI_ServerBrowser_MapFilter_Map_C::GetBrush_0(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_IsChecked_ReturnValue, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_MapFilter_Map_C", "GetBrush_0");

	Params::UUI_ServerBrowser_MapFilter_Map_C_GetBrush_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.IsChecked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsChecked                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_MapFilter_Map_C::IsChecked(bool* bIsChecked, bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_MapFilter_Map_C", "IsChecked");

	Params::UUI_ServerBrowser_MapFilter_Map_C_IsChecked_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsChecked != nullptr)
		*bIsChecked = Parms.bIsChecked;

}


// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_MapFilter_Map_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_MapFilter_Map_C", "PreConstruct");

	Params::UUI_ServerBrowser_MapFilter_Map_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.BndEvt__MapCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_MapFilter_Map_C::BndEvt__MapCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_MapFilter_Map_C", "BndEvt__MapCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_ServerBrowser_MapFilter_Map_C_BndEvt__MapCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.ExecuteUbergraph_UI_ServerBrowser_MapFilter_Map
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCheckBoxStyle              K2Node_MakeStruct_CheckBoxStyle                                  (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_MapFilter_Map_C::ExecuteUbergraph_UI_ServerBrowser_MapFilter_Map(int32 EntryPoint, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool K2Node_Event_IsDesignTime, const struct FCheckBoxStyle& K2Node_MakeStruct_CheckBoxStyle, bool K2Node_ComponentBoundEvent_bIsChecked, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_MapFilter_Map_C", "ExecuteUbergraph_UI_ServerBrowser_MapFilter_Map");

	Params::UUI_ServerBrowser_MapFilter_Map_C_ExecuteUbergraph_UI_ServerBrowser_MapFilter_Map_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_CheckBoxStyle = K2Node_MakeStruct_CheckBoxStyle;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.OnMapCheckedChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ServerBrowser_MapFilter_Map_C::OnMapCheckedChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_MapFilter_Map_C", "OnMapCheckedChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


