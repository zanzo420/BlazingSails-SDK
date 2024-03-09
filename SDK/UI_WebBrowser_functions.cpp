#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_WebBrowser.UI_WebBrowser_C
// (None)

class UClass* UUI_WebBrowser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_WebBrowser_C");

	return Clss;
}


// UI_WebBrowser_C UI_WebBrowser.Default__UI_WebBrowser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_WebBrowser_C* UUI_WebBrowser_C::GetDefaultObj()
{
	static class UUI_WebBrowser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_WebBrowser_C*>(UUI_WebBrowser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_WebBrowser.UI_WebBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_WebBrowser_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WebBrowser_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_WebBrowser.UI_WebBrowser_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_WebBrowser_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WebBrowser_C", "BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_WebBrowser.UI_WebBrowser_C.LoadWebPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_WebBrowser_C::LoadWebPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WebBrowser_C", "LoadWebPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_WebBrowser.UI_WebBrowser_C.ExecuteUbergraph_UI_WebBrowser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_UI_CrewLobbyManager_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_UI_CrewLobbyManager_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WebBrowser_C::ExecuteUbergraph_UI_WebBrowser(int32 EntryPoint, TArray<class ABP_UI_CrewLobbyManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_UI_CrewLobbyManager_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WebBrowser_C", "ExecuteUbergraph_UI_WebBrowser");

	Params::UUI_WebBrowser_C_ExecuteUbergraph_UI_WebBrowser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


