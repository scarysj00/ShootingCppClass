// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCpp/Public/CodingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodingActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingActor();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCpp();
// End Cross Module References
	void ACodingActor::StaticRegisterNativesACodingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACodingActor);
	UClass* Z_Construct_UClass_ACodingActor_NoRegister()
	{
		return ACodingActor::StaticClass();
	}
	struct Z_Construct_UClass_ACodingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACodingActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodingActor.h" },
		{ "ModuleRelativePath", "Public/CodingActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACodingActor_Statics::ClassParams = {
		&ACodingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACodingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACodingActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACodingActor()
	{
		if (!Z_Registration_Info_UClass_ACodingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACodingActor.OuterSingleton, Z_Construct_UClass_ACodingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACodingActor.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<ACodingActor>()
	{
		return ACodingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodingActor);
	ACodingActor::~ACodingActor() {}
	struct Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_CodingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_CodingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACodingActor, ACodingActor::StaticClass, TEXT("ACodingActor"), &Z_Registration_Info_UClass_ACodingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACodingActor), 1273308163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_CodingActor_h_408473681(TEXT("/Script/ShootingCpp"),
		Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_CodingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_CodingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
