#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ExitGameDisclaimer.UI_ExitGameDisclaimer_C
// (None)

class UClass* UUI_ExitGameDisclaimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ExitGameDisclaimer_C");

	return Clss;
}


// UI_ExitGameDisclaimer_C UI_ExitGameDisclaimer.Default__UI_ExitGameDisclaimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ExitGameDisclaimer_C* UUI_ExitGameDisclaimer_C::GetDefaultObj()
{
	static class UUI_ExitGameDisclaimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ExitGameDisclaimer_C*>(UUI_ExitGameDisclaimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ExitGameDisclaimer.UI_ExitGameDisclaimer_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ExitGameDisclaimer_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ExitGameDisclaimer_C", "BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ExitGameDisclaimer.UI_ExitGameDisclaimer_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ExitGameDisclaimer_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ExitGameDisclaimer_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ExitGameDisclaimer.UI_ExitGameDisclaimer_C.ExecuteUbergraph_UI_ExitGameDisclaimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ExitGameDisclaimer_C::ExecuteUbergraph_UI_ExitGameDisclaimer(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ExitGameDisclaimer_C", "ExecuteUbergraph_UI_ExitGameDisclaimer");

	Params::UUI_ExitGameDisclaimer_C_ExecuteUbergraph_UI_ExitGameDisclaimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


