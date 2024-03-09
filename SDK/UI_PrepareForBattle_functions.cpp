#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PrepareForBattle.UI_PrepareForBattle_C
// (None)

class UClass* UUI_PrepareForBattle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PrepareForBattle_C");

	return Clss;
}


// UI_PrepareForBattle_C UI_PrepareForBattle.Default__UI_PrepareForBattle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PrepareForBattle_C* UUI_PrepareForBattle_C::GetDefaultObj()
{
	static class UUI_PrepareForBattle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PrepareForBattle_C*>(UUI_PrepareForBattle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_PrepareForBattle.UI_PrepareForBattle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_PrepareForBattle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PrepareForBattle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PrepareForBattle.UI_PrepareForBattle_C.RemovePrepareForBattle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PrepareForBattle_C::RemovePrepareForBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PrepareForBattle_C", "RemovePrepareForBattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PrepareForBattle.UI_PrepareForBattle_C.ExecuteUbergraph_UI_PrepareForBattle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PrepareForBattle_C::ExecuteUbergraph_UI_PrepareForBattle(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PrepareForBattle_C", "ExecuteUbergraph_UI_PrepareForBattle");

	Params::UUI_PrepareForBattle_C_ExecuteUbergraph_UI_PrepareForBattle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


