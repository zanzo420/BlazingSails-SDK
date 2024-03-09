#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_NoMoreKicksPopup.UI_NoMoreKicksPopup_C
// (None)

class UClass* UUI_NoMoreKicksPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_NoMoreKicksPopup_C");

	return Clss;
}


// UI_NoMoreKicksPopup_C UI_NoMoreKicksPopup.Default__UI_NoMoreKicksPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_NoMoreKicksPopup_C* UUI_NoMoreKicksPopup_C::GetDefaultObj()
{
	static class UUI_NoMoreKicksPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_NoMoreKicksPopup_C*>(UUI_NoMoreKicksPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_NoMoreKicksPopup.UI_NoMoreKicksPopup_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_NoMoreKicksPopup_C::BndEvt__BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NoMoreKicksPopup_C", "BndEvt__BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_NoMoreKicksPopup.UI_NoMoreKicksPopup_C.ExecuteUbergraph_UI_NoMoreKicksPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_NoMoreKicksPopup_C::ExecuteUbergraph_UI_NoMoreKicksPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NoMoreKicksPopup_C", "ExecuteUbergraph_UI_NoMoreKicksPopup");

	Params::UUI_NoMoreKicksPopup_C_ExecuteUbergraph_UI_NoMoreKicksPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


