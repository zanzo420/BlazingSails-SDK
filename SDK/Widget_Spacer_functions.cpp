#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Widget_Spacer.Widget_Spacer_C
// (None)

class UClass* UWidget_Spacer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Widget_Spacer_C");

	return Clss;
}


// Widget_Spacer_C Widget_Spacer.Default__Widget_Spacer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidget_Spacer_C* UWidget_Spacer_C::GetDefaultObj()
{
	static class UWidget_Spacer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidget_Spacer_C*>(UWidget_Spacer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Widget_Spacer.Widget_Spacer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWidget_Spacer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget_Spacer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Widget_Spacer.Widget_Spacer_C.ExecuteUbergraph_Widget_Spacer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Spacer_C::ExecuteUbergraph_Widget_Spacer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget_Spacer_C", "ExecuteUbergraph_Widget_Spacer");

	Params::UWidget_Spacer_C_ExecuteUbergraph_Widget_Spacer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


