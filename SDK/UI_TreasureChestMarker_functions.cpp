#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TreasureChestMarker.UI_TreasureChestMarker_C
// (None)

class UClass* UUI_TreasureChestMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TreasureChestMarker_C");

	return Clss;
}


// UI_TreasureChestMarker_C UI_TreasureChestMarker.Default__UI_TreasureChestMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TreasureChestMarker_C* UUI_TreasureChestMarker_C::GetDefaultObj()
{
	static class UUI_TreasureChestMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TreasureChestMarker_C*>(UUI_TreasureChestMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TreasureChestMarker.UI_TreasureChestMarker_C.SetShowWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_TreasureChestMarker_C::SetShowWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TreasureChestMarker_C", "SetShowWidget");

	Params::UUI_TreasureChestMarker_C_SetShowWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


