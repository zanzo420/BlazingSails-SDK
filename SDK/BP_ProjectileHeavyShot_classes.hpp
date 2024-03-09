#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x4A0 - 0x494)
// BlueprintGeneratedClass BP_ProjectileHeavyShot.BP_ProjectileHeavyShot_C
class ABP_ProjectileHeavyShot_C : public ABP_ProjectileCannonballBase_C
{
public:
	uint8                                        Pad_3C8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              ParticleSystem_0;                                  // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectileHeavyShot_C* GetDefaultObj();

};

}


