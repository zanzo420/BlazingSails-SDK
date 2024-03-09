#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x4B8 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C
class ABP_WeaponMultiCrossbow_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_EFF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_WeaponMultiCrossbow_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting);
	void LoadedState(bool Loaded);
	void ExecuteUbergraph_BP_WeaponMultiCrossbow(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool K2Node_Event_FullPrecision, bool K2Node_Event_WasSprinting, bool K2Node_Event_Loaded, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_SetStaticMesh_ReturnValue_3);
};

}


