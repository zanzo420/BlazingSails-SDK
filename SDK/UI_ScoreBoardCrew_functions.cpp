#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ScoreBoardCrew.UI_ScoreBoardCrew_C
// (None)

class UClass* UUI_ScoreBoardCrew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ScoreBoardCrew_C");

	return Clss;
}


// UI_ScoreBoardCrew_C UI_ScoreBoardCrew.Default__UI_ScoreBoardCrew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ScoreBoardCrew_C* UUI_ScoreBoardCrew_C::GetDefaultObj()
{
	static class UUI_ScoreBoardCrew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ScoreBoardCrew_C*>(UUI_ScoreBoardCrew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ScoreBoardCrew.UI_ScoreBoardCrew_C.GetLineBgColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UUI_ScoreBoardCrew_C::GetLineBgColor(class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ScoreBoardCrew_C", "GetLineBgColor");

	Params::UUI_ScoreBoardCrew_C_GetLineBgColor_Params Parms{};

	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ScoreBoardCrew.UI_ScoreBoardCrew_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ScoreBoardCrew_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ScoreBoardCrew_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ScoreBoardCrew.UI_ScoreBoardCrew_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ScoreBoardCrew_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ScoreBoardCrew_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ScoreBoardCrew.UI_ScoreBoardCrew_C.ExecuteUbergraph_UI_ScoreBoardCrew
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ScoreBoardCrew_C::ExecuteUbergraph_UI_ScoreBoardCrew(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ScoreBoardCrew_C", "ExecuteUbergraph_UI_ScoreBoardCrew");

	Params::UUI_ScoreBoardCrew_C_ExecuteUbergraph_UI_ScoreBoardCrew_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


