#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_GoldTurnInChest.UI_GoldTurnInChest_C
// (None)

class UClass* UUI_GoldTurnInChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_GoldTurnInChest_C");

	return Clss;
}


// UI_GoldTurnInChest_C UI_GoldTurnInChest.Default__UI_GoldTurnInChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_GoldTurnInChest_C* UUI_GoldTurnInChest_C::GetDefaultObj()
{
	static class UUI_GoldTurnInChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_GoldTurnInChest_C*>(UUI_GoldTurnInChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_GoldTurnInChest.UI_GoldTurnInChest_C.SetShowWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_GoldTurnInChest_C::SetShowWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GoldTurnInChest_C", "SetShowWidget");

	Params::UUI_GoldTurnInChest_C_SetShowWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


