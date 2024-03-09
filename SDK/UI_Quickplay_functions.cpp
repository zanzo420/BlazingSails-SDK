#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Quickplay.UI_Quickplay_C
// (None)

class UClass* UUI_Quickplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Quickplay_C");

	return Clss;
}


// UI_Quickplay_C UI_Quickplay.Default__UI_Quickplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Quickplay_C* UUI_Quickplay_C::GetDefaultObj()
{
	static class UUI_Quickplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Quickplay_C*>(UUI_Quickplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Quickplay.UI_Quickplay_C.BndEvt__Btn_Gameplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Quickplay_C::BndEvt__Btn_Gameplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Quickplay_C", "BndEvt__Btn_Gameplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Quickplay.UI_Quickplay_C.ExecuteUbergraph_UI_Quickplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StartMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_StartMenu_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Quickplay_C::ExecuteUbergraph_UI_Quickplay(int32 EntryPoint, TArray<class UUI_StartMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_StartMenu_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Quickplay_C", "ExecuteUbergraph_UI_Quickplay");

	Params::UUI_Quickplay_C_ExecuteUbergraph_UI_Quickplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


