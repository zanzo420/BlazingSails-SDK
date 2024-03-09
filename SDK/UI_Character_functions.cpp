#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Character.UI_Character_C
// (None)

class UClass* UUI_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Character_C");

	return Clss;
}


// UI_Character_C UI_Character.Default__UI_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Character_C* UUI_Character_C::GetDefaultObj()
{
	static class UUI_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Character_C*>(UUI_Character_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Character.UI_Character_C.SetUnlockProcentText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UUI_Character_C::SetUnlockProcentText(float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "SetUnlockProcentText");

	Params::UUI_Character_C_SetUnlockProcentText_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Character.UI_Character_C.SetUnlockProcent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_Character_C::SetUnlockProcent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "SetUnlockProcent");

	Params::UUI_Character_C_SetUnlockProcent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Character.UI_Character_C.Fetch Mannequin
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bValid                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Mannequin_C*             MannequinRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsValid                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_UI_CrewLobbyManager_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_UI_CrewLobbyManager_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Mannequin_C*             CallFunc_Get_Local_Mannequin_AsBP_Mannequin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_C::Fetch_Mannequin(bool* bValid, class ABP_Mannequin_C** MannequinRef, bool bIsValid, bool CallFunc_IsValid_ReturnValue, TArray<class ABP_UI_CrewLobbyManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_UI_CrewLobbyManager_C* CallFunc_Array_Get_Item, class ABP_Mannequin_C* CallFunc_Get_Local_Mannequin_AsBP_Mannequin, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "Fetch Mannequin");

	Params::UUI_Character_C_Fetch_Mannequin_Params Parms{};

	Parms.bIsValid = bIsValid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Get_Local_Mannequin_AsBP_Mannequin = CallFunc_Get_Local_Mannequin_AsBP_Mannequin;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (MannequinRef != nullptr)
		*MannequinRef = Parms.MannequinRef;

}


// Function UI_Character.UI_Character_C.LoadActiveTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_C::LoadActiveTab(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "LoadActiveTab");

	Params::UUI_Character_C_LoadActiveTab_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Character.UI_Character_C.PreviousCosmetic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDatatableAmount_Amount                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Character_C::PreviousCosmetic(int32 Index, class UDataTable* DataTable, int32* NewIndex, int32 NextIndex, int32 CallFunc_GetDatatableAmount_Amount, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "PreviousCosmetic");

	Params::UUI_Character_C_PreviousCosmetic_Params Parms{};

	Parms.Index = Index;
	Parms.DataTable = DataTable;
	Parms.NextIndex = NextIndex;
	Parms.CallFunc_GetDatatableAmount_Amount = CallFunc_GetDatatableAmount_Amount;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NewIndex != nullptr)
		*NewIndex = Parms.NewIndex;

}


// Function UI_Character.UI_Character_C.NextCosmetic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDatatableAmount_Amount                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_C::NextCosmetic(int32 Index, class UDataTable* DataTable, int32* NewIndex, int32 NextIndex, int32 CallFunc_GetDatatableAmount_Amount, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "NextCosmetic");

	Params::UUI_Character_C_NextCosmetic_Params Parms{};

	Parms.Index = Index;
	Parms.DataTable = DataTable;
	Parms.NextIndex = NextIndex;
	Parms.CallFunc_GetDatatableAmount_Amount = CallFunc_GetDatatableAmount_Amount;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewIndex != nullptr)
		*NewIndex = Parms.NewIndex;

}


// Function UI_Character.UI_Character_C.LoadCustomisation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_C::LoadCustomisation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "LoadCustomisation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.RefreshCharacterUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_C::RefreshCharacterUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "RefreshCharacterUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Character_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_K2Node_ComponentBoundEvent_14_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_0_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_0_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_0_K2Node_ComponentBoundEvent_17_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_1_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_1_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_1_K2Node_ComponentBoundEvent_20_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_2_K2Node_ComponentBoundEvent_21_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_2_K2Node_ComponentBoundEvent_21_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_2_K2Node_ComponentBoundEvent_21_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_3_K2Node_ComponentBoundEvent_22_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_3_K2Node_ComponentBoundEvent_22_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_3_K2Node_ComponentBoundEvent_22_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_4_K2Node_ComponentBoundEvent_23_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_4_K2Node_ComponentBoundEvent_23_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_4_K2Node_ComponentBoundEvent_23_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_5_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_5_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_5_K2Node_ComponentBoundEvent_24_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_6_K2Node_ComponentBoundEvent_25_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_6_K2Node_ComponentBoundEvent_25_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_6_K2Node_ComponentBoundEvent_25_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_7_K2Node_ComponentBoundEvent_26_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_7_K2Node_ComponentBoundEvent_26_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_7_K2Node_ComponentBoundEvent_26_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_9_K2Node_ComponentBoundEvent_27_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_9_K2Node_ComponentBoundEvent_27_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_9_K2Node_ComponentBoundEvent_27_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_10_K2Node_ComponentBoundEvent_28_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_10_K2Node_ComponentBoundEvent_28_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_10_K2Node_ComponentBoundEvent_28_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_11_K2Node_ComponentBoundEvent_29_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_11_K2Node_ComponentBoundEvent_29_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_11_K2Node_ComponentBoundEvent_29_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_12_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_12_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_12_K2Node_ComponentBoundEvent_30_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_8_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_8_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_8_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_13_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_13_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_13_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_14_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_14_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_14_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.BndEvt__UI_CategoryButton_C_15_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Character_C::BndEvt__UI_CategoryButton_C_15_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "BndEvt__UI_CategoryButton_C_15_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.LoadHats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_C::LoadHats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "LoadHats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.Loading Inventory Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Character_C::Loading_Inventory_Complete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "Loading Inventory Complete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Character.UI_Character_C.ExecuteUbergraph_UI_Character
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class ABP_UI_CrewLobbyManager_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_Fetch_Mannequin_bValid                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Mannequin_C*             CallFunc_Fetch_Mannequin_MannequinRef                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StartMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_StartMenu_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseController_C*        K2Node_DynamicCast_AsBP_Base_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Character_C::ExecuteUbergraph_UI_Character(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class ABP_UI_CrewLobbyManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Fetch_Mannequin_bValid, class ABP_Mannequin_C* CallFunc_Fetch_Mannequin_MannequinRef, TArray<class UUI_StartMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_StartMenu_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Character_C", "ExecuteUbergraph_UI_Character");

	Params::UUI_Character_C_ExecuteUbergraph_UI_Character_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Fetch_Mannequin_bValid = CallFunc_Fetch_Mannequin_bValid;
	Parms.CallFunc_Fetch_Mannequin_MannequinRef = CallFunc_Fetch_Mannequin_MannequinRef;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Base_Controller = K2Node_DynamicCast_AsBP_Base_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


