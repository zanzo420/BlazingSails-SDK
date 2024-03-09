#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_VehicleWidgetBase.UI_VehicleWidgetBase_C
// (None)

class UClass* UUI_VehicleWidgetBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_VehicleWidgetBase_C");

	return Clss;
}


// UI_VehicleWidgetBase_C UI_VehicleWidgetBase.Default__UI_VehicleWidgetBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_VehicleWidgetBase_C* UUI_VehicleWidgetBase_C::GetDefaultObj()
{
	static class UUI_VehicleWidgetBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_VehicleWidgetBase_C*>(UUI_VehicleWidgetBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_VehicleWidgetBase.UI_VehicleWidgetBase_C.SetCharacterRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character_Reference                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VehicleWidgetBase_C::SetCharacterRef(class ABP_Character_C* Character_Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VehicleWidgetBase_C", "SetCharacterRef");

	Params::UUI_VehicleWidgetBase_C_SetCharacterRef_Params Parms{};

	Parms.Character_Reference = Character_Reference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VehicleWidgetBase.UI_VehicleWidgetBase_C.SetVehicleRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleBase_C*           Vehicle_Reference                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VehicleWidgetBase_C::SetVehicleRef(class ABP_VehicleBase_C* Vehicle_Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VehicleWidgetBase_C", "SetVehicleRef");

	Params::UUI_VehicleWidgetBase_C_SetVehicleRef_Params Parms{};

	Parms.Vehicle_Reference = Vehicle_Reference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VehicleWidgetBase.UI_VehicleWidgetBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VehicleWidgetBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VehicleWidgetBase_C", "Tick");

	Params::UUI_VehicleWidgetBase_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VehicleWidgetBase.UI_VehicleWidgetBase_C.ExecuteUbergraph_UI_VehicleWidgetBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_VehicleWidgetBase_C::ExecuteUbergraph_UI_VehicleWidgetBase(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VehicleWidgetBase_C", "ExecuteUbergraph_UI_VehicleWidgetBase");

	Params::UUI_VehicleWidgetBase_C_ExecuteUbergraph_UI_VehicleWidgetBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


