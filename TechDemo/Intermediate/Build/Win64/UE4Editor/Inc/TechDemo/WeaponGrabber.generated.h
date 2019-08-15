// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECHDEMO_WeaponGrabber_generated_h
#error "WeaponGrabber.generated.h already included, missing '#pragma once' in WeaponGrabber.h"
#endif
#define TECHDEMO_WeaponGrabber_generated_h

#define TechDemo_Source_TechDemo_WeaponGrabber_h_16_RPC_WRAPPERS
#define TechDemo_Source_TechDemo_WeaponGrabber_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define TechDemo_Source_TechDemo_WeaponGrabber_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponGrabber(); \
	friend struct Z_Construct_UClass_UWeaponGrabber_Statics; \
public: \
	DECLARE_CLASS(UWeaponGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(UWeaponGrabber)


#define TechDemo_Source_TechDemo_WeaponGrabber_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponGrabber(); \
	friend struct Z_Construct_UClass_UWeaponGrabber_Statics; \
public: \
	DECLARE_CLASS(UWeaponGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(UWeaponGrabber)


#define TechDemo_Source_TechDemo_WeaponGrabber_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponGrabber(UWeaponGrabber&&); \
	NO_API UWeaponGrabber(const UWeaponGrabber&); \
public:


#define TechDemo_Source_TechDemo_WeaponGrabber_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponGrabber(UWeaponGrabber&&); \
	NO_API UWeaponGrabber(const UWeaponGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponGrabber)


#define TechDemo_Source_TechDemo_WeaponGrabber_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__armLength() { return STRUCT_OFFSET(UWeaponGrabber, armLength); }


#define TechDemo_Source_TechDemo_WeaponGrabber_h_13_PROLOG
#define TechDemo_Source_TechDemo_WeaponGrabber_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_WeaponGrabber_h_16_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_WeaponGrabber_h_16_RPC_WRAPPERS \
	TechDemo_Source_TechDemo_WeaponGrabber_h_16_INCLASS \
	TechDemo_Source_TechDemo_WeaponGrabber_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TechDemo_Source_TechDemo_WeaponGrabber_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_WeaponGrabber_h_16_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_WeaponGrabber_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_WeaponGrabber_h_16_INCLASS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_WeaponGrabber_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECHDEMO_API UClass* StaticClass<class UWeaponGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TechDemo_Source_TechDemo_WeaponGrabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
