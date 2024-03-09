#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ConquestFlagSwap.UI_ConquestFlagSwap_C
// (None)

class UClass* UUI_ConquestFlagSwap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ConquestFlagSwap_C");

	return Clss;
}


// UI_ConquestFlagSwap_C UI_ConquestFlagSwap.Default__UI_ConquestFlagSwap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ConquestFlagSwap_C* UUI_ConquestFlagSwap_C::GetDefaultObj()
{
	static class UUI_ConquestFlagSwap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ConquestFlagSwap_C*>(UUI_ConquestFlagSwap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ConquestFlagSwap.UI_ConquestFlagSwap_C.SetNewFlagName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UUI_ConquestFlagSwap_C::SetNewFlagName(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestFlagSwap_C", "SetNewFlagName");

	Params::UUI_ConquestFlagSwap_C_SetNewFlagName_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ConquestFlagSwap.UI_ConquestFlagSwap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ConquestFlagSwap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestFlagSwap_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConquestFlagSwap.UI_ConquestFlagSwap_C.ExecuteUbergraph_UI_ConquestFlagSwap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConquestFlagSwap_C::ExecuteUbergraph_UI_ConquestFlagSwap(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestFlagSwap_C", "ExecuteUbergraph_UI_ConquestFlagSwap");

	Params::UUI_ConquestFlagSwap_C_ExecuteUbergraph_UI_ConquestFlagSwap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


