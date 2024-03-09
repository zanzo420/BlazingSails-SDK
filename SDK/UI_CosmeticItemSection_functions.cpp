#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CosmeticItemSection.UI_CosmeticItemSection_C
// (None)

class UClass* UUI_CosmeticItemSection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CosmeticItemSection_C");

	return Clss;
}


// UI_CosmeticItemSection_C UI_CosmeticItemSection.Default__UI_CosmeticItemSection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CosmeticItemSection_C* UUI_CosmeticItemSection_C::GetDefaultObj()
{
	static class UUI_CosmeticItemSection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CosmeticItemSection_C*>(UUI_CosmeticItemSection_C::StaticClass()->DefaultObject);

	return Default;
}

}


