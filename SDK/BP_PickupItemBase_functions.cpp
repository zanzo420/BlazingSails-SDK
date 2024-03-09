#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupItemBase.BP_PickupItemBase_C
// (Actor)

class UClass* ABP_PickupItemBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupItemBase_C");

	return Clss;
}


// BP_PickupItemBase_C BP_PickupItemBase.Default__BP_PickupItemBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupItemBase_C* ABP_PickupItemBase_C::GetDefaultObj()
{
	static class ABP_PickupItemBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupItemBase_C*>(ABP_PickupItemBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupItemBase.BP_PickupItemBase_C.TakePickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupItemBase_C::TakePickup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupItemBase_C", "TakePickup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupItemBase.BP_PickupItemBase_C.TakePickupLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupItemBase_C::TakePickupLocal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupItemBase_C", "TakePickupLocal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupItemBase.BP_PickupItemBase_C.ExecuteUbergraph_BP_PickupItemBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfRoomForItems_hasSpace                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckIfRoomForItems_amountOfRoom                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CheckIfRoomForItems_totalWeight                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_InventoryArray          K2Node_MakeStruct_ST_InventoryArray                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfPlayerHasRoom_EnoughRoom                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckIfPlayerHasRoom_AmountOfRoom                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PickupItemBase_C::ExecuteUbergraph_BP_PickupItemBase(int32 EntryPoint, bool CallFunc_CheckIfRoomForItems_hasSpace, int32 CallFunc_CheckIfRoomForItems_amountOfRoom, int32 CallFunc_CheckIfRoomForItems_totalWeight, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray, bool CallFunc_CheckIfPlayerHasRoom_EnoughRoom, int32 CallFunc_CheckIfPlayerHasRoom_AmountOfRoom, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupItemBase_C", "ExecuteUbergraph_BP_PickupItemBase");

	Params::ABP_PickupItemBase_C_ExecuteUbergraph_BP_PickupItemBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CheckIfRoomForItems_hasSpace = CallFunc_CheckIfRoomForItems_hasSpace;
	Parms.CallFunc_CheckIfRoomForItems_amountOfRoom = CallFunc_CheckIfRoomForItems_amountOfRoom;
	Parms.CallFunc_CheckIfRoomForItems_totalWeight = CallFunc_CheckIfRoomForItems_totalWeight;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_ST_InventoryArray = K2Node_MakeStruct_ST_InventoryArray;
	Parms.CallFunc_CheckIfPlayerHasRoom_EnoughRoom = CallFunc_CheckIfPlayerHasRoom_EnoughRoom;
	Parms.CallFunc_CheckIfPlayerHasRoom_AmountOfRoom = CallFunc_CheckIfPlayerHasRoom_AmountOfRoom;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


