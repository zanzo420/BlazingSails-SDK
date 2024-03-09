#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemSpawner.BP_ItemSpawner_C
// (Actor)

class UClass* ABP_ItemSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemSpawner_C");

	return Clss;
}


// BP_ItemSpawner_C BP_ItemSpawner.Default__BP_ItemSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemSpawner_C* ABP_ItemSpawner_C::GetDefaultObj()
{
	static class ABP_ItemSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemSpawner_C*>(ABP_ItemSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemSpawner.BP_ItemSpawner_C.SpawnItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              SpawnTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemToSpawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinAmount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxAmount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemSpawner_C::SpawnItem(const struct FTransform& SpawnTransform, float SpawnTime, class UClass* ItemToSpawn, int32 MinAmount, int32 MaxAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemSpawner_C", "SpawnItem");

	Params::ABP_ItemSpawner_C_SpawnItem_Params Parms{};

	Parms.SpawnTransform = SpawnTransform;
	Parms.SpawnTime = SpawnTime;
	Parms.ItemToSpawn = ItemToSpawn;
	Parms.MinAmount = MinAmount;
	Parms.MaxAmount = MaxAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemSpawner.BP_ItemSpawner_C.ExecuteUbergraph_BP_ItemSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_SpawnTransform                                (IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_SpawnTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ItemToSpawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MinAmount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxAmount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickupBase_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemSpawner_C::ExecuteUbergraph_BP_ItemSpawner(int32 EntryPoint, const struct FTransform& K2Node_CustomEvent_SpawnTransform, float K2Node_CustomEvent_SpawnTime, class UClass* K2Node_CustomEvent_ItemToSpawn, int32 K2Node_CustomEvent_MinAmount, int32 K2Node_CustomEvent_MaxAmount, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PickupBase_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemSpawner_C", "ExecuteUbergraph_BP_ItemSpawner");

	Params::ABP_ItemSpawner_C_ExecuteUbergraph_BP_ItemSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SpawnTransform = K2Node_CustomEvent_SpawnTransform;
	Parms.K2Node_CustomEvent_SpawnTime = K2Node_CustomEvent_SpawnTime;
	Parms.K2Node_CustomEvent_ItemToSpawn = K2Node_CustomEvent_ItemToSpawn;
	Parms.K2Node_CustomEvent_MinAmount = K2Node_CustomEvent_MinAmount;
	Parms.K2Node_CustomEvent_MaxAmount = K2Node_CustomEvent_MaxAmount;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


