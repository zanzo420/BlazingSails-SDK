#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4BB (0xBB3 - 0x6F8)
// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
class UBP_GameInstance_C : public UBP_COM_GameInstance_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FST_Options                           Options;                                           // 0x700(0x64)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2A7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_Keybind>                   KeyBinds;                                          // 0x768(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Keybind>                   KeyBindsController;                                // 0x778(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Keybind>                   AzertyKeyBinds;                                    // 0x788(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Keybind>                   QuertyKeyBinds;                                    // 0x798(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          UsedCodes;                                         // 0x7A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_BanListEntry_new>          BannedPlayersList;                                 // 0x7B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MaxPlayerPerCrew;                                  // 0x7C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Dv;                                                // 0x7CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Cl;                                                // 0x7CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OptionsLocked;                                     // 0x7CE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bStreamerMode;                                     // 0x7CF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_            Changed_Ship_Type;                                 // 0x7D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class E_ShipTypes                       SelectedShipType;                                  // 0x7E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUniqueNetIdRepl>              MutedPlayersList_SteamIDs_;                        // 0x7E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShowFpsCounter;                                    // 0x7F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowMSCounter;                                     // 0x7F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A80[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        RandomNamesArray;                                  // 0x800(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                 RandomNamesInUseArray;                             // 0x810(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShowChatMessages;                                  // 0x820(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseProfanityFilter;                                // 0x821(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableControllerSupport;                           // 0x822(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ToggleSprint;                                      // 0x823(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 MapFilters;                                        // 0x828(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        AnchorDropTime;                                    // 0x838(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Achievements_C*                    AchievementsRef;                                   // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasBannedFromServer;                               // 0x848(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUniqueNetIdRepl>              GlobalMutedPlayersList_SteamIDs_;                  // 0x850(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        GlobalMutedPlayersList_SteamIDStrings_;            // 0x860(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        GlobalModeratorList;                               // 0x870(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UsingController;                                   // 0x880(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ControllerJoystickXMultiplier;                     // 0x884(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnInputModeChange;                                 // 0x888(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        ResolutionScale;                                   // 0x898(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ControllerJoystickYMultiplier;                     // 0x89C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sharpness;                                         // 0x8A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrightnessOffset;                                  // 0x8A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartBrightness;                                   // 0x8A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrightnessTotal;                                   // 0x8AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ControllerJoystickXMultiplierOption;               // 0x8B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ControllerJoystickYMultiplierOption;               // 0x8B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggleSprintKeyBoard;                              // 0x8B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class E_TimesOfDay                      LoadingScreenSetting;                              // 0x8B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A85[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LoadingScreenServer;                               // 0x8C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShowDamageNumbers;                                 // 0x8D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowAllChatMessages;                               // 0x8D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A86[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_ShipTypes, struct FST_ShipCustomisations> Ship_Customizations;                               // 0x8E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_ShipCustomisations                Selected_Ship_Customizations;                      // 0x930(0x74)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2A87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_PlayerCustomisation               Player_Customizations;                             // 0x9A8(0x6C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Player_Cosmetics_Updated;                          // 0xA18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ship_Cosmetics_Updated;                            // 0xA28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_NewSortOptions                    Sort_Settings;                                     // 0xA38(0x3)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pirate_Curse;                                      // 0xA3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ServerHostSettingsMew             Server_Host_Settings;                              // 0xA40(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FST_GunGameHostSettings_updated       Server_Host_GunGame_Settings;                      // 0xAC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FST_Conquest_Host_Settings_1          Server_Host_Conquest_Settings;                     // 0xAE8(0x94)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2A8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_ShipCustomizationPreset>   PirateCosmeticPresets;                             // 0xB80(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_ShipCustomizationPreset>   ShipCosmeticPresets;                               // 0xB90(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class E_ShipTypes>               Available_Ship_Types;                              // 0xBA0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Showed_Disclaimer;                                 // 0xBB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Has_Played_Tutorial;                               // 0xBB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Extended_Party;                                    // 0xBB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_GameInstance_C* GetDefaultObj();

	void Get_Ship_Customizations_Network(TArray<enum class E_ShipTypes>* Ship_Types, TArray<struct FST_ShipCustomisations>* Ship_Cosmetics, TArray<enum class E_ShipTypes>& CallFunc_Map_Keys_Keys, TArray<struct FST_ShipCustomisations>& CallFunc_Map_Values_Values);
	void Cycle_Ship_Internal(int32 Ship_Index, bool Forward, int32* New_Ship_Index, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1);
	void Cycle_Ship(bool Forward, int32 Current_Ship_Index, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Cycle_Ship_Internal_New_Ship_Index, int32 CallFunc_Cycle_Ship_Internal_New_Ship_Index_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Get_Ship_Customizations(TMap<enum class E_ShipTypes, struct FST_ShipCustomisations>* Ship_Customizations);
	void Set_Player_Customization_Validated(TArray<int32>& Item_Ids);
	void GenerateShipNames(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_GenerateRandomShipName_RandomShipName, const struct FST_ShipCustomisations& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FST_ShipCustomisations& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitializeOptions(bool CallFunc_DoesSaveGameExist_ReturnValue, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item);
	void LoadPresets(bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USG_Presets_C* K2Node_DynamicCast_AsSG_Presets, bool K2Node_DynamicCast_bSuccess);
	void SavePresets(class USG_Presets_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue);
	void Set_Player_Customization(const struct FST_PlayerCustomisation& Customisation, const struct FST_Customisation5& CustTemp);
	void Get_Player_Customization(struct FST_PlayerCustomisation* Customization, bool CallFunc_IsValid_ReturnValue);
	void DisconnectPopup(class FText Reason, enum class E_DisconnectReasons Disconnect_Reason, class UUI_DisconnectPopup_C** DisconnectWidget, class UUI_DisconnectPopup_C* CallFunc_Create_ReturnValue);
	void ChangeInputMode(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable, bool Temp_bool_Variable_3, float Temp_float_Variable_1, bool K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void GetKeyBinds(TArray<struct FST_Keybind>* KeyBinds);
	void CheckForMissingKeybinds(bool ActionFound, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FST_Keybind& CallFunc_Array_Get_Item, const struct FST_Keybind& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	void RequestExternalPlayerData(class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue);
	void Set_Ship_Type(enum class E_ShipTypes NewShipType, bool OwnShip, const struct FST_Customisation5& CustomisationTemp, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FST_ShipCustomisations& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_Ship_Customization(struct FST_ShipCustomisations* Customization);
	void Set_Ship_Customization(bool OwnShip, const struct FST_ShipCustomisations& Customisation, const struct FST_Customisation5& CustTemp);
	void LoadOptions(bool CallFunc_DoesSaveGameExist_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USG_Options_C* K2Node_DynamicCast_AsSG_Options, bool K2Node_DynamicCast_bSuccess);
	void SaveOptions(class USG_Options_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue);
	void LoadBanList(bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USG_Banlist_C* K2Node_DynamicCast_AsSG_Banlist, bool K2Node_DynamicCast_bSuccess);
	void SaveBanList(class USG_Banlist_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue);
	void AddUsedCode(class FText Code, int32 CallFunc_Array_Add_ReturnValue);
	void SpawnActor(class UClass* ActorClass, const struct FTransform& Transform, class AActor** Actor, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
	void SaveData(class USG_SaveGame_C* SaveGame, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, bool CallFunc_SaveGameToSlot_ReturnValue, class USG_SaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue);
	void LoadData(class USG_SaveGame_C* SaveGame, bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USG_SaveGame_C* K2Node_DynamicCast_AsSG_Save_Game, bool K2Node_DynamicCast_bSuccess);
	void ReceiveInit();
	void ReceiveShutdown();
	void ResetKeysAzerty();
	void ResetKeysQuerty();
	void ResetRandomNamesArray();
	void DisconnectedFromServer(class FText Reason, enum class E_DisconnectReasons DisconnectReason);
	void ReceivedExternalPlayerInfoFromRemoteServer(class UVaRestRequestJSON* Response);
	void InitializeBrightness(class APostProcessVolume* PPVolumeRef);
	void FullGameSave();
	void Initialize_EOS();
	void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable_2, class UUI_DisconnectPopup_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<class ABP_VehicleBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Array_Length_ReturnValue, class ABP_VehicleBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class FText K2Node_CustomEvent_Reason, enum class E_DisconnectReasons K2Node_CustomEvent_DisconnectReason, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UVaRestRequestJSON* K2Node_CustomEvent_response, class UVaRestJsonObject* CallFunc_GetResponseObject_ReturnValue, TArray<class UVaRestJsonValue*>& CallFunc_GetArrayField_ReturnValue, TArray<class UVaRestJsonValue*>& CallFunc_GetArrayField_ReturnValue_1, class UVaRestJsonValue* CallFunc_Array_Get_Item_1, class UVaRestJsonValue* CallFunc_Array_Get_Item_2, const class FString& CallFunc_AsString_ReturnValue, const class FString& CallFunc_AsString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class APostProcessVolume* K2Node_CustomEvent_PPVolumeRef, const struct FVector4& K2Node_MakeStruct_Vector4);
	void Ship_Cosmetics_Updated__DelegateSignature(const struct FST_ShipCustomisations& Cosmetics);
	void Player_Cosmetics_Updated__DelegateSignature(const struct FST_PlayerCustomisation& Cosmetics);
	void OnInputModeChange__DelegateSignature();
	void Changed_Ship_Type__DelegateSignature(enum class E_ShipTypes ShipType);
};

}


