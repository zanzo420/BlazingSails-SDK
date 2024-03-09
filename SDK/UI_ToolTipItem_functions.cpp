#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ToolTipItem.UI_ToolTipItem_C
// (None)

class UClass* UUI_ToolTipItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ToolTipItem_C");

	return Clss;
}


// UI_ToolTipItem_C UI_ToolTipItem.Default__UI_ToolTipItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ToolTipItem_C* UUI_ToolTipItem_C::GetDefaultObj()
{
	static class UUI_ToolTipItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ToolTipItem_C*>(UUI_ToolTipItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ToolTipItem.UI_ToolTipItem_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Items                 Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ToolTipItem_C::Init(enum class E_Items Item, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ToolTipItem_C", "Init");

	Params::UUI_ToolTipItem_C_Init_Params Parms{};

	Parms.Item = Item;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ToolTipItem.UI_ToolTipItem_C.ExecuteUbergraph_UI_ToolTipItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Items                 K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FST_InventoryItem           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class E_ItemCategories        CallFunc_GetItemCategoryAndColor_Category                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetItemCategoryAndColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemCategoryAndColor_CategoryLiteralText             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ItemCategories        CallFunc_GetItemCategoryAndColor_Category_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetItemCategoryAndColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemCategoryAndColor_CategoryLiteralText_1           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UUI_ToolTipItem_C::ExecuteUbergraph_UI_ToolTipItem(int32 EntryPoint, enum class E_Items K2Node_CustomEvent_Item, int32 K2Node_CustomEvent_Amount, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FName CallFunc_Conv_StringToName_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FST_InventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Format_ReturnValue, enum class E_ItemCategories CallFunc_GetItemCategoryAndColor_Category, const struct FLinearColor& CallFunc_GetItemCategoryAndColor_ReturnValue, class FText CallFunc_GetItemCategoryAndColor_CategoryLiteralText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Multiply_IntInt_ReturnValue, enum class E_ItemCategories CallFunc_GetItemCategoryAndColor_Category_1, const struct FLinearColor& CallFunc_GetItemCategoryAndColor_ReturnValue_1, class FText CallFunc_GetItemCategoryAndColor_CategoryLiteralText_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ToolTipItem_C", "ExecuteUbergraph_UI_ToolTipItem");

	Params::UUI_ToolTipItem_C_ExecuteUbergraph_UI_ToolTipItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetItemCategoryAndColor_Category = CallFunc_GetItemCategoryAndColor_Category;
	Parms.CallFunc_GetItemCategoryAndColor_ReturnValue = CallFunc_GetItemCategoryAndColor_ReturnValue;
	Parms.CallFunc_GetItemCategoryAndColor_CategoryLiteralText = CallFunc_GetItemCategoryAndColor_CategoryLiteralText;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetItemCategoryAndColor_Category_1 = CallFunc_GetItemCategoryAndColor_Category_1;
	Parms.CallFunc_GetItemCategoryAndColor_ReturnValue_1 = CallFunc_GetItemCategoryAndColor_ReturnValue_1;
	Parms.CallFunc_GetItemCategoryAndColor_CategoryLiteralText_1 = CallFunc_GetItemCategoryAndColor_CategoryLiteralText_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


