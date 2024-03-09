#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x4B8 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponBow.BP_WeaponBow_C
class ABP_WeaponBow_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2ED6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_WeaponBow_C* GetDefaultObj();

	void LoadedState(bool Loaded);
	void ExecuteUbergraph_BP_WeaponBow(int32 EntryPoint, bool K2Node_Event_Loaded, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
};

}


