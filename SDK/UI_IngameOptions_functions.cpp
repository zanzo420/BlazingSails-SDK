#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_IngameOptions.UI_IngameOptions_C
// (None)

class UClass* UUI_IngameOptions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_IngameOptions_C");

	return Clss;
}


// UI_IngameOptions_C UI_IngameOptions.Default__UI_IngameOptions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_IngameOptions_C* UUI_IngameOptions_C::GetDefaultObj()
{
	static class UUI_IngameOptions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_IngameOptions_C*>(UUI_IngameOptions_C::StaticClass()->DefaultObject);

	return Default;
}

}


