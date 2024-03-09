#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x4B8 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponFireBow.BP_WeaponFireBow_C
class ABP_WeaponFireBow_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2EC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_WeaponFireBow_C* GetDefaultObj();

	void LoadedState(bool Loaded);
	void ExecuteUbergraph_BP_WeaponFireBow(int32 EntryPoint, bool K2Node_Event_Loaded, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
};

}


