// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TechDemo/TechDemoHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTechDemoHUD() {}
// Cross Module References
	TECHDEMO_API UClass* Z_Construct_UClass_ATechDemoHUD_NoRegister();
	TECHDEMO_API UClass* Z_Construct_UClass_ATechDemoHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TechDemo();
// End Cross Module References
	void ATechDemoHUD::StaticRegisterNativesATechDemoHUD()
	{
	}
	UClass* Z_Construct_UClass_ATechDemoHUD_NoRegister()
	{
		return ATechDemoHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATechDemoHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATechDemoHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TechDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATechDemoHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TechDemoHUD.h" },
		{ "ModuleRelativePath", "TechDemoHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATechDemoHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATechDemoHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATechDemoHUD_Statics::ClassParams = {
		&ATechDemoHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATechDemoHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATechDemoHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATechDemoHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATechDemoHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATechDemoHUD, 1398006967);
	template<> TECHDEMO_API UClass* StaticClass<ATechDemoHUD>()
	{
		return ATechDemoHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATechDemoHUD(Z_Construct_UClass_ATechDemoHUD, &ATechDemoHUD::StaticClass, TEXT("/Script/TechDemo"), TEXT("ATechDemoHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATechDemoHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
