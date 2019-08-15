// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TechDemo/TechDemoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTechDemoGameMode() {}
// Cross Module References
	TECHDEMO_API UClass* Z_Construct_UClass_ATechDemoGameMode_NoRegister();
	TECHDEMO_API UClass* Z_Construct_UClass_ATechDemoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TechDemo();
// End Cross Module References
	void ATechDemoGameMode::StaticRegisterNativesATechDemoGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATechDemoGameMode_NoRegister()
	{
		return ATechDemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATechDemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATechDemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TechDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATechDemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TechDemoGameMode.h" },
		{ "ModuleRelativePath", "TechDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATechDemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATechDemoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATechDemoGameMode_Statics::ClassParams = {
		&ATechDemoGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATechDemoGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATechDemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATechDemoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATechDemoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATechDemoGameMode, 1142175402);
	template<> TECHDEMO_API UClass* StaticClass<ATechDemoGameMode>()
	{
		return ATechDemoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATechDemoGameMode(Z_Construct_UClass_ATechDemoGameMode, &ATechDemoGameMode::StaticClass, TEXT("/Script/TechDemo"), TEXT("ATechDemoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATechDemoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
