#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TeleportEvent.UI_TeleportEvent_C
// (None)

class UClass* UUI_TeleportEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TeleportEvent_C");

	return Clss;
}


// UI_TeleportEvent_C UI_TeleportEvent.Default__UI_TeleportEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TeleportEvent_C* UUI_TeleportEvent_C::GetDefaultObj()
{
	static class UUI_TeleportEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TeleportEvent_C*>(UUI_TeleportEvent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TeleportEvent.UI_TeleportEvent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_TeleportEvent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeleportEvent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TeleportEvent.UI_TeleportEvent_C.ExecuteUbergraph_UI_TeleportEvent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TeleportEvent_C::ExecuteUbergraph_UI_TeleportEvent(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeleportEvent_C", "ExecuteUbergraph_UI_TeleportEvent");

	Params::UUI_TeleportEvent_C_ExecuteUbergraph_UI_TeleportEvent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


