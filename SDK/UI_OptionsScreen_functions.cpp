#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_OptionsScreen.UI_OptionsScreen_C
// (None)

class UClass* UUI_OptionsScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_OptionsScreen_C");

	return Clss;
}


// UI_OptionsScreen_C UI_OptionsScreen.Default__UI_OptionsScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_OptionsScreen_C* UUI_OptionsScreen_C::GetDefaultObj()
{
	static class UUI_OptionsScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_OptionsScreen_C*>(UUI_OptionsScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


