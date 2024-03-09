#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CurseInfo.UI_CurseInfo_C
// (None)

class UClass* UUI_CurseInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CurseInfo_C");

	return Clss;
}


// UI_CurseInfo_C UI_CurseInfo.Default__UI_CurseInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CurseInfo_C* UUI_CurseInfo_C::GetDefaultObj()
{
	static class UUI_CurseInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CurseInfo_C*>(UUI_CurseInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


