// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECHDEMO_TechDemoHUD_generated_h
#error "TechDemoHUD.generated.h already included, missing '#pragma once' in TechDemoHUD.h"
#endif
#define TECHDEMO_TechDemoHUD_generated_h

#define TechDemo_Source_TechDemo_TechDemoHUD_h_12_RPC_WRAPPERS
#define TechDemo_Source_TechDemo_TechDemoHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TechDemo_Source_TechDemo_TechDemoHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATechDemoHUD(); \
	friend struct Z_Construct_UClass_ATechDemoHUD_Statics; \
public: \
	DECLARE_CLASS(ATechDemoHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(ATechDemoHUD)


#define TechDemo_Source_TechDemo_TechDemoHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATechDemoHUD(); \
	friend struct Z_Construct_UClass_ATechDemoHUD_Statics; \
public: \
	DECLARE_CLASS(ATechDemoHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(ATechDemoHUD)


#define TechDemo_Source_TechDemo_TechDemoHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATechDemoHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATechDemoHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATechDemoHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATechDemoHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATechDemoHUD(ATechDemoHUD&&); \
	NO_API ATechDemoHUD(const ATechDemoHUD&); \
public:


#define TechDemo_Source_TechDemo_TechDemoHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATechDemoHUD(ATechDemoHUD&&); \
	NO_API ATechDemoHUD(const ATechDemoHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATechDemoHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATechDemoHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATechDemoHUD)


#define TechDemo_Source_TechDemo_TechDemoHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define TechDemo_Source_TechDemo_TechDemoHUD_h_9_PROLOG
#define TechDemo_Source_TechDemo_TechDemoHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_TechDemoHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_TechDemoHUD_h_12_RPC_WRAPPERS \
	TechDemo_Source_TechDemo_TechDemoHUD_h_12_INCLASS \
	TechDemo_Source_TechDemo_TechDemoHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TechDemo_Source_TechDemo_TechDemoHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_TechDemoHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_TechDemoHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_TechDemoHUD_h_12_INCLASS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_TechDemoHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECHDEMO_API UClass* StaticClass<class ATechDemoHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TechDemo_Source_TechDemo_TechDemoHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
