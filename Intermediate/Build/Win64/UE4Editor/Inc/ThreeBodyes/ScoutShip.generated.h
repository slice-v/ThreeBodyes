// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THREEBODYES_ScoutShip_generated_h
#error "ScoutShip.generated.h already included, missing '#pragma once' in ScoutShip.h"
#endif
#define THREEBODYES_ScoutShip_generated_h

#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_SPARSE_DATA
#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotate); \
	DECLARE_FUNCTION(execMove);


#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotate); \
	DECLARE_FUNCTION(execMove);


#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoutShip(); \
	friend struct Z_Construct_UClass_AScoutShip_Statics; \
public: \
	DECLARE_CLASS(AScoutShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThreeBodyes"), NO_API) \
	DECLARE_SERIALIZER(AScoutShip)


#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAScoutShip(); \
	friend struct Z_Construct_UClass_AScoutShip_Statics; \
public: \
	DECLARE_CLASS(AScoutShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThreeBodyes"), NO_API) \
	DECLARE_SERIALIZER(AScoutShip)


#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScoutShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScoutShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoutShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoutShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScoutShip(AScoutShip&&); \
	NO_API AScoutShip(const AScoutShip&); \
public:


#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScoutShip(AScoutShip&&); \
	NO_API AScoutShip(const AScoutShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoutShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoutShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoutShip)


#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__shootingComponent() { return STRUCT_OFFSET(AScoutShip, shootingComponent); } \
	FORCEINLINE static uint32 __PPO__pitch() { return STRUCT_OFFSET(AScoutShip, pitch); } \
	FORCEINLINE static uint32 __PPO__yaw() { return STRUCT_OFFSET(AScoutShip, yaw); } \
	FORCEINLINE static uint32 __PPO__roll() { return STRUCT_OFFSET(AScoutShip, roll); }


#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_17_PROLOG
#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_PRIVATE_PROPERTY_OFFSET \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_SPARSE_DATA \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_RPC_WRAPPERS \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_INCLASS \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_PRIVATE_PROPERTY_OFFSET \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_SPARSE_DATA \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_INCLASS_NO_PURE_DECLS \
	ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THREEBODYES_API UClass* StaticClass<class AScoutShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThreeBodyes_Source_ThreeBodyes_StarShips_ScoutShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
