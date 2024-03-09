#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CP_ColorPicker_Wheel.CP_ColorPicker_Wheel_C
// (None)

class UClass* UCP_ColorPicker_Wheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CP_ColorPicker_Wheel_C");

	return Clss;
}


// CP_ColorPicker_Wheel_C CP_ColorPicker_Wheel.Default__CP_ColorPicker_Wheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCP_ColorPicker_Wheel_C* UCP_ColorPicker_Wheel_C::GetDefaultObj()
{
	static class UCP_ColorPicker_Wheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCP_ColorPicker_Wheel_C*>(UCP_ColorPicker_Wheel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CP_ColorPicker_Wheel.CP_ColorPicker_Wheel_C.BndEvt__CP_ValueSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCP_ColorPicker_Wheel_C::BndEvt__CP_ValueSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CP_ColorPicker_Wheel_C", "BndEvt__CP_ValueSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	Params::UCP_ColorPicker_Wheel_C_BndEvt__CP_ValueSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CP_ColorPicker_Wheel.CP_ColorPicker_Wheel_C.UpdateColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCP_ColorPicker_Wheel_C::UpdateColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CP_ColorPicker_Wheel_C", "UpdateColor");

	Params::UCP_ColorPicker_Wheel_C_UpdateColor_Params Parms{};

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CP_ColorPicker_Wheel.CP_ColorPicker_Wheel_C.BndEvt__HueSatColorWheelPickerCmp_K2Node_ComponentBoundEvent_0_OnValuesChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewCmp1                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewCmp2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCP_ColorPicker_Wheel_C::BndEvt__HueSatColorWheelPickerCmp_K2Node_ComponentBoundEvent_0_OnValuesChanged__DelegateSignature(float NewCmp1, float NewCmp2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CP_ColorPicker_Wheel_C", "BndEvt__HueSatColorWheelPickerCmp_K2Node_ComponentBoundEvent_0_OnValuesChanged__DelegateSignature");

	Params::UCP_ColorPicker_Wheel_C_BndEvt__HueSatColorWheelPickerCmp_K2Node_ComponentBoundEvent_0_OnValuesChanged__DelegateSignature_Params Parms{};

	Parms.NewCmp1 = NewCmp1;
	Parms.NewCmp2 = NewCmp2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CP_ColorPicker_Wheel.CP_ColorPicker_Wheel_C.ExecuteUbergraph_CP_ColorPicker_Wheel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_NewColor                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_H                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_S                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_V                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_A                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewCmp1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewCmp2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCP_ColorPicker_Wheel_C::ExecuteUbergraph_CP_ColorPicker_Wheel(int32 EntryPoint, const struct FLinearColor& K2Node_Event_NewColor, float K2Node_ComponentBoundEvent_NewValue, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float K2Node_ComponentBoundEvent_NewCmp1, float K2Node_ComponentBoundEvent_NewCmp2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CP_ColorPicker_Wheel_C", "ExecuteUbergraph_CP_ColorPicker_Wheel");

	Params::UCP_ColorPicker_Wheel_C_ExecuteUbergraph_CP_ColorPicker_Wheel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewColor = K2Node_Event_NewColor;
	Parms.K2Node_ComponentBoundEvent_NewValue = K2Node_ComponentBoundEvent_NewValue;
	Parms.CallFunc_RGBToHSV_H = CallFunc_RGBToHSV_H;
	Parms.CallFunc_RGBToHSV_S = CallFunc_RGBToHSV_S;
	Parms.CallFunc_RGBToHSV_V = CallFunc_RGBToHSV_V;
	Parms.CallFunc_RGBToHSV_A = CallFunc_RGBToHSV_A;
	Parms.K2Node_ComponentBoundEvent_NewCmp1 = K2Node_ComponentBoundEvent_NewCmp1;
	Parms.K2Node_ComponentBoundEvent_NewCmp2 = K2Node_ComponentBoundEvent_NewCmp2;

	UObject::ProcessEvent(Func, &Parms);

}

}


