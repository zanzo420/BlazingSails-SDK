#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_WinningScreenPlayer.UI_WinningScreenPlayer_C
// (None)

class UClass* UUI_WinningScreenPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_WinningScreenPlayer_C");

	return Clss;
}


// UI_WinningScreenPlayer_C UI_WinningScreenPlayer.Default__UI_WinningScreenPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_WinningScreenPlayer_C* UUI_WinningScreenPlayer_C::GetDefaultObj()
{
	static class UUI_WinningScreenPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_WinningScreenPlayer_C*>(UUI_WinningScreenPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_WinningScreenPlayer.UI_WinningScreenPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_WinningScreenPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreenPlayer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_WinningScreenPlayer.UI_WinningScreenPlayer_C.ExecuteUbergraph_UI_WinningScreenPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WinningScreenPlayer_C::ExecuteUbergraph_UI_WinningScreenPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreenPlayer_C", "ExecuteUbergraph_UI_WinningScreenPlayer");

	Params::UUI_WinningScreenPlayer_C_ExecuteUbergraph_UI_WinningScreenPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


