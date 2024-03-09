#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_InventoryError.UI_InventoryError_C
// (None)

class UClass* UUI_InventoryError_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_InventoryError_C");

	return Clss;
}


// UI_InventoryError_C UI_InventoryError.Default__UI_InventoryError_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_InventoryError_C* UUI_InventoryError_C::GetDefaultObj()
{
	static class UUI_InventoryError_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_InventoryError_C*>(UUI_InventoryError_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_InventoryError.UI_InventoryError_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UUI_InventoryError_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InventoryError_C", "GetText_0");

	Params::UUI_InventoryError_C_GetText_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_InventoryError.UI_InventoryError_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_InventoryError_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InventoryError_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InventoryError.UI_InventoryError_C.Replay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_InventoryError_C::Replay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InventoryError_C", "Replay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InventoryError.UI_InventoryError_C.ExecuteUbergraph_UI_InventoryError
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InventoryError_C::ExecuteUbergraph_UI_InventoryError(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InventoryError_C", "ExecuteUbergraph_UI_InventoryError");

	Params::UUI_InventoryError_C_ExecuteUbergraph_UI_InventoryError_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


