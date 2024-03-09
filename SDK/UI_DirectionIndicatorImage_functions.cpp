#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DirectionIndicatorImage.UI_DirectionIndicatorImage_C
// (None)

class UClass* UUI_DirectionIndicatorImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DirectionIndicatorImage_C");

	return Clss;
}


// UI_DirectionIndicatorImage_C UI_DirectionIndicatorImage.Default__UI_DirectionIndicatorImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DirectionIndicatorImage_C* UUI_DirectionIndicatorImage_C::GetDefaultObj()
{
	static class UUI_DirectionIndicatorImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DirectionIndicatorImage_C*>(UUI_DirectionIndicatorImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DirectionIndicatorImage.UI_DirectionIndicatorImage_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Arrow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                IconColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ArrowColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicatorImage_C::Initialize(class UObject* Icon, class UObject* Arrow, const struct FLinearColor& IconColor, const struct FLinearColor& ArrowColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImage_C", "Initialize");

	Params::UUI_DirectionIndicatorImage_C_Initialize_Params Parms{};

	Parms.Icon = Icon;
	Parms.Arrow = Arrow;
	Parms.IconColor = IconColor;
	Parms.ArrowColor = ArrowColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DirectionIndicatorImage.UI_DirectionIndicatorImage_C.InitializeIconOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                IconColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicatorImage_C::InitializeIconOnly(class UObject* Icon, const struct FLinearColor& IconColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImage_C", "InitializeIconOnly");

	Params::UUI_DirectionIndicatorImage_C_InitializeIconOnly_Params Parms{};

	Parms.Icon = Icon;
	Parms.IconColor = IconColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DirectionIndicatorImage.UI_DirectionIndicatorImage_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   S                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicatorImage_C::SetScale(const struct FVector2D& S)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImage_C", "SetScale");

	Params::UUI_DirectionIndicatorImage_C_SetScale_Params Parms{};

	Parms.S = S;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DirectionIndicatorImage.UI_DirectionIndicatorImage_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Degrees                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicatorImage_C::SetAngle(float Degrees)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImage_C", "SetAngle");

	Params::UUI_DirectionIndicatorImage_C_SetAngle_Params Parms{};

	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_DirectionIndicatorImage.UI_DirectionIndicatorImage_C.ExecuteUbergraph_UI_DirectionIndicatorImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Degrees                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Icon_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Arrow                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_IconColor_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_ArrowColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Icon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_IconColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_S                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DirectionIndicatorImage_C::ExecuteUbergraph_UI_DirectionIndicatorImage(int32 EntryPoint, float K2Node_Event_Degrees, float CallFunc_Multiply_FloatFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UObject* K2Node_CustomEvent_Icon_1, class UObject* K2Node_CustomEvent_Arrow, const struct FLinearColor& K2Node_CustomEvent_IconColor_1, const struct FLinearColor& K2Node_CustomEvent_ArrowColor, class UObject* K2Node_CustomEvent_Icon, const struct FLinearColor& K2Node_CustomEvent_IconColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, const struct FVector2D& K2Node_Event_S)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DirectionIndicatorImage_C", "ExecuteUbergraph_UI_DirectionIndicatorImage");

	Params::UUI_DirectionIndicatorImage_C_ExecuteUbergraph_UI_DirectionIndicatorImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Degrees = K2Node_Event_Degrees;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.K2Node_CustomEvent_Icon_1 = K2Node_CustomEvent_Icon_1;
	Parms.K2Node_CustomEvent_Arrow = K2Node_CustomEvent_Arrow;
	Parms.K2Node_CustomEvent_IconColor_1 = K2Node_CustomEvent_IconColor_1;
	Parms.K2Node_CustomEvent_ArrowColor = K2Node_CustomEvent_ArrowColor;
	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;
	Parms.K2Node_CustomEvent_IconColor = K2Node_CustomEvent_IconColor;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_4 = CallFunc_MakeLiteralByte_ReturnValue_4;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_5 = CallFunc_MakeLiteralByte_ReturnValue_5;
	Parms.K2Node_Event_S = K2Node_Event_S;

	UObject::ProcessEvent(Func, &Parms);

}

}


