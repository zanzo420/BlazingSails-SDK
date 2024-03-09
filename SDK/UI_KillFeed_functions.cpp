#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_KillFeed.UI_KillFeed_C
// (None)

class UClass* UUI_KillFeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_KillFeed_C");

	return Clss;
}


// UI_KillFeed_C UI_KillFeed.Default__UI_KillFeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_KillFeed_C* UUI_KillFeed_C::GetDefaultObj()
{
	static class UUI_KillFeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_KillFeed_C*>(UUI_KillFeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


