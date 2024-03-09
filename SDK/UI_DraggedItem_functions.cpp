#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DraggedItem.UI_DraggedItem_C
// (None)

class UClass* UUI_DraggedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DraggedItem_C");

	return Clss;
}


// UI_DraggedItem_C UI_DraggedItem.Default__UI_DraggedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DraggedItem_C* UUI_DraggedItem_C::GetDefaultObj()
{
	static class UUI_DraggedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DraggedItem_C*>(UUI_DraggedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DraggedItem.UI_DraggedItem_C.SetIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

struct FSlateBrush UUI_DraggedItem_C::SetIcon(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DraggedItem_C", "SetIcon");

	Params::UUI_DraggedItem_C_SetIcon_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


