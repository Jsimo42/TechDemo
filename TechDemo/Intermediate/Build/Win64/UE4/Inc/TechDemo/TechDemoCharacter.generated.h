// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECHDEMO_TechDemoCharacter_generated_h
#error "TechDemoCharacter.generated.h already included, missing '#pragma once' in TechDemoCharacter.h"
#endif
#define TECHDEMO_TechDemoCharacter_generated_h

#define TechDemo_Source_TechDemo_TechDemoCharacter_h_14_RPC_WRAPPERS
#define TechDemo_Source_TechDemo_TechDemoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TechDemo_Source_TechDemo_TechDemoCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATechDemoCharacter(); \
	friend struct Z_Construct_UClass_ATechDemoCharacter_Statics; \
public: \
	DECLARE_CLASS(ATechDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(ATechDemoCharacter)


#define TechDemo_Source_TechDemo_TechDemoCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATechDemoCharacter(); \
	friend struct Z_Construct_UClass_ATechDemoCharacter_Statics; \
public: \
	DECLARE_CLASS(ATechDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(ATechDemoCharacter)


#define TechDemo_Source_TechDemo_TechDemoCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATechDemoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATechDemoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATechDemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATechDemoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATechDemoCharacter(ATechDemoCharacter&&); \
	NO_API ATechDemoCharacter(const ATechDemoCharacter&); \
public:


#define TechDemo_Source_TechDemo_TechDemoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATechDemoCharacter(ATechDemoCharacter&&); \
	NO_API ATechDemoCharacter(const ATechDemoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATechDemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATechDemoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATechDemoCharacter)


#define TechDemo_Source_TechDemo_TechDemoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATechDemoCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATechDemoCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATechDemoCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ATechDemoCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ATechDemoCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATechDemoCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ATechDemoCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ATechDemoCharacter, L_MotionController); }


#define TechDemo_Source_TechDemo_TechDemoCharacter_h_11_PROLOG
#define TechDemo_Source_TechDemo_TechDemoCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_TechDemoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_TechDemoCharacter_h_14_RPC_WRAPPERS \
	TechDemo_Source_TechDemo_TechDemoCharacter_h_14_INCLASS \
	TechDemo_Source_TechDemo_TechDemoCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TechDemo_Source_TechDemo_TechDemoCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_TechDemoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_TechDemoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_TechDemoCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_TechDemoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECHDEMO_API UClass* StaticClass<class ATechDemoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TechDemo_Source_TechDemo_TechDemoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
