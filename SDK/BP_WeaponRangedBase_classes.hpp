#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13B (0x4A9 - 0x36E)
// BlueprintGeneratedClass BP_WeaponRangedBase.BP_WeaponRangedBase_C
class ABP_WeaponRangedBase_C : public ABP_WeaponBase_C
{
public:
	uint8                                        Pad_2434[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        BarrelLength;                                      // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReloadTime;                                        // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireRate;                                          // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ADSFireRate;                                       // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnockbackAmount;                                   // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SecundairyKnockbackAmount;                         // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomSecundairySpreadAmount;                      // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2435[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Projectile;                                        // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SecundairyProjectile;                              // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRaycastProjectile;                              // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                RayCastProjectile;                                 // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FireAnimation;                                     // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          SeperateFireAnimationFPS;                          // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LeftFireAnimation;                                 // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          SeperateFireAnimationLeftFPS;                      // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ParticleEffect;                                    // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       SecundairyParticleEffect;                          // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleEffect;                                      // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       SecundairyMuzzle;                                  // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ParticleSize;                                      // 0x3F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachParticleToWeapon;                            // 0x404(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2437[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundEffect;                                       // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLoadedServer;                                    // 0x410(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         Reloading;                                         // 0x411(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FireCooldownReady;                                 // 0x412(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2438[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReloadTimer;                                       // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireRateTimer;                                     // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              NormalRotation;                                    // 0x420(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2439[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            DistantSoundEffect;                                // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SecundairySound;                                   // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SecundaryDistantSound;                             // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UnloadWhenHolstered;                               // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CustomPrimaryFire;                                 // 0x449(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class E_Items                           AmmoType;                                          // 0x44A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_243A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClipSize;                                          // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ProjectileCollisionRadius;                         // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TempCameraLocation;                                // 0x454(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TempDirection;                                     // 0x460(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TempDirectionSecundairy;                           // 0x46C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TempAddedVelocity;                                 // 0x478(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MuzzleHeightOffset;                                // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideMuzzle;                                        // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ProjectileBase_C*                  ProjectileRef;                                     // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanReload;                                         // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VisualClipAmount;                                  // 0x49C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         FullySwitched;                                     // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FullySwitchDelay;                                  // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InitLoadWeapon;                                    // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_WeaponRangedBase_C* GetDefaultObj();

	void GenerateShotID(int32* Int, int32 CallFunc_RandomInteger_ReturnValue);
	void OnRep_VisualClipAmount();
	void GetSecundairyRandomSpread(bool Secundairy, struct FVector* SpreadOffsettedDirection, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void FireSecundairyProjectiles(int32 LastIndex, int32 AmmoCost, bool* Fired, int32 ShotID, int32 ProjectilesFired, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_FireProjectile_Fired, bool CallFunc_FireProjectile_Fired_1, int32 CallFunc_GenerateShotID_Int, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void GetSoundAndParticleEffect(bool Secundairy, class USoundBase** SoundEffect, class UParticleSystem** ParticleSystem, class UParticleSystem** Muzzle, class USoundBase** DistantSoundEffect);
	void GetKnockback(bool Secundairy, float* Knockback);
	void GetProjectileAndDamage(bool Secundairy, class UClass** ProjectileClass);
	void FireProjectile(bool Secundairy, bool OverrideCooldown, int32 AmmoCost, int32 ShotID, bool* Fired, bool FiredSuccesfully, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckClipAmmo_ClipEmpty, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_CheckClipAmmo_ClipEmpty_1);
	void UnloadWeapon();
	void SetClipAmount(int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_CheckIfInventoryHasItem_HasItem, int32 CallFunc_CheckIfInventoryHasItem_Amount, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnRep_IsLoaded();
	void CalculateInaccuracyOffset(struct FVector* Offset, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void CheckClipAmmo(bool* ClipEmpty, bool CallFunc_Greater_IntInt_ReturnValue);
	void SpawnAndLaunchProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int32 TeamID, bool OwnProjectile, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity, bool SecundairyProjectile, int32 FleetID, int32 ShotID, class UClass* CallFunc_GetProjectileAndDamage_ProjectileClass, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ProjectileBase_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Set_Base_Parameters_Output_Team_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_ID, int32 CallFunc_Set_Base_Parameters_Output_Ship_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_Member_ID);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SpawnProjectile(bool SecundairyProjectile, int32 ClipAmount, int32 ShotID);
	void SpawnProjectileFromServer(const struct FVector& CameraLocation, const struct FVector& Direction, int32 TeamID, bool LeftWeapon, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity, bool Secundairy, int32 ClipAmount, int32 FleetID, int32 ShotID);
	void MC_SpawnProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int32 TeamID, bool LeftWeapon, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity, bool Secundairy, int32 FleetID, int32 ShotID);
	void LoadedState(bool Loaded);
	void Effects(const struct FVector& Direction, class ABP_Character_C* CharacterRef, bool Secundairy);
	void PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting);
	void ReloadWeaponLocal(bool DelayedReload);
	void CancelReload();
	void Fired();
	void Unfired();
	void ReloadEvent(class ABP_Character_C* CharacterRef);
	void CheckIfNeedsToBeLoaded();
	void HolsteredEvent();
	void FireSecundairyProjectile(int32 ProjectileAmount, int32 AmmoCost);
	void MC_Effects(const struct FVector& Direction, class ABP_Character_C* CharacterRef, bool Secundairy);
	void SecundaryFired();
	void VisualClipAmountEvent();
	void InitialBonusLoad();
	void OC_SetWeaponUsedState_1(enum class E_NewWeaponStates NewWeaponState);
	void MC_ShotFired();
	void S_ShotFired();
	void ExecuteUbergraph_BP_WeaponRangedBase(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_SecundairyProjectile, int32 K2Node_CustomEvent_ClipAmount_1, int32 K2Node_CustomEvent_ShotID_2, const struct FVector& K2Node_CustomEvent_CameraLocation_1, const struct FVector& K2Node_CustomEvent_Direction_3, int32 K2Node_CustomEvent_TeamId_1, bool K2Node_CustomEvent_LeftWeapon_1, class ABP_Character_C* K2Node_CustomEvent_CharacterRef_4, const struct FVector& K2Node_CustomEvent_AddedVelocity_1, bool K2Node_CustomEvent_Secundairy_3, int32 K2Node_CustomEvent_ClipAmount, int32 K2Node_CustomEvent_FleetID_1, int32 K2Node_CustomEvent_ShotID_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetSecundairyRandomSpread_SpreadOffsettedDirection, float CallFunc_GetKnockback_Knockback, const struct FVector& K2Node_CustomEvent_CameraLocation, const struct FVector& K2Node_CustomEvent_Direction_2, int32 K2Node_CustomEvent_TeamId, bool K2Node_CustomEvent_LeftWeapon, class ABP_Character_C* K2Node_CustomEvent_CharacterRef_3, const struct FVector& K2Node_CustomEvent_AddedVelocity, bool K2Node_CustomEvent_Secundairy_2, int32 K2Node_CustomEvent_FleetID, int32 K2Node_CustomEvent_ShotID, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_CustomEvent_Loaded, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_CustomEvent_Direction_1, class ABP_Character_C* K2Node_CustomEvent_CharacterRef_2, bool K2Node_CustomEvent_Secundairy_1, class USoundBase* CallFunc_GetSoundAndParticleEffect_SoundEffect, class UParticleSystem* CallFunc_GetSoundAndParticleEffect_ParticleSystem, class UParticleSystem* CallFunc_GetSoundAndParticleEffect_Muzzle, class USoundBase* CallFunc_GetSoundAndParticleEffect_DistantSoundEffect, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool K2Node_Event_FullPrecision, bool K2Node_Event_WasSprinting, const struct FVector& CallFunc_CalculateInaccuracyOffset_Offset, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_DelayedReload, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_CheckIfInventoryHasItem_HasItem, int32 CallFunc_CheckIfInventoryHasItem_Amount, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, class ABP_Character_C* K2Node_CustomEvent_CharacterRef_1, int32 K2Node_CustomEvent_ProjectileAmount, int32 K2Node_CustomEvent_AmmoCost, bool CallFunc_FireSecundairyProjectiles_Fired, const struct FVector& K2Node_CustomEvent_Direction, class ABP_Character_C* K2Node_CustomEvent_CharacterRef, bool K2Node_CustomEvent_Secundairy, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class E_NewWeaponStates K2Node_Event_NewWeaponState, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_GenerateShotID_Int, bool CallFunc_FireProjectile_Fired, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2);
};

}


