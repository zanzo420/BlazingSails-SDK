#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ApplyVideoOptionsPopUp.UI_ApplyVideoOptionsPopUp_C
// (None)

class UClass* UUI_ApplyVideoOptionsPopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ApplyVideoOptionsPopUp_C");

	return Clss;
}


// UI_ApplyVideoOptionsPopUp_C UI_ApplyVideoOptionsPopUp.Default__UI_ApplyVideoOptionsPopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ApplyVideoOptionsPopUp_C* UUI_ApplyVideoOptionsPopUp_C::GetDefaultObj()
{
	static class UUI_ApplyVideoOptionsPopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ApplyVideoOptionsPopUp_C*>(UUI_ApplyVideoOptionsPopUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ApplyVideoOptionsPopUp.UI_ApplyVideoOptionsPopUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ApplyVideoOptionsPopUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ApplyVideoOptionsPopUp_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ApplyVideoOptionsPopUp.UI_ApplyVideoOptionsPopUp_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ApplyVideoOptionsPopUp_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ApplyVideoOptionsPopUp_C", "BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ApplyVideoOptionsPopUp.UI_ApplyVideoOptionsPopUp_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ApplyVideoOptionsPopUp_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ApplyVideoOptionsPopUp_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ApplyVideoOptionsPopUp.UI_ApplyVideoOptionsPopUp_C.ExecuteUbergraph_UI_ApplyVideoOptionsPopUp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ApplyVideoOptionsPopUp_C::ExecuteUbergraph_UI_ApplyVideoOptionsPopUp(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ApplyVideoOptionsPopUp_C", "ExecuteUbergraph_UI_ApplyVideoOptionsPopUp");

	Params::UUI_ApplyVideoOptionsPopUp_C_ExecuteUbergraph_UI_ApplyVideoOptionsPopUp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


