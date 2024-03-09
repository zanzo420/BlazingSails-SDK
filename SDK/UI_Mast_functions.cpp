#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Mast.UI_Mast_C
// (None)

class UClass* UUI_Mast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Mast_C");

	return Clss;
}


// UI_Mast_C UI_Mast.Default__UI_Mast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Mast_C* UUI_Mast_C::GetDefaultObj()
{
	static class UUI_Mast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Mast_C*>(UUI_Mast_C::StaticClass()->DefaultObject);

	return Default;
}

}


