#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Ui_SavedPreset.UI_SavedPreset_C
// (None)

class UClass* UUI_SavedPreset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SavedPreset_C");

	return Clss;
}


// UI_SavedPreset_C Ui_SavedPreset.Default__UI_SavedPreset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SavedPreset_C* UUI_SavedPreset_C::GetDefaultObj()
{
	static class UUI_SavedPreset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SavedPreset_C*>(UUI_SavedPreset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ui_SavedPreset.UI_SavedPreset_C.SetShipTypeName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UUI_SavedPreset_C::SetShipTypeName(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "SetShipTypeName");

	Params::UUI_SavedPreset_C_SetShipTypeName_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ui_SavedPreset.UI_SavedPreset_C.SetShipType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ShipTypes             ShipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SavedPreset_C::SetShipType(enum class E_ShipTypes ShipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "SetShipType");

	Params::UUI_SavedPreset_C_SetShipType_Params Parms{};

	Parms.ShipType = ShipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ui_SavedPreset.UI_SavedPreset_C.ShowShipType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_SavedPreset_C::ShowShipType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "ShowShipType");

	Params::UUI_SavedPreset_C_ShowShipType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ui_SavedPreset.UI_SavedPreset_C.SetBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SavedPreset_C::SetBgColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "SetBgColor");

	Params::UUI_SavedPreset_C_SetBgColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ui_SavedPreset.UI_SavedPreset_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SavedPreset_C::SetIcon(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "SetIcon");

	Params::UUI_SavedPreset_C_SetIcon_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ui_SavedPreset.UI_SavedPreset_C.SetPresetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_SavedPreset_C::SetPresetName(const class FString& Name, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "SetPresetName");

	Params::UUI_SavedPreset_C_SetPresetName_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ui_SavedPreset.UI_SavedPreset_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SavedPreset_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ui_SavedPreset.UI_SavedPreset_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SavedPreset_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ui_SavedPreset.UI_SavedPreset_C.BndEvt__Select_Preset_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SavedPreset_C::BndEvt__Select_Preset_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "BndEvt__Select_Preset_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ui_SavedPreset.UI_SavedPreset_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SavedPreset_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ui_SavedPreset.UI_SavedPreset_C.ExecuteUbergraph_UI_SavedPreset
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShipSettings_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_DeletePresetConfirm_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShipSettings_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MainMenu_GameInstance_C* K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ShipCustomizationPreset CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MainMenu_GameInstance_C* K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomizationPreset CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization                    (HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PresetPopup_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShipStats_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUI_ShipStats_C*             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SavedPreset_C::ExecuteUbergraph_UI_SavedPreset(int32 EntryPoint, TArray<class UUI_ShipSettings_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_DeletePresetConfirm_C* CallFunc_Create_ReturnValue, class UUI_ShipSettings_C* CallFunc_Array_Get_Item, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MainMenu_GameInstance_C* K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, const struct FST_ShipCustomizationPreset& CallFunc_Array_Get_Item_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_MainMenu_GameInstance_C* K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const struct FST_ShipCustomizationPreset& CallFunc_Array_Get_Item_2, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_3, class UUI_PresetPopup_C* CallFunc_Create_ReturnValue_1, TArray<class UUI_ShipStats_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUI_ShipStats_C* CallFunc_Array_Get_Item_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SavedPreset_C", "ExecuteUbergraph_UI_SavedPreset");

	Params::UUI_SavedPreset_C_ExecuteUbergraph_UI_SavedPreset_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance = K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Player_Customization_Customization = CallFunc_Get_Player_Customization_Customization;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance_1 = K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Get_Ship_Customization_Customization = CallFunc_Get_Ship_Customization_Customization;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


