#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ConquestFlagName.UI_ConquestFlagName_C
// (None)

class UClass* UUI_ConquestFlagName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ConquestFlagName_C");

	return Clss;
}


// UI_ConquestFlagName_C UI_ConquestFlagName.Default__UI_ConquestFlagName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ConquestFlagName_C* UUI_ConquestFlagName_C::GetDefaultObj()
{
	static class UUI_ConquestFlagName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ConquestFlagName_C*>(UUI_ConquestFlagName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ConquestFlagName.UI_ConquestFlagName_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UUI_ConquestFlagName_C::GetText_0(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestFlagName_C", "GetText_0");

	Params::UUI_ConquestFlagName_C_GetText_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


