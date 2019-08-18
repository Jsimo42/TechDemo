// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TechDemo/WeaponGrabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponGrabber() {}
// Cross Module References
	TECHDEMO_API UFunction* Z_Construct_UDelegateFunction_TechDemo_OnGrab__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TechDemo();
	TECHDEMO_API UClass* Z_Construct_UClass_UWeaponGrabber_NoRegister();
	TECHDEMO_API UClass* Z_Construct_UClass_UWeaponGrabber();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TechDemo_OnGrab__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TechDemo_OnGrab__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TechDemo_OnGrab__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TechDemo, nullptr, "OnGrab__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TechDemo_OnGrab__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TechDemo_OnGrab__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TechDemo_OnGrab__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TechDemo_OnGrab__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UWeaponGrabber::StaticRegisterNativesUWeaponGrabber()
	{
	}
	UClass* Z_Construct_UClass_UWeaponGrabber_NoRegister()
	{
		return UWeaponGrabber::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_armLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_armLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onGrab_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onGrab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastActorHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lastActorHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TechDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponGrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponGrabber.h" },
		{ "ModuleRelativePath", "WeaponGrabber.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_armLength_MetaData[] = {
		{ "Category", "WeaponGrabber" },
		{ "ModuleRelativePath", "WeaponGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_armLength = { "armLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponGrabber, armLength), METADATA_PARAMS(Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_armLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_armLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_onGrab_MetaData[] = {
		{ "ModuleRelativePath", "WeaponGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_onGrab = { "onGrab", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponGrabber, onGrab), Z_Construct_UDelegateFunction_TechDemo_OnGrab__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_onGrab_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_onGrab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_lastActorHit_MetaData[] = {
		{ "Category", "WeaponGrabber" },
		{ "ModuleRelativePath", "WeaponGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_lastActorHit = { "lastActorHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponGrabber, lastActorHit), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_lastActorHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_lastActorHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_armLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_onGrab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponGrabber_Statics::NewProp_lastActorHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponGrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponGrabber_Statics::ClassParams = {
		&UWeaponGrabber::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeaponGrabber_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWeaponGrabber_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponGrabber_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWeaponGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponGrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponGrabber, 2079874862);
	template<> TECHDEMO_API UClass* StaticClass<UWeaponGrabber>()
	{
		return UWeaponGrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponGrabber(Z_Construct_UClass_UWeaponGrabber, &UWeaponGrabber::StaticClass, TEXT("/Script/TechDemo"), TEXT("UWeaponGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
