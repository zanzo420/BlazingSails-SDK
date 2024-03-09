#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_YouKilledName.UI_YouKilledName_C
// (None)

class UClass* UUI_YouKilledName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_YouKilledName_C");

	return Clss;
}


// UI_YouKilledName_C UI_YouKilledName.Default__UI_YouKilledName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_YouKilledName_C* UUI_YouKilledName_C::GetDefaultObj()
{
	static class UUI_YouKilledName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_YouKilledName_C*>(UUI_YouKilledName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_YouKilledName.UI_YouKilledName_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_YouKilledName_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_YouKilledName_C", "PreConstruct");

	Params::UUI_YouKilledName_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_YouKilledName.UI_YouKilledName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_YouKilledName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_YouKilledName_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_YouKilledName.UI_YouKilledName_C.CursedPlayer?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Cursed                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_YouKilledName_C::CursedPlayer_(bool Cursed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_YouKilledName_C", "CursedPlayer?");

	Params::UUI_YouKilledName_C_CursedPlayer__Params Parms{};

	Parms.Cursed = Cursed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_YouKilledName.UI_YouKilledName_C.ExecuteUbergraph_UI_YouKilledName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Cursed                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)

void UUI_YouKilledName_C::ExecuteUbergraph_UI_YouKilledName(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_Cursed, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_YouKilledName_C", "ExecuteUbergraph_UI_YouKilledName");

	Params::UUI_YouKilledName_C_ExecuteUbergraph_UI_YouKilledName_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Cursed = K2Node_CustomEvent_Cursed;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;

	UObject::ProcessEvent(Func, &Parms);

}

}


