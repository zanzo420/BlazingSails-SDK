#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BoatMarker_BombVessel.UI_BoatMarker_BombVessel_C
// (None)

class UClass* UUI_BoatMarker_BombVessel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BoatMarker_BombVessel_C");

	return Clss;
}


// UI_BoatMarker_BombVessel_C UI_BoatMarker_BombVessel.Default__UI_BoatMarker_BombVessel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BoatMarker_BombVessel_C* UUI_BoatMarker_BombVessel_C::GetDefaultObj()
{
	static class UUI_BoatMarker_BombVessel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BoatMarker_BombVessel_C*>(UUI_BoatMarker_BombVessel_C::StaticClass()->DefaultObject);

	return Default;
}

}


