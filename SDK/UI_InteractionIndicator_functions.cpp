#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_InteractionIndicator.UI_InteractionIndicator_C
// (None)

class UClass* UUI_InteractionIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_InteractionIndicator_C");

	return Clss;
}


// UI_InteractionIndicator_C UI_InteractionIndicator.Default__UI_InteractionIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_InteractionIndicator_C* UUI_InteractionIndicator_C::GetDefaultObj()
{
	static class UUI_InteractionIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_InteractionIndicator_C*>(UUI_InteractionIndicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


