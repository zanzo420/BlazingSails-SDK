#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DepositAll.UI_DepositAll_C
// (None)

class UClass* UUI_DepositAll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DepositAll_C");

	return Clss;
}


// UI_DepositAll_C UI_DepositAll.Default__UI_DepositAll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DepositAll_C* UUI_DepositAll_C::GetDefaultObj()
{
	static class UUI_DepositAll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DepositAll_C*>(UUI_DepositAll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DepositAll.UI_DepositAll_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_DepositAll_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DepositAll_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_DepositAll.UI_DepositAll_C.ExecuteUbergraph_UI_DepositAll
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DepositAll_C::ExecuteUbergraph_UI_DepositAll(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DepositAll_C", "ExecuteUbergraph_UI_DepositAll");

	Params::UUI_DepositAll_C_ExecuteUbergraph_UI_DepositAll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


