#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ServerBrowser.UI_ServerBrowser_C
// (None)

class UClass* UUI_ServerBrowser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ServerBrowser_C");

	return Clss;
}


// UI_ServerBrowser_C UI_ServerBrowser.Default__UI_ServerBrowser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ServerBrowser_C* UUI_ServerBrowser_C::GetDefaultObj()
{
	static class UUI_ServerBrowser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ServerBrowser_C*>(UUI_ServerBrowser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ApplyFilter_Matchmaking
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Matchmaking_Server__Found                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Matchmaking_Server__Match_Making                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ApplyFilter_Matchmaking(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Matchmaking_Server__Found, bool CallFunc_Is_Matchmaking_Server__Match_Making, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ApplyFilter_Matchmaking");

	Params::UUI_ServerBrowser_C_ApplyFilter_Matchmaking_Params Parms{};

	Parms.Session = Session;
	Parms.CallFunc_Is_Matchmaking_Server__Found = CallFunc_Is_Matchmaking_Server__Found;
	Parms.CallFunc_Is_Matchmaking_Server__Match_Making = CallFunc_Is_Matchmaking_Server__Match_Making;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilter != nullptr)
		*bPassedFilter = Parms.bPassedFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ApplyFilter_LanServers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Dedicated_Server__Found_Attribute                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Dedicated_Server__Dedicated_Server                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ApplyFilter_LanServers(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Dedicated_Server__Found_Attribute, bool CallFunc_Is_Dedicated_Server__Dedicated_Server, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ApplyFilter_LanServers");

	Params::UUI_ServerBrowser_C_ApplyFilter_LanServers_Params Parms{};

	Parms.Session = Session;
	Parms.CallFunc_Is_Dedicated_Server__Found_Attribute = CallFunc_Is_Dedicated_Server__Found_Attribute;
	Parms.CallFunc_Is_Dedicated_Server__Dedicated_Server = CallFunc_Is_Dedicated_Server__Dedicated_Server;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilter != nullptr)
		*bPassedFilter = Parms.bPassedFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.CheckFilters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NotLastActiveFilter                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::CheckFilters(bool* NotLastActiveFilter, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, bool CallFunc_IsChecked_ReturnValue_3, bool CallFunc_IsChecked_ReturnValue_4, bool CallFunc_IsChecked_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "CheckFilters");

	Params::UUI_ServerBrowser_C_CheckFilters_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_IsChecked_ReturnValue_2 = CallFunc_IsChecked_ReturnValue_2;
	Parms.CallFunc_IsChecked_ReturnValue_3 = CallFunc_IsChecked_ReturnValue_3;
	Parms.CallFunc_IsChecked_ReturnValue_4 = CallFunc_IsChecked_ReturnValue_4;
	Parms.CallFunc_IsChecked_ReturnValue_5 = CallFunc_IsChecked_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (NotLastActiveFilter != nullptr)
		*NotLastActiveFilter = Parms.NotLastActiveFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.SetJoiningGameUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsJoining                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::SetJoiningGameUI(bool IsJoining, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "SetJoiningGameUI");

	Params::UUI_ServerBrowser_C_SetJoiningGameUI_Params Parms{};

	Parms.IsJoining = IsJoining;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ApplyFilter_Empty
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Empty__Session_is_Empty                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ApplyFilter_Empty(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Empty__Session_is_Empty, bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ApplyFilter_Empty");

	Params::UUI_ServerBrowser_C_ApplyFilter_Empty_Params Parms{};

	Parms.Session = Session;
	Parms.CallFunc_Is_Empty__Session_is_Empty = CallFunc_Is_Empty__Session_is_Empty;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilter != nullptr)
		*bPassedFilter = Parms.bPassedFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ApplyFilter_Full
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Full__Session_is_Full                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ApplyFilter_Full(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Full__Session_is_Full, bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ApplyFilter_Full");

	Params::UUI_ServerBrowser_C_ApplyFilter_Full_Params Parms{};

	Parms.Session = Session;
	Parms.CallFunc_Is_Full__Session_is_Full = CallFunc_Is_Full__Session_is_Full;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilter != nullptr)
		*bPassedFilter = Parms.bPassedFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.FilterByTOD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ServerBrowser_C::FilterByTOD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "FilterByTOD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ApplyFilter_TOD
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Get_Time_of_Day_Found                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_TimesOfDay            CallFunc_Get_Time_of_Day_Time_of_Day                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      CallFunc_GetCheckedMaps_MapBytesArr                              (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ApplyFilter_TOD(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Get_Time_of_Day_Found, enum class E_TimesOfDay CallFunc_Get_Time_of_Day_Time_of_Day, TArray<uint8>& CallFunc_GetCheckedMaps_MapBytesArr, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ApplyFilter_TOD");

	Params::UUI_ServerBrowser_C_ApplyFilter_TOD_Params Parms{};

	Parms.Session = Session;
	Parms.CallFunc_Get_Time_of_Day_Found = CallFunc_Get_Time_of_Day_Found;
	Parms.CallFunc_Get_Time_of_Day_Time_of_Day = CallFunc_Get_Time_of_Day_Time_of_Day;
	Parms.CallFunc_GetCheckedMaps_MapBytesArr = CallFunc_GetCheckedMaps_MapBytesArr;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilter != nullptr)
		*bPassedFilter = Parms.bPassedFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.GetRefreshButton_ColorAndOpacity
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUI_ServerBrowser_C::GetRefreshButton_ColorAndOpacity(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsHovered_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "GetRefreshButton_ColorAndOpacity");

	Params::UUI_ServerBrowser_C_GetRefreshButton_ColorAndOpacity_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ApplyFilter_Inprogress
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Get_Session_State_Found                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESession_State          CallFunc_Get_Session_State_Current_Session_State                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ApplyFilter_Inprogress(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Get_Session_State_Found, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ApplyFilter_Inprogress");

	Params::UUI_ServerBrowser_C_ApplyFilter_Inprogress_Params Parms{};

	Parms.Session = Session;
	Parms.CallFunc_Get_Session_State_Found = CallFunc_Get_Session_State_Found;
	Parms.CallFunc_Get_Session_State_Current_Session_State = CallFunc_Get_Session_State_Current_Session_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilter != nullptr)
		*bPassedFilter = Parms.bPassedFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ApplyFilter_Passworded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Password__Found                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Password__HasPassword                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ApplyFilter_Passworded(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Has_Password__Found, bool CallFunc_Has_Password__HasPassword, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ApplyFilter_Passworded");

	Params::UUI_ServerBrowser_C_ApplyFilter_Passworded_Params Parms{};

	Parms.Session = Session;
	Parms.CallFunc_Has_Password__Found = CallFunc_Has_Password__Found;
	Parms.CallFunc_Has_Password__HasPassword = CallFunc_Has_Password__HasPassword;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilter != nullptr)
		*bPassedFilter = Parms.bPassedFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.Apply Filter Only Dedicated
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Dedicated_Server__Found_Attribute                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Dedicated_Server__Dedicated_Server                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::Apply_Filter_Only_Dedicated(class UEOS_SessionReference_C* Session, bool* bPassedFilter, bool CallFunc_Is_Dedicated_Server__Found_Attribute, bool CallFunc_Is_Dedicated_Server__Dedicated_Server, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "Apply Filter Only Dedicated");

	Params::UUI_ServerBrowser_C_Apply_Filter_Only_Dedicated_Params Parms{};

	Parms.Session = Session;
	Parms.CallFunc_Is_Dedicated_Server__Found_Attribute = CallFunc_Is_Dedicated_Server__Found_Attribute;
	Parms.CallFunc_Is_Dedicated_Server__Dedicated_Server = CallFunc_Is_Dedicated_Server__Dedicated_Server;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilter != nullptr)
		*bPassedFilter = Parms.bPassedFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ApplyFilters
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilters                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyFilter_Matchmaking_bPassedFilter                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyFilter_LanServers_bPassedFilter                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyFilter_TOD_bPassedFilter                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyFilter_Empty_bPassedFilter                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyFilter_Full_bPassedFilter                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyFilter_Inprogress_bPassedFilter                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyFilter_Passworded_bPassedFilter                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Apply_Filter_Only_Dedicated_bPassedFilter               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyFilter_Region_bPassedFilter                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ApplyFilters(class UEOS_SessionReference_C* Session, bool* bPassedFilters, bool Result, bool CallFunc_ApplyFilter_Matchmaking_bPassedFilter, bool CallFunc_ApplyFilter_LanServers_bPassedFilter, bool CallFunc_ApplyFilter_TOD_bPassedFilter, bool CallFunc_ApplyFilter_Empty_bPassedFilter, bool CallFunc_ApplyFilter_Full_bPassedFilter, bool CallFunc_ApplyFilter_Inprogress_bPassedFilter, bool CallFunc_ApplyFilter_Passworded_bPassedFilter, bool CallFunc_Apply_Filter_Only_Dedicated_bPassedFilter, bool CallFunc_ApplyFilter_Region_bPassedFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ApplyFilters");

	Params::UUI_ServerBrowser_C_ApplyFilters_Params Parms{};

	Parms.Session = Session;
	Parms.Result = Result;
	Parms.CallFunc_ApplyFilter_Matchmaking_bPassedFilter = CallFunc_ApplyFilter_Matchmaking_bPassedFilter;
	Parms.CallFunc_ApplyFilter_LanServers_bPassedFilter = CallFunc_ApplyFilter_LanServers_bPassedFilter;
	Parms.CallFunc_ApplyFilter_TOD_bPassedFilter = CallFunc_ApplyFilter_TOD_bPassedFilter;
	Parms.CallFunc_ApplyFilter_Empty_bPassedFilter = CallFunc_ApplyFilter_Empty_bPassedFilter;
	Parms.CallFunc_ApplyFilter_Full_bPassedFilter = CallFunc_ApplyFilter_Full_bPassedFilter;
	Parms.CallFunc_ApplyFilter_Inprogress_bPassedFilter = CallFunc_ApplyFilter_Inprogress_bPassedFilter;
	Parms.CallFunc_ApplyFilter_Passworded_bPassedFilter = CallFunc_ApplyFilter_Passworded_bPassedFilter;
	Parms.CallFunc_Apply_Filter_Only_Dedicated_bPassedFilter = CallFunc_Apply_Filter_Only_Dedicated_bPassedFilter;
	Parms.CallFunc_ApplyFilter_Region_bPassedFilter = CallFunc_ApplyFilter_Region_bPassedFilter;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilters != nullptr)
		*bPassedFilters = Parms.bPassedFilters;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.FilterByRegion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ServerBrowser_Category_C*Invoker                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      RegionVal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class UUI_ServerBrowser_Category_C*>CategoriesArray                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ServerBrowser_Category_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToLower_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSubstring_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_ServerBrowser_Category_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::FilterByRegion(class UUI_ServerBrowser_Category_C* Invoker, const class FString& RegionVal, const TArray<class UUI_ServerBrowser_Category_C*>& CategoriesArray, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_ServerBrowser_Category_C* CallFunc_Array_Get_Item, const class FString& CallFunc_ToLower_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_ServerBrowser_Category_C*>& K2Node_MakeArray_Array, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "FilterByRegion");

	Params::UUI_ServerBrowser_C_FilterByRegion_Params Parms{};

	Parms.Invoker = Invoker;
	Parms.RegionVal = RegionVal;
	Parms.CategoriesArray = CategoriesArray;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ToLower_ReturnValue = CallFunc_ToLower_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue_1 = CallFunc_GetSubstring_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ApplyFilter_Region
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPassedFilter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Region_Found                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Region_Region                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToLower_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ApplyFilter_Region(class UEOS_SessionReference_C* Session, bool* bPassedFilter, const class FString& Temp_string_Variable, bool CallFunc_Get_Region_Found, const class FString& CallFunc_Get_Region_Region, const class FString& CallFunc_ToLower_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ApplyFilter_Region");

	Params::UUI_ServerBrowser_C_ApplyFilter_Region_Params Parms{};

	Parms.Session = Session;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Get_Region_Found = CallFunc_Get_Region_Found;
	Parms.CallFunc_Get_Region_Region = CallFunc_Get_Region_Region;
	Parms.CallFunc_ToLower_ReturnValue = CallFunc_ToLower_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedFilter != nullptr)
		*bPassedFilter = Parms.bPassedFilter;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.AddSortedServers
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     SessionResult                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              ServerType                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ServerBrowserGame_C*     WidgetRef                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ServerBrowserGame_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UEOS_SessionReference_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Matchmaking_Server__Found                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Matchmaking_Server__Match_Making                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// bool                               CallFunc_Get_Session_State_Found                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESession_State          CallFunc_Get_Session_State_Current_Session_State                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_GameMode_Found                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_GameModes             CallFunc_Get_GameMode_Game_Mode                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Get_Map_Found                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Map_Map                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_Get_Session_State_Found_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESession_State          CallFunc_Get_Session_State_Current_Session_State_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Open_Crew_Slot_Count_Open_Crew_Slots                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Dedicated_Server__Found_Attribute                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Dedicated_Server__Dedicated_Server                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Player_Count_Player_Count                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Time_of_Day_Found                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_TimesOfDay            CallFunc_Get_Time_of_Day_Time_of_Day                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_MapName_Found                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_MapName_Version                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_Get_Password_Found                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Password_Version                                    (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_Get_Session_State_Found_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESession_State          CallFunc_Get_Session_State_Current_Session_State_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Get_Version_Found                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Version_Version                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Session_State_Found_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESession_State          CallFunc_Get_Session_State_Current_Session_State_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Get_Session_Name_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Get_Session_Name_Server_Name                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Max_Player_Count_Player_Count                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_SessionReference_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_SessionReference_C*     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Session_Ping_Ping_in_ms                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ServerBrowser_C::AddSortedServers(class UEOS_SessionReference_C* SessionResult, uint8 ServerType, class UUI_ServerBrowserGame_C* WidgetRef, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UUI_ServerBrowserGame_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_GetProjectVersion_ReturnValue, class UEOS_SessionReference_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Is_Matchmaking_Server__Found, bool CallFunc_Is_Matchmaking_Server__Match_Making, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_Get_Session_State_Found, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State, bool CallFunc_Get_GameMode_Found, enum class E_GameModes CallFunc_Get_GameMode_Game_Mode, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Get_Map_Found, const class FString& CallFunc_Get_Map_Map, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_Get_Session_State_Found_1, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State_1, int32 CallFunc_Get_Open_Crew_Slot_Count_Open_Crew_Slots, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Is_Dedicated_Server__Found_Attribute, bool CallFunc_Is_Dedicated_Server__Dedicated_Server, bool CallFunc_BooleanAND_ReturnValue_3, int32 CallFunc_Get_Player_Count_Player_Count, bool CallFunc_Get_Time_of_Day_Found, enum class E_TimesOfDay CallFunc_Get_Time_of_Day_Time_of_Day, bool CallFunc_Get_MapName_Found, const class FString& CallFunc_Get_MapName_Version, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_Get_Password_Found, const class FString& CallFunc_Get_Password_Version, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Get_Session_State_Found_2, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Get_Version_Found, const class FString& CallFunc_Get_Version_Version, bool CallFunc_Get_Session_State_Found_3, enum class ESession_State CallFunc_Get_Session_State_Current_Session_State_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_Get_Session_Name_Found, const class FString& CallFunc_Get_Session_Name_Server_Name, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Get_Max_Player_Count_Player_Count, bool CallFunc_LessEqual_IntInt_ReturnValue, class UEOS_SessionReference_C* CallFunc_Array_Get_Item_1, class UEOS_SessionReference_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Get_Session_Ping_Ping_in_ms, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "AddSortedServers");

	Params::UUI_ServerBrowser_C_AddSortedServers_Params Parms{};

	Parms.SessionResult = SessionResult;
	Parms.ServerType = ServerType;
	Parms.WidgetRef = WidgetRef;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Is_Matchmaking_Server__Found = CallFunc_Is_Matchmaking_Server__Found;
	Parms.CallFunc_Is_Matchmaking_Server__Match_Making = CallFunc_Is_Matchmaking_Server__Match_Making;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_Get_Session_State_Found = CallFunc_Get_Session_State_Found;
	Parms.CallFunc_Get_Session_State_Current_Session_State = CallFunc_Get_Session_State_Current_Session_State;
	Parms.CallFunc_Get_GameMode_Found = CallFunc_Get_GameMode_Found;
	Parms.CallFunc_Get_GameMode_Game_Mode = CallFunc_Get_GameMode_Game_Mode;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Get_Map_Found = CallFunc_Get_Map_Found;
	Parms.CallFunc_Get_Map_Map = CallFunc_Get_Map_Map;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Get_Session_State_Found_1 = CallFunc_Get_Session_State_Found_1;
	Parms.CallFunc_Get_Session_State_Current_Session_State_1 = CallFunc_Get_Session_State_Current_Session_State_1;
	Parms.CallFunc_Get_Open_Crew_Slot_Count_Open_Crew_Slots = CallFunc_Get_Open_Crew_Slot_Count_Open_Crew_Slots;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Is_Dedicated_Server__Found_Attribute = CallFunc_Is_Dedicated_Server__Found_Attribute;
	Parms.CallFunc_Is_Dedicated_Server__Dedicated_Server = CallFunc_Is_Dedicated_Server__Dedicated_Server;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Get_Player_Count_Player_Count = CallFunc_Get_Player_Count_Player_Count;
	Parms.CallFunc_Get_Time_of_Day_Found = CallFunc_Get_Time_of_Day_Found;
	Parms.CallFunc_Get_Time_of_Day_Time_of_Day = CallFunc_Get_Time_of_Day_Time_of_Day;
	Parms.CallFunc_Get_MapName_Found = CallFunc_Get_MapName_Found;
	Parms.CallFunc_Get_MapName_Version = CallFunc_Get_MapName_Version;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_Get_Password_Found = CallFunc_Get_Password_Found;
	Parms.CallFunc_Get_Password_Version = CallFunc_Get_Password_Version;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Get_Session_State_Found_2 = CallFunc_Get_Session_State_Found_2;
	Parms.CallFunc_Get_Session_State_Current_Session_State_2 = CallFunc_Get_Session_State_Current_Session_State_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Get_Version_Found = CallFunc_Get_Version_Found;
	Parms.CallFunc_Get_Version_Version = CallFunc_Get_Version_Version;
	Parms.CallFunc_Get_Session_State_Found_3 = CallFunc_Get_Session_State_Found_3;
	Parms.CallFunc_Get_Session_State_Current_Session_State_3 = CallFunc_Get_Session_State_Current_Session_State_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_Get_Session_Name_Found = CallFunc_Get_Session_Name_Found;
	Parms.CallFunc_Get_Session_Name_Server_Name = CallFunc_Get_Session_Name_Server_Name;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Get_Max_Player_Count_Player_Count = CallFunc_Get_Max_Player_Count_Player_Count;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Get_Session_Ping_Ping_in_ms = CallFunc_Get_Session_Ping_Ping_in_ms;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.SortServer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_SessionReference_C*     SessionResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Matchmaking_Server__Found                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Matchmaking_Server__Match_Making                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Dedicated_Server__Found_Attribute                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Dedicated_Server__Dedicated_Server                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ServerBrowser_C::SortServer(class UEOS_SessionReference_C* SessionResult, bool CallFunc_Is_Matchmaking_Server__Found, bool CallFunc_Is_Matchmaking_Server__Match_Making, bool CallFunc_Is_Dedicated_Server__Found_Attribute, bool CallFunc_Is_Dedicated_Server__Dedicated_Server, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "SortServer");

	Params::UUI_ServerBrowser_C_SortServer_Params Parms{};

	Parms.SessionResult = SessionResult;
	Parms.CallFunc_Is_Matchmaking_Server__Found = CallFunc_Is_Matchmaking_Server__Found;
	Parms.CallFunc_Is_Matchmaking_Server__Match_Making = CallFunc_Is_Matchmaking_Server__Match_Making;
	Parms.CallFunc_Is_Dedicated_Server__Found_Attribute = CallFunc_Is_Dedicated_Server__Found_Attribute;
	Parms.CallFunc_Is_Dedicated_Server__Dedicated_Server = CallFunc_Is_Dedicated_Server__Dedicated_Server;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.SetTotalPlayerAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

class FText UUI_ServerBrowser_C::SetTotalPlayerAmount(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "SetTotalPlayerAmount");

	Params::UUI_ServerBrowser_C_SetTotalPlayerAmount_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ShowOutdatedWarning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_ServerBrowser_C::ShowOutdatedWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ShowOutdatedWarning");

	Params::UUI_ServerBrowser_C_ShowOutdatedWarning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ShowTopInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_ServerBrowser_C::ShowTopInfo(int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ShowTopInfo");

	Params::UUI_ServerBrowser_C_ShowTopInfo_Params Parms{};

	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ShowThrobbler
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_ServerBrowser_C::ShowThrobbler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ShowThrobbler");

	Params::UUI_ServerBrowser_C_ShowThrobbler_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.SetServersText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UUI_ServerBrowser_C::SetServersText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "SetServersText");

	Params::UUI_ServerBrowser_C_SetServersText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.SetNoServersVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_ServerBrowser_C::SetNoServersVisibility(int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "SetNoServersVisibility");

	Params::UUI_ServerBrowser_C_SetNoServersVisibility_Params Parms{};

	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.FilterServersByRegion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ServerBrowser_Category_C*Invoker                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Region                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_ServerBrowser_C::FilterServersByRegion(class UUI_ServerBrowser_Category_C* Invoker, const class FString& Region)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "FilterServersByRegion");

	Params::UUI_ServerBrowser_C_FilterServersByRegion_Params Parms{};

	Parms.Invoker = Invoker;
	Parms.Region = Region;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "PreConstruct");

	Params::UUI_ServerBrowser_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.RefreshServerList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ServerBrowser_C::RefreshServerList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "RefreshServerList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.LoadServers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ServerBrowser_C::LoadServers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "LoadServers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__RefreshListButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ServerBrowser_C::BndEvt__RefreshListButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "BndEvt__RefreshListButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__FilterDedicatedCheckbox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::BndEvt__FilterDedicatedCheckbox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "BndEvt__FilterDedicatedCheckbox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_ServerBrowser_C_BndEvt__FilterDedicatedCheckbox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__FilterPasswordedCheckbox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::BndEvt__FilterPasswordedCheckbox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "BndEvt__FilterPasswordedCheckbox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_ServerBrowser_C_BndEvt__FilterPasswordedCheckbox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__FilterProgressCheckbox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::BndEvt__FilterProgressCheckbox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "BndEvt__FilterProgressCheckbox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_ServerBrowser_C_BndEvt__FilterProgressCheckbox_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__FilterFullCheckbox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::BndEvt__FilterFullCheckbox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "BndEvt__FilterFullCheckbox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_ServerBrowser_C_BndEvt__FilterFullCheckbox_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__FilterEmptyCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::BndEvt__FilterEmptyCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "BndEvt__FilterEmptyCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_ServerBrowser_C_BndEvt__FilterEmptyCheckbox_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ServerBrowser_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.FilterEvent_TODChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ServerBrowser_C::FilterEvent_TODChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "FilterEvent_TODChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ServerBrowser_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ServerListDisabledTimeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ServerBrowser_C::ServerListDisabledTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ServerListDisabledTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_ServerBrowser_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.Found Sessions
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UEOS_SessionReference_C*>Search_Results                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ServerBrowser_C::Found_Sessions(bool Successful, TArray<class UEOS_SessionReference_C*>& Search_Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "Found Sessions");

	Params::UUI_ServerBrowser_C_Found_Sessions_Params Parms{};

	Parms.Successful = Successful;
	Parms.Search_Results = Search_Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__UI_ServerBrowser_ShowMatchMakingServersCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::BndEvt__UI_ServerBrowser_ShowMatchMakingServersCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "BndEvt__UI_ServerBrowser_ShowMatchMakingServersCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_ServerBrowser_C_BndEvt__UI_ServerBrowser_ShowMatchMakingServersCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ExecuteUbergraph_UI_ServerBrowser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUI_ServerBrowser_Category_C*K2Node_CustomEvent_Invoker                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Region                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_6                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckFilters_NotLastActiveFilter                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckFilters_NotLastActiveFilter_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckFilters_NotLastActiveFilter_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckFilters_NotLastActiveFilter_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckFilters_NotLastActiveFilter_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<uint8>                      CallFunc_GetCheckedMaps_MapBytesArr                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UEOS_SessionReference_C*>K2Node_CustomEvent_Search_Results                                (ReferenceParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_SessionReference_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ServerBrowserGame_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ServerBrowser_C::ExecuteUbergraph_UI_ServerBrowser(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUI_ServerBrowser_Category_C* K2Node_CustomEvent_Invoker, const class FString& K2Node_CustomEvent_Region, bool K2Node_Event_IsDesignTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_ComponentBoundEvent_bIsChecked_6, bool K2Node_ComponentBoundEvent_bIsChecked_5, bool K2Node_ComponentBoundEvent_bIsChecked_4, bool K2Node_ComponentBoundEvent_bIsChecked_3, bool K2Node_ComponentBoundEvent_bIsChecked_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_WithEditor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_CheckFilters_NotLastActiveFilter, bool CallFunc_CheckFilters_NotLastActiveFilter_1, bool CallFunc_CheckFilters_NotLastActiveFilter_2, bool CallFunc_CheckFilters_NotLastActiveFilter_3, bool CallFunc_CheckFilters_NotLastActiveFilter_4, TArray<uint8>& CallFunc_GetCheckedMaps_MapBytesArr, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool K2Node_CustomEvent_Successful, TArray<class UEOS_SessionReference_C*>& K2Node_CustomEvent_Search_Results, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UEOS_SessionReference_C* CallFunc_Array_Get_Item, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UUI_ServerBrowserGame_C* CallFunc_Create_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ServerBrowser_C", "ExecuteUbergraph_UI_ServerBrowser");

	Params::UUI_ServerBrowser_C_ExecuteUbergraph_UI_ServerBrowser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Invoker = K2Node_CustomEvent_Invoker;
	Parms.K2Node_CustomEvent_Region = K2Node_CustomEvent_Region;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_6 = K2Node_ComponentBoundEvent_bIsChecked_6;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_5 = K2Node_ComponentBoundEvent_bIsChecked_5;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_4 = K2Node_ComponentBoundEvent_bIsChecked_4;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_3 = K2Node_ComponentBoundEvent_bIsChecked_3;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_2 = K2Node_ComponentBoundEvent_bIsChecked_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_CheckFilters_NotLastActiveFilter = CallFunc_CheckFilters_NotLastActiveFilter;
	Parms.CallFunc_CheckFilters_NotLastActiveFilter_1 = CallFunc_CheckFilters_NotLastActiveFilter_1;
	Parms.CallFunc_CheckFilters_NotLastActiveFilter_2 = CallFunc_CheckFilters_NotLastActiveFilter_2;
	Parms.CallFunc_CheckFilters_NotLastActiveFilter_3 = CallFunc_CheckFilters_NotLastActiveFilter_3;
	Parms.CallFunc_CheckFilters_NotLastActiveFilter_4 = CallFunc_CheckFilters_NotLastActiveFilter_4;
	Parms.CallFunc_GetCheckedMaps_MapBytesArr = CallFunc_GetCheckedMaps_MapBytesArr;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_CustomEvent_Successful = K2Node_CustomEvent_Successful;
	Parms.K2Node_CustomEvent_Search_Results = K2Node_CustomEvent_Search_Results;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}

}


