// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCpp/Public/ShootingCppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingCppGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AShootingCppGameMode();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AShootingCppGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCpp();
// End Cross Module References
	void AShootingCppGameMode::StaticRegisterNativesAShootingCppGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingCppGameMode);
	UClass* Z_Construct_UClass_AShootingCppGameMode_NoRegister()
	{
		return AShootingCppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShootingCppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingCppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCppGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCppGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootingCppGameMode.h" },
		{ "ModuleRelativePath", "Public/ShootingCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingCppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingCppGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingCppGameMode_Statics::ClassParams = {
		&AShootingCppGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCppGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingCppGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AShootingCppGameMode()
	{
		if (!Z_Registration_Info_UClass_AShootingCppGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingCppGameMode.OuterSingleton, Z_Construct_UClass_AShootingCppGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingCppGameMode.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<AShootingCppGameMode>()
	{
		return AShootingCppGameMode::StaticClass();
	}
	AShootingCppGameMode::AShootingCppGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingCppGameMode);
	AShootingCppGameMode::~AShootingCppGameMode() {}
	struct Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_ShootingCppGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_ShootingCppGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingCppGameMode, AShootingCppGameMode::StaticClass, TEXT("AShootingCppGameMode"), &Z_Registration_Info_UClass_AShootingCppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingCppGameMode), 2962017150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_ShootingCppGameMode_h_541569320(TEXT("/Script/ShootingCpp"),
		Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_ShootingCppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_ShootingCppGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
