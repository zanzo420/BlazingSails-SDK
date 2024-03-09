#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ShipStatDot.UI_ShipStatDot_C
// (None)

class UClass* UUI_ShipStatDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ShipStatDot_C");

	return Clss;
}


// UI_ShipStatDot_C UI_ShipStatDot.Default__UI_ShipStatDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ShipStatDot_C* UUI_ShipStatDot_C::GetDefaultObj()
{
	static class UUI_ShipStatDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ShipStatDot_C*>(UUI_ShipStatDot_C::StaticClass()->DefaultObject);

	return Default;
}

}


