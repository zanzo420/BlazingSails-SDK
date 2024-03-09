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

// 0x2 (0x2 - 0x0)
// Function EOS_Voice_Chat_Participant_Reference.EOS_Voice_Chat_Participant_Reference_C.Is Muted?
struct UEOS_Voice_Chat_Participant_Reference_C_Is_Muted__Params
{
public:
	bool                                         Muted_;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayerMuted_ReturnValue;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function EOS_Voice_Chat_Participant_Reference.EOS_Voice_Chat_Participant_Reference_C.Is Speaking?
struct UEOS_Voice_Chat_Participant_Reference_C_Is_Speaking__Params
{
public:
	bool                                         Speaking;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayerTalking_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function EOS_Voice_Chat_Participant_Reference.EOS_Voice_Chat_Participant_Reference_C.ToString
struct UEOS_Voice_Chat_Participant_Reference_C_ToString_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


