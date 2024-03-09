#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x300 - 0x2E1)
// BlueprintGeneratedClass BP_UIArrow_CaptureFlag.BP_UIArrow_CaptureFlag_C
class ABP_UIArrow_CaptureFlag_C : public ABP_UIArrow_C
{
public:
	uint8                                        Pad_36D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_ConquestFlag_C*                    UI_ConquestFlag3D;                                 // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ConquestFlag_C*                    UI_ConquestFlag2D;                                 // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_UIArrow_CaptureFlag_C* GetDefaultObj();

	void ShouldShow3D(bool* ShouldShow3D, bool CallFunc_ShouldShow3D_ShouldShow3D);
	void ShouldShow(bool* ShouldShow, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitializeWidgetValues();
	void Adjust3DWidgetAdvanced();
	void Adjust2DWidgetAdvanced();
	void Set_Flag_Reference(class ABP_ConquestFlag_C* Flag_Ref);
	void ExecuteUbergraph_BP_UIArrow_CaptureFlag(int32 EntryPoint, class UUI_ConquestFlag_C* K2Node_DynamicCast_AsUI_Conquest_Flag, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ABP_ConquestFlag_C* K2Node_CustomEvent_Flag_Ref, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UUI_ConquestFlag_C* K2Node_DynamicCast_AsUI_Conquest_Flag_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


