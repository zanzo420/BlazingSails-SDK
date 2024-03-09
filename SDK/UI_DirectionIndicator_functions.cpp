#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DirectionIndicator.UI_DirectionIndicator_C
// (None)

class UClass* UUI_DirectionIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DirectionIndicator_C");

	return Clss;
}


// UI_DirectionIndicator_C UI_DirectionIndicator.Default__UI_DirectionIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DirectionIndicator_C* UUI_DirectionIndicator_C::GetDefaultObj()
{
	static class UUI_DirectionIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DirectionIndicator_C*>(UUI_DirectionIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DirectionIndicator.UI_DirectionIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_DirectionIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DirectionIndicator.UI_DirectionIndicator_C.ExecuteUbergraph_UI_DirectionIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_DirectionIndicatorImageBase_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicator_C::ExecuteUbergraph_UI_DirectionIndicator(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UUI_DirectionIndicatorImageBase_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicator_C", "ExecuteUbergraph_UI_DirectionIndicator");

	Params::UUI_DirectionIndicator_C_ExecuteUbergraph_UI_DirectionIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


