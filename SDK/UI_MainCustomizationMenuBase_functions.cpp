#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MainCustomizationMenuBase.UI_MainCustomizationMenuBase_C
// (None)

class UClass* UUI_MainCustomizationMenuBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MainCustomizationMenuBase_C");

	return Clss;
}


// UI_MainCustomizationMenuBase_C UI_MainCustomizationMenuBase.Default__UI_MainCustomizationMenuBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MainCustomizationMenuBase_C* UUI_MainCustomizationMenuBase_C::GetDefaultObj()
{
	static class UUI_MainCustomizationMenuBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MainCustomizationMenuBase_C*>(UUI_MainCustomizationMenuBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


