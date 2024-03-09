#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x3B8 - 0x260)
// WidgetBlueprintGeneratedClass UI_QuickplayWorking.UI_QuickplayWorking_C
class UUI_QuickplayWorking_C : public UUserWidget
{
public:
	class UButton*                               Btn_Gameplay;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuickplayStatusText;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_JoinGame;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ElapsedTime;                                       // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2766[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_GameInstance_C*                    BPGameInstanceRef;                                 // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        ReservationIds;                                    // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBlueprintSessionResult               GameToJoin;                                        // 0x298(0x108)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SessionIndex;                                      // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2767[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        GameModes;                                         // 0x3A8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUI_QuickplayWorking_C* GetDefaultObj();

};

}


