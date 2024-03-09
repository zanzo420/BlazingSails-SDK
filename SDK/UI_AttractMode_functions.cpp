#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_AttractMode.UI_AttractMode_C
// (None)

class UClass* UUI_AttractMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_AttractMode_C");

	return Clss;
}


// UI_AttractMode_C UI_AttractMode.Default__UI_AttractMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_AttractMode_C* UUI_AttractMode_C::GetDefaultObj()
{
	static class UUI_AttractMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_AttractMode_C*>(UUI_AttractMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_AttractMode.UI_AttractMode_C.EnableAttractMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AttractMode_C::EnableAttractMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AttractMode_C", "EnableAttractMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AttractMode.UI_AttractMode_C.SetAttractModeEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_AttractMode_C::SetAttractModeEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AttractMode_C", "SetAttractModeEnabled");

	Params::UUI_AttractMode_C_SetAttractModeEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AttractMode.UI_AttractMode_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_AttractMode_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AttractMode_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AttractMode.UI_AttractMode_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_AttractMode_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AttractMode_C", "Tick");

	Params::UUI_AttractMode_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AttractMode.UI_AttractMode_C.ExecuteUbergraph_UI_AttractMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetMousePositionOnViewport_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UUI_AttractMode_C::ExecuteUbergraph_UI_AttractMode(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_OpenSource_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AttractMode_C", "ExecuteUbergraph_UI_AttractMode");

	Params::UUI_AttractMode_C_ExecuteUbergraph_UI_AttractMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;
	Parms.CallFunc_GetMousePositionOnViewport_ReturnValue = CallFunc_GetMousePositionOnViewport_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AttractMode.UI_AttractMode_C.OnDisabled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AttractMode_C::OnDisabled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AttractMode_C", "OnDisabled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AttractMode.UI_AttractMode_C.OnEnabled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AttractMode_C::OnEnabled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AttractMode_C", "OnEnabled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


