#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CosmeticItemBase.UI_CosmeticItemBase_C
// (None)

class UClass* UUI_CosmeticItemBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CosmeticItemBase_C");

	return Clss;
}


// UI_CosmeticItemBase_C UI_CosmeticItemBase.Default__UI_CosmeticItemBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CosmeticItemBase_C* UUI_CosmeticItemBase_C::GetDefaultObj()
{
	static class UUI_CosmeticItemBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CosmeticItemBase_C*>(UUI_CosmeticItemBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


