// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCpp/Public/Bullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ABullet();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCpp();
// End Cross Module References
	void ABullet::StaticRegisterNativesABullet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABullet);
	UClass* Z_Construct_UClass_ABullet_NoRegister()
	{
		return ABullet::StaticClass();
	}
	struct Z_Construct_UClass_ABullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// class UBoxComponent; \xeb\xac\xb4\xec\xa1\xb0\xea\xb1\xb4 \xec\x84\xa0\xec\x96\xb8\xed\x95\xb4. \xec\x9d\xb4\xea\xb2\x83\xec\x9d\xb4 \xec\xa0\x95\xec\x8b\x9d\xec\x84\xa0\xec\x96\xb8\xec\x9d\xb4\xec\xa7\x80\xeb\xa7\x8c \xeb\xa7\xa4\xeb\xb2\x88 \xec\x9c\x84\xec\x97\x90\xec\x84\x9c \xed\x99\x95\xec\x9d\xb8\n// \xec\xa0\x84\xeb\xb0\xa9 \xec\x84\xa0\xec\x96\xb8\xec\x9d\x80 \xec\x9e\x88\xeb\x8b\xa4\xea\xb3\xa0 \xec\xb9\x98\xec\x9e\x90. \xec\x9a\xb0\xec\x84\xa0 \xec\x84\xa0\xec\x96\xb8\xed\x95\xb4 \xeb\x86\x94. \xec\x9d\xb4\xeb\x94\xb0 \xec\x86\x8c\xec\x8a\xa4\xec\xbd\x94\xeb\x93\x9c \xec\x8b\xa4\xed\x96\x89\xed\x95\xa0 \xeb\x95\x8c \xea\xb2\x80\xec\xa6\x9d\xed\x95\xa0\xea\xbb\x98.\n" },
#endif
		{ "IncludePath", "Bullet.h" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UBoxComponent; \xeb\xac\xb4\xec\xa1\xb0\xea\xb1\xb4 \xec\x84\xa0\xec\x96\xb8\xed\x95\xb4. \xec\x9d\xb4\xea\xb2\x83\xec\x9d\xb4 \xec\xa0\x95\xec\x8b\x9d\xec\x84\xa0\xec\x96\xb8\xec\x9d\xb4\xec\xa7\x80\xeb\xa7\x8c \xeb\xa7\xa4\xeb\xb2\x88 \xec\x9c\x84\xec\x97\x90\xec\x84\x9c \xed\x99\x95\xec\x9d\xb8\n\xec\xa0\x84\xeb\xb0\xa9 \xec\x84\xa0\xec\x96\xb8\xec\x9d\x80 \xec\x9e\x88\xeb\x8b\xa4\xea\xb3\xa0 \xec\xb9\x98\xec\x9e\x90. \xec\x9a\xb0\xec\x84\xa0 \xec\x84\xa0\xec\x96\xb8\xed\x95\xb4 \xeb\x86\x94. \xec\x9d\xb4\xeb\x94\xb0 \xec\x86\x8c\xec\x8a\xa4\xec\xbd\x94\xeb\x93\x9c \xec\x8b\xa4\xed\x96\x89\xed\x95\xa0 \xeb\x95\x8c \xea\xb2\x80\xec\xa6\x9d\xed\x95\xa0\xea\xbb\x98." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "Bullet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb6\xa9\xeb\x8f\x8c\xec\xb2\xb4\xec\x99\x80 \xec\x99\xb8\xea\xb4\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa0\xeb\x8b\xa4.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb6\xa9\xeb\x8f\x8c\xec\xb2\xb4\xec\x99\x80 \xec\x99\xb8\xea\xb4\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa0\xeb\x8b\xa4." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_Box_MetaData), Z_Construct_UClass_ABullet_Statics::NewProp_Box_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_Cube_MetaData[] = {
		{ "Category", "Bullet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xea\xb0\x80 \xec\x8b\x9c\xec\x9e\x91\xed\x95\x9c \xed\x9b\x84\xec\x97\x90 \xec\x9d\xb4\xea\xb1\xb8 \xec\x84\xa0\xec\x96\xb8\xed\x95\xb4\xeb\x9d\xbc\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xea\xb0\x80 \xec\x8b\x9c\xec\x9e\x91\xed\x95\x9c \xed\x9b\x84\xec\x97\x90 \xec\x9d\xb4\xea\xb1\xb8 \xec\x84\xa0\xec\x96\xb8\xed\x95\xb4\xeb\x9d\xbc" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, Cube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_Cube_MetaData), Z_Construct_UClass_ABullet_Statics::NewProp_Cube_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Bullet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb4\x9d\xec\x95\x8c\xec\x9d\xb4 \xec\x95\x9e \xeb\xb0\xa9\xed\x96\xa5\xec\x9c\xbc\xeb\xa1\x9c \xea\xb3\x84\xec\x86\x8d \xec\x9d\xb4\xeb\x8f\x99\xed\x95\x98\xea\xb2\x8c \xed\x95\x98\xec\x9e\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/Bullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb4\x9d\xec\x95\x8c\xec\x9d\xb4 \xec\x95\x9e \xeb\xb0\xa9\xed\x96\xa5\xec\x9c\xbc\xeb\xa1\x9c \xea\xb3\x84\xec\x86\x8d \xec\x9d\xb4\xeb\x8f\x99\xed\x95\x98\xea\xb2\x8c \xed\x95\x98\xec\x9e\x90" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_ABullet_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_Cube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Statics::ClassParams = {
		&ABullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABullet()
	{
		if (!Z_Registration_Info_UClass_ABullet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullet.OuterSingleton, Z_Construct_UClass_ABullet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABullet.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<ABullet>()
	{
		return ABullet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet);
	ABullet::~ABullet() {}
	struct Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_Bullet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_Bullet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABullet, ABullet::StaticClass, TEXT("ABullet"), &Z_Registration_Info_UClass_ABullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullet), 3227609627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_Bullet_h_3548030041(TEXT("/Script/ShootingCpp"),
		Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_Bullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_Bullet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
