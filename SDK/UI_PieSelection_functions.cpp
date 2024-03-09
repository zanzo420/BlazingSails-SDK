#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PieSelection.UI_PieSelection_C
// (None)

class UClass* UUI_PieSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PieSelection_C");

	return Clss;
}


// UI_PieSelection_C UI_PieSelection.Default__UI_PieSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PieSelection_C* UUI_PieSelection_C::GetDefaultObj()
{
	static class UUI_PieSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PieSelection_C*>(UUI_PieSelection_C::StaticClass()->DefaultObject);

	return Default;
}

}


