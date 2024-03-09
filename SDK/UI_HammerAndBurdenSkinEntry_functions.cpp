#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C
// (None)

class UClass* UUI_HammerAndBurdenSkinEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HammerAndBurdenSkinEntry_C");

	return Clss;
}


// UI_HammerAndBurdenSkinEntry_C UI_HammerAndBurdenSkinEntry.Default__UI_HammerAndBurdenSkinEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HammerAndBurdenSkinEntry_C* UUI_HammerAndBurdenSkinEntry_C::GetDefaultObj()
{
	static class UUI_HammerAndBurdenSkinEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HammerAndBurdenSkinEntry_C*>(UUI_HammerAndBurdenSkinEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.Get_Img_bg_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUI_HammerAndBurdenSkinEntry_C::Get_Img_bg_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "Get_Img_bg_ColorAndOpacity_0");

	Params::UUI_HammerAndBurdenSkinEntry_C_Get_Img_bg_ColorAndOpacity_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.Get_GlowyStar_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUI_HammerAndBurdenSkinEntry_C::Get_GlowyStar_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "Get_GlowyStar_ColorAndOpacity_0");

	Params::UUI_HammerAndBurdenSkinEntry_C_Get_GlowyStar_ColorAndOpacity_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.Get_Img_Border_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUI_HammerAndBurdenSkinEntry_C::Get_Img_Border_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "Get_Img_Border_ColorAndOpacity_0");

	Params::UUI_HammerAndBurdenSkinEntry_C_Get_Img_Border_ColorAndOpacity_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

class FText UUI_HammerAndBurdenSkinEntry_C::GetText_0(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "GetText_0");

	Params::UUI_HammerAndBurdenSkinEntry_C_GetText_0_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_HammerAndBurdenSkinEntry_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "GetVisibility_0");

	Params::UUI_HammerAndBurdenSkinEntry_C_GetVisibility_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_HammerAndBurdenSkinEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_HammerAndBurdenSkinEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.RefreshSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_HammerAndBurdenSkinEntry_C::RefreshSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "RefreshSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.UnEquip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_HammerAndBurdenSkinEntry_C::UnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "UnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HammerAndBurdenSkinEntry.UI_HammerAndBurdenSkinEntry_C.ExecuteUbergraph_UI_HammerAndBurdenSkinEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization_2                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_HammerAndBurdenSkinEntry_C::ExecuteUbergraph_UI_HammerAndBurdenSkinEntry(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_1, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HammerAndBurdenSkinEntry_C", "ExecuteUbergraph_UI_HammerAndBurdenSkinEntry");

	Params::UUI_HammerAndBurdenSkinEntry_C_ExecuteUbergraph_UI_HammerAndBurdenSkinEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Player_Customization_Customization = CallFunc_Get_Player_Customization_Customization;
	Parms.CallFunc_Get_Player_Customization_Customization_1 = CallFunc_Get_Player_Customization_Customization_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_1 = K2Node_DynamicCast_AsBP_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_Player_Customization_Customization_2 = CallFunc_Get_Player_Customization_Customization_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


