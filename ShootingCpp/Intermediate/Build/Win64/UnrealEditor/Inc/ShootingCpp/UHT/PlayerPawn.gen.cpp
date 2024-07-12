// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCpp/Public/PlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_APlayerPawn();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCpp();
// End Cross Module References
	void APlayerPawn::StaticRegisterNativesAPlayerPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPawn);
	UClass* Z_Construct_UClass_APlayerPawn_NoRegister()
	{
		return APlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Arrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// class UBoxComponent; \xec\xa0\x84\xeb\xb0\xa9\xec\x84\xa0\xec\x96\xb8 forward declaration\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawn.h" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UBoxComponent; \xec\xa0\x84\xeb\xb0\xa9\xec\x84\xa0\xec\x96\xb8 forward declaration" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_cube_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_cube = { "cube", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, cube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_cube_MetaData), Z_Construct_UClass_APlayerPawn_Statics::NewProp_cube_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_box_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_box = { "box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_box_MetaData), Z_Construct_UClass_APlayerPawn_Statics::NewProp_box_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_Arrow_MetaData[] = {
		{ "Category", "PlayerPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0 \xeb\xb3\x80\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8 \xec\x8b\x9c class\xec\x9d\x98 \xec\x9d\x98\xeb\xaf\xb8\xeb\x8a\x94 \xec\xa0\x84\xeb\xb0\xa9\xec\x84\xa0\xec\x96\xb8\xec\x9d\xb4\xeb\x8b\xa4.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0 \xeb\xb3\x80\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8 \xec\x8b\x9c class\xec\x9d\x98 \xec\x9d\x98\xeb\xaf\xb8\xeb\x8a\x94 \xec\xa0\x84\xeb\xb0\xa9\xec\x84\xa0\xec\x96\xb8\xec\x9d\xb4\xeb\x8b\xa4." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_Arrow = { "Arrow", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, Arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Arrow_MetaData), Z_Construct_UClass_APlayerPawn_Statics::NewProp_Arrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletFactory_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletFactory = { "BulletFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, BulletFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletFactory_MetaData), Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_APlayerPawn_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_cube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_Arrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawn_Statics::ClassParams = {
		&APlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerPawn()
	{
		if (!Z_Registration_Info_UClass_APlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPawn.OuterSingleton, Z_Construct_UClass_APlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerPawn.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<APlayerPawn>()
	{
		return APlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn);
	APlayerPawn::~APlayerPawn() {}
	struct Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_PlayerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_PlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPawn, APlayerPawn::StaticClass, TEXT("APlayerPawn"), &Z_Registration_Info_UClass_APlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPawn), 1015073726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_PlayerPawn_h_1355748672(TEXT("/Script/ShootingCpp"),
		Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_PlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_PlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
