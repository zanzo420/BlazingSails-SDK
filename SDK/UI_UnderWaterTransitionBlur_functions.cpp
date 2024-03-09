#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_UnderWaterTransitionBlur.UI_UnderWaterTransitionBlur_C
// (None)

class UClass* UUI_UnderWaterTransitionBlur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_UnderWaterTransitionBlur_C");

	return Clss;
}


// UI_UnderWaterTransitionBlur_C UI_UnderWaterTransitionBlur.Default__UI_UnderWaterTransitionBlur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_UnderWaterTransitionBlur_C* UUI_UnderWaterTransitionBlur_C::GetDefaultObj()
{
	static class UUI_UnderWaterTransitionBlur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_UnderWaterTransitionBlur_C*>(UUI_UnderWaterTransitionBlur_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_UnderWaterTransitionBlur.UI_UnderWaterTransitionBlur_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_UnderWaterTransitionBlur_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UnderWaterTransitionBlur_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UnderWaterTransitionBlur.UI_UnderWaterTransitionBlur_C.ExecuteUbergraph_UI_UnderWaterTransitionBlur
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_UnderWaterTransitionBlur_C::ExecuteUbergraph_UI_UnderWaterTransitionBlur(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UnderWaterTransitionBlur_C", "ExecuteUbergraph_UI_UnderWaterTransitionBlur");

	Params::UUI_UnderWaterTransitionBlur_C_ExecuteUbergraph_UI_UnderWaterTransitionBlur_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


