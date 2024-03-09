#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_IronTurnInChest.UI_IronTurnInChest_C
// (None)

class UClass* UUI_IronTurnInChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_IronTurnInChest_C");

	return Clss;
}


// UI_IronTurnInChest_C UI_IronTurnInChest.Default__UI_IronTurnInChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_IronTurnInChest_C* UUI_IronTurnInChest_C::GetDefaultObj()
{
	static class UUI_IronTurnInChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_IronTurnInChest_C*>(UUI_IronTurnInChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_IronTurnInChest.UI_IronTurnInChest_C.SetShowWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_IronTurnInChest_C::SetShowWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_IronTurnInChest_C", "SetShowWidget");

	Params::UUI_IronTurnInChest_C_SetShowWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


