#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TreasureFoundPopUp_Golden.UI_TreasureFoundPopUp_Golden_C
// (None)

class UClass* UUI_TreasureFoundPopUp_Golden_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TreasureFoundPopUp_Golden_C");

	return Clss;
}


// UI_TreasureFoundPopUp_Golden_C UI_TreasureFoundPopUp_Golden.Default__UI_TreasureFoundPopUp_Golden_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TreasureFoundPopUp_Golden_C* UUI_TreasureFoundPopUp_Golden_C::GetDefaultObj()
{
	static class UUI_TreasureFoundPopUp_Golden_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TreasureFoundPopUp_Golden_C*>(UUI_TreasureFoundPopUp_Golden_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TreasureFoundPopUp_Golden.UI_TreasureFoundPopUp_Golden_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UUI_TreasureFoundPopUp_Golden_C::GetText_0(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TreasureFoundPopUp_Golden_C", "GetText_0");

	Params::UUI_TreasureFoundPopUp_Golden_C_GetText_0_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TreasureFoundPopUp_Golden.UI_TreasureFoundPopUp_Golden_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_TreasureFoundPopUp_Golden_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TreasureFoundPopUp_Golden_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TreasureFoundPopUp_Golden.UI_TreasureFoundPopUp_Golden_C.ExecuteUbergraph_UI_TreasureFoundPopUp_Golden
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TreasureFoundPopUp_Golden_C::ExecuteUbergraph_UI_TreasureFoundPopUp_Golden(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TreasureFoundPopUp_Golden_C", "ExecuteUbergraph_UI_TreasureFoundPopUp_Golden");

	Params::UUI_TreasureFoundPopUp_Golden_C_ExecuteUbergraph_UI_TreasureFoundPopUp_Golden_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


