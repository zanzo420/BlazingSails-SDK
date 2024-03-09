#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_COnquestInfo_Overlay.UI_COnquestInfo_Overlay_C
// (None)

class UClass* UUI_COnquestInfo_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_COnquestInfo_Overlay_C");

	return Clss;
}


// UI_COnquestInfo_Overlay_C UI_COnquestInfo_Overlay.Default__UI_COnquestInfo_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_COnquestInfo_Overlay_C* UUI_COnquestInfo_Overlay_C::GetDefaultObj()
{
	static class UUI_COnquestInfo_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_COnquestInfo_Overlay_C*>(UUI_COnquestInfo_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


