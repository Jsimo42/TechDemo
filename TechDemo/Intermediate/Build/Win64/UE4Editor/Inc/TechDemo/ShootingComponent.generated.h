// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECHDEMO_ShootingComponent_generated_h
#error "ShootingComponent.generated.h already included, missing '#pragma once' in ShootingComponent.h"
#endif
#define TECHDEMO_ShootingComponent_generated_h

#define TechDemo_Source_TechDemo_ShootingComponent_h_21_RPC_WRAPPERS
#define TechDemo_Source_TechDemo_ShootingComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define TechDemo_Source_TechDemo_ShootingComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShootingComponent(); \
	friend struct Z_Construct_UClass_UShootingComponent_Statics; \
public: \
	DECLARE_CLASS(UShootingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(UShootingComponent)


#define TechDemo_Source_TechDemo_ShootingComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUShootingComponent(); \
	friend struct Z_Construct_UClass_UShootingComponent_Statics; \
public: \
	DECLARE_CLASS(UShootingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(UShootingComponent)


#define TechDemo_Source_TechDemo_ShootingComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShootingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShootingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShootingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShootingComponent(UShootingComponent&&); \
	NO_API UShootingComponent(const UShootingComponent&); \
public:


#define TechDemo_Source_TechDemo_ShootingComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShootingComponent(UShootingComponent&&); \
	NO_API UShootingComponent(const UShootingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShootingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShootingComponent)


#define TechDemo_Source_TechDemo_ShootingComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define TechDemo_Source_TechDemo_ShootingComponent_h_18_PROLOG
#define TechDemo_Source_TechDemo_ShootingComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_ShootingComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_ShootingComponent_h_21_RPC_WRAPPERS \
	TechDemo_Source_TechDemo_ShootingComponent_h_21_INCLASS \
	TechDemo_Source_TechDemo_ShootingComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TechDemo_Source_TechDemo_ShootingComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_ShootingComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_ShootingComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_ShootingComponent_h_21_INCLASS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_ShootingComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECHDEMO_API UClass* StaticClass<class UShootingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TechDemo_Source_TechDemo_ShootingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
