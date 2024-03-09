#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SplitAmountContainer.UI_SplitAmountContainer_C
// (None)

class UClass* UUI_SplitAmountContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SplitAmountContainer_C");

	return Clss;
}


// UI_SplitAmountContainer_C UI_SplitAmountContainer.Default__UI_SplitAmountContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SplitAmountContainer_C* UUI_SplitAmountContainer_C::GetDefaultObj()
{
	static class UUI_SplitAmountContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SplitAmountContainer_C*>(UUI_SplitAmountContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SplitAmountContainer.UI_SplitAmountContainer_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SplitAmountContainer_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SplitAmountContainer_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SplitAmountContainer.UI_SplitAmountContainer_C.BndEvt__Button_114_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SplitAmountContainer_C::BndEvt__Button_114_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SplitAmountContainer_C", "BndEvt__Button_114_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SplitAmountContainer.UI_SplitAmountContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SplitAmountContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SplitAmountContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SplitAmountContainer.UI_SplitAmountContainer_C.BndEvt__Button_214_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SplitAmountContainer_C::BndEvt__Button_214_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SplitAmountContainer_C", "BndEvt__Button_214_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SplitAmountContainer.UI_SplitAmountContainer_C.ExecuteUbergraph_UI_SplitAmountContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfInventoryHasItem_HasItem                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckIfInventoryHasItem_Amount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfRoomForItems_hasSpace                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckIfRoomForItems_amountOfRoom                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CheckIfRoomForItems_totalWeight                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfRoomForItems_hasSpace_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckIfRoomForItems_amountOfRoom_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CheckIfRoomForItems_totalWeight_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_InventoryError_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// bool                               CallFunc_CheckIfInventoryHasItem_HasItem_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckIfInventoryHasItem_Amount_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SplitAmountContainer_C::ExecuteUbergraph_UI_SplitAmountContainer(int32 EntryPoint, bool CallFunc_CheckIfInventoryHasItem_HasItem, int32 CallFunc_CheckIfInventoryHasItem_Amount, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_CheckIfRoomForItems_hasSpace, int32 CallFunc_CheckIfRoomForItems_amountOfRoom, int32 CallFunc_CheckIfRoomForItems_totalWeight, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, bool CallFunc_CheckIfRoomForItems_hasSpace_1, int32 CallFunc_CheckIfRoomForItems_amountOfRoom_1, int32 CallFunc_CheckIfRoomForItems_totalWeight_1, class UUI_InventoryError_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable, bool CallFunc_CheckIfInventoryHasItem_HasItem_1, int32 CallFunc_CheckIfInventoryHasItem_Amount_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SplitAmountContainer_C", "ExecuteUbergraph_UI_SplitAmountContainer");

	Params::UUI_SplitAmountContainer_C_ExecuteUbergraph_UI_SplitAmountContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CheckIfInventoryHasItem_HasItem = CallFunc_CheckIfInventoryHasItem_HasItem;
	Parms.CallFunc_CheckIfInventoryHasItem_Amount = CallFunc_CheckIfInventoryHasItem_Amount;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_CheckIfRoomForItems_hasSpace = CallFunc_CheckIfRoomForItems_hasSpace;
	Parms.CallFunc_CheckIfRoomForItems_amountOfRoom = CallFunc_CheckIfRoomForItems_amountOfRoom;
	Parms.CallFunc_CheckIfRoomForItems_totalWeight = CallFunc_CheckIfRoomForItems_totalWeight;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_CheckIfRoomForItems_hasSpace_1 = CallFunc_CheckIfRoomForItems_hasSpace_1;
	Parms.CallFunc_CheckIfRoomForItems_amountOfRoom_1 = CallFunc_CheckIfRoomForItems_amountOfRoom_1;
	Parms.CallFunc_CheckIfRoomForItems_totalWeight_1 = CallFunc_CheckIfRoomForItems_totalWeight_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_CheckIfInventoryHasItem_HasItem_1 = CallFunc_CheckIfInventoryHasItem_HasItem_1;
	Parms.CallFunc_CheckIfInventoryHasItem_Amount_1 = CallFunc_CheckIfInventoryHasItem_Amount_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


