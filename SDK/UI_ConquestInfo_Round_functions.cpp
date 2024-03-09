#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ConquestInfo_Round.UI_ConquestInfo_Round_C
// (None)

class UClass* UUI_ConquestInfo_Round_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ConquestInfo_Round_C");

	return Clss;
}


// UI_ConquestInfo_Round_C UI_ConquestInfo_Round.Default__UI_ConquestInfo_Round_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ConquestInfo_Round_C* UUI_ConquestInfo_Round_C::GetDefaultObj()
{
	static class UUI_ConquestInfo_Round_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ConquestInfo_Round_C*>(UUI_ConquestInfo_Round_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ConquestInfo_Round.UI_ConquestInfo_Round_C.Set Winning Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConquestInfo_Round_C::Set_Winning_Color(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestInfo_Round_C", "Set Winning Color");

	Params::UUI_ConquestInfo_Round_C_Set_Winning_Color_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(Func, &Parms);

}

}


