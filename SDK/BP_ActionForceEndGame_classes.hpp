#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x269 - 0x25C)
// BlueprintGeneratedClass BP_ActionForceEndGame.BP_ActionForceEndGame_C
class ABP_ActionForceEndGame_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_37A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         NotificationSound;                                 // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_ActionForceEndGame_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionForceEndGame(int32 EntryPoint, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode);
};

}


