#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DirectionIndicatorFlag.UI_DirectionIndicatorFlag_C
// (None)

class UClass* UUI_DirectionIndicatorFlag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DirectionIndicatorFlag_C");

	return Clss;
}


// UI_DirectionIndicatorFlag_C UI_DirectionIndicatorFlag.Default__UI_DirectionIndicatorFlag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DirectionIndicatorFlag_C* UUI_DirectionIndicatorFlag_C::GetDefaultObj()
{
	static class UUI_DirectionIndicatorFlag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DirectionIndicatorFlag_C*>(UUI_DirectionIndicatorFlag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DirectionIndicatorFlag.UI_DirectionIndicatorFlag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_DirectionIndicatorFlag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorFlag_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DirectionIndicatorFlag.UI_DirectionIndicatorFlag_C.ExecuteUbergraph_UI_DirectionIndicatorFlag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ConquestFlag_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicatorFlag_C::ExecuteUbergraph_UI_DirectionIndicatorFlag(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UUI_ConquestFlag_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorFlag_C", "ExecuteUbergraph_UI_DirectionIndicatorFlag");

	Params::UUI_DirectionIndicatorFlag_C_ExecuteUbergraph_UI_DirectionIndicatorFlag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


