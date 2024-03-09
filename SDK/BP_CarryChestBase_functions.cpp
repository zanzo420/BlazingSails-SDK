#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CarryChestBase.BP_CarryChestBase_C
// (Actor)

class UClass* ABP_CarryChestBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CarryChestBase_C");

	return Clss;
}


// BP_CarryChestBase_C BP_CarryChestBase.Default__BP_CarryChestBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CarryChestBase_C* ABP_CarryChestBase_C::GetDefaultObj()
{
	static class ABP_CarryChestBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CarryChestBase_C*>(ABP_CarryChestBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CarryChestBase.BP_CarryChestBase_C.OnRep_StaticMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CarryChestBase_C::OnRep_StaticMesh(bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CarryChestBase_C", "OnRep_StaticMesh");

	Params::ABP_CarryChestBase_C_OnRep_StaticMesh_Params Parms{};

	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CarryChestBase.BP_CarryChestBase_C.OnRep_ChestGoldAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CarryChestBase_C::OnRep_ChestGoldAmount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CarryChestBase_C", "OnRep_ChestGoldAmount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CarryChestBase.BP_CarryChestBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CarryChestBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CarryChestBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CarryChestBase.BP_CarryChestBase_C.GoldAmountUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CarryChestBase_C::GoldAmountUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CarryChestBase_C", "GoldAmountUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CarryChestBase.BP_CarryChestBase_C.ExecuteUbergraph_BP_CarryChestBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CarryChestBase_C::ExecuteUbergraph_BP_CarryChestBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CarryChestBase_C", "ExecuteUbergraph_BP_CarryChestBase");

	Params::ABP_CarryChestBase_C_ExecuteUbergraph_BP_CarryChestBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


