#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// BlueprintGeneratedClass EOS_Voice_Chat_Participant_Reference.EOS_Voice_Chat_Participant_Reference_C
class UEOS_Voice_Chat_Participant_Reference_C : public UObject
{
public:
	class FString                                Channel_Name;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Player_Name;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AEOS_Voice_Chat_Service_C*             Voice_Chat_Services;                               // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEOS_Voice_Chat_Participant_Reference_C* GetDefaultObj();

	void Is_Muted_(bool* Muted_, bool CallFunc_IsPlayerMuted_ReturnValue);
	void Is_Speaking_(bool* Speaking, bool CallFunc_IsPlayerTalking_ReturnValue);
	void ToString(class FString* Value);
};

}


