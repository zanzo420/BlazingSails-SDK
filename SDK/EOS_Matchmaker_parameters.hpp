#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x82 (0x82 - 0x0)
// Function EOS_Matchmaker.EOS_Matchmaker_C.CustomIsMatchMaking
struct AEOS_Matchmaker_C_CustomIsMatchMaking_Params
{
public:
	bool                                         Is_MatchMaking;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x10(0x28)(HasGetValueTypeHash)
	struct FMatchmakerProgressInfo               CallFunc_GetMatchmakingStatus_ProgressInfo;        // 0x38(0x48)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function EOS_Matchmaker.EOS_Matchmaker_C.MatchMaking Complete
struct AEOS_Matchmaker_C_MatchMaking_Complete_Params
{
public:
	int32                                        ControllerIndex;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FMatchmakerResult                     Results;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x48 (0x48 - 0x0)
// Function EOS_Matchmaker.EOS_Matchmaker_C.OnProgress
struct AEOS_Matchmaker_C_OnProgress_Params
{
public:
	struct FMatchmakerProgressInfo               ProgressInfo;                                      // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xF8 (0xF8 - 0x0)
// Function EOS_Matchmaker.EOS_Matchmaker_C.ExecuteUbergraph_EOS_Matchmaker
struct AEOS_Matchmaker_C_ExecuteUbergraph_EOS_Matchmaker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_ControllerIndex;                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId;                         // 0x18(0x28)(HasGetValueTypeHash)
	struct FMatchmakerResult                     K2Node_CustomEvent_Results;                        // 0x40(0x10)(None)
	struct FMatchmakerProgressInfo               K2Node_Event_ProgressInfo;                         // 0x50(0x48)(ConstParm)
	class UMatchmakerSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function EOS_Matchmaker.EOS_Matchmaker_C.On Progress Event__DelegateSignature
struct AEOS_Matchmaker_C_On_Progress_Event__DelegateSignature_Params
{
public:
	struct FMatchmakerProgressInfo               Progress_info;                                     // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


