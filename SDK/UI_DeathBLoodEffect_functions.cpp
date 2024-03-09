#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DeathBLoodEffect.UI_DeathBLoodEffect_C
// (None)

class UClass* UUI_DeathBLoodEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DeathBLoodEffect_C");

	return Clss;
}


// UI_DeathBLoodEffect_C UI_DeathBLoodEffect.Default__UI_DeathBLoodEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DeathBLoodEffect_C* UUI_DeathBLoodEffect_C::GetDefaultObj()
{
	static class UUI_DeathBLoodEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DeathBLoodEffect_C*>(UUI_DeathBLoodEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DeathBLoodEffect.UI_DeathBLoodEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_DeathBLoodEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeathBLoodEffect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DeathBLoodEffect.UI_DeathBLoodEffect_C.ExecuteUbergraph_UI_DeathBLoodEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DeathBLoodEffect_C::ExecuteUbergraph_UI_DeathBLoodEffect(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DeathBLoodEffect_C", "ExecuteUbergraph_UI_DeathBLoodEffect");

	Params::UUI_DeathBLoodEffect_C_ExecuteUbergraph_UI_DeathBLoodEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


