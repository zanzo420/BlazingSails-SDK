#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoatMeshDuoShip.BP_BoatMeshDuoShip_C
// (Actor)

class UClass* ABP_BoatMeshDuoShip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoatMeshDuoShip_C");

	return Clss;
}


// BP_BoatMeshDuoShip_C BP_BoatMeshDuoShip.Default__BP_BoatMeshDuoShip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoatMeshDuoShip_C* ABP_BoatMeshDuoShip_C::GetDefaultObj()
{
	static class ABP_BoatMeshDuoShip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoatMeshDuoShip_C*>(ABP_BoatMeshDuoShip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BoatMeshDuoShip.BP_BoatMeshDuoShip_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatMeshDuoShip_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshDuoShip_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatMeshDuoShip.BP_BoatMeshDuoShip_C.RopeColorRepEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatMeshDuoShip_C::RopeColorRepEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshDuoShip_C", "RopeColorRepEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatMeshDuoShip.BP_BoatMeshDuoShip_C.LaddersLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatMeshDuoShip_C::LaddersLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshDuoShip_C", "LaddersLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatMeshDuoShip.BP_BoatMeshDuoShip_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BoatMeshDuoShip_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshDuoShip_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatMeshDuoShip.BP_BoatMeshDuoShip_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoatMeshDuoShip_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshDuoShip_C", "ReceiveTick");

	Params::ABP_BoatMeshDuoShip_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BoatMeshDuoShip.BP_BoatMeshDuoShip_C.ExecuteUbergraph_BP_BoatMeshDuoShip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Teleport_C*              K2Node_DynamicCast_AsBP_Teleport                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Teleport_C*              K2Node_DynamicCast_AsBP_Teleport_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_WaterPump_C*             K2Node_DynamicCast_AsBP_Water_Pump                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_WaterPump_C*             K2Node_DynamicCast_AsBP_Water_Pump_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoatMeshDuoShip_C::ExecuteUbergraph_BP_BoatMeshDuoShip(int32 EntryPoint, class ABP_Teleport_C* K2Node_DynamicCast_AsBP_Teleport, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ABP_Teleport_C* K2Node_DynamicCast_AsBP_Teleport_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class ABP_WaterPump_C* K2Node_DynamicCast_AsBP_Water_Pump, bool K2Node_DynamicCast_bSuccess_2, class ABP_WaterPump_C* K2Node_DynamicCast_AsBP_Water_Pump_1, bool K2Node_DynamicCast_bSuccess_3, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshDuoShip_C", "ExecuteUbergraph_BP_BoatMeshDuoShip");

	Params::ABP_BoatMeshDuoShip_C_ExecuteUbergraph_BP_BoatMeshDuoShip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Teleport = K2Node_DynamicCast_AsBP_Teleport;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Teleport_1 = K2Node_DynamicCast_AsBP_Teleport_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Water_Pump = K2Node_DynamicCast_AsBP_Water_Pump;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_Water_Pump_1 = K2Node_DynamicCast_AsBP_Water_Pump_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


