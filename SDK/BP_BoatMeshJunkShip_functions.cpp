#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoatMeshJunkShip.BP_BoatMeshJunkShip_C
// (Actor)

class UClass* ABP_BoatMeshJunkShip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoatMeshJunkShip_C");

	return Clss;
}


// BP_BoatMeshJunkShip_C BP_BoatMeshJunkShip.Default__BP_BoatMeshJunkShip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoatMeshJunkShip_C* ABP_BoatMeshJunkShip_C::GetDefaultObj()
{
	static class ABP_BoatMeshJunkShip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoatMeshJunkShip_C*>(ABP_BoatMeshJunkShip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BoatMeshJunkShip.BP_BoatMeshJunkShip_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BoatMeshJunkShip_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshJunkShip_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatMeshJunkShip.BP_BoatMeshJunkShip_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoatMeshJunkShip_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshJunkShip_C", "ReceiveTick");

	Params::ABP_BoatMeshJunkShip_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BoatMeshJunkShip.BP_BoatMeshJunkShip_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BoatMeshJunkShip_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshJunkShip_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BoatMeshJunkShip.BP_BoatMeshJunkShip_C.ExecuteUbergraph_BP_BoatMeshJunkShip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_WaterPump_C*             K2Node_DynamicCast_AsBP_Water_Pump                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Teleport_C*              K2Node_DynamicCast_AsBP_Teleport                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_WaterPump_C*             K2Node_DynamicCast_AsBP_Water_Pump_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Teleport_C*              K2Node_DynamicCast_AsBP_Teleport_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Teleport_C*              K2Node_DynamicCast_AsBP_Teleport_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BoatMeshJunkShip_C::ExecuteUbergraph_BP_BoatMeshJunkShip(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class ABP_WaterPump_C* K2Node_DynamicCast_AsBP_Water_Pump, bool K2Node_DynamicCast_bSuccess, class ABP_Teleport_C* K2Node_DynamicCast_AsBP_Teleport, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class ABP_WaterPump_C* K2Node_DynamicCast_AsBP_Water_Pump_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_Teleport_C* K2Node_DynamicCast_AsBP_Teleport_1, bool K2Node_DynamicCast_bSuccess_3, class ABP_Teleport_C* K2Node_DynamicCast_AsBP_Teleport_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoatMeshJunkShip_C", "ExecuteUbergraph_BP_BoatMeshJunkShip");

	Params::ABP_BoatMeshJunkShip_C_ExecuteUbergraph_BP_BoatMeshJunkShip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsBP_Water_Pump = K2Node_DynamicCast_AsBP_Water_Pump;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Teleport = K2Node_DynamicCast_AsBP_Teleport;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Water_Pump_1 = K2Node_DynamicCast_AsBP_Water_Pump_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_Teleport_1 = K2Node_DynamicCast_AsBP_Teleport_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Teleport_2 = K2Node_DynamicCast_AsBP_Teleport_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


