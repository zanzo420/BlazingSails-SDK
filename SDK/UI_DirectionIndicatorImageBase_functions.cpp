#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DirectionIndicatorImageBase.UI_DirectionIndicatorImageBase_C
// (None)

class UClass* UUI_DirectionIndicatorImageBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DirectionIndicatorImageBase_C");

	return Clss;
}


// UI_DirectionIndicatorImageBase_C UI_DirectionIndicatorImageBase.Default__UI_DirectionIndicatorImageBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DirectionIndicatorImageBase_C* UUI_DirectionIndicatorImageBase_C::GetDefaultObj()
{
	static class UUI_DirectionIndicatorImageBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DirectionIndicatorImageBase_C*>(UUI_DirectionIndicatorImageBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DirectionIndicatorImageBase.UI_DirectionIndicatorImageBase_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Degrees                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicatorImageBase_C::SetAngle(float Degrees)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImageBase_C", "SetAngle");

	Params::UUI_DirectionIndicatorImageBase_C_SetAngle_Params Parms{};

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DirectionIndicatorImageBase.UI_DirectionIndicatorImageBase_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   S                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicatorImageBase_C::SetScale(const struct FVector2D& S)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImageBase_C", "SetScale");

	Params::UUI_DirectionIndicatorImageBase_C_SetScale_Params Parms{};

	Parms.S = S;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DirectionIndicatorImageBase.UI_DirectionIndicatorImageBase_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_DirectionIndicatorImageBase_C::GetVisibility_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImageBase_C", "GetVisibility_0");

	Params::UUI_DirectionIndicatorImageBase_C_GetVisibility_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_DirectionIndicatorImageBase.UI_DirectionIndicatorImageBase_C.GetScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector2D                   Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicatorImageBase_C::GetScale(struct FVector2D* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImageBase_C", "GetScale");

	Params::UUI_DirectionIndicatorImageBase_C_GetScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

}


// Function UI_DirectionIndicatorImageBase.UI_DirectionIndicatorImageBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_DirectionIndicatorImageBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImageBase_C", "PreConstruct");

	Params::UUI_DirectionIndicatorImageBase_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DirectionIndicatorImageBase.UI_DirectionIndicatorImageBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_DirectionIndicatorImageBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImageBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DirectionIndicatorImageBase.UI_DirectionIndicatorImageBase_C.ExecuteUbergraph_UI_DirectionIndicatorImageBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_DirectionIndicatorImageBase_C::ExecuteUbergraph_UI_DirectionIndicatorImageBase(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImageBase_C", "ExecuteUbergraph_UI_DirectionIndicatorImageBase");

	Params::UUI_DirectionIndicatorImageBase_C_ExecuteUbergraph_UI_DirectionIndicatorImageBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


