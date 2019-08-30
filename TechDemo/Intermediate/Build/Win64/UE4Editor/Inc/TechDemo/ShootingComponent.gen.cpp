// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TechDemo/ShootingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingComponent() {}
// Cross Module References
	TECHDEMO_API UFunction* Z_Construct_UDelegateFunction_TechDemo_RifleFire__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TechDemo();
	TECHDEMO_API UClass* Z_Construct_UClass_UShootingComponent_NoRegister();
	TECHDEMO_API UClass* Z_Construct_UClass_UShootingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TECHDEMO_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TechDemo_RifleFire__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TechDemo_RifleFire__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TechDemo_RifleFire__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TechDemo, nullptr, "RifleFire__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TechDemo_RifleFire__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_TechDemo_RifleFire__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TechDemo_RifleFire__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TechDemo_RifleFire__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UShootingComponent::StaticRegisterNativesUShootingComponent()
	{
	}
	UClass* Z_Construct_UClass_UShootingComponent_NoRegister()
	{
		return UShootingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShootingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rifleFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_rifleFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firing_MetaData[];
#endif
		static void NewProp_firing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_firing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_projectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_muzzleOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShootingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TechDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ShootingComponent.h" },
		{ "ModuleRelativePath", "ShootingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootingComponent_Statics::NewProp_rifleFire_MetaData[] = {
		{ "ModuleRelativePath", "ShootingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShootingComponent_Statics::NewProp_rifleFire = { "rifleFire", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootingComponent, rifleFire), Z_Construct_UDelegateFunction_TechDemo_RifleFire__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShootingComponent_Statics::NewProp_rifleFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShootingComponent_Statics::NewProp_rifleFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootingComponent_Statics::NewProp_firing_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ShootingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UShootingComponent_Statics::NewProp_firing_SetBit(void* Obj)
	{
		((UShootingComponent*)Obj)->firing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShootingComponent_Statics::NewProp_firing = { "firing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShootingComponent), &Z_Construct_UClass_UShootingComponent_Statics::NewProp_firing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShootingComponent_Statics::NewProp_firing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShootingComponent_Statics::NewProp_firing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootingComponent_Statics::NewProp_projectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ShootingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShootingComponent_Statics::NewProp_projectileClass = { "projectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootingComponent, projectileClass), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UShootingComponent_Statics::NewProp_projectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShootingComponent_Statics::NewProp_projectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootingComponent_Statics::NewProp_currentAmmo_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ShootingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingComponent_Statics::NewProp_currentAmmo = { "currentAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootingComponent, currentAmmo), METADATA_PARAMS(Z_Construct_UClass_UShootingComponent_Statics::NewProp_currentAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShootingComponent_Statics::NewProp_currentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootingComponent_Statics::NewProp_maxAmmo_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ShootingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingComponent_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootingComponent, maxAmmo), METADATA_PARAMS(Z_Construct_UClass_UShootingComponent_Statics::NewProp_maxAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShootingComponent_Statics::NewProp_maxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootingComponent_Statics::NewProp_muzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "ShootingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShootingComponent_Statics::NewProp_muzzleOffset = { "muzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShootingComponent, muzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UShootingComponent_Statics::NewProp_muzzleOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShootingComponent_Statics::NewProp_muzzleOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShootingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingComponent_Statics::NewProp_rifleFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingComponent_Statics::NewProp_firing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingComponent_Statics::NewProp_projectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingComponent_Statics::NewProp_currentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingComponent_Statics::NewProp_maxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingComponent_Statics::NewProp_muzzleOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShootingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShootingComponent_Statics::ClassParams = {
		&UShootingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShootingComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UShootingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShootingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UShootingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShootingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShootingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShootingComponent, 3188235334);
	template<> TECHDEMO_API UClass* StaticClass<UShootingComponent>()
	{
		return UShootingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShootingComponent(Z_Construct_UClass_UShootingComponent, &UShootingComponent::StaticClass, TEXT("/Script/TechDemo"), TEXT("UShootingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShootingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
