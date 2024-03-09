#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C
// (None)

class UClass* UUI_FriendsListEntry_Epic_Steam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_FriendsListEntry_Epic_Steam_C");

	return Clss;
}


// UI_FriendsListEntry_Epic_Steam_C UI_FriendsListEntry_Epic_Steam.Default__UI_FriendsListEntry_Epic_Steam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_FriendsListEntry_Epic_Steam_C* UUI_FriendsListEntry_Epic_Steam_C::GetDefaultObj()
{
	static class UUI_FriendsListEntry_Epic_Steam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_FriendsListEntry_Epic_Steam_C*>(UUI_FriendsListEntry_Epic_Steam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Get_InviteButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_FriendsListEntry_Epic_Steam_C::Get_InviteButton_bIsEnabled_0(class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Get_InviteButton_bIsEnabled_0");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Get_InviteButton_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Get_FriendStatusTxt_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FOnlineUserPresenceData     CallFunc_GetPresence_ReturnValue                                 (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_FriendsListEntry_Epic_Steam_C::Get_FriendStatusTxt_Text_0(const struct FOnlineUserPresenceData& CallFunc_GetPresence_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Get_FriendStatusTxt_Text_0");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Get_FriendStatusTxt_Text_0_Params Parms{};

	Parms.CallFunc_GetPresence_ReturnValue = CallFunc_GetPresence_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Set Default Avatar Based on platform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FriendsListEntry_Epic_Steam_C::Set_Default_Avatar_Based_on_platform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Set Default Avatar Based on platform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Get_FriendNameTxt_1_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      Final_Platform_Text                                              (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UUI_FriendsListEntry_Epic_Steam_C::Get_FriendNameTxt_1_Text_0(const class FString& Final_Platform_Text, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Get_FriendNameTxt_1_Text_0");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Get_FriendNameTxt_1_Text_0_Params Parms{};

	Parms.Final_Platform_Text = Final_Platform_Text;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Get_SteamLogo_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_FriendsListEntry_Epic_Steam_C::Get_SteamLogo_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Get_SteamLogo_Visibility_0");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Get_SteamLogo_Visibility_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Get_EpicLogo_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_FriendsListEntry_Epic_Steam_C::Get_EpicLogo_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Get_EpicLogo_Visibility_0");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Get_EpicLogo_Visibility_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Get_StatusBorder_BrushColor_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Blue_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_Green_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineUserPresenceData     CallFunc_GetPresence_ReturnValue                                 (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUI_FriendsListEntry_Epic_Steam_C::Get_StatusBorder_BrushColor_0(const struct FLinearColor& CallFunc_LinearColor_Blue_ReturnValue, const struct FLinearColor& CallFunc_LinearColor_Green_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FOnlineUserPresenceData& CallFunc_GetPresence_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Get_StatusBorder_BrushColor_0");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Get_StatusBorder_BrushColor_0_Params Parms{};

	Parms.CallFunc_LinearColor_Blue_ReturnValue = CallFunc_LinearColor_Blue_ReturnValue;
	Parms.CallFunc_LinearColor_Green_ReturnValue = CallFunc_LinearColor_Green_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPresence_ReturnValue = CallFunc_GetPresence_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Get_FriendPersonaImg_Brush_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateBrush UUI_FriendsListEntry_Epic_Steam_C::Get_FriendPersonaImg_Brush_0(class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Get_FriendPersonaImg_Brush_0");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Get_FriendPersonaImg_Brush_0_Params Parms{};

	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Get_FriendNameTxt_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      UserName                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_GetUserAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

class FText UUI_FriendsListEntry_Epic_Steam_C::Get_FriendNameTxt_Text_0(const class FString& UserName, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Get_FriendNameTxt_Text_0");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Get_FriendNameTxt_Text_0_Params Parms{};

	Parms.UserName = UserName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUserAttribute_Found = CallFunc_GetUserAttribute_Found;
	Parms.CallFunc_GetUserAttribute_ReturnValue = CallFunc_GetUserAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.GetInviteButtonColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUI_FriendsListEntry_Epic_Steam_C::GetInviteButtonColorAndOpacity(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsHovered_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "GetInviteButtonColorAndOpacity");

	Params::UUI_FriendsListEntry_Epic_Steam_C_GetInviteButtonColorAndOpacity_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.EnableInvitebutton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FriendsListEntry_Epic_Steam_C::EnableInvitebutton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "EnableInvitebutton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Fetch Friend Avatar
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FriendsListEntry_Epic_Steam_C::Fetch_Friend_Avatar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Fetch Friend Avatar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.OnGetAvatarComplete_96C2E5094E63B87CA9F63DB8B447DC8A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    ResultTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FriendsListEntry_Epic_Steam_C::OnGetAvatarComplete_96C2E5094E63B87CA9F63DB8B447DC8A(bool bWasSuccessful, class UTexture* ResultTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "OnGetAvatarComplete_96C2E5094E63B87CA9F63DB8B447DC8A");

	Params::UUI_FriendsListEntry_Epic_Steam_C_OnGetAvatarComplete_96C2E5094E63B87CA9F63DB8B447DC8A_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ResultTexture = ResultTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.OnCallFailed_96C2E5094E63B87CA9F63DB8B447DC8A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    ResultTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FriendsListEntry_Epic_Steam_C::OnCallFailed_96C2E5094E63B87CA9F63DB8B447DC8A(bool bWasSuccessful, class UTexture* ResultTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "OnCallFailed_96C2E5094E63B87CA9F63DB8B447DC8A");

	Params::UUI_FriendsListEntry_Epic_Steam_C_OnCallFailed_96C2E5094E63B87CA9F63DB8B447DC8A_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ResultTexture = ResultTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_FriendsListEntry_Epic_Steam_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FriendsListEntry_Epic_Steam_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "BP_OnItemExpansionChanged");

	Params::UUI_FriendsListEntry_Epic_Steam_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FriendsListEntry_Epic_Steam_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "BP_OnItemSelectionChanged");

	Params::UUI_FriendsListEntry_Epic_Steam_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FriendsListEntry_Epic_Steam_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "OnListItemObjectSet");

	Params::UUI_FriendsListEntry_Epic_Steam_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_FriendsListEntry_Epic_Steam_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Created Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FriendsListEntry_Epic_Steam_C::Created_Party(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Created Party");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Created_Party_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Invite Friend
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FriendsListEntry_Epic_Steam_C::Invite_Friend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Invite Friend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.Recieved Avatar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            User_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_FriendsListEntry_Epic_Steam_C::Recieved_Avatar(bool Successful, class UTexture* Avatar, const struct FUniqueNetIdRepl& User_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "Recieved Avatar");

	Params::UUI_FriendsListEntry_Epic_Steam_C_Recieved_Avatar_Params Parms{};

	Parms.Successful = Successful;
	Parms.Avatar = Avatar;
	Parms.User_ID = User_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FriendsListEntry_Epic_Steam.UI_FriendsListEntry_Epic_Steam_C.ExecuteUbergraph_UI_FriendsListEntry_Epic_Steam
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineAvatarSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_CustomEvent_ResultTexture_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_CustomEvent_ResultTexture                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UTexture*                    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_FriendReference_C*      K2Node_DynamicCast_AsEOS_Friend_Reference                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Successful_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_CustomEvent_Avatar                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_User_Id                                       (HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_Get_Unique_Net_Id_ReturnValue                           (HasGetValueTypeHash)
// class UOnlineAvatarSubsystemGetAvatar*CallFunc_GetAvatar_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FriendsListEntry_Epic_Steam_C::ExecuteUbergraph_UI_FriendsListEntry_Epic_Steam(int32 EntryPoint, class UOnlineAvatarSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_CustomEvent_bWasSuccessful_1, class UTexture* K2Node_CustomEvent_ResultTexture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bWasSuccessful, class UTexture* K2Node_CustomEvent_ResultTexture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture* Temp_object_Variable, bool Temp_bool_Variable, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UEOS_FriendReference_C* K2Node_DynamicCast_AsEOS_Friend_Reference, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Is_In_Party_In_Party_, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_CustomEvent_Successful_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool K2Node_CustomEvent_Successful, class UTexture* K2Node_CustomEvent_Avatar, const struct FUniqueNetIdRepl& K2Node_CustomEvent_User_Id, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_3, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_Get_Unique_Net_Id_ReturnValue, class UOnlineAvatarSubsystemGetAvatar* CallFunc_GetAvatar_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FriendsListEntry_Epic_Steam_C", "ExecuteUbergraph_UI_FriendsListEntry_Epic_Steam");

	Params::UUI_FriendsListEntry_Epic_Steam_C_ExecuteUbergraph_UI_FriendsListEntry_Epic_Steam_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_bWasSuccessful_1 = K2Node_CustomEvent_bWasSuccessful_1;
	Parms.K2Node_CustomEvent_ResultTexture_1 = K2Node_CustomEvent_ResultTexture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.K2Node_CustomEvent_ResultTexture = K2Node_CustomEvent_ResultTexture;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsEOS_Friend_Reference = K2Node_DynamicCast_AsEOS_Friend_Reference;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CustomEvent_Successful_1 = K2Node_CustomEvent_Successful_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_CustomEvent_Successful = K2Node_CustomEvent_Successful;
	Parms.K2Node_CustomEvent_Avatar = K2Node_CustomEvent_Avatar;
	Parms.K2Node_CustomEvent_User_Id = K2Node_CustomEvent_User_Id;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance_1 = K2Node_DynamicCast_AsEOS_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Get_Unique_Net_Id_ReturnValue = CallFunc_Get_Unique_Net_Id_ReturnValue;
	Parms.CallFunc_GetAvatar_ReturnValue = CallFunc_GetAvatar_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


