// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_PawnBase_generated_h
#error "PawnBase.generated.h already included, missing '#pragma once' in PawnBase.h"
#endif
#define TOONTANKS_PawnBase_generated_h

#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_RPC_WRAPPERS
#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnBase(); \
	friend struct Z_Construct_UClass_APawnBase_Statics; \
public: \
	DECLARE_CLASS(APawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(APawnBase)


#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPawnBase(); \
	friend struct Z_Construct_UClass_APawnBase_Statics; \
public: \
	DECLARE_CLASS(APawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(APawnBase)


#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnBase(APawnBase&&); \
	NO_API APawnBase(const APawnBase&); \
public:


#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnBase(APawnBase&&); \
	NO_API APawnBase(const APawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnBase)


#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComp() { return STRUCT_OFFSET(APawnBase, CapsuleComp); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(APawnBase, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(APawnBase, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(APawnBase, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(APawnBase, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__DeathParticle() { return STRUCT_OFFSET(APawnBase, DeathParticle); } \
	FORCEINLINE static uint32 __PPO__DeathSound() { return STRUCT_OFFSET(APawnBase, DeathSound); } \
	FORCEINLINE static uint32 __PPO__DeathShake() { return STRUCT_OFFSET(APawnBase, DeathShake); } \
	FORCEINLINE static uint32 __PPO__LazerMesh() { return STRUCT_OFFSET(APawnBase, LazerMesh); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(APawnBase, BaseMesh); }


#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_14_PROLOG
#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_INCLASS \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawns_PawnBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class APawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_Pawns_PawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
