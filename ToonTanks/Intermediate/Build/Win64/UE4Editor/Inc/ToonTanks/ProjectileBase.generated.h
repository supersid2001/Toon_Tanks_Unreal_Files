// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TOONTANKS_ProjectileBase_generated_h
#error "ProjectileBase.generated.h already included, missing '#pragma once' in ProjectileBase.h"
#endif
#define TOONTANKS_ProjectileBase_generated_h

#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public:


#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBase)


#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMovment() { return STRUCT_OFFSET(AProjectileBase, ProjectileMovment); } \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProjectileBase, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AProjectileBase, DamageType); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AProjectileBase, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AProjectileBase, Damage); } \
	FORCEINLINE static uint32 __PPO__HitParticle() { return STRUCT_OFFSET(AProjectileBase, HitParticle); } \
	FORCEINLINE static uint32 __PPO__ParticleTrial() { return STRUCT_OFFSET(AProjectileBase, ParticleTrial); } \
	FORCEINLINE static uint32 __PPO__HitSound() { return STRUCT_OFFSET(AProjectileBase, HitSound); } \
	FORCEINLINE static uint32 __PPO__LaunchSound() { return STRUCT_OFFSET(AProjectileBase, LaunchSound); } \
	FORCEINLINE static uint32 __PPO__HitShake() { return STRUCT_OFFSET(AProjectileBase, HitShake); }


#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_11_PROLOG
#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_INCLASS \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
