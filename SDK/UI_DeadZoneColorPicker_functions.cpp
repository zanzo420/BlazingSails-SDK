#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DeadZoneColorPicker.UI_DeadZoneColorPicker_C
// (None)

class UClass* UUI_DeadZoneColorPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DeadZoneColorPicker_C");

	return Clss;
}


// UI_DeadZoneColorPicker_C UI_DeadZoneColorPicker.Default__UI_DeadZoneColorPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DeadZoneColorPicker_C* UUI_DeadZoneColorPicker_C::GetDefaultObj()
{
	static class UUI_DeadZoneColorPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DeadZoneColorPicker_C*>(UUI_DeadZoneColorPicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DeadZoneColorPicker.UI_DeadZoneColorPicker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_DeadZoneColorPicker_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeadZoneColorPicker_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DeadZoneColorPicker.UI_DeadZoneColorPicker_C.BndEvt__CP_ColorPicker_Wheel_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DeadZoneColorPicker_C::BndEvt__CP_ColorPicker_Wheel_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeadZoneColorPicker_C", "BndEvt__CP_ColorPicker_Wheel_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature");

	Params::UUI_DeadZoneColorPicker_C_BndEvt__CP_ColorPicker_Wheel_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature_Params Parms{};

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DeadZoneColorPicker.UI_DeadZoneColorPicker_C.ExecuteUbergraph_UI_DeadZoneColorPicker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_ComponentBoundEvent_NewColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DeadZoneColorPicker_C::ExecuteUbergraph_UI_DeadZoneColorPicker(int32 EntryPoint, const struct FLinearColor& K2Node_ComponentBoundEvent_NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeadZoneColorPicker_C", "ExecuteUbergraph_UI_DeadZoneColorPicker");

	Params::UUI_DeadZoneColorPicker_C_ExecuteUbergraph_UI_DeadZoneColorPicker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_NewColor = K2Node_ComponentBoundEvent_NewColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


