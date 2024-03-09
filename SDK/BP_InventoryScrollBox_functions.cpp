#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InventoryScrollBox.BP_InventoryScrollBox_C
// (None)

class UClass* UBP_InventoryScrollBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InventoryScrollBox_C");

	return Clss;
}


// BP_InventoryScrollBox_C BP_InventoryScrollBox.Default__BP_InventoryScrollBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InventoryScrollBox_C* UBP_InventoryScrollBox_C::GetDefaultObj()
{
	static class UBP_InventoryScrollBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InventoryScrollBox_C*>(UBP_InventoryScrollBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InventoryScrollBox.BP_InventoryScrollBox_C.LoadInventoryWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_InventoryItemWidgetTypeWidgetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory_C*                Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryScrollBox_C::LoadInventoryWidgets(enum class E_InventoryItemWidgetType WidgetType, class ABP_Character_C* CharacterRef, class UInventory_C* Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryScrollBox_C", "LoadInventoryWidgets");

	Params::UBP_InventoryScrollBox_C_LoadInventoryWidgets_Params Parms{};

	Parms.WidgetType = WidgetType;
	Parms.CharacterRef = CharacterRef;
	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryScrollBox.BP_InventoryScrollBox_C.ExecuteUbergraph_BP_InventoryScrollBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_InventoryItemWidgetTypeK2Node_CustomEvent_WidgetType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_CustomEvent_CharacterRef                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory_C*                K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_CreateWidgetList_WidgetList                             (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_InventoryItem_C*         K2Node_DynamicCast_AsUI_Inventory_Item                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryScrollBox_C::ExecuteUbergraph_BP_InventoryScrollBox(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, enum class E_InventoryItemWidgetType K2Node_CustomEvent_WidgetType, class ABP_Character_C* K2Node_CustomEvent_CharacterRef, class UInventory_C* K2Node_CustomEvent_Inventory, TArray<class UWidget*>& CallFunc_CreateWidgetList_WidgetList, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUI_InventoryItem_C* K2Node_DynamicCast_AsUI_Inventory_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryScrollBox_C", "ExecuteUbergraph_BP_InventoryScrollBox");

	Params::UBP_InventoryScrollBox_C_ExecuteUbergraph_BP_InventoryScrollBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_WidgetType = K2Node_CustomEvent_WidgetType;
	Parms.K2Node_CustomEvent_CharacterRef = K2Node_CustomEvent_CharacterRef;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.CallFunc_CreateWidgetList_WidgetList = CallFunc_CreateWidgetList_WidgetList;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Inventory_Item = K2Node_DynamicCast_AsUI_Inventory_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


