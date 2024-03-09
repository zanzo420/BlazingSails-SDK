#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x4B0 - 0x490)
// BlueprintGeneratedClass EOS_Matchmaker.EOS_Matchmaker_C
class AEOS_Matchmaker_C : public AMatchmaker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            On_Progress_Event;                                 // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AEOS_Matchmaker_C* GetDefaultObj();

	void CustomIsMatchMaking(bool* Is_MatchMaking, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const struct FMatchmakerProgressInfo& CallFunc_GetMatchmakingStatus_ProgressInfo, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void MatchMaking_Complete(int32 ControllerIndex, const struct FUniqueNetIdRepl& UserId, const struct FMatchmakerResult& Results);
	void OnProgress(struct FMatchmakerProgressInfo& ProgressInfo);
	void ExecuteUbergraph_EOS_Matchmaker(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_ControllerIndex, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId, const struct FMatchmakerResult& K2Node_CustomEvent_Results, const struct FMatchmakerProgressInfo& K2Node_Event_ProgressInfo, class UMatchmakerSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void On_Progress_Event__DelegateSignature(const struct FMatchmakerProgressInfo& Progress_info);
};

}


