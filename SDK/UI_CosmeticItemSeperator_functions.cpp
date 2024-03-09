#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CosmeticItemSeperator.UI_CosmeticItemSeperator_C
// (None)

class UClass* UUI_CosmeticItemSeperator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CosmeticItemSeperator_C");

	return Clss;
}


// UI_CosmeticItemSeperator_C UI_CosmeticItemSeperator.Default__UI_CosmeticItemSeperator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CosmeticItemSeperator_C* UUI_CosmeticItemSeperator_C::GetDefaultObj()
{
	static class UUI_CosmeticItemSeperator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CosmeticItemSeperator_C*>(UUI_CosmeticItemSeperator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CosmeticItemSeperator.UI_CosmeticItemSeperator_C.SetWithoutText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CosmeticItemSeperator_C::SetWithoutText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CosmeticItemSeperator_C", "SetWithoutText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CosmeticItemSeperator.UI_CosmeticItemSeperator_C.SetWithText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CosmeticItemSeperator_C::SetWithText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CosmeticItemSeperator_C", "SetWithText");

	Params::UUI_CosmeticItemSeperator_C_SetWithText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


