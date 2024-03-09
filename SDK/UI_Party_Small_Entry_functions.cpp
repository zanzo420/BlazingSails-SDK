#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Party_Small_Entry.UI_Party_Small_Entry_C
// (None)

class UClass* UUI_Party_Small_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Party_Small_Entry_C");

	return Clss;
}


// UI_Party_Small_Entry_C UI_Party_Small_Entry.Default__UI_Party_Small_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Party_Small_Entry_C* UUI_Party_Small_Entry_C::GetDefaultObj()
{
	static class UUI_Party_Small_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Party_Small_Entry_C*>(UUI_Party_Small_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.Get_Btn_OpenChest_bIsEnabled_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_Get_User_ID_User_ID                                     (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Party_Leader_IsLeader                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_Party_Small_Entry_C::Get_Btn_OpenChest_bIsEnabled_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_Get_User_ID_User_ID, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, bool CallFunc_Is_Party_Leader_IsLeader, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "Get_Btn_OpenChest_bIsEnabled_0");

	Params::UUI_Party_Small_Entry_C_Get_Btn_OpenChest_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Get_User_ID_User_ID = CallFunc_Get_User_ID_User_ID;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_Is_Party_Leader_IsLeader = CallFunc_Is_Party_Leader_IsLeader;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.Update Level
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Party_Small_Entry_C::Update_Level()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "Update Level");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.Update Avatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Party_Small_Entry_C::Update_Avatar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "Update Avatar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.Update Curse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Party_Small_Entry_C::Update_Curse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "Update Curse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.Update Ready
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            CallFunc_Get_User_ID_User_ID                                     (HasGetValueTypeHash)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Member_Party_Leader_IsLeader                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Party_Small_Entry_C::Update_Ready(const struct FUniqueNetIdRepl& CallFunc_Get_User_ID_User_ID, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_Is_Member_Party_Leader_IsLeader, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1, bool CallFunc_Is_In_Party_In_Party_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "Update Ready");

	Params::UUI_Party_Small_Entry_C_Update_Ready_Params Parms{};

	Parms.CallFunc_Get_User_ID_User_ID = CallFunc_Get_User_ID_User_ID;
	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_Is_Member_Party_Leader_IsLeader = CallFunc_Is_Member_Party_Leader_IsLeader;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1 = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.Update Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_Party_Small_Entry_C::Update_Name(int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "Update Name");

	Params::UUI_Party_Small_Entry_C_Update_Name_Params Parms{};

	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Party_Small_Entry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Party_Small_Entry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "BP_OnItemExpansionChanged");

	Params::UUI_Party_Small_Entry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Party_Small_Entry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "BP_OnItemSelectionChanged");

	Params::UUI_Party_Small_Entry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Party_Small_Entry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "OnListItemObjectSet");

	Params::UUI_Party_Small_Entry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.BndEvt__UI_Party_Small_Entry_Btn_OpenChest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Party_Small_Entry_C::BndEvt__UI_Party_Small_Entry_Btn_OpenChest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "BndEvt__UI_Party_Small_Entry_Btn_OpenChest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Party_Small_Entry.UI_Party_Small_Entry_C.ExecuteUbergraph_UI_Party_Small_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_Get_User_ID_User_ID                                     (HasGetValueTypeHash)
// class UEOS_PartyMemberReference_C* K2Node_DynamicCast_AsEOS_Party_Member_Reference                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Party_Small_Entry_C::ExecuteUbergraph_UI_Party_Small_Entry(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, const struct FUniqueNetIdRepl& CallFunc_Get_User_ID_User_ID, class UEOS_PartyMemberReference_C* K2Node_DynamicCast_AsEOS_Party_Member_Reference, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bIsSelected, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_bIsExpanded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Party_Small_Entry_C", "ExecuteUbergraph_UI_Party_Small_Entry");

	Params::UUI_Party_Small_Entry_C_ExecuteUbergraph_UI_Party_Small_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.CallFunc_Get_User_ID_User_ID = CallFunc_Get_User_ID_User_ID;
	Parms.K2Node_DynamicCast_AsEOS_Party_Member_Reference = K2Node_DynamicCast_AsEOS_Party_Member_Reference;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;

	UObject::ProcessEvent(Func, &Parms);

}

}


