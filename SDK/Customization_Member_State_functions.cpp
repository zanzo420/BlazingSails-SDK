#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Customization_Member_State.Customization_Member_State_C
// (None)

class UClass* UCustomization_Member_State_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Customization_Member_State_C");

	return Clss;
}


// Customization_Member_State_C Customization_Member_State.Default__Customization_Member_State_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomization_Member_State_C* UCustomization_Member_State_C::GetDefaultObj()
{
	static class UCustomization_Member_State_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomization_Member_State_C*>(UCustomization_Member_State_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Customization_Member_State.Customization_Member_State_C.Get Ship Customization
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ShipTypes             Ship_Type                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ShipCustomisations      Output                                                           (Parm, OutParm, HasGetValueTypeHash)
// struct FST_ShipCustomisations      K2Node_MakeStruct_ST_ShipCustomisations                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void UCustomization_Member_State_C::Get_Ship_Customization(enum class E_ShipTypes Ship_Type, struct FST_ShipCustomisations* Output, const struct FST_ShipCustomisations& K2Node_MakeStruct_ST_ShipCustomisations, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FST_ShipCustomisations& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Customization_Member_State_C", "Get Ship Customization");

	Params::UCustomization_Member_State_C_Get_Ship_Customization_Params Parms{};

	Parms.Ship_Type = Ship_Type;
	Parms.K2Node_MakeStruct_ST_ShipCustomisations = K2Node_MakeStruct_ST_ShipCustomisations;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function Customization_Member_State.Customization_Member_State_C.Set Ship Customizations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class E_ShipTypes, struct FST_ShipCustomisations>Ship_Customizations                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<enum class E_ShipTypes>     CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ShipTypes             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ShipCustomisations      CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomization_Member_State_C::Set_Ship_Customizations(TMap<enum class E_ShipTypes, struct FST_ShipCustomisations> Ship_Customizations, TArray<enum class E_ShipTypes>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class E_ShipTypes CallFunc_Array_Get_Item, const struct FST_ShipCustomisations& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Customization_Member_State_C", "Set Ship Customizations");

	Params::UCustomization_Member_State_C_Set_Ship_Customizations_Params Parms{};

	Parms.Ship_Customizations = Ship_Customizations;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Customization_Member_State.Customization_Member_State_C.Set Ship Customization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ShipTypes             Ship_Type                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ShipCustomisations      Ship_Customization                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomization_Member_State_C::Set_Ship_Customization(enum class E_ShipTypes Ship_Type, const struct FST_ShipCustomisations& Ship_Customization, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Customization_Member_State_C", "Set Ship Customization");

	Params::UCustomization_Member_State_C_Set_Ship_Customization_Params Parms{};

	Parms.Ship_Type = Ship_Type;
	Parms.Ship_Customization = Ship_Customization;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


