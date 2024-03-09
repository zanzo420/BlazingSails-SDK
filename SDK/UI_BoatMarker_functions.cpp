#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BoatMarker.UI_BoatMarker_C
// (None)

class UClass* UUI_BoatMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BoatMarker_C");

	return Clss;
}


// UI_BoatMarker_C UI_BoatMarker.Default__UI_BoatMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BoatMarker_C* UUI_BoatMarker_C::GetDefaultObj()
{
	static class UUI_BoatMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BoatMarker_C*>(UUI_BoatMarker_C::StaticClass()->DefaultObject);

	return Default;
}

}


