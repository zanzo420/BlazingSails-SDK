#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x269 - 0x25C)
// BlueprintGeneratedClass BP_ActionFleetMode.BP_ActionFleetMode_C
class ABP_ActionFleetMode_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_2089[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         NotificationSound;                                 // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_ActionFleetMode_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionFleetMode(int32 EntryPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class FText Temp_text_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ActionChangeMaxPreGame_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue);
};

}

