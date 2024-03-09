#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SunkenTurnInChest.UI_SunkenTurnInChest_C
// (None)

class UClass* UUI_SunkenTurnInChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SunkenTurnInChest_C");

	return Clss;
}


// UI_SunkenTurnInChest_C UI_SunkenTurnInChest.Default__UI_SunkenTurnInChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SunkenTurnInChest_C* UUI_SunkenTurnInChest_C::GetDefaultObj()
{
	static class UUI_SunkenTurnInChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SunkenTurnInChest_C*>(UUI_SunkenTurnInChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SunkenTurnInChest.UI_SunkenTurnInChest_C.SetShowWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_SunkenTurnInChest_C::SetShowWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SunkenTurnInChest_C", "SetShowWidget");

	Params::UUI_SunkenTurnInChest_C_SetShowWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


