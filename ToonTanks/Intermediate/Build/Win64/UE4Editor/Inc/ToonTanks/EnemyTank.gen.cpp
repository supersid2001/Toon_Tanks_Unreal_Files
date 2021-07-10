// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/Pawns/EnemyTank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyTank() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_AEnemyTank_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_AEnemyTank();
	TOONTANKS_API UClass* Z_Construct_UClass_APawnTurret();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	void AEnemyTank::StaticRegisterNativesAEnemyTank()
	{
	}
	UClass* Z_Construct_UClass_AEnemyTank_NoRegister()
	{
		return AEnemyTank::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyTank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyTank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawnTurret,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyTank_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/EnemyTank.h" },
		{ "ModuleRelativePath", "Pawns/EnemyTank.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyTank_Statics::NewProp_MoveRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Pawns/EnemyTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyTank_Statics::NewProp_MoveRange = { "MoveRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyTank, MoveRange), METADATA_PARAMS(Z_Construct_UClass_AEnemyTank_Statics::NewProp_MoveRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyTank_Statics::NewProp_MoveRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyTank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyTank_Statics::NewProp_MoveRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyTank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyTank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyTank_Statics::ClassParams = {
		&AEnemyTank::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyTank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyTank_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyTank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyTank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyTank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyTank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyTank, 2179599015);
	template<> TOONTANKS_API UClass* StaticClass<AEnemyTank>()
	{
		return AEnemyTank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyTank(Z_Construct_UClass_AEnemyTank, &AEnemyTank::StaticClass, TEXT("/Script/ToonTanks"), TEXT("AEnemyTank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyTank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
