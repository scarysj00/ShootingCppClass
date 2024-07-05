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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_number_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_number;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fNumber_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReady_MetaData[];
#endif
		static void NewProp_bReady_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReady;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_myName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_myName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingActor_Statics::NewProp_number_MetaData[] = {
		{ "Category", "MyVariable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (Edit / Visible) + (Anywhere / DefaultsOnly / InstanceOnly)\n" },
#endif
		{ "ModuleRelativePath", "Public/CodingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Edit / Visible) + (Anywhere / DefaultsOnly / InstanceOnly)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACodingActor_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACodingActor, number), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACodingActor_Statics::NewProp_number_MetaData), Z_Construct_UClass_ACodingActor_Statics::NewProp_number_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingActor_Statics::NewProp_fNumber_MetaData[] = {
		{ "Category", "MyVariable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 4byte \xec\xa0\x95\xec\x88\x98\xed\x98\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/CodingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "4byte \xec\xa0\x95\xec\x88\x98\xed\x98\x95" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACodingActor_Statics::NewProp_fNumber = { "fNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACodingActor, fNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACodingActor_Statics::NewProp_fNumber_MetaData), Z_Construct_UClass_ACodingActor_Statics::NewProp_fNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingActor_Statics::NewProp_bReady_MetaData[] = {
		{ "Category", "MyVariable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\xa4\xec\x88\x98\xed\x98\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/CodingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\xa4\xec\x88\x98\xed\x98\x95" },
#endif
	};
#endif
	void Z_Construct_UClass_ACodingActor_Statics::NewProp_bReady_SetBit(void* Obj)
	{
		((ACodingActor*)Obj)->bReady = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACodingActor_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACodingActor), &Z_Construct_UClass_ACodingActor_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACodingActor_Statics::NewProp_bReady_MetaData), Z_Construct_UClass_ACodingActor_Statics::NewProp_bReady_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingActor_Statics::NewProp_myName_MetaData[] = {
		{ "Category", "MyVariable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x85\xbc\xeb\xa6\xac\xed\x98\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/CodingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x85\xbc\xeb\xa6\xac\xed\x98\x95" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACodingActor_Statics::NewProp_myName = { "myName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACodingActor, myName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACodingActor_Statics::NewProp_myName_MetaData), Z_Construct_UClass_ACodingActor_Statics::NewProp_myName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACodingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingActor_Statics::NewProp_number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingActor_Statics::NewProp_fNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingActor_Statics::NewProp_bReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingActor_Statics::NewProp_myName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACodingActor_Statics::ClassParams = {
		&ACodingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACodingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACodingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACodingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACodingActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACodingActor_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_ACodingActor, ACodingActor::StaticClass, TEXT("ACodingActor"), &Z_Registration_Info_UClass_ACodingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACodingActor), 2780062558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_CodingActor_h_1665276062(TEXT("/Script/ShootingCpp"),
		Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_CodingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingCpp_Source_ShootingCpp_Public_CodingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
