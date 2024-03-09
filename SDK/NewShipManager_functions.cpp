#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewShipManager.NewShipManager_C
// (Actor)

class UClass* ANewShipManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewShipManager_C");

	return Clss;
}


// NewShipManager_C NewShipManager.Default__NewShipManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewShipManager_C* ANewShipManager_C::GetDefaultObj()
{
	static class ANewShipManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewShipManager_C*>(ANewShipManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NewShipManager.NewShipManager_C.On Ship Has Sunk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANewShipManager_C::On_Ship_Has_Sunk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "On Ship Has Sunk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewShipManager.NewShipManager_C.Bind to Ship Events
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*          Ship                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void ANewShipManager_C::Bind_to_Ship_Events(class ABP_BoatMeshBase_C* Ship, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "Bind to Ship Events");

	Params::ANewShipManager_C_Bind_to_Ship_Events_Params Parms{};

	Parms.Ship = Ship;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewShipManager.NewShipManager_C.Destroy Ship
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANewShipManager_C::Destroy_Ship()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "Destroy Ship");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewShipManager.NewShipManager_C.GetShipClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_ShipTypes             ShipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ShipClass                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANewShipManager_C::GetShipClass(enum class E_ShipTypes ShipType, class UClass** ShipClass, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "GetShipClass");

	Params::ANewShipManager_C_GetShipClass_Params Parms{};

	Parms.ShipType = ShipType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ShipClass != nullptr)
		*ShipClass = Parms.ShipClass;

}


// Function NewShipManager.NewShipManager_C.Spawn Ship
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatSpawn_C*             Spawn_Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewShipManager_C::Spawn_Ship(class ABP_BoatSpawn_C* Spawn_Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "Spawn Ship");

	Params::ANewShipManager_C_Spawn_Ship_Params Parms{};

	Parms.Spawn_Point = Spawn_Point;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewShipManager.NewShipManager_C.Change Ship Type
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ShipTypes             New_Ship_Type                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewShipManager_C::Change_Ship_Type(enum class E_ShipTypes New_Ship_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "Change Ship Type");

	Params::ANewShipManager_C_Change_Ship_Type_Params Parms{};

	Parms.New_Ship_Type = New_Ship_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewShipManager.NewShipManager_C.ExecuteUbergraph_NewShipManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatSpawn_C*             K2Node_CustomEvent_Spawn_Point                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ShipTypes             K2Node_CustomEvent_New_Ship_Type                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetShipClass_ShipClass                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Output                           (HasGetValueTypeHash)

void ANewShipManager_C::ExecuteUbergraph_NewShipManager(int32 EntryPoint, class ABP_BoatSpawn_C* K2Node_CustomEvent_Spawn_Point, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class E_ShipTypes K2Node_CustomEvent_New_Ship_Type, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UClass* CallFunc_GetShipClass_ShipClass, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_BoatMeshBase_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "ExecuteUbergraph_NewShipManager");

	Params::ANewShipManager_C_ExecuteUbergraph_NewShipManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Spawn_Point = K2Node_CustomEvent_Spawn_Point;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_New_Ship_Type = K2Node_CustomEvent_New_Ship_Type;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetShipClass_ShipClass = CallFunc_GetShipClass_ShipClass;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Get_Ship_Customization_Output = CallFunc_Get_Ship_Customization_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewShipManager.NewShipManager_C.On Ship Defeated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANewShipManager_C*           Ship                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewShipManager_C::On_Ship_Defeated__DelegateSignature(class ANewShipManager_C* Ship)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "On Ship Defeated__DelegateSignature");

	Params::ANewShipManager_C_On_Ship_Defeated__DelegateSignature_Params Parms{};

	Parms.Ship = Ship;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewShipManager.NewShipManager_C.On Crew Updated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANewShipManager_C::On_Crew_Updated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "On Crew Updated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewShipManager.NewShipManager_C.On Ship Despawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANewShipManager_C::On_Ship_Despawn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "On Ship Despawn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewShipManager.NewShipManager_C.On Ship Change Type__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ShipTypes             New_Ship_Type                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewShipManager_C::On_Ship_Change_Type__DelegateSignature(enum class E_ShipTypes New_Ship_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "On Ship Change Type__DelegateSignature");

	Params::ANewShipManager_C_On_Ship_Change_Type__DelegateSignature_Params Parms{};

	Parms.New_Ship_Type = New_Ship_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewShipManager.NewShipManager_C.On Ship Spawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANewShipManager_C::On_Ship_Spawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "On Ship Spawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewShipManager.NewShipManager_C.On Ship Sunk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Ship_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewShipManager_C::On_Ship_Sunk__DelegateSignature(int32 Ship_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewShipManager_C", "On Ship Sunk__DelegateSignature");

	Params::ANewShipManager_C_On_Ship_Sunk__DelegateSignature_Params Parms{};

	Parms.Ship_ID = Ship_ID;

	UObject::ProcessEvent(Func, &Parms);

}

}


