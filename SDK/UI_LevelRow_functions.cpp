#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LevelRow.UI_LevelRow_C
// (None)

class UClass* UUI_LevelRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LevelRow_C");

	return Clss;
}


// UI_LevelRow_C UI_LevelRow.Default__UI_LevelRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LevelRow_C* UUI_LevelRow_C::GetDefaultObj()
{
	static class UUI_LevelRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LevelRow_C*>(UUI_LevelRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


