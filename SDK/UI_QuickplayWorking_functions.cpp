#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_QuickplayWorking.UI_QuickplayWorking_C
// (None)

class UClass* UUI_QuickplayWorking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_QuickplayWorking_C");

	return Clss;
}


// UI_QuickplayWorking_C UI_QuickplayWorking.Default__UI_QuickplayWorking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_QuickplayWorking_C* UUI_QuickplayWorking_C::GetDefaultObj()
{
	static class UUI_QuickplayWorking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_QuickplayWorking_C*>(UUI_QuickplayWorking_C::StaticClass()->DefaultObject);

	return Default;
}

}


