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

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
struct IEOSUserInterface_EnterDevicePinCode_SetupUserInterface_Params
{
public:
	class UEOSUserInterface_EnterDevicePinCode_Context* Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VerificationUrl;                                   // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PinCode;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.SelectedCandidates
struct UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context_SelectedCandidates_Params
{
public:
	TArray<struct FEOSUserInterface_CandidateEOSAccount> SelectedCandidates;                                // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform.SetupUserInterface
struct IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_SetupUserInterface_Params
{
public:
	class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEOSUserInterface_CandidateEOSAccount> AvailableCandidates;                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context.SelectCandidate
struct UEOSUserInterface_SelectEOSAccount_Context_SelectCandidate_Params
{
public:
	struct FEOSUserInterface_CandidateEOSAccount SelectedCandidate;                                 // 0x0(0xD0)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount.SetupUserInterface
struct IEOSUserInterface_SelectEOSAccount_SetupUserInterface_Params
{
public:
	class UEOSUserInterface_SelectEOSAccount_Context* Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEOSUserInterface_CandidateEOSAccount> AvailableCandidates;                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice
struct UEOSUserInterface_SignInOrCreateAccount_Context_SelectChoice_Params
{
public:
	enum class EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface
struct IEOSUserInterface_SignInOrCreateAccount_SetupUserInterface_Params
{
public:
	class UEOSUserInterface_SignInOrCreateAccount_Context* Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context.SelectChoice
struct UEOSUserInterface_SwitchToCrossPlatformAccount_Context_SelectChoice_Params
{
public:
	enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount.SetupUserInterface
struct IEOSUserInterface_SwitchToCrossPlatformAccount_SetupUserInterface_Params
{
public:
	class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EpicAccountName;                                   // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


