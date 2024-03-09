#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_WinningScreenTeam.UI_WinningScreenTeam_C
// (None)

class UClass* UUI_WinningScreenTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_WinningScreenTeam_C");

	return Clss;
}


// UI_WinningScreenTeam_C UI_WinningScreenTeam.Default__UI_WinningScreenTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_WinningScreenTeam_C* UUI_WinningScreenTeam_C::GetDefaultObj()
{
	static class UUI_WinningScreenTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_WinningScreenTeam_C*>(UUI_WinningScreenTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


