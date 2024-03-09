#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DeletePresetConfirm.UI_DeletePresetConfirm_C
// (None)

class UClass* UUI_DeletePresetConfirm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DeletePresetConfirm_C");

	return Clss;
}


// UI_DeletePresetConfirm_C UI_DeletePresetConfirm.Default__UI_DeletePresetConfirm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DeletePresetConfirm_C* UUI_DeletePresetConfirm_C::GetDefaultObj()
{
	static class UUI_DeletePresetConfirm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DeletePresetConfirm_C*>(UUI_DeletePresetConfirm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DeletePresetConfirm.UI_DeletePresetConfirm_C.RemovePreset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_ShipCustomizationPreset>PresetArray                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_ShipCustomizationPreset K2Node_MakeStruct_ST_ShipCustomizationPreset                     (HasGetValueTypeHash)

void UUI_DeletePresetConfirm_C::RemovePreset(TArray<struct FST_ShipCustomizationPreset>& PresetArray, const struct FST_ShipCustomizationPreset& K2Node_MakeStruct_ST_ShipCustomizationPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeletePresetConfirm_C", "RemovePreset");

	Params::UUI_DeletePresetConfirm_C_RemovePreset_Params Parms{};

	Parms.PresetArray = PresetArray;
	Parms.K2Node_MakeStruct_ST_ShipCustomizationPreset = K2Node_MakeStruct_ST_ShipCustomizationPreset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DeletePresetConfirm.UI_DeletePresetConfirm_C.GetPresetArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_ShipCustomizationPreset>ShipArray                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_ShipCustomizationPreset>PirateArray                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_ShipCustomizationPreset>NewParam1                                                        (Parm, OutParm)

void UUI_DeletePresetConfirm_C::GetPresetArray(TArray<struct FST_ShipCustomizationPreset>& ShipArray, TArray<struct FST_ShipCustomizationPreset>& PirateArray, TArray<struct FST_ShipCustomizationPreset>* NewParam1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeletePresetConfirm_C", "GetPresetArray");

	Params::UUI_DeletePresetConfirm_C_GetPresetArray_Params Parms{};

	Parms.ShipArray = ShipArray;
	Parms.PirateArray = PirateArray;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam1 != nullptr)
		*NewParam1 = std::move(Parms.NewParam1);

}


// Function UI_DeletePresetConfirm.UI_DeletePresetConfirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_DeletePresetConfirm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeletePresetConfirm_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DeletePresetConfirm.UI_DeletePresetConfirm_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_DeletePresetConfirm_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeletePresetConfirm_C", "BndEvt__Button_6_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DeletePresetConfirm.UI_DeletePresetConfirm_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_DeletePresetConfirm_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeletePresetConfirm_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DeletePresetConfirm.UI_DeletePresetConfirm_C.ExecuteUbergraph_UI_DeletePresetConfirm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MainMenu_GameInstance_C* K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_DeletePresetConfirm_C::ExecuteUbergraph_UI_DeletePresetConfirm(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MainMenu_GameInstance_C* K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeletePresetConfirm_C", "ExecuteUbergraph_UI_DeletePresetConfirm");

	Params::UUI_DeletePresetConfirm_C_ExecuteUbergraph_UI_DeletePresetConfirm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance = K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


