#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CP_SC_ValueSlider_H.CP_SC_ValueSlider_H_C
// (None)

class UClass* UCP_SC_ValueSlider_H_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CP_SC_ValueSlider_H_C");

	return Clss;
}


// CP_SC_ValueSlider_H_C CP_SC_ValueSlider_H.Default__CP_SC_ValueSlider_H_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCP_SC_ValueSlider_H_C* UCP_SC_ValueSlider_H_C::GetDefaultObj()
{
	static class UCP_SC_ValueSlider_H_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCP_SC_ValueSlider_H_C*>(UCP_SC_ValueSlider_H_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CP_SC_ValueSlider_H.CP_SC_ValueSlider_H_C.OnComponentsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewHue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewVal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCP_SC_ValueSlider_H_C::OnComponentsUpdated(float NewHue, float NewSat, float NewVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CP_SC_ValueSlider_H_C", "OnComponentsUpdated");

	Params::UCP_SC_ValueSlider_H_C_OnComponentsUpdated_Params Parms{};

	Parms.NewHue = NewHue;
	Parms.NewSat = NewSat;
	Parms.NewVal = NewVal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CP_SC_ValueSlider_H.CP_SC_ValueSlider_H_C.BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCP_SC_ValueSlider_H_C::BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CP_SC_ValueSlider_H_C", "BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UCP_SC_ValueSlider_H_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CP_SC_ValueSlider_H.CP_SC_ValueSlider_H_C.OnColorUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewHue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCP_SC_ValueSlider_H_C::OnColorUpdate(float NewHue, float NewSat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CP_SC_ValueSlider_H_C", "OnColorUpdate");

	Params::UCP_SC_ValueSlider_H_C_OnColorUpdate_Params Parms{};

	Parms.NewHue = NewHue;
	Parms.NewSat = NewSat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CP_SC_ValueSlider_H.CP_SC_ValueSlider_H_C.ExecuteUbergraph_CP_SC_ValueSlider_H
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewHue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewSat                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UCP_SC_ValueSlider_H_C::ExecuteUbergraph_CP_SC_ValueSlider_H(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, float K2Node_CustomEvent_NewHue, float K2Node_CustomEvent_NewSat, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_GetValue_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CP_SC_ValueSlider_H_C", "ExecuteUbergraph_CP_SC_ValueSlider_H");

	Params::UCP_SC_ValueSlider_H_C_ExecuteUbergraph_CP_SC_ValueSlider_H_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_CustomEvent_NewHue = K2Node_CustomEvent_NewHue;
	Parms.K2Node_CustomEvent_NewSat = K2Node_CustomEvent_NewSat;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CP_SC_ValueSlider_H.CP_SC_ValueSlider_H_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCP_SC_ValueSlider_H_C::OnValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CP_SC_ValueSlider_H_C", "OnValueChanged__DelegateSignature");

	Params::UCP_SC_ValueSlider_H_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


