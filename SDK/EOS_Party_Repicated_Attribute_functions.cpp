#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C
// (None)

class UClass* UEOS_Party_Repicated_Attribute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_Party_Repicated_Attribute_C");

	return Clss;
}


// EOS_Party_Repicated_Attribute_C EOS_Party_Repicated_Attribute.Default__EOS_Party_Repicated_Attribute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEOS_Party_Repicated_Attribute_C* UEOS_Party_Repicated_Attribute_C::GetDefaultObj()
{
	static class UEOS_Party_Repicated_Attribute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOS_Party_Repicated_Attribute_C*>(UEOS_Party_Repicated_Attribute_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.Send Data
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Is_Party_Leader_IsLeader                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP                                  (None)

void UEOS_Party_Repicated_Attribute_C::Send_Data(bool CallFunc_Is_Party_Leader_IsLeader, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "Send Data");

	Params::UEOS_Party_Repicated_Attribute_C_Send_Data_Params Parms{};

	Parms.CallFunc_Is_Party_Leader_IsLeader = CallFunc_Is_Party_Leader_IsLeader;
	Parms.K2Node_MakeStruct_VariantDataBP = K2Node_MakeStruct_VariantDataBP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.Set Data Internal
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              As_Int                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      As_String                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              As_Float                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               As_Bool                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NewLocalVar_3                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewLocalVar_2                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Data_Int                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Data_string                                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Data_float                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Data_bool                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_Party_Repicated_Attribute_C::Set_Data_Internal(int32 As_Int, const class FString& As_String, float As_Float, bool As_Bool, bool NewLocalVar_3, float NewLocalVar_2, const class FString& NewLocalVar_1, int32 NewLocalVar_0, int32 CallFunc_Get_Data_Int, const class FString& CallFunc_Get_Data_string, float CallFunc_Get_Data_float, bool CallFunc_Get_Data_bool, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Is_In_Party_In_Party_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "Set Data Internal");

	Params::UEOS_Party_Repicated_Attribute_C_Set_Data_Internal_Params Parms{};

	Parms.As_Int = As_Int;
	Parms.As_String = As_String;
	Parms.As_Float = As_Float;
	Parms.As_Bool = As_Bool;
	Parms.NewLocalVar_3 = NewLocalVar_3;
	Parms.NewLocalVar_2 = NewLocalVar_2;
	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_Get_Data_Int = CallFunc_Get_Data_Int;
	Parms.CallFunc_Get_Data_string = CallFunc_Get_Data_string;
	Parms.CallFunc_Get_Data_float = CallFunc_Get_Data_float;
	Parms.CallFunc_Get_Data_bool = CallFunc_Get_Data_bool;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.Get Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// float                              Float                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Bool                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_Party_Repicated_Attribute_C::Get_Data(int32* Int, class FString* String, float* Float, bool* Bool, bool CallFunc_Is_In_Party_In_Party_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "Get Data");

	Params::UEOS_Party_Repicated_Attribute_C_Get_Data_Params Parms{};

	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;

	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;

	if (String != nullptr)
		*String = std::move(Parms.String);

	if (Float != nullptr)
		*Float = Parms.Float;

	if (Bool != nullptr)
		*Bool = Parms.Bool;

}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.Set Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              As_Int                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      As_String                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              As_Float                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               As_Bool                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Party_Leader_IsLeader                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_In_Party_In_Party_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_Party_Repicated_Attribute_C::Set_Data(int32 As_Int, const class FString& As_String, float As_Float, bool As_Bool, bool CallFunc_Is_Party_Leader_IsLeader, bool CallFunc_Is_In_Party_In_Party_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "Set Data");

	Params::UEOS_Party_Repicated_Attribute_C_Set_Data_Params Parms{};

	Parms.As_Int = As_Int;
	Parms.As_String = As_String;
	Parms.As_Float = As_Float;
	Parms.As_Bool = As_Bool;
	Parms.CallFunc_Is_Party_Leader_IsLeader = CallFunc_Is_Party_Leader_IsLeader;
	Parms.CallFunc_Is_In_Party_In_Party_ = CallFunc_Is_In_Party_In_Party_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.Initialize Party Attribute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_Party_Repicated_Attribute_C::Initialize_Party_Attribute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "Initialize Party Attribute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.Party Data Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReadablePartyData*          Party_Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_Party_Repicated_Attribute_C::Party_Data_Received(class UReadablePartyData* Party_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "Party Data Received");

	Params::UEOS_Party_Repicated_Attribute_C_Party_Data_Received_Params Parms{};

	Parms.Party_Data = Party_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.Switch To Non Party
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_Party_Repicated_Attribute_C::Switch_To_Non_Party(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "Switch To Non Party");

	Params::UEOS_Party_Repicated_Attribute_C_Switch_To_Non_Party_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.Force Send Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_Party_Repicated_Attribute_C::Force_Send_Data(bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "Force Send Data");

	Params::UEOS_Party_Repicated_Attribute_C_Force_Send_Data_Params Parms{};

	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.ExecuteUbergraph_EOS_Party_Repicated_Attribute
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadablePartyData*          K2Node_CustomEvent_Party_Data                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttribute_OutFound                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue                               (None)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_Party_Repicated_Attribute_C::ExecuteUbergraph_EOS_Party_Repicated_Attribute(int32 EntryPoint, bool K2Node_CustomEvent_Success, bool K2Node_CustomEvent_Successful, bool K2Node_SwitchEnum_CmpSuccess, class UReadablePartyData* K2Node_CustomEvent_Party_Data, bool CallFunc_GetAttribute_OutFound, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "ExecuteUbergraph_EOS_Party_Repicated_Attribute");

	Params::UEOS_Party_Repicated_Attribute_C_ExecuteUbergraph_EOS_Party_Repicated_Attribute_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Successful = K2Node_CustomEvent_Successful;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Party_Data = K2Node_CustomEvent_Party_Data;
	Parms.CallFunc_GetAttribute_OutFound = CallFunc_GetAttribute_OutFound;
	Parms.CallFunc_GetAttribute_OutAttrValue = CallFunc_GetAttribute_OutAttrValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Party_Repicated_Attribute.EOS_Party_Repicated_Attribute_C.Values Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_Party_Repicated_Attribute_C::Values_Changed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Party_Repicated_Attribute_C", "Values Changed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


