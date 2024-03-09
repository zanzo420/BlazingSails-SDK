#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionCommand_AddCOnquestInfo.BP_ActionCommand_AddCOnquestInfo_C
// (Actor)

class UClass* ABP_ActionCommand_AddCOnquestInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionCommand_AddCOnquestInfo_C");

	return Clss;
}


// BP_ActionCommand_AddCOnquestInfo_C BP_ActionCommand_AddCOnquestInfo.Default__BP_ActionCommand_AddCOnquestInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionCommand_AddCOnquestInfo_C* ABP_ActionCommand_AddCOnquestInfo_C::GetDefaultObj()
{
	static class ABP_ActionCommand_AddCOnquestInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionCommand_AddCOnquestInfo_C*>(ABP_ActionCommand_AddCOnquestInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionCommand_AddCOnquestInfo.BP_ActionCommand_AddCOnquestInfo_C.GetListOfCommands
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      List                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ListTemp                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_ActionCommand_AddCOnquestInfo_C::GetListOfCommands(class FString* List, const class FString& ListTemp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCommand_AddCOnquestInfo_C", "GetListOfCommands");

	Params::ABP_ActionCommand_AddCOnquestInfo_C_GetListOfCommands_Params Parms{};

	Parms.ListTemp = ListTemp;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (List != nullptr)
		*List = std::move(Parms.List);

}


// Function BP_ActionCommand_AddCOnquestInfo.BP_ActionCommand_AddCOnquestInfo_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionCommand_AddCOnquestInfo_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCommand_AddCOnquestInfo_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCommand_AddCOnquestInfo.BP_ActionCommand_AddCOnquestInfo_C.ExecuteUbergraph_BP_ActionCommand_AddCOnquestInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_COnquestInfo_Overlay_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_COnquestInfo_Overlay_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_COnquestInfo_Overlay_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActionCommand_AddCOnquestInfo_C::ExecuteUbergraph_BP_ActionCommand_AddCOnquestInfo(int32 EntryPoint, class UUI_COnquestInfo_Overlay_C* CallFunc_Create_ReturnValue, TArray<class UUI_COnquestInfo_Overlay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_COnquestInfo_Overlay_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCommand_AddCOnquestInfo_C", "ExecuteUbergraph_BP_ActionCommand_AddCOnquestInfo");

	Params::ABP_ActionCommand_AddCOnquestInfo_C_ExecuteUbergraph_BP_ActionCommand_AddCOnquestInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


