#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TopScreenMessageBase.UI_TopScreenMessageBase_C
// (None)

class UClass* UUI_TopScreenMessageBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TopScreenMessageBase_C");

	return Clss;
}


// UI_TopScreenMessageBase_C UI_TopScreenMessageBase.Default__UI_TopScreenMessageBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TopScreenMessageBase_C* UUI_TopScreenMessageBase_C::GetDefaultObj()
{
	static class UUI_TopScreenMessageBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TopScreenMessageBase_C*>(UUI_TopScreenMessageBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


