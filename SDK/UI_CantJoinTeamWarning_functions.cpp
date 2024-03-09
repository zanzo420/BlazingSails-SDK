#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CantJoinTeamWarning.UI_CantJoinTeamWarning_C
// (None)

class UClass* UUI_CantJoinTeamWarning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CantJoinTeamWarning_C");

	return Clss;
}


// UI_CantJoinTeamWarning_C UI_CantJoinTeamWarning.Default__UI_CantJoinTeamWarning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CantJoinTeamWarning_C* UUI_CantJoinTeamWarning_C::GetDefaultObj()
{
	static class UUI_CantJoinTeamWarning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CantJoinTeamWarning_C*>(UUI_CantJoinTeamWarning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CantJoinTeamWarning.UI_CantJoinTeamWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_CantJoinTeamWarning_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CantJoinTeamWarning_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CantJoinTeamWarning.UI_CantJoinTeamWarning_C.Remove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CantJoinTeamWarning_C::Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CantJoinTeamWarning_C", "Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CantJoinTeamWarning.UI_CantJoinTeamWarning_C.ExecuteUbergraph_UI_CantJoinTeamWarning
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CantJoinTeamWarning_C::ExecuteUbergraph_UI_CantJoinTeamWarning(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CantJoinTeamWarning_C", "ExecuteUbergraph_UI_CantJoinTeamWarning");

	Params::UUI_CantJoinTeamWarning_C_ExecuteUbergraph_UI_CantJoinTeamWarning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


