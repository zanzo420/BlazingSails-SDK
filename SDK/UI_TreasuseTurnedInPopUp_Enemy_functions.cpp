#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TreasuseTurnedInPopUp_Enemy.UI_TreasuseTurnedInPopUp_Enemy_C
// (None)

class UClass* UUI_TreasuseTurnedInPopUp_Enemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TreasuseTurnedInPopUp_Enemy_C");

	return Clss;
}


// UI_TreasuseTurnedInPopUp_Enemy_C UI_TreasuseTurnedInPopUp_Enemy.Default__UI_TreasuseTurnedInPopUp_Enemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TreasuseTurnedInPopUp_Enemy_C* UUI_TreasuseTurnedInPopUp_Enemy_C::GetDefaultObj()
{
	static class UUI_TreasuseTurnedInPopUp_Enemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TreasuseTurnedInPopUp_Enemy_C*>(UUI_TreasuseTurnedInPopUp_Enemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TreasuseTurnedInPopUp_Enemy.UI_TreasuseTurnedInPopUp_Enemy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_TreasuseTurnedInPopUp_Enemy_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TreasuseTurnedInPopUp_Enemy_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TreasuseTurnedInPopUp_Enemy.UI_TreasuseTurnedInPopUp_Enemy_C.ExecuteUbergraph_UI_TreasuseTurnedInPopUp_Enemy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TreasuseTurnedInPopUp_Enemy_C::ExecuteUbergraph_UI_TreasuseTurnedInPopUp_Enemy(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TreasuseTurnedInPopUp_Enemy_C", "ExecuteUbergraph_UI_TreasuseTurnedInPopUp_Enemy");

	Params::UUI_TreasuseTurnedInPopUp_Enemy_C_ExecuteUbergraph_UI_TreasuseTurnedInPopUp_Enemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


