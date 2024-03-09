#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ConquestCapturedFlag.UI_ConquestCapturedFlag_C
// (None)

class UClass* UUI_ConquestCapturedFlag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ConquestCapturedFlag_C");

	return Clss;
}


// UI_ConquestCapturedFlag_C UI_ConquestCapturedFlag.Default__UI_ConquestCapturedFlag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ConquestCapturedFlag_C* UUI_ConquestCapturedFlag_C::GetDefaultObj()
{
	static class UUI_ConquestCapturedFlag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ConquestCapturedFlag_C*>(UUI_ConquestCapturedFlag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ConquestCapturedFlag.UI_ConquestCapturedFlag_C.GetColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUI_ConquestCapturedFlag_C::GetColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestCapturedFlag_C", "GetColorAndOpacity_0");

	Params::UUI_ConquestCapturedFlag_C_GetColorAndOpacity_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ConquestCapturedFlag.UI_ConquestCapturedFlag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ConquestCapturedFlag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestCapturedFlag_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConquestCapturedFlag.UI_ConquestCapturedFlag_C.ExecuteUbergraph_UI_ConquestCapturedFlag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConquestCapturedFlag_C::ExecuteUbergraph_UI_ConquestCapturedFlag(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestCapturedFlag_C", "ExecuteUbergraph_UI_ConquestCapturedFlag");

	Params::UUI_ConquestCapturedFlag_C_ExecuteUbergraph_UI_ConquestCapturedFlag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


