#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponRangedBase.BP_WeaponRangedBase_C
// (Actor)

class UClass* ABP_WeaponRangedBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponRangedBase_C");

	return Clss;
}


// BP_WeaponRangedBase_C BP_WeaponRangedBase.Default__BP_WeaponRangedBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponRangedBase_C* ABP_WeaponRangedBase_C::GetDefaultObj()
{
	static class ABP_WeaponRangedBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponRangedBase_C*>(ABP_WeaponRangedBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.GenerateShotID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::GenerateShotID(int32* Int, int32 CallFunc_RandomInteger_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "GenerateShotID");

	Params::ABP_WeaponRangedBase_C_GenerateShotID_Params Parms{};

	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.OnRep_VisualClipAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::OnRep_VisualClipAmount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "OnRep_VisualClipAmount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.GetSecundairyRandomSpread
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Secundairy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     SpreadOffsettedDirection                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::GetSecundairyRandomSpread(bool Secundairy, struct FVector* SpreadOffsettedDirection, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "GetSecundairyRandomSpread");

	Params::ABP_WeaponRangedBase_C_GetSecundairyRandomSpread_Params Parms{};

	Parms.Secundairy = Secundairy;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpreadOffsettedDirection != nullptr)
		*SpreadOffsettedDirection = std::move(Parms.SpreadOffsettedDirection);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.FireSecundairyProjectiles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LastIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmmoCost                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fired                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ShotID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ProjectilesFired                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FireProjectile_Fired                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FireProjectile_Fired_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GenerateShotID_Int                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::FireSecundairyProjectiles(int32 LastIndex, int32 AmmoCost, bool* Fired, int32 ShotID, int32 ProjectilesFired, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_FireProjectile_Fired, bool CallFunc_FireProjectile_Fired_1, int32 CallFunc_GenerateShotID_Int, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "FireSecundairyProjectiles");

	Params::ABP_WeaponRangedBase_C_FireSecundairyProjectiles_Params Parms{};

	Parms.LastIndex = LastIndex;
	Parms.AmmoCost = AmmoCost;
	Parms.ShotID = ShotID;
	Parms.ProjectilesFired = ProjectilesFired;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FireProjectile_Fired = CallFunc_FireProjectile_Fired;
	Parms.CallFunc_FireProjectile_Fired_1 = CallFunc_FireProjectile_Fired_1;
	Parms.CallFunc_GenerateShotID_Int = CallFunc_GenerateShotID_Int;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Fired != nullptr)
		*Fired = Parms.Fired;

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.GetSoundAndParticleEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Secundairy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  SoundEffect                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             ParticleSystem                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Muzzle                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  DistantSoundEffect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::GetSoundAndParticleEffect(bool Secundairy, class USoundBase** SoundEffect, class UParticleSystem** ParticleSystem, class UParticleSystem** Muzzle, class USoundBase** DistantSoundEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "GetSoundAndParticleEffect");

	Params::ABP_WeaponRangedBase_C_GetSoundAndParticleEffect_Params Parms{};

	Parms.Secundairy = Secundairy;

	UObject::ProcessEvent(Func, &Parms);

	if (SoundEffect != nullptr)
		*SoundEffect = Parms.SoundEffect;

	if (ParticleSystem != nullptr)
		*ParticleSystem = Parms.ParticleSystem;

	if (Muzzle != nullptr)
		*Muzzle = Parms.Muzzle;

	if (DistantSoundEffect != nullptr)
		*DistantSoundEffect = Parms.DistantSoundEffect;

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.GetKnockback
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Secundairy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Knockback                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::GetKnockback(bool Secundairy, float* Knockback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "GetKnockback");

	Params::ABP_WeaponRangedBase_C_GetKnockback_Params Parms{};

	Parms.Secundairy = Secundairy;

	UObject::ProcessEvent(Func, &Parms);

	if (Knockback != nullptr)
		*Knockback = Parms.Knockback;

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.GetProjectileAndDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Secundairy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      ProjectileClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::GetProjectileAndDamage(bool Secundairy, class UClass** ProjectileClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "GetProjectileAndDamage");

	Params::ABP_WeaponRangedBase_C_GetProjectileAndDamage_Params Parms{};

	Parms.Secundairy = Secundairy;

	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileClass != nullptr)
		*ProjectileClass = Parms.ProjectileClass;

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.FireProjectile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Secundairy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OverrideCooldown                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              AmmoCost                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fired                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FiredSuccesfully                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckClipAmmo_ClipEmpty                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckClipAmmo_ClipEmpty_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponRangedBase_C::FireProjectile(bool Secundairy, bool OverrideCooldown, int32 AmmoCost, int32 ShotID, bool* Fired, bool FiredSuccesfully, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckClipAmmo_ClipEmpty, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_CheckClipAmmo_ClipEmpty_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "FireProjectile");

	Params::ABP_WeaponRangedBase_C_FireProjectile_Params Parms{};

	Parms.Secundairy = Secundairy;
	Parms.OverrideCooldown = OverrideCooldown;
	Parms.AmmoCost = AmmoCost;
	Parms.ShotID = ShotID;
	Parms.FiredSuccesfully = FiredSuccesfully;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CheckClipAmmo_ClipEmpty = CallFunc_CheckClipAmmo_ClipEmpty;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_CheckClipAmmo_ClipEmpty_1 = CallFunc_CheckClipAmmo_ClipEmpty_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Fired != nullptr)
		*Fired = Parms.Fired;

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.UnloadWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::UnloadWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "UnloadWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SetClipAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfInventoryHasItem_HasItem                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckIfInventoryHasItem_Amount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponRangedBase_C::SetClipAmount(int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_CheckIfInventoryHasItem_HasItem, int32 CallFunc_CheckIfInventoryHasItem_Amount, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "SetClipAmount");

	Params::ABP_WeaponRangedBase_C_SetClipAmount_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_CheckIfInventoryHasItem_HasItem = CallFunc_CheckIfInventoryHasItem_HasItem;
	Parms.CallFunc_CheckIfInventoryHasItem_Amount = CallFunc_CheckIfInventoryHasItem_Amount;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.OnRep_IsLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::OnRep_IsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "OnRep_IsLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CalculateInaccuracyOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::CalculateInaccuracyOffset(struct FVector* Offset, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "CalculateInaccuracyOffset");

	Params::ABP_WeaponRangedBase_C_CalculateInaccuracyOffset_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CheckClipAmmo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClipEmpty                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponRangedBase_C::CheckClipAmmo(bool* ClipEmpty, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "CheckClipAmmo");

	Params::ABP_WeaponRangedBase_C_CheckClipAmmo_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ClipEmpty != nullptr)
		*ClipEmpty = Parms.ClipEmpty;

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnAndLaunchProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OwnProjectile                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AddedVelocity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SecundairyProjectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FleetID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetProjectileAndDamage_ProjectileClass                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Team_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Crew_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Ship_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Crew_Member_ID               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::SpawnAndLaunchProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int32 TeamID, bool OwnProjectile, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity, bool SecundairyProjectile, int32 FleetID, int32 ShotID, class UClass* CallFunc_GetProjectileAndDamage_ProjectileClass, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ProjectileBase_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Set_Base_Parameters_Output_Team_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_ID, int32 CallFunc_Set_Base_Parameters_Output_Ship_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_Member_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "SpawnAndLaunchProjectile");

	Params::ABP_WeaponRangedBase_C_SpawnAndLaunchProjectile_Params Parms{};

	Parms.CameraLocation = CameraLocation;
	Parms.Direction = Direction;
	Parms.TeamID = TeamID;
	Parms.OwnProjectile = OwnProjectile;
	Parms.CharacterRef = CharacterRef;
	Parms.AddedVelocity = AddedVelocity;
	Parms.SecundairyProjectile = SecundairyProjectile;
	Parms.FleetID = FleetID;
	Parms.ShotID = ShotID;
	Parms.CallFunc_GetProjectileAndDamage_ProjectileClass = CallFunc_GetProjectileAndDamage_ProjectileClass;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Set_Base_Parameters_Output_Team_ID = CallFunc_Set_Base_Parameters_Output_Team_ID;
	Parms.CallFunc_Set_Base_Parameters_Output_Crew_ID = CallFunc_Set_Base_Parameters_Output_Crew_ID;
	Parms.CallFunc_Set_Base_Parameters_Output_Ship_ID = CallFunc_Set_Base_Parameters_Output_Ship_ID;
	Parms.CallFunc_Set_Base_Parameters_Output_Crew_Member_ID = CallFunc_Set_Base_Parameters_Output_Crew_Member_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "ReceiveTick");

	Params::ABP_WeaponRangedBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SecundairyProjectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ClipAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::SpawnProjectile(bool SecundairyProjectile, int32 ClipAmount, int32 ShotID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "SpawnProjectile");

	Params::ABP_WeaponRangedBase_C_SpawnProjectile_Params Parms{};

	Parms.SecundairyProjectile = SecundairyProjectile;
	Parms.ClipAmount = ClipAmount;
	Parms.ShotID = ShotID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnProjectileFromServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LeftWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AddedVelocity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secundairy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ClipAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FleetID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::SpawnProjectileFromServer(const struct FVector& CameraLocation, const struct FVector& Direction, int32 TeamID, bool LeftWeapon, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity, bool Secundairy, int32 ClipAmount, int32 FleetID, int32 ShotID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "SpawnProjectileFromServer");

	Params::ABP_WeaponRangedBase_C_SpawnProjectileFromServer_Params Parms{};

	Parms.CameraLocation = CameraLocation;
	Parms.Direction = Direction;
	Parms.TeamID = TeamID;
	Parms.LeftWeapon = LeftWeapon;
	Parms.CharacterRef = CharacterRef;
	Parms.AddedVelocity = AddedVelocity;
	Parms.Secundairy = Secundairy;
	Parms.ClipAmount = ClipAmount;
	Parms.FleetID = FleetID;
	Parms.ShotID = ShotID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.MC_SpawnProjectile
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LeftWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AddedVelocity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secundairy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FleetID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::MC_SpawnProjectile(const struct FVector& CameraLocation, const struct FVector& Direction, int32 TeamID, bool LeftWeapon, class ABP_Character_C* CharacterRef, const struct FVector& AddedVelocity, bool Secundairy, int32 FleetID, int32 ShotID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "MC_SpawnProjectile");

	Params::ABP_WeaponRangedBase_C_MC_SpawnProjectile_Params Parms{};

	Parms.CameraLocation = CameraLocation;
	Parms.Direction = Direction;
	Parms.TeamID = TeamID;
	Parms.LeftWeapon = LeftWeapon;
	Parms.CharacterRef = CharacterRef;
	Parms.AddedVelocity = AddedVelocity;
	Parms.Secundairy = Secundairy;
	Parms.FleetID = FleetID;
	Parms.ShotID = ShotID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponRangedBase_C::LoadedState(bool Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "LoadedState");

	Params::ABP_WeaponRangedBase_C_LoadedState_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Effects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secundairy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponRangedBase_C::Effects(const struct FVector& Direction, class ABP_Character_C* CharacterRef, bool Secundairy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "Effects");

	Params::ABP_WeaponRangedBase_C_Effects_Params Parms{};

	Parms.Direction = Direction;
	Parms.CharacterRef = CharacterRef;
	Parms.Secundairy = Secundairy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.PrimaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FullPrecision                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasSprinting                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponRangedBase_C::PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "PrimaryFire");

	Params::ABP_WeaponRangedBase_C_PrimaryFire_Params Parms{};

	Parms.CameraLocation = CameraLocation;
	Parms.Direction = Direction;
	Parms.FullPrecision = FullPrecision;
	Parms.WasSprinting = WasSprinting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReloadWeaponLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DelayedReload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponRangedBase_C::ReloadWeaponLocal(bool DelayedReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "ReloadWeaponLocal");

	Params::ABP_WeaponRangedBase_C_ReloadWeaponLocal_Params Parms{};

	Parms.DelayedReload = DelayedReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CancelReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::CancelReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "CancelReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Fired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::Fired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "Fired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Unfired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::Unfired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "Unfired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::ReloadEvent(class ABP_Character_C* CharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "ReloadEvent");

	Params::ABP_WeaponRangedBase_C_ReloadEvent_Params Parms{};

	Parms.CharacterRef = CharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CheckIfNeedsToBeLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::CheckIfNeedsToBeLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "CheckIfNeedsToBeLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.HolsteredEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::HolsteredEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "HolsteredEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.FireSecundairyProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ProjectileAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmmoCost                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::FireSecundairyProjectile(int32 ProjectileAmount, int32 AmmoCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "FireSecundairyProjectile");

	Params::ABP_WeaponRangedBase_C_FireSecundairyProjectile_Params Parms{};

	Parms.ProjectileAmount = ProjectileAmount;
	Parms.AmmoCost = AmmoCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.MC_Effects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secundairy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponRangedBase_C::MC_Effects(const struct FVector& Direction, class ABP_Character_C* CharacterRef, bool Secundairy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "MC_Effects");

	Params::ABP_WeaponRangedBase_C_MC_Effects_Params Parms{};

	Parms.Direction = Direction;
	Parms.CharacterRef = CharacterRef;
	Parms.Secundairy = Secundairy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SecundaryFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::SecundaryFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "SecundaryFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.VisualClipAmountEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::VisualClipAmountEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "VisualClipAmountEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.InitialBonusLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::InitialBonusLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "InitialBonusLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.OC_SetWeaponUsedState_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_NewWeaponStates       NewWeaponState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponRangedBase_C::OC_SetWeaponUsedState_1(enum class E_NewWeaponStates NewWeaponState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "OC_SetWeaponUsedState_1");

	Params::ABP_WeaponRangedBase_C_OC_SetWeaponUsedState_1_Params Parms{};

	Parms.NewWeaponState = NewWeaponState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.MC_ShotFired
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::MC_ShotFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "MC_ShotFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.S_ShotFired
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponRangedBase_C::S_ShotFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "S_ShotFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ExecuteUbergraph_BP_WeaponRangedBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SecundairyProjectile                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_ClipAmount_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ShotID_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_CameraLocation_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Direction_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TeamId_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_LeftWeapon_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_CustomEvent_CharacterRef_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_AddedVelocity_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Secundairy_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_ClipAmount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FleetID_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ShotID_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSecundairyRandomSpread_SpreadOffsettedDirection      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetKnockback_Knockback                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_CameraLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Direction_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TeamId                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_LeftWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_CustomEvent_CharacterRef_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_AddedVelocity                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Secundairy_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_FleetID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ShotID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Direction_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_CustomEvent_CharacterRef_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Secundairy_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  CallFunc_GetSoundAndParticleEffect_SoundEffect                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetSoundAndParticleEffect_ParticleSystem                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetSoundAndParticleEffect_Muzzle                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetSoundAndParticleEffect_DistantSoundEffect            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_CameraLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Direction                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_FullPrecision                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_WasSprinting                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_CalculateInaccuracyOffset_Offset                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_DelayedReload                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfInventoryHasItem_HasItem                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckIfInventoryHasItem_Amount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_CustomEvent_CharacterRef_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ProjectileAmount                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_AmmoCost                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FireSecundairyProjectiles_Fired                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Direction                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_CustomEvent_CharacterRef                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Secundairy                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_NewWeaponStates       K2Node_Event_NewWeaponState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GenerateShotID_Int                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FireProjectile_Fired                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponRangedBase_C::ExecuteUbergraph_BP_WeaponRangedBase(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_SecundairyProjectile, int32 K2Node_CustomEvent_ClipAmount_1, int32 K2Node_CustomEvent_ShotID_2, const struct FVector& K2Node_CustomEvent_CameraLocation_1, const struct FVector& K2Node_CustomEvent_Direction_3, int32 K2Node_CustomEvent_TeamId_1, bool K2Node_CustomEvent_LeftWeapon_1, class ABP_Character_C* K2Node_CustomEvent_CharacterRef_4, const struct FVector& K2Node_CustomEvent_AddedVelocity_1, bool K2Node_CustomEvent_Secundairy_3, int32 K2Node_CustomEvent_ClipAmount, int32 K2Node_CustomEvent_FleetID_1, int32 K2Node_CustomEvent_ShotID_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetSecundairyRandomSpread_SpreadOffsettedDirection, float CallFunc_GetKnockback_Knockback, const struct FVector& K2Node_CustomEvent_CameraLocation, const struct FVector& K2Node_CustomEvent_Direction_2, int32 K2Node_CustomEvent_TeamId, bool K2Node_CustomEvent_LeftWeapon, class ABP_Character_C* K2Node_CustomEvent_CharacterRef_3, const struct FVector& K2Node_CustomEvent_AddedVelocity, bool K2Node_CustomEvent_Secundairy_2, int32 K2Node_CustomEvent_FleetID, int32 K2Node_CustomEvent_ShotID, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_CustomEvent_Loaded, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_CustomEvent_Direction_1, class ABP_Character_C* K2Node_CustomEvent_CharacterRef_2, bool K2Node_CustomEvent_Secundairy_1, class USoundBase* CallFunc_GetSoundAndParticleEffect_SoundEffect, class UParticleSystem* CallFunc_GetSoundAndParticleEffect_ParticleSystem, class UParticleSystem* CallFunc_GetSoundAndParticleEffect_Muzzle, class USoundBase* CallFunc_GetSoundAndParticleEffect_DistantSoundEffect, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool K2Node_Event_FullPrecision, bool K2Node_Event_WasSprinting, const struct FVector& CallFunc_CalculateInaccuracyOffset_Offset, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_DelayedReload, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_CheckIfInventoryHasItem_HasItem, int32 CallFunc_CheckIfInventoryHasItem_Amount, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, class ABP_Character_C* K2Node_CustomEvent_CharacterRef_1, int32 K2Node_CustomEvent_ProjectileAmount, int32 K2Node_CustomEvent_AmmoCost, bool CallFunc_FireSecundairyProjectiles_Fired, const struct FVector& K2Node_CustomEvent_Direction, class ABP_Character_C* K2Node_CustomEvent_CharacterRef, bool K2Node_CustomEvent_Secundairy, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class E_NewWeaponStates K2Node_Event_NewWeaponState, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_GenerateShotID_Int, bool CallFunc_FireProjectile_Fired, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponRangedBase_C", "ExecuteUbergraph_BP_WeaponRangedBase");

	Params::ABP_WeaponRangedBase_C_ExecuteUbergraph_BP_WeaponRangedBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_SecundairyProjectile = K2Node_CustomEvent_SecundairyProjectile;
	Parms.K2Node_CustomEvent_ClipAmount_1 = K2Node_CustomEvent_ClipAmount_1;
	Parms.K2Node_CustomEvent_ShotID_2 = K2Node_CustomEvent_ShotID_2;
	Parms.K2Node_CustomEvent_CameraLocation_1 = K2Node_CustomEvent_CameraLocation_1;
	Parms.K2Node_CustomEvent_Direction_3 = K2Node_CustomEvent_Direction_3;
	Parms.K2Node_CustomEvent_TeamId_1 = K2Node_CustomEvent_TeamId_1;
	Parms.K2Node_CustomEvent_LeftWeapon_1 = K2Node_CustomEvent_LeftWeapon_1;
	Parms.K2Node_CustomEvent_CharacterRef_4 = K2Node_CustomEvent_CharacterRef_4;
	Parms.K2Node_CustomEvent_AddedVelocity_1 = K2Node_CustomEvent_AddedVelocity_1;
	Parms.K2Node_CustomEvent_Secundairy_3 = K2Node_CustomEvent_Secundairy_3;
	Parms.K2Node_CustomEvent_ClipAmount = K2Node_CustomEvent_ClipAmount;
	Parms.K2Node_CustomEvent_FleetID_1 = K2Node_CustomEvent_FleetID_1;
	Parms.K2Node_CustomEvent_ShotID_1 = K2Node_CustomEvent_ShotID_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetSecundairyRandomSpread_SpreadOffsettedDirection = CallFunc_GetSecundairyRandomSpread_SpreadOffsettedDirection;
	Parms.CallFunc_GetKnockback_Knockback = CallFunc_GetKnockback_Knockback;
	Parms.K2Node_CustomEvent_CameraLocation = K2Node_CustomEvent_CameraLocation;
	Parms.K2Node_CustomEvent_Direction_2 = K2Node_CustomEvent_Direction_2;
	Parms.K2Node_CustomEvent_TeamId = K2Node_CustomEvent_TeamId;
	Parms.K2Node_CustomEvent_LeftWeapon = K2Node_CustomEvent_LeftWeapon;
	Parms.K2Node_CustomEvent_CharacterRef_3 = K2Node_CustomEvent_CharacterRef_3;
	Parms.K2Node_CustomEvent_AddedVelocity = K2Node_CustomEvent_AddedVelocity;
	Parms.K2Node_CustomEvent_Secundairy_2 = K2Node_CustomEvent_Secundairy_2;
	Parms.K2Node_CustomEvent_FleetID = K2Node_CustomEvent_FleetID;
	Parms.K2Node_CustomEvent_ShotID = K2Node_CustomEvent_ShotID;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Direction_1 = K2Node_CustomEvent_Direction_1;
	Parms.K2Node_CustomEvent_CharacterRef_2 = K2Node_CustomEvent_CharacterRef_2;
	Parms.K2Node_CustomEvent_Secundairy_1 = K2Node_CustomEvent_Secundairy_1;
	Parms.CallFunc_GetSoundAndParticleEffect_SoundEffect = CallFunc_GetSoundAndParticleEffect_SoundEffect;
	Parms.CallFunc_GetSoundAndParticleEffect_ParticleSystem = CallFunc_GetSoundAndParticleEffect_ParticleSystem;
	Parms.CallFunc_GetSoundAndParticleEffect_Muzzle = CallFunc_GetSoundAndParticleEffect_Muzzle;
	Parms.CallFunc_GetSoundAndParticleEffect_DistantSoundEffect = CallFunc_GetSoundAndParticleEffect_DistantSoundEffect;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_CameraLocation = K2Node_Event_CameraLocation;
	Parms.K2Node_Event_Direction = K2Node_Event_Direction;
	Parms.K2Node_Event_FullPrecision = K2Node_Event_FullPrecision;
	Parms.K2Node_Event_WasSprinting = K2Node_Event_WasSprinting;
	Parms.CallFunc_CalculateInaccuracyOffset_Offset = CallFunc_CalculateInaccuracyOffset_Offset;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_DelayedReload = K2Node_CustomEvent_DelayedReload;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_CheckIfInventoryHasItem_HasItem = CallFunc_CheckIfInventoryHasItem_HasItem;
	Parms.CallFunc_CheckIfInventoryHasItem_Amount = CallFunc_CheckIfInventoryHasItem_Amount;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.K2Node_CustomEvent_CharacterRef_1 = K2Node_CustomEvent_CharacterRef_1;
	Parms.K2Node_CustomEvent_ProjectileAmount = K2Node_CustomEvent_ProjectileAmount;
	Parms.K2Node_CustomEvent_AmmoCost = K2Node_CustomEvent_AmmoCost;
	Parms.CallFunc_FireSecundairyProjectiles_Fired = CallFunc_FireSecundairyProjectiles_Fired;
	Parms.K2Node_CustomEvent_Direction = K2Node_CustomEvent_Direction;
	Parms.K2Node_CustomEvent_CharacterRef = K2Node_CustomEvent_CharacterRef;
	Parms.K2Node_CustomEvent_Secundairy = K2Node_CustomEvent_Secundairy;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_NewWeaponState = K2Node_Event_NewWeaponState;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GenerateShotID_Int = CallFunc_GenerateShotID_Int;
	Parms.CallFunc_FireProjectile_Fired = CallFunc_FireProjectile_Fired;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


