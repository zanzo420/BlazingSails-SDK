#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LobbyFriendInviter.UI_LobbyFriendInviter_C
// (None)

class UClass* UUI_LobbyFriendInviter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LobbyFriendInviter_C");

	return Clss;
}


// UI_LobbyFriendInviter_C UI_LobbyFriendInviter.Default__UI_LobbyFriendInviter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LobbyFriendInviter_C* UUI_LobbyFriendInviter_C::GetDefaultObj()
{
	static class UUI_LobbyFriendInviter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LobbyFriendInviter_C*>(UUI_LobbyFriendInviter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_LobbyFriendInviter.UI_LobbyFriendInviter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LobbyFriendInviter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyFriendInviter_C", "Tick");

	Params::UUI_LobbyFriendInviter_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyFriendInviter.UI_LobbyFriendInviter_C.ExecuteUbergraph_UI_LobbyFriendInviter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LobbyFriendInviter_C::ExecuteUbergraph_UI_LobbyFriendInviter(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyFriendInviter_C", "ExecuteUbergraph_UI_LobbyFriendInviter");

	Params::UUI_LobbyFriendInviter_C_ExecuteUbergraph_UI_LobbyFriendInviter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


