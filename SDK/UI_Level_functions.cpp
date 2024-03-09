#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Level.UI_Level_C
// (None)

class UClass* UUI_Level_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Level_C");

	return Clss;
}


// UI_Level_C UI_Level.Default__UI_Level_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Level_C* UUI_Level_C::GetDefaultObj()
{
	static class UUI_Level_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Level_C*>(UUI_Level_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Level.UI_Level_C.Update Host Settings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class E_GameModes, int32>Local_Level_Index                                                (Edit, BlueprintVisible)
// class UBP_GameInstance_C*          CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Level_C::Update_Host_Settings(TMap<enum class E_GameModes, int32> Local_Level_Index, class UBP_GameInstance_C* CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Level_C", "Update Host Settings");

	Params::UUI_Level_C_Update_Host_Settings_Params Parms{};

	Parms.Local_Level_Index = Local_Level_Index;
	Parms.CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance = CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Level.UI_Level_C.BndEvt__Btn_CaversnNew_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Level_C::BndEvt__Btn_CaversnNew_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Level_C", "BndEvt__Btn_CaversnNew_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Level.UI_Level_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Level_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Level_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Level.UI_Level_C.Unhighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Level_C::Unhighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Level_C", "Unhighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Level.UI_Level_C.Highlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Level_C::Highlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Level_C", "Highlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Level.UI_Level_C.Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Level_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Level_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Level.UI_Level_C.BndEvt__Btn_CaversnNew_K2Node_ComponentBoundEvent_128_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Level_C::BndEvt__Btn_CaversnNew_K2Node_ComponentBoundEvent_128_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Level_C", "BndEvt__Btn_CaversnNew_K2Node_ComponentBoundEvent_128_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Level.UI_Level_C.BndEvt__Btn_CaversnNew_K2Node_ComponentBoundEvent_138_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Level_C::BndEvt__Btn_CaversnNew_K2Node_ComponentBoundEvent_138_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Level_C", "BndEvt__Btn_CaversnNew_K2Node_ComponentBoundEvent_138_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Level.UI_Level_C.ExecuteUbergraph_UI_Level
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UUI_Level_C::ExecuteUbergraph_UI_Level(int32 EntryPoint, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Level_C", "ExecuteUbergraph_UI_Level");

	Params::UUI_Level_C_ExecuteUbergraph_UI_Level_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


