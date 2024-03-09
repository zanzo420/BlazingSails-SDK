#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BR_Alpha_PlayerState.BR_Alpha_PlayerState_C
// (Actor)

class UClass* ABR_Alpha_PlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BR_Alpha_PlayerState_C");

	return Clss;
}


// BR_Alpha_PlayerState_C BR_Alpha_PlayerState.Default__BR_Alpha_PlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABR_Alpha_PlayerState_C* ABR_Alpha_PlayerState_C::GetDefaultObj()
{
	static class ABR_Alpha_PlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABR_Alpha_PlayerState_C*>(ABR_Alpha_PlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BR_Alpha_PlayerState.BR_Alpha_PlayerState_C.All_Set Voted Spawn Point
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cluster_ID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABR_Alpha_PlayerState_C::All_Set_Voted_Spawn_Point(int32 Cluster_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BR_Alpha_PlayerState_C", "All_Set Voted Spawn Point");

	Params::ABR_Alpha_PlayerState_C_All_Set_Voted_Spawn_Point_Params Parms{};

	Parms.Cluster_ID = Cluster_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BR_Alpha_PlayerState.BR_Alpha_PlayerState_C.Set Voted Spawn Point
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Spawn_Point_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABR_Alpha_PlayerState_C::Set_Voted_Spawn_Point(int32 Spawn_Point_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BR_Alpha_PlayerState_C", "Set Voted Spawn Point");

	Params::ABR_Alpha_PlayerState_C_Set_Voted_Spawn_Point_Params Parms{};

	Parms.Spawn_Point_ID = Spawn_Point_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BR_Alpha_PlayerState.BR_Alpha_PlayerState_C.Set Voted Ship Type
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ShipTypes             Voted_Ship                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABR_Alpha_PlayerState_C::Set_Voted_Ship_Type(enum class E_ShipTypes Voted_Ship)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BR_Alpha_PlayerState_C", "Set Voted Ship Type");

	Params::ABR_Alpha_PlayerState_C_Set_Voted_Ship_Type_Params Parms{};

	Parms.Voted_Ship = Voted_Ship;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BR_Alpha_PlayerState.BR_Alpha_PlayerState_C.All_Set Voted Ship Type
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ShipTypes             Voted_Ship_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABR_Alpha_PlayerState_C::All_Set_Voted_Ship_Type(enum class E_ShipTypes Voted_Ship_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BR_Alpha_PlayerState_C", "All_Set Voted Ship Type");

	Params::ABR_Alpha_PlayerState_C_All_Set_Voted_Ship_Type_Params Parms{};

	Parms.Voted_Ship_Type = Voted_Ship_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BR_Alpha_PlayerState.BR_Alpha_PlayerState_C.ExecuteUbergraph_BR_Alpha_PlayerState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cluster_ID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Spawn_Point_ID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ShipTypes             K2Node_CustomEvent_Voted_Ship                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ShipTypes             K2Node_CustomEvent_Voted_Ship_Type                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_Ship_Sign_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_BoatSpawnPoint_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUI_BoatSpawnPoint_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Ship_Sign_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_PlayerState_C*        CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerState_C*        CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Crews_Is_Same_Team_And_Crew                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Crews_Is_Same_Team_And_Crew_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABR_Alpha_PlayerState_C::ExecuteUbergraph_BR_Alpha_PlayerState(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 K2Node_CustomEvent_Cluster_ID, int32 K2Node_CustomEvent_Spawn_Point_ID, enum class E_ShipTypes K2Node_CustomEvent_Voted_Ship, enum class E_ShipTypes K2Node_CustomEvent_Voted_Ship_Type, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<class UUI_Ship_Sign_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_BoatSpawnPoint_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUI_BoatSpawnPoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UUI_Ship_Sign_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State_1, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BR_Alpha_PlayerState_C", "ExecuteUbergraph_BR_Alpha_PlayerState");

	Params::ABR_Alpha_PlayerState_C_ExecuteUbergraph_BR_Alpha_PlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Cluster_ID = K2Node_CustomEvent_Cluster_ID;
	Parms.K2Node_CustomEvent_Spawn_Point_ID = K2Node_CustomEvent_Spawn_Point_ID;
	Parms.K2Node_CustomEvent_Voted_Ship = K2Node_CustomEvent_Voted_Ship;
	Parms.K2Node_CustomEvent_Voted_Ship_Type = K2Node_CustomEvent_Voted_Ship_Type;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State = CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State;
	Parms.CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State_1 = CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State_1;
	Parms.CallFunc_Compare_Crews_Is_Same_Team_And_Crew = CallFunc_Compare_Crews_Is_Same_Team_And_Crew;
	Parms.CallFunc_Compare_Crews_Is_Same_Team_And_Crew_1 = CallFunc_Compare_Crews_Is_Same_Team_And_Crew_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


