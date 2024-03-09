#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SuperTurnInChest.UI_SuperTurnInChest_C
// (None)

class UClass* UUI_SuperTurnInChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SuperTurnInChest_C");

	return Clss;
}


// UI_SuperTurnInChest_C UI_SuperTurnInChest.Default__UI_SuperTurnInChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SuperTurnInChest_C* UUI_SuperTurnInChest_C::GetDefaultObj()
{
	static class UUI_SuperTurnInChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SuperTurnInChest_C*>(UUI_SuperTurnInChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SuperTurnInChest.UI_SuperTurnInChest_C.SetShowWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_SuperTurnInChest_C::SetShowWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SuperTurnInChest_C", "SetShowWidget");

	Params::UUI_SuperTurnInChest_C_SetShowWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


