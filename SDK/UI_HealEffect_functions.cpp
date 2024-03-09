#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HealEffect.UI_HealEffect_C
// (None)

class UClass* UUI_HealEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HealEffect_C");

	return Clss;
}


// UI_HealEffect_C UI_HealEffect.Default__UI_HealEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HealEffect_C* UUI_HealEffect_C::GetDefaultObj()
{
	static class UUI_HealEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HealEffect_C*>(UUI_HealEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_HealEffect.UI_HealEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_HealEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HealEffect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HealEffect.UI_HealEffect_C.Reload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_HealEffect_C::Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HealEffect_C", "Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HealEffect.UI_HealEffect_C.PlayHealEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_HealEffect_C::PlayHealEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HealEffect_C", "PlayHealEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HealEffect.UI_HealEffect_C.ExecuteUbergraph_UI_HealEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HealEffect_C::ExecuteUbergraph_UI_HealEffect(int32 EntryPoint, float CallFunc_MakeLiteralFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HealEffect_C", "ExecuteUbergraph_UI_HealEffect");

	Params::UUI_HealEffect_C_ExecuteUbergraph_UI_HealEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


