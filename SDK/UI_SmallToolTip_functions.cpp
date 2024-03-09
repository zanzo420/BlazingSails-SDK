#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SmallToolTip.UI_SmallToolTip_C
// (None)

class UClass* UUI_SmallToolTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SmallToolTip_C");

	return Clss;
}


// UI_SmallToolTip_C UI_SmallToolTip.Default__UI_SmallToolTip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SmallToolTip_C* UUI_SmallToolTip_C::GetDefaultObj()
{
	static class UUI_SmallToolTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SmallToolTip_C*>(UUI_SmallToolTip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SmallToolTip.UI_SmallToolTip_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UUI_SmallToolTip_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SmallToolTip_C", "GetText_0");

	Params::UUI_SmallToolTip_C_GetText_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


