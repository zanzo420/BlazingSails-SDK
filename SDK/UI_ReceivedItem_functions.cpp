#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ReceivedItem.UI_ReceivedItem_C
// (None)

class UClass* UUI_ReceivedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ReceivedItem_C");

	return Clss;
}


// UI_ReceivedItem_C UI_ReceivedItem.Default__UI_ReceivedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ReceivedItem_C* UUI_ReceivedItem_C::GetDefaultObj()
{
	static class UUI_ReceivedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ReceivedItem_C*>(UUI_ReceivedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ReceivedItem.UI_ReceivedItem_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ReceivedItem_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ReceivedItem_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ReceivedItem.UI_ReceivedItem_C.ExecuteUbergraph_UI_ReceivedItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetItemInfo_Icon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemInfo_Weight                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetItemInfo_ItemObject                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_Throwable                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_ItemCategories        CallFunc_GetItemInfo_Category                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUI_ReceivedItem_C::ExecuteUbergraph_UI_ReceivedItem(int32 EntryPoint, class UTexture2D* CallFunc_GetItemInfo_Icon, int32 CallFunc_GetItemInfo_Weight, class UClass* CallFunc_GetItemInfo_ItemObject, bool CallFunc_GetItemInfo_Throwable, enum class E_ItemCategories CallFunc_GetItemInfo_Category, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ReceivedItem_C", "ExecuteUbergraph_UI_ReceivedItem");

	Params::UUI_ReceivedItem_C_ExecuteUbergraph_UI_ReceivedItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetItemInfo_Icon = CallFunc_GetItemInfo_Icon;
	Parms.CallFunc_GetItemInfo_Weight = CallFunc_GetItemInfo_Weight;
	Parms.CallFunc_GetItemInfo_ItemObject = CallFunc_GetItemInfo_ItemObject;
	Parms.CallFunc_GetItemInfo_Throwable = CallFunc_GetItemInfo_Throwable;
	Parms.CallFunc_GetItemInfo_Category = CallFunc_GetItemInfo_Category;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


