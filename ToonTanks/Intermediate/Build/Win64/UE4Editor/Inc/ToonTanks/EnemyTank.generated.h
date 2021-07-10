// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_EnemyTank_generated_h
#error "EnemyTank.generated.h already included, missing '#pragma once' in EnemyTank.h"
#endif
#define TOONTANKS_EnemyTank_generated_h

#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_RPC_WRAPPERS
#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyTank(); \
	friend struct Z_Construct_UClass_AEnemyTank_Statics; \
public: \
	DECLARE_CLASS(AEnemyTank, APawnTurret, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AEnemyTank)


#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyTank(); \
	friend struct Z_Construct_UClass_AEnemyTank_Statics; \
public: \
	DECLARE_CLASS(AEnemyTank, APawnTurret, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AEnemyTank)


#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyTank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyTank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyTank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyTank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyTank(AEnemyTank&&); \
	NO_API AEnemyTank(const AEnemyTank&); \
public:


#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyTank() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyTank(AEnemyTank&&); \
	NO_API AEnemyTank(const AEnemyTank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyTank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyTank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyTank)


#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MoveRange() { return STRUCT_OFFSET(AEnemyTank, MoveRange); }


#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_12_PROLOG
#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_INCLASS \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AEnemyTank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_Pawns_EnemyTank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
