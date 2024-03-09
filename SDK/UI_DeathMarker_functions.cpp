#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DeathMarker.UI_DeathMarker_C
// (None)

class UClass* UUI_DeathMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DeathMarker_C");

	return Clss;
}


// UI_DeathMarker_C UI_DeathMarker.Default__UI_DeathMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DeathMarker_C* UUI_DeathMarker_C::GetDefaultObj()
{
	static class UUI_DeathMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DeathMarker_C*>(UUI_DeathMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DeathMarker.UI_DeathMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_DeathMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeathMarker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DeathMarker.UI_DeathMarker_C.ExecuteUbergraph_UI_DeathMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DeathMarker_C::ExecuteUbergraph_UI_DeathMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeathMarker_C", "ExecuteUbergraph_UI_DeathMarker");

	Params::UUI_DeathMarker_C_ExecuteUbergraph_UI_DeathMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


