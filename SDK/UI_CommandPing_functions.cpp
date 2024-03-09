#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CommandPing.UI_CommandPing_C
// (None)

class UClass* UUI_CommandPing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CommandPing_C");

	return Clss;
}


// UI_CommandPing_C UI_CommandPing.Default__UI_CommandPing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CommandPing_C* UUI_CommandPing_C::GetDefaultObj()
{
	static class UUI_CommandPing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CommandPing_C*>(UUI_CommandPing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CommandPing.UI_CommandPing_C.SetScaleModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ScaleModifier                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CommandPing_C::SetScaleModifier(float ScaleModifier, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CommandPing_C", "SetScaleModifier");

	Params::UUI_CommandPing_C_SetScaleModifier_Params Parms{};

	Parms.ScaleModifier = ScaleModifier;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CommandPing.UI_CommandPing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_CommandPing_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CommandPing_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CommandPing.UI_CommandPing_C.PlaySpawnAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CommandPing_C::PlaySpawnAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CommandPing_C", "PlaySpawnAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CommandPing.UI_CommandPing_C.PlayDestroyAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CommandPing_C::PlayDestroyAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CommandPing_C", "PlayDestroyAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CommandPing.UI_CommandPing_C.SetAndPlaySpawnAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            SpawnAnimation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CommandPing_C::SetAndPlaySpawnAnimation(class UWidgetAnimation* SpawnAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CommandPing_C", "SetAndPlaySpawnAnimation");

	Params::UUI_CommandPing_C_SetAndPlaySpawnAnimation_Params Parms{};

	Parms.SpawnAnimation = SpawnAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CommandPing.UI_CommandPing_C.ExecuteUbergraph_UI_CommandPing
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_CustomEvent_SpawnAnimation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CommandPing_C::ExecuteUbergraph_UI_CommandPing(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWidgetAnimation* K2Node_CustomEvent_SpawnAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CommandPing_C", "ExecuteUbergraph_UI_CommandPing");

	Params::UUI_CommandPing_C_ExecuteUbergraph_UI_CommandPing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_SpawnAnimation = K2Node_CustomEvent_SpawnAnimation;

	UObject::ProcessEvent(Func, &Parms);

}

}


