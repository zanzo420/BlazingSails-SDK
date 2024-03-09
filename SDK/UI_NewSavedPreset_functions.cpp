#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_NewSavedPreset.UI_NewSavedPreset_C
// (None)

class UClass* UUI_NewSavedPreset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_NewSavedPreset_C");

	return Clss;
}


// UI_NewSavedPreset_C UI_NewSavedPreset.Default__UI_NewSavedPreset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_NewSavedPreset_C* UUI_NewSavedPreset_C::GetDefaultObj()
{
	static class UUI_NewSavedPreset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_NewSavedPreset_C*>(UUI_NewSavedPreset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_NewSavedPreset.UI_NewSavedPreset_C.GetShipName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShipPreset_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ShipName                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UUI_NewSavedPreset_C::GetShipName(bool ShipPreset_, class FString* ShipName, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NewSavedPreset_C", "GetShipName");

	Params::UUI_NewSavedPreset_C_GetShipName_Params Parms{};

	Parms.ShipPreset_ = ShipPreset_;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShipName != nullptr)
		*ShipName = std::move(Parms.ShipName);

}


// Function UI_NewSavedPreset.UI_NewSavedPreset_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_NewSavedPreset_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NewSavedPreset_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_NewSavedPreset.UI_NewSavedPreset_C.ExecuteUbergraph_UI_NewSavedPreset
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PresetPopup_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetShipName_ShipName                                    (ZeroConstructor, HasGetValueTypeHash)

void UUI_NewSavedPreset_C::ExecuteUbergraph_UI_NewSavedPreset(int32 EntryPoint, class UUI_PresetPopup_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_GetShipName_ShipName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NewSavedPreset_C", "ExecuteUbergraph_UI_NewSavedPreset");

	Params::UUI_NewSavedPreset_C_ExecuteUbergraph_UI_NewSavedPreset_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetShipName_ShipName = CallFunc_GetShipName_ShipName;

	UObject::ProcessEvent(Func, &Parms);

}

}


