// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECHDEMO_TechDemoGameMode_generated_h
#error "TechDemoGameMode.generated.h already included, missing '#pragma once' in TechDemoGameMode.h"
#endif
#define TECHDEMO_TechDemoGameMode_generated_h

#define TechDemo_Source_TechDemo_TechDemoGameMode_h_12_RPC_WRAPPERS
#define TechDemo_Source_TechDemo_TechDemoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TechDemo_Source_TechDemo_TechDemoGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATechDemoGameMode(); \
	friend struct Z_Construct_UClass_ATechDemoGameMode_Statics; \
public: \
	DECLARE_CLASS(ATechDemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TechDemo"), TECHDEMO_API) \
	DECLARE_SERIALIZER(ATechDemoGameMode)


#define TechDemo_Source_TechDemo_TechDemoGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATechDemoGameMode(); \
	friend struct Z_Construct_UClass_ATechDemoGameMode_Statics; \
public: \
	DECLARE_CLASS(ATechDemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TechDemo"), TECHDEMO_API) \
	DECLARE_SERIALIZER(ATechDemoGameMode)


#define TechDemo_Source_TechDemo_TechDemoGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHDEMO_API ATechDemoGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATechDemoGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHDEMO_API, ATechDemoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATechDemoGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TECHDEMO_API ATechDemoGameMode(ATechDemoGameMode&&); \
	TECHDEMO_API ATechDemoGameMode(const ATechDemoGameMode&); \
public:


#define TechDemo_Source_TechDemo_TechDemoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TECHDEMO_API ATechDemoGameMode(ATechDemoGameMode&&); \
	TECHDEMO_API ATechDemoGameMode(const ATechDemoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHDEMO_API, ATechDemoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATechDemoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATechDemoGameMode)


#define TechDemo_Source_TechDemo_TechDemoGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define TechDemo_Source_TechDemo_TechDemoGameMode_h_9_PROLOG
#define TechDemo_Source_TechDemo_TechDemoGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_TechDemoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_TechDemoGameMode_h_12_RPC_WRAPPERS \
	TechDemo_Source_TechDemo_TechDemoGameMode_h_12_INCLASS \
	TechDemo_Source_TechDemo_TechDemoGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TechDemo_Source_TechDemo_TechDemoGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_TechDemoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_TechDemoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_TechDemoGameMode_h_12_INCLASS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_TechDemoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECHDEMO_API UClass* StaticClass<class ATechDemoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TechDemo_Source_TechDemo_TechDemoGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
