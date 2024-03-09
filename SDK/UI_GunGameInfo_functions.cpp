#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_GunGameInfo.UI_GunGameInfo_C
// (None)

class UClass* UUI_GunGameInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_GunGameInfo_C");

	return Clss;
}


// UI_GunGameInfo_C UI_GunGameInfo.Default__UI_GunGameInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_GunGameInfo_C* UUI_GunGameInfo_C::GetDefaultObj()
{
	static class UUI_GunGameInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_GunGameInfo_C*>(UUI_GunGameInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


