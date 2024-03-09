#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_OptionsCategory.UI_OptionsCategory_C
// (None)

class UClass* UUI_OptionsCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_OptionsCategory_C");

	return Clss;
}


// UI_OptionsCategory_C UI_OptionsCategory.Default__UI_OptionsCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_OptionsCategory_C* UUI_OptionsCategory_C::GetDefaultObj()
{
	static class UUI_OptionsCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_OptionsCategory_C*>(UUI_OptionsCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_OptionsCategory.UI_OptionsCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsCategory_C", "PreConstruct");

	Params::UUI_OptionsCategory_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_OptionsCategory.UI_OptionsCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_OptionsCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsCategory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_OptionsCategory.UI_OptionsCategory_C.ExecuteUbergraph_UI_OptionsCategory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_OptionsCategory_C::ExecuteUbergraph_UI_OptionsCategory(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_OptionsCategory_C", "ExecuteUbergraph_UI_OptionsCategory");

	Params::UUI_OptionsCategory_C_ExecuteUbergraph_UI_OptionsCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


