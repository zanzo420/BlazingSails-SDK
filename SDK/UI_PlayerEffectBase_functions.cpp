#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PlayerEffectBase.UI_PlayerEffectBase_C
// (None)

class UClass* UUI_PlayerEffectBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PlayerEffectBase_C");

	return Clss;
}


// UI_PlayerEffectBase_C UI_PlayerEffectBase.Default__UI_PlayerEffectBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PlayerEffectBase_C* UUI_PlayerEffectBase_C::GetDefaultObj()
{
	static class UUI_PlayerEffectBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PlayerEffectBase_C*>(UUI_PlayerEffectBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_PlayerEffectBase.UI_PlayerEffectBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_PlayerEffectBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerEffectBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PlayerEffectBase.UI_PlayerEffectBase_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerEffectBase_C::Init(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerEffectBase_C", "Init");

	Params::UUI_PlayerEffectBase_C_Init_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PlayerEffectBase.UI_PlayerEffectBase_C.ExecuteUbergraph_UI_PlayerEffectBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerEffectBase_C::ExecuteUbergraph_UI_PlayerEffectBase(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_CustomEvent_Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerEffectBase_C", "ExecuteUbergraph_UI_PlayerEffectBase");

	Params::UUI_PlayerEffectBase_C_ExecuteUbergraph_UI_PlayerEffectBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;

	UObject::ProcessEvent(Func, &Parms);

}

}


