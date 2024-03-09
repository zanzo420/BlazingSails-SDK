#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Ship_Sign.UI_Ship_Sign_C
// (None)

class UClass* UUI_Ship_Sign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Ship_Sign_C");

	return Clss;
}


// UI_Ship_Sign_C UI_Ship_Sign.Default__UI_Ship_Sign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Ship_Sign_C* UUI_Ship_Sign_C::GetDefaultObj()
{
	static class UUI_Ship_Sign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Ship_Sign_C*>(UUI_Ship_Sign_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Ship_Sign.UI_Ship_Sign_C.Validate Selected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                Player_State                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABR_Alpha_PlayerState_C*     K2Node_DynamicCast_AsBR_Alpha_Player_State                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Ship_Sign_C::Validate_Selected(class APlayerState* Player_State, bool* Valid, class ABR_Alpha_PlayerState_C* K2Node_DynamicCast_AsBR_Alpha_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_Sign_C", "Validate Selected");

	Params::UUI_Ship_Sign_C_Validate_Selected_Params Parms{};

	Parms.Player_State = Player_State;
	Parms.K2Node_DynamicCast_AsBR_Alpha_Player_State = K2Node_DynamicCast_AsBR_Alpha_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function UI_Ship_Sign.UI_Ship_Sign_C.BndEvt__UI_Ship_Sign_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Ship_Sign_C::BndEvt__UI_Ship_Sign_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_Sign_C", "BndEvt__UI_Ship_Sign_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship_Sign.UI_Ship_Sign_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_Sign_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_Sign_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship_Sign.UI_Ship_Sign_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Ship_Sign_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_Sign_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship_Sign.UI_Ship_Sign_C.Set Voted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Ship_Sign_C::Set_Voted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_Sign_C", "Set Voted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ship_Sign.UI_Ship_Sign_C.ExecuteUbergraph_UI_Ship_Sign
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABR_Alpha_PlayerState_C*     CallFunc_Current_BR_Alpha_Player_State_As_BR_Alpha_Player_State  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_SpawnSelection_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_SpawnSelection_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)

void UUI_Ship_Sign_C::ExecuteUbergraph_UI_Ship_Sign(int32 EntryPoint, class ABR_Alpha_PlayerState_C* CallFunc_Current_BR_Alpha_Player_State_As_BR_Alpha_Player_State, TArray<class UUI_SpawnSelection_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_SpawnSelection_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ship_Sign_C", "ExecuteUbergraph_UI_Ship_Sign");

	Params::UUI_Ship_Sign_C_ExecuteUbergraph_UI_Ship_Sign_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Current_BR_Alpha_Player_State_As_BR_Alpha_Player_State = CallFunc_Current_BR_Alpha_Player_State_As_BR_Alpha_Player_State;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


