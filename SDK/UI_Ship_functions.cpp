#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Ship.UI_Ship_C
// (None)

class UClass* UUI_Ship_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Ship_C");

	return Clss;
}


// UI_Ship_C UI_Ship.Default__UI_Ship_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Ship_C* UUI_Ship_C::GetDefaultObj()
{
	static class UUI_Ship_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Ship_C*>(UUI_Ship_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Ship.UI_Ship_C.ShowGalleonDisclaimer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_Ship_C::ShowGalleonDisclaimer(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ShowGalleonDisclaimer");

	Params::UUI_Ship_C_ShowGalleonDisclaimer_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Ship.UI_Ship_C.ShipName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization                    (HasGetValueTypeHash)

class FText UUI_Ship_C::ShipName(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ShipName");

	Params::UUI_Ship_C_ShipName_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Ship_Customization_Customization = CallFunc_Get_Ship_Customization_Customization;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Ship.UI_Ship_C.GetShipType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UUI_Ship_C::GetShipType(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "GetShipType");

	Params::UUI_Ship_C_GetShipType_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Ship.UI_Ship_C.SetUnlockPercentText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UUI_Ship_C::SetUnlockPercentText(float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "SetUnlockPercentText");

	Params::UUI_Ship_C_SetUnlockPercentText_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Ship.UI_Ship_C.SetUnlockPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_Ship_C::SetUnlockPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "SetUnlockPercent");

	Params::UUI_Ship_C_SetUnlockPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Ship.UI_Ship_C.EnableAllButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_C::EnableAllButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "EnableAllButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.ClearAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_C::ClearAllGrids()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ClearAllGrids");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.ShowDoubleList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_Ship_C::ShowDoubleList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ShowDoubleList");

	Params::UUI_Ship_C_ShowDoubleList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Ship.UI_Ship_C.ShowSingleList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_Ship_C::ShowSingleList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ShowSingleList");

	Params::UUI_Ship_C_ShowSingleList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Ship.UI_Ship_C.SetItemName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UUI_Ship_C::SetItemName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "SetItemName");

	Params::UUI_Ship_C_SetItemName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Ship.UI_Ship_C.SetShipName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Customisation_Ship_Name                                          (Parm, OutParm)

void UUI_Ship_C::SetShipName(class FText* Customisation_Ship_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "SetShipName");

	Params::UUI_Ship_C_SetShipName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Customisation_Ship_Name != nullptr)
		*Customisation_Ship_Name = Parms.Customisation_Ship_Name;

}


