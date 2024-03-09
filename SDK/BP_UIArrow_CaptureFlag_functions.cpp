#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIArrow_CaptureFlag.BP_UIArrow_CaptureFlag_C
// (Actor)

class UClass* ABP_UIArrow_CaptureFlag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIArrow_CaptureFlag_C");

	return Clss;
}


// BP_UIArrow_CaptureFlag_C BP_UIArrow_CaptureFlag.Default__BP_UIArrow_CaptureFlag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_UIArrow_CaptureFlag_C* ABP_UIArrow_CaptureFlag_C::GetDefaultObj()
{
	static class ABP_UIArrow_CaptureFlag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_UIArrow_CaptureFlag_C*>(ABP_UIArrow_CaptureFlag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UIArrow_CaptureFlag.BP_UIArrow_CaptureFlag_C.ShouldShow3D
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldShow3D                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShow3D_ShouldShow3D                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UIArrow_CaptureFlag_C::ShouldShow3D(bool* ShouldShow3D, bool CallFunc_ShouldShow3D_ShouldShow3D)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIArrow_CaptureFlag_C", "ShouldShow3D");

	Params::ABP_UIArrow_CaptureFlag_C_ShouldShow3D_Params Parms{};

	Parms.CallFunc_ShouldShow3D_ShouldShow3D = CallFunc_ShouldShow3D_ShouldShow3D;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow3D != nullptr)
		*ShouldShow3D = Parms.ShouldShow3D;

}


// Function BP_UIArrow_CaptureFlag.BP_UIArrow_CaptureFlag_C.ShouldShow
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldShow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UIArrow_CaptureFlag_C::ShouldShow(bool* ShouldShow, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIArrow_CaptureFlag_C", "ShouldShow");

	Params::ABP_UIArrow_CaptureFlag_C_ShouldShow_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;

}


// Function BP_UIArrow_CaptureFlag.BP_UIArrow_CaptureFlag_C.InitializeWidgetValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UIArrow_CaptureFlag_C::InitializeWidgetValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIArrow_CaptureFlag_C", "InitializeWidgetValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIArrow_CaptureFlag.BP_UIArrow_CaptureFlag_C.Adjust3DWidgetAdvanced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UIArrow_CaptureFlag_C::Adjust3DWidgetAdvanced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIArrow_CaptureFlag_C", "Adjust3DWidgetAdvanced");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIArrow_CaptureFlag.BP_UIArrow_CaptureFlag_C.Adjust2DWidgetAdvanced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UIArrow_CaptureFlag_C::Adjust2DWidgetAdvanced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIArrow_CaptureFlag_C", "Adjust2DWidgetAdvanced");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIArrow_CaptureFlag.BP_UIArrow_CaptureFlag_C.Set Flag Reference
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ConquestFlag_C*          Flag_Ref                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UIArrow_CaptureFlag_C::Set_Flag_Reference(class ABP_ConquestFlag_C* Flag_Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIArrow_CaptureFlag_C", "Set Flag Reference");

	Params::ABP_UIArrow_CaptureFlag_C_Set_Flag_Reference_Params Parms{};

	Parms.Flag_Ref = Flag_Ref;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIArrow_CaptureFlag.BP_UIArrow_CaptureFlag_C.ExecuteUbergraph_BP_UIArrow_CaptureFlag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ConquestFlag_C*          K2Node_DynamicCast_AsUI_Conquest_Flag                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ConquestFlag_C*          K2Node_CustomEvent_Flag_Ref                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ConquestFlag_C*          K2Node_DynamicCast_AsUI_Conquest_Flag_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UIArrow_CaptureFlag_C::ExecuteUbergraph_BP_UIArrow_CaptureFlag(int32 EntryPoint, class UUI_ConquestFlag_C* K2Node_DynamicCast_AsUI_Conquest_Flag, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ABP_ConquestFlag_C* K2Node_CustomEvent_Flag_Ref, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UUI_ConquestFlag_C* K2Node_DynamicCast_AsUI_Conquest_Flag_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIArrow_CaptureFlag_C", "ExecuteUbergraph_BP_UIArrow_CaptureFlag");

	Params::ABP_UIArrow_CaptureFlag_C_ExecuteUbergraph_BP_UIArrow_CaptureFlag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsUI_Conquest_Flag = K2Node_DynamicCast_AsUI_Conquest_Flag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_Flag_Ref = K2Node_CustomEvent_Flag_Ref;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsUI_Conquest_Flag_1 = K2Node_DynamicCast_AsUI_Conquest_Flag_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


