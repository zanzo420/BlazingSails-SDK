#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_VoteKickPlayer.UI_VoteKickPlayer_C
// (None)

class UClass* UUI_VoteKickPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_VoteKickPlayer_C");

	return Clss;
}


// UI_VoteKickPlayer_C UI_VoteKickPlayer.Default__UI_VoteKickPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_VoteKickPlayer_C* UUI_VoteKickPlayer_C::GetDefaultObj()
{
	static class UUI_VoteKickPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_VoteKickPlayer_C*>(UUI_VoteKickPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_VoteKickPlayer.UI_VoteKickPlayer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VoteKickPlayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VoteKickPlayer_C", "Tick");

	Params::UUI_VoteKickPlayer_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_VoteKickPlayer.UI_VoteKickPlayer_C.ExecuteUbergraph_UI_VoteKickPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VoteKickPlayer_C::ExecuteUbergraph_UI_VoteKickPlayer(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_VoteKickPlayer_C", "ExecuteUbergraph_UI_VoteKickPlayer");

	Params::UUI_VoteKickPlayer_C_ExecuteUbergraph_UI_VoteKickPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


