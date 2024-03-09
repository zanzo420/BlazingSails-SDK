#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ConquestFlagMarker.UI_ConquestFlagMarker_C
// (None)

class UClass* UUI_ConquestFlagMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ConquestFlagMarker_C");

	return Clss;
}


// UI_ConquestFlagMarker_C UI_ConquestFlagMarker.Default__UI_ConquestFlagMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ConquestFlagMarker_C* UUI_ConquestFlagMarker_C::GetDefaultObj()
{
	static class UUI_ConquestFlagMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ConquestFlagMarker_C*>(UUI_ConquestFlagMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ConquestFlagMarker.UI_ConquestFlagMarker_C.GetColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UUI_ConquestFlagMarker_C::GetColorAndOpacity_0(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestFlagMarker_C", "GetColorAndOpacity_0");

	Params::UUI_ConquestFlagMarker_C_GetColorAndOpacity_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ConquestFlagMarker.UI_ConquestFlagMarker_C.SetShowWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_ConquestFlagMarker_C::SetShowWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestFlagMarker_C", "SetShowWidget");

	Params::UUI_ConquestFlagMarker_C_SetShowWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


