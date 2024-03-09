#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TreasuseTurnedInPopUp.UI_TreasuseTurnedInPopUp_C
// (None)

class UClass* UUI_TreasuseTurnedInPopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TreasuseTurnedInPopUp_C");

	return Clss;
}


// UI_TreasuseTurnedInPopUp_C UI_TreasuseTurnedInPopUp.Default__UI_TreasuseTurnedInPopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TreasuseTurnedInPopUp_C* UUI_TreasuseTurnedInPopUp_C::GetDefaultObj()
{
	static class UUI_TreasuseTurnedInPopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TreasuseTurnedInPopUp_C*>(UUI_TreasuseTurnedInPopUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TreasuseTurnedInPopUp.UI_TreasuseTurnedInPopUp_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UUI_TreasuseTurnedInPopUp_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TreasuseTurnedInPopUp_C", "GetText_0");

	Params::UUI_TreasuseTurnedInPopUp_C_GetText_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TreasuseTurnedInPopUp.UI_TreasuseTurnedInPopUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_TreasuseTurnedInPopUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TreasuseTurnedInPopUp_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TreasuseTurnedInPopUp.UI_TreasuseTurnedInPopUp_C.ExecuteUbergraph_UI_TreasuseTurnedInPopUp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TreasuseTurnedInPopUp_C::ExecuteUbergraph_UI_TreasuseTurnedInPopUp(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TreasuseTurnedInPopUp_C", "ExecuteUbergraph_UI_TreasuseTurnedInPopUp");

	Params::UUI_TreasuseTurnedInPopUp_C_ExecuteUbergraph_UI_TreasuseTurnedInPopUp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


