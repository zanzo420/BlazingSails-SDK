#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x398 - 0x320)
// BlueprintGeneratedClass EOS_PlayerState.EOS_PlayerState_C
class AEOS_PlayerState_C : public APlayerState
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Unique_Net_ID;                                     // 0x328(0x28)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                UserName;                                          // 0x350(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        Matchmaking_Team_Id;                               // 0x360(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Finished_Replication;                              // 0x364(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Moderator;                                      // 0x365(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Developer;                                      // 0x366(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Primary_Platform_ID;                               // 0x368(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Device_ID;                                         // 0x378(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSHA256Hash                           CheckSum;                                          // 0x388(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AEOS_PlayerState_C* GetDefaultObj();

	void OnRep_Primarty_Platform_ID();
};

}


