#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RespawnTotem.BP_RespawnTotem_C
// (Actor)

class UClass* ABP_RespawnTotem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RespawnTotem_C");

	return Clss;
}


// BP_RespawnTotem_C BP_RespawnTotem.Default__BP_RespawnTotem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RespawnTotem_C* ABP_RespawnTotem_C::GetDefaultObj()
{
	static class ABP_RespawnTotem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RespawnTotem_C*>(ABP_RespawnTotem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RespawnTotem.BP_RespawnTotem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RespawnTotem_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RespawnTotem_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RespawnTotem.BP_RespawnTotem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RespawnTotem_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RespawnTotem_C", "ReceiveTick");

	Params::ABP_RespawnTotem_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RespawnTotem.BP_RespawnTotem_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RespawnTotem_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RespawnTotem_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RespawnTotem.BP_RespawnTotem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_RespawnTotem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RespawnTotem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RespawnTotem.BP_RespawnTotem_C.Teleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RespawnTotem_C::Teleport(class ABP_Character_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RespawnTotem_C", "Teleport");

	Params::ABP_RespawnTotem_C_Teleport_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RespawnTotem.BP_RespawnTotem_C.ExecuteUbergraph_BP_RespawnTotem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_6                             (IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_AddComponent_ReturnValue_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_AddComponent_ReturnValue_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_7                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_8                             (IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_AddComponent_ReturnValue_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_9                             (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_10                            (IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_AddComponent_ReturnValue_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue_1                      (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_12                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult_1                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue_2                      (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_13                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult_2                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_11                            (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_14                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue_3                      (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_15                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_12                            (IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_16                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult_3                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RespawnTotem_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RespawnTotem_C::ExecuteUbergraph_BP_RespawnTotem(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_3, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, class UAudioComponent* CallFunc_AddComponent_ReturnValue_5, class UAudioComponent* CallFunc_AddComponent_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue_8, class UAudioComponent* CallFunc_AddComponent_ReturnValue_7, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_8, const struct FTransform& CallFunc_MakeTransform_ReturnValue_9, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_9, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_10, class UAudioComponent* CallFunc_AddComponent_ReturnValue_10, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_11, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue_7, bool CallFunc_SetStaticMesh_ReturnValue_8, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_12, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_1, bool CallFunc_SetStaticMesh_ReturnValue_9, bool CallFunc_SetStaticMesh_ReturnValue_10, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_13, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_2, bool CallFunc_SetStaticMesh_ReturnValue_11, bool CallFunc_SetStaticMesh_ReturnValue_12, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_11, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_14, bool CallFunc_SetStaticMesh_ReturnValue_13, bool CallFunc_SetStaticMesh_ReturnValue_14, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_3, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_15, const struct FTransform& CallFunc_MakeTransform_ReturnValue_12, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_16, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_3, bool CallFunc_SetStaticMesh_ReturnValue_15, bool CallFunc_SetStaticMesh_ReturnValue_16, class ABP_Character_C* K2Node_CustomEvent_Character, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_RespawnTotem_C* CallFunc_Array_Get_Item, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RespawnTotem_C", "ExecuteUbergraph_BP_RespawnTotem");

	Params::ABP_RespawnTotem_C_ExecuteUbergraph_BP_RespawnTotem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_AddComponent_ReturnValue_2 = CallFunc_AddComponent_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_AddComponent_ReturnValue_3 = CallFunc_AddComponent_ReturnValue_3;
	Parms.CallFunc_AddComponent_ReturnValue_4 = CallFunc_AddComponent_ReturnValue_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_6 = CallFunc_MakeTransform_ReturnValue_6;
	Parms.CallFunc_AddComponent_ReturnValue_5 = CallFunc_AddComponent_ReturnValue_5;
	Parms.CallFunc_AddComponent_ReturnValue_6 = CallFunc_AddComponent_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_7 = CallFunc_MakeTransform_ReturnValue_7;
	Parms.CallFunc_MakeTransform_ReturnValue_8 = CallFunc_MakeTransform_ReturnValue_8;
	Parms.CallFunc_AddComponent_ReturnValue_7 = CallFunc_AddComponent_ReturnValue_7;
	Parms.CallFunc_AddComponent_ReturnValue_8 = CallFunc_AddComponent_ReturnValue_8;
	Parms.CallFunc_MakeTransform_ReturnValue_9 = CallFunc_MakeTransform_ReturnValue_9;
	Parms.CallFunc_AddComponent_ReturnValue_9 = CallFunc_AddComponent_ReturnValue_9;
	Parms.CallFunc_SetStaticMesh_ReturnValue_5 = CallFunc_SetStaticMesh_ReturnValue_5;
	Parms.CallFunc_SetStaticMesh_ReturnValue_6 = CallFunc_SetStaticMesh_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_10 = CallFunc_MakeTransform_ReturnValue_10;
	Parms.CallFunc_AddComponent_ReturnValue_10 = CallFunc_AddComponent_ReturnValue_10;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_11 = CallFunc_AddComponent_ReturnValue_11;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_SetStaticMesh_ReturnValue_7 = CallFunc_SetStaticMesh_ReturnValue_7;
	Parms.CallFunc_SetStaticMesh_ReturnValue_8 = CallFunc_SetStaticMesh_ReturnValue_8;
	Parms.CallFunc_GetRelativeTransform_ReturnValue_1 = CallFunc_GetRelativeTransform_ReturnValue_1;
	Parms.CallFunc_AddComponent_ReturnValue_12 = CallFunc_AddComponent_ReturnValue_12;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult_1 = CallFunc_K2_AddLocalOffset_SweepHitResult_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_9 = CallFunc_SetStaticMesh_ReturnValue_9;
	Parms.CallFunc_SetStaticMesh_ReturnValue_10 = CallFunc_SetStaticMesh_ReturnValue_10;
	Parms.CallFunc_GetRelativeTransform_ReturnValue_2 = CallFunc_GetRelativeTransform_ReturnValue_2;
	Parms.CallFunc_AddComponent_ReturnValue_13 = CallFunc_AddComponent_ReturnValue_13;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult_2 = CallFunc_K2_AddLocalOffset_SweepHitResult_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_11 = CallFunc_SetStaticMesh_ReturnValue_11;
	Parms.CallFunc_SetStaticMesh_ReturnValue_12 = CallFunc_SetStaticMesh_ReturnValue_12;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_MakeTransform_ReturnValue_11 = CallFunc_MakeTransform_ReturnValue_11;
	Parms.CallFunc_AddComponent_ReturnValue_14 = CallFunc_AddComponent_ReturnValue_14;
	Parms.CallFunc_SetStaticMesh_ReturnValue_13 = CallFunc_SetStaticMesh_ReturnValue_13;
	Parms.CallFunc_SetStaticMesh_ReturnValue_14 = CallFunc_SetStaticMesh_ReturnValue_14;
	Parms.CallFunc_GetRelativeTransform_ReturnValue_3 = CallFunc_GetRelativeTransform_ReturnValue_3;
	Parms.CallFunc_AddComponent_ReturnValue_15 = CallFunc_AddComponent_ReturnValue_15;
	Parms.CallFunc_MakeTransform_ReturnValue_12 = CallFunc_MakeTransform_ReturnValue_12;
	Parms.CallFunc_AddComponent_ReturnValue_16 = CallFunc_AddComponent_ReturnValue_16;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult_3 = CallFunc_K2_AddLocalOffset_SweepHitResult_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_15 = CallFunc_SetStaticMesh_ReturnValue_15;
	Parms.CallFunc_SetStaticMesh_ReturnValue_16 = CallFunc_SetStaticMesh_ReturnValue_16;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


