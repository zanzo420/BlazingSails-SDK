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

// 0x68 (0x68 - 0x0)
// Function EOS_PartyInviteReference.EOS_PartyInviteReference_C.Get Combined ID
struct UEOS_PartyInviteReference_C_Get_Combined_ID_Params
{
public:
	class FString                                Combined_ID;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get__Sender_Sender;                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_Get__Sender_Sender_ID;                    // 0x20(0x28)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function EOS_PartyInviteReference.EOS_PartyInviteReference_C.Get  Sender
struct UEOS_PartyInviteReference_C_Get__Sender_Params
{
public:
	class FString                                Sender;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Sender_ID;                                         // 0x10(0x28)(Parm, OutParm, HasGetValueTypeHash)
	class FString                                CallFunc_GetSourceDisplayName_ReturnValue;         // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetSourceUserId_ReturnValue;              // 0x48(0x28)(HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EOS_PartyInviteReference.EOS_PartyInviteReference_C.ToString
struct UEOS_PartyInviteReference_C_ToString_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPartyId*                              CallFunc_GetPartyId_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_ToDebugString_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


