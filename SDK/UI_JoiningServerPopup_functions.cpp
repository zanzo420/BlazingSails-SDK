#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_JoiningServerPopup.UI_JoiningServerPopup_C
// (None)

class UClass* UUI_JoiningServerPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_JoiningServerPopup_C");

	return Clss;
}


// UI_JoiningServerPopup_C UI_JoiningServerPopup.Default__UI_JoiningServerPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_JoiningServerPopup_C* UUI_JoiningServerPopup_C::GetDefaultObj()
{
	static class UUI_JoiningServerPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_JoiningServerPopup_C*>(UUI_JoiningServerPopup_C::StaticClass()->DefaultObject);

	return Default;
}

}


