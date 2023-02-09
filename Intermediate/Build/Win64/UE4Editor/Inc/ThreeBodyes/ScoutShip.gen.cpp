// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeBodyes/StarShips/ScoutShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoutShip() {}
// Cross Module References
	THREEBODYES_API UClass* Z_Construct_UClass_AScoutShip_NoRegister();
	THREEBODYES_API UClass* Z_Construct_UClass_AScoutShip();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ThreeBodyes();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	THREEBODYES_API UClass* Z_Construct_UClass_UShootingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AScoutShip::execRotate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rotate(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScoutShip::execMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_value);
		P_NATIVE_END;
	}
	void AScoutShip::StaticRegisterNativesAScoutShip()
	{
		UClass* Class = AScoutShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Move", &AScoutShip::execMove },
			{ "Rotate", &AScoutShip::execRotate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScoutShip_Move_Statics
	{
		struct ScoutShip_eventMove_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AScoutShip_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoutShip_eventMove_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoutShip_Move_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoutShip_Move_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoutShip_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoutShip_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoutShip, nullptr, "Move", nullptr, nullptr, sizeof(ScoutShip_eventMove_Parms), Z_Construct_UFunction_AScoutShip_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoutShip_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScoutShip_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoutShip_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScoutShip_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScoutShip_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScoutShip_Rotate_Statics
	{
		struct ScoutShip_eventRotate_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AScoutShip_Rotate_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScoutShip_eventRotate_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoutShip_Rotate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoutShip_Rotate_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScoutShip_Rotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoutShip_Rotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoutShip, nullptr, "Rotate", nullptr, nullptr, sizeof(ScoutShip_eventRotate_Parms), Z_Construct_UFunction_AScoutShip_Rotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoutShip_Rotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScoutShip_Rotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoutShip_Rotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScoutShip_Rotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScoutShip_Rotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AScoutShip_NoRegister()
	{
		return AScoutShip::StaticClass();
	}
	struct Z_Construct_UClass_AScoutShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoutShipCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scoutShipCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoutShipStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scoutShipStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoutShipSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scoutShipSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoutShipCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scoutShipCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoutShipMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scoutShipMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shootingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_roll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScoutShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ThreeBodyes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScoutShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScoutShip_Move, "Move" }, // 4212317180
		{ &Z_Construct_UFunction_AScoutShip_Rotate, "Rotate" }, // 2700003805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StarShips/ScoutShip.h" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCollision_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCollision = { "scoutShipCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoutShip, scoutShipCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipStaticMesh_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipStaticMesh = { "scoutShipStaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoutShip, scoutShipStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipSpringArm_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipSpringArm = { "scoutShipSpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoutShip, scoutShipSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCamera_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCamera = { "scoutShipCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoutShip, scoutShipCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipMovement_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipMovement = { "scoutShipMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoutShip, scoutShipMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::NewProp_shootingComponent_MetaData[] = {
		{ "Category", "Shoot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoutShip_Statics::NewProp_shootingComponent = { "shootingComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoutShip, shootingComponent), Z_Construct_UClass_UShootingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::NewProp_shootingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::NewProp_shootingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::NewProp_pitch_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AScoutShip_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoutShip, pitch), METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::NewProp_pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::NewProp_pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::NewProp_yaw_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AScoutShip_Statics::NewProp_yaw = { "yaw", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoutShip, yaw), METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::NewProp_yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::NewProp_yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoutShip_Statics::NewProp_roll_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "StarShips/ScoutShip.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AScoutShip_Statics::NewProp_roll = { "roll", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoutShip, roll), METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::NewProp_roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::NewProp_roll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoutShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoutShip_Statics::NewProp_scoutShipMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoutShip_Statics::NewProp_shootingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoutShip_Statics::NewProp_pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoutShip_Statics::NewProp_yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoutShip_Statics::NewProp_roll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScoutShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoutShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScoutShip_Statics::ClassParams = {
		&AScoutShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AScoutShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScoutShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScoutShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScoutShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScoutShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScoutShip, 2014659513);
	template<> THREEBODYES_API UClass* StaticClass<AScoutShip>()
	{
		return AScoutShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScoutShip(Z_Construct_UClass_AScoutShip, &AScoutShip::StaticClass, TEXT("/Script/ThreeBodyes"), TEXT("AScoutShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScoutShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