// Function UI_Ship.UI_Ship_C.LoadShipCustomisation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Customisation5          Customisation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          ShipRef                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Ship_C::LoadShipCustomisation(const struct FST_Customisation5& Customisation, class ABP_BoatMeshBase_C* ShipRef, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "LoadShipCustomisation");

	Params::UUI_Ship_C_LoadShipCustomisation_Params Parms{};

	Parms.Customisation = Customisation;
	Parms.ShipRef = ShipRef;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Ship.UI_Ship_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Ship_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.SaveChanges
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_C::SaveChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "SaveChanges");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__Btn_Close_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__Button_50_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__Button_50_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__Button_50_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__Button_4_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__Button_5_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.CategorySwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_SteamItemCategories   Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secundary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Ship_C::CategorySwitch(enum class E_SteamItemCategories Category, bool Secundary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "CategorySwitch");

	Params::UUI_Ship_C_CategorySwitch_Params Parms{};

	Parms.Category = Category;
	Parms.Secundary = Secundary;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Ship.UI_Ship_C.ShipSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_C::ShipSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ShipSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__Btn_Refresh_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__Btn_Refresh_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__Btn_Refresh_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__Button_39_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__Button_39_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__Button_39_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__Button_6_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.ReloadShipCustomisation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ShipTypes             ShipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Ship_C::ReloadShipCustomisation(enum class E_ShipTypes ShipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ReloadShipCustomisation");

	Params::UUI_Ship_C_ReloadShipCustomisation_Params Parms{};

	Parms.ShipType = ShipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Ship.UI_Ship_C.ShipPresets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_C::ShipPresets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ShipPresets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_6_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_6_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_6_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_11_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_11_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_11_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_10_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_10_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_10_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_5_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_5_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_5_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_9_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_9_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_9_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_8_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_8_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_8_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_7_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_7_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_7_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_0_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_0_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_0_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_1_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_1_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_1_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_2_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_2_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_2_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_3_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_3_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_3_K2Node_ComponentBoundEvent_15_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_C_4_K2Node_ComponentBoundEvent_16_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_C_4_K2Node_ComponentBoundEvent_16_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_C_4_K2Node_ComponentBoundEvent_16_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.BndEvt__UI_CategoryButton_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_C::BndEvt__UI_CategoryButton_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "BndEvt__UI_CategoryButton_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.ShipCosmetics
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_SteamItemCategories   Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secundary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Ship_C::ShipCosmetics(enum class E_SteamItemCategories Category, bool Secundary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ShipCosmetics");

	Params::UUI_Ship_C_ShipCosmetics_Params Parms{};

	Parms.Category = Category;
	Parms.Secundary = Secundary;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Ship.UI_Ship_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Ship_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "Tick");

	Params::UUI_Ship_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Ship.UI_Ship_C.LoadHullColors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_C::LoadHullColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "LoadHullColors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.Start Menu Active Menu Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Menus                 Active_Menu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Menus                 Old_Menu                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Ship_C::Start_Menu_Active_Menu_Changed(enum class E_Menus Active_Menu, enum class E_Menus Old_Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "Start Menu Active Menu Changed");

	Params::UUI_Ship_C_Start_Menu_Active_Menu_Changed_Params Parms{};

	Parms.Active_Menu = Active_Menu;
	Parms.Old_Menu = Old_Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Ship.UI_Ship_C.Loading Inventory Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_C::Loading_Inventory_Complete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "Loading Inventory Complete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship.UI_Ship_C.ExecuteUbergraph_UI_Ship
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StartMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_StartMenu_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GenerateRandomShipName_RandomShipName                   (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization                    (HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_SteamItemCategories   K2Node_CustomEvent_Category_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Secundary_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ShipTypes             K2Node_CustomEvent_ShipType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class E_SteamItemCategories   K2Node_CustomEvent_Category                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Secundary                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShipName_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class E_Menus                 K2Node_CustomEvent_Active_Menu                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Menus                 K2Node_CustomEvent_Old_Menu                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseController_C*        K2Node_DynamicCast_AsBP_Base_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Ship_C::ExecuteUbergraph_UI_Ship(int32 EntryPoint, TArray<class UUI_StartMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_StartMenu_C* CallFunc_Array_Get_Item, class FText CallFunc_GenerateRandomShipName_RandomShipName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_1, enum class E_SteamItemCategories K2Node_CustomEvent_Category_1, bool K2Node_CustomEvent_Secundary_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, enum class E_ShipTypes K2Node_CustomEvent_ShipType, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_SteamItemCategories K2Node_CustomEvent_Category, bool K2Node_CustomEvent_Secundary, class UUI_ShipName_C* CallFunc_Create_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class E_Menus K2Node_CustomEvent_Active_Menu, enum class E_Menus K2Node_CustomEvent_Old_Menu, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_C", "ExecuteUbergraph_UI_Ship");

	Params::UUI_Ship_C_ExecuteUbergraph_UI_Ship_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GenerateRandomShipName_RandomShipName = CallFunc_GenerateRandomShipName_RandomShipName;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Ship_Customization_Customization = CallFunc_Get_Ship_Customization_Customization;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CustomEvent_Category_1 = K2Node_CustomEvent_Category_1;
	Parms.K2Node_CustomEvent_Secundary_1 = K2Node_CustomEvent_Secundary_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_CustomEvent_ShipType = K2Node_CustomEvent_ShipType;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_1 = K2Node_DynamicCast_AsBP_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Category = K2Node_CustomEvent_Category;
	Parms.K2Node_CustomEvent_Secundary = K2Node_CustomEvent_Secundary;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_2 = K2Node_DynamicCast_AsBP_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_3 = K2Node_DynamicCast_AsBP_Game_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Active_Menu = K2Node_CustomEvent_Active_Menu;
	Parms.K2Node_CustomEvent_Old_Menu = K2Node_CustomEvent_Old_Menu;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Base_Controller = K2Node_DynamicCast_AsBP_Base_Controller;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


