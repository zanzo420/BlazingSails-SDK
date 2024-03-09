#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TeamMenuEntry.UI_TeamMenuEntry_C
// (None)

class UClass* UUI_TeamMenuEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TeamMenuEntry_C");

	return Clss;
}


// UI_TeamMenuEntry_C UI_TeamMenuEntry.Default__UI_TeamMenuEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TeamMenuEntry_C* UUI_TeamMenuEntry_C::GetDefaultObj()
{
	static class UUI_TeamMenuEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TeamMenuEntry_C*>(UUI_TeamMenuEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.CheckAbilityToJoin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FText                        Info                                                             (Parm, OutParm)

bool UUI_TeamMenuEntry_C::CheckAbilityToJoin(class FText* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeamMenuEntry_C", "CheckAbilityToJoin");

	Params::UUI_TeamMenuEntry_C_CheckAbilityToJoin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = Parms.Info;

	return Parms.ReturnValue;

}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetButtonText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_CheckAbilityToJoin_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CheckAbilityToJoin_Info                                 (None)

class FText UUI_TeamMenuEntry_C::SetButtonText(bool CallFunc_CheckAbilityToJoin_ReturnValue, class FText CallFunc_CheckAbilityToJoin_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeamMenuEntry_C", "SetButtonText");

	Params::UUI_TeamMenuEntry_C_SetButtonText_Params Parms{};

	Parms.CallFunc_CheckAbilityToJoin_ReturnValue = CallFunc_CheckAbilityToJoin_ReturnValue;
	Parms.CallFunc_CheckAbilityToJoin_Info = CallFunc_CheckAbilityToJoin_Info;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetEnableJoinTeamButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckAbilityToJoin_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CheckAbilityToJoin_Info                                 (None)

bool UUI_TeamMenuEntry_C::SetEnableJoinTeamButton(bool CallFunc_CheckAbilityToJoin_ReturnValue, class FText CallFunc_CheckAbilityToJoin_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeamMenuEntry_C", "SetEnableJoinTeamButton");

	Params::UUI_TeamMenuEntry_C_SetEnableJoinTeamButton_Params Parms{};

	Parms.CallFunc_CheckAbilityToJoin_ReturnValue = CallFunc_CheckAbilityToJoin_ReturnValue;
	Parms.CallFunc_CheckAbilityToJoin_Info = CallFunc_CheckAbilityToJoin_Info;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetTeamName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UUI_TeamMenuEntry_C::SetTeamName(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeamMenuEntry_C", "SetTeamName");

	Params::UUI_TeamMenuEntry_C_SetTeamName_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetTeamNameColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateColor UUI_TeamMenuEntry_C::SetTeamNameColor(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeamMenuEntry_C", "SetTeamNameColor");

	Params::UUI_TeamMenuEntry_C_SetTeamNameColor_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_TeamMenuEntry_C::BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeamMenuEntry_C", "BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.ExecuteUbergraph_UI_TeamMenuEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAbilityToJoin_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CheckAbilityToJoin_Info                                 (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TeamMenuEntry_C::ExecuteUbergraph_UI_TeamMenuEntry(int32 EntryPoint, bool CallFunc_CheckAbilityToJoin_ReturnValue, class FText CallFunc_CheckAbilityToJoin_Info, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeamMenuEntry_C", "ExecuteUbergraph_UI_TeamMenuEntry");

	Params::UUI_TeamMenuEntry_C_ExecuteUbergraph_UI_TeamMenuEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CheckAbilityToJoin_ReturnValue = CallFunc_CheckAbilityToJoin_ReturnValue;
	Parms.CallFunc_CheckAbilityToJoin_Info = CallFunc_CheckAbilityToJoin_Info;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


