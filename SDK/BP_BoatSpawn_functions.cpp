#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoatSpawn.BP_BoatSpawn_C
// (Actor)

class UClass* ABP_BoatSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoatSpawn_C");

	return Clss;
}


// BP_BoatSpawn_C BP_BoatSpawn.Default__BP_BoatSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoatSpawn_C* ABP_BoatSpawn_C::GetDefaultObj()
{
	static class ABP_BoatSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoatSpawn_C*>(ABP_BoatSpawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.GetRandomClusterSpawnLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatSpawn_C*             BoatSpawnPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BoatSpawn_C*>     SpawnPoints                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// class ABP_BoatSpawn_C*             SpawnPoint                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatSpawn_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BoatSpawn_C*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_BoatSpawn_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BoatSpawn_C::GetRandomClusterSpawnLocation(class ABP_BoatSpawn_C** BoatSpawnPoint, const TArray<class ABP_BoatSpawn_C*>& SpawnPoints, class ABP_BoatSpawn_C* SpawnPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item, TArray<class ABP_BoatSpawn_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "GetRandomClusterSpawnLocation");

	Params::ABP_BoatSpawn_C_GetRandomClusterSpawnLocation_Params Parms{};

	Parms.SpawnPoints = SpawnPoints;
	Parms.SpawnPoint = SpawnPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BoatSpawnPoint != nullptr)
		*BoatSpawnPoint = Parms.BoatSpawnPoint;

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_Disabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatSpawn_C::OnRep_Disabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "OnRep_Disabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_BoatSpawnPoint_C*        K2Node_DynamicCast_AsUI_Boat_Spawn_Point                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Team_ID_Team_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BoatSpawn_C::OnRep_Selected(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_BoatSpawnPoint_C* K2Node_DynamicCast_AsUI_Boat_Spawn_Point, bool K2Node_DynamicCast_bSuccess, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Get_Team_ID_Team_ID, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "OnRep_Selected");

	Params::ABP_BoatSpawn_C_OnRep_Selected_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Boat_Spawn_Point = K2Node_DynamicCast_AsUI_Boat_Spawn_Point;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_Team_ID_Team_ID = CallFunc_Get_Team_ID_Team_ID;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_TeamPlayerColors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatSpawn_C::OnRep_TeamPlayerColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "OnRep_TeamPlayerColors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_BoatSpawnPoint_C*        K2Node_DynamicCast_AsUI_Boat_Spawn_Point                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Team_ID_Team_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BoatSpawn_C::UpdateButton(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class UUI_BoatSpawnPoint_C* K2Node_DynamicCast_AsUI_Boat_Spawn_Point, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Get_Team_ID_Team_ID, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "UpdateButton");

	Params::ABP_BoatSpawn_C_UpdateButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUI_Boat_Spawn_Point = K2Node_DynamicCast_AsUI_Boat_Spawn_Point;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_Team_ID_Team_ID = CallFunc_Get_Team_ID_Team_ID;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_TeamUsingThisSpawnPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatSpawn_C::OnRep_TeamUsingThisSpawnPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "OnRep_TeamUsingThisSpawnPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_InUse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatSpawn_C::OnRep_InUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "OnRep_InUse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatSpawn_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BoatSpawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.RemovePoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatSpawn_C::RemovePoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "RemovePoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.RemoveKnife
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Player_ID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BoatSpawn_C::RemoveKnife(const struct FUniqueNetIdRepl& Player_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "RemoveKnife");

	Params::ABP_BoatSpawn_C_RemoveKnife_Params Parms{};

	Parms.Player_ID = Player_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.Add Knife
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            Player_ID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_PlayerState_C*           Player_State                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoatSpawn_C::Add_Knife(const struct FUniqueNetIdRepl& Player_ID, class ABP_PlayerState_C* Player_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "Add Knife");

	Params::ABP_BoatSpawn_C_Add_Knife_Params Parms{};

	Parms.Player_ID = Player_ID;
	Parms.Player_State = Player_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BoatSpawn.BP_BoatSpawn_C.ExecuteUbergraph_BP_BoatSpawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Player_ID_1                                   (HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_BoatSpawnPoint_C*        K2Node_DynamicCast_AsUI_Boat_Spawn_Point                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_Player_ID                                     (HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_CustomEvent_Player_State                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoatSpawn_C::ExecuteUbergraph_BP_BoatSpawn(int32 EntryPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, bool CallFunc_HasAuthority_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Player_ID_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_BoatSpawnPoint_C* K2Node_DynamicCast_AsUI_Boat_Spawn_Point, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Player_ID, class ABP_PlayerState_C* K2Node_CustomEvent_Player_State, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatSpawn_C", "ExecuteUbergraph_BP_BoatSpawn");

	Params::ABP_BoatSpawn_C_ExecuteUbergraph_BP_BoatSpawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_Player_ID_1 = K2Node_CustomEvent_Player_ID_1;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Boat_Spawn_Point = K2Node_DynamicCast_AsUI_Boat_Spawn_Point;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CustomEvent_Player_ID = K2Node_CustomEvent_Player_ID;
	Parms.K2Node_CustomEvent_Player_State = K2Node_CustomEvent_Player_State;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


