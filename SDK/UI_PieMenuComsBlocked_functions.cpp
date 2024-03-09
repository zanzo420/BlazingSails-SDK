#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PieMenuComsBlocked.UI_PieMenuComsBlocked_C
// (None)

class UClass* UUI_PieMenuComsBlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PieMenuComsBlocked_C");

	return Clss;
}


// UI_PieMenuComsBlocked_C UI_PieMenuComsBlocked.Default__UI_PieMenuComsBlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PieMenuComsBlocked_C* UUI_PieMenuComsBlocked_C::GetDefaultObj()
{
	static class UUI_PieMenuComsBlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PieMenuComsBlocked_C*>(UUI_PieMenuComsBlocked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_PieMenuComsBlocked.UI_PieMenuComsBlocked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_PieMenuComsBlocked_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PieMenuComsBlocked_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PieMenuComsBlocked.UI_PieMenuComsBlocked_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PieMenuComsBlocked_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PieMenuComsBlocked_C", "Tick");

	Params::UUI_PieMenuComsBlocked_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PieMenuComsBlocked.UI_PieMenuComsBlocked_C.ExecuteUbergraph_UI_PieMenuComsBlocked
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PieMenuComsBlocked_C::ExecuteUbergraph_UI_PieMenuComsBlocked(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_Conv_IntToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PieMenuComsBlocked_C", "ExecuteUbergraph_UI_PieMenuComsBlocked");

	Params::UUI_PieMenuComsBlocked_C_ExecuteUbergraph_UI_PieMenuComsBlocked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


