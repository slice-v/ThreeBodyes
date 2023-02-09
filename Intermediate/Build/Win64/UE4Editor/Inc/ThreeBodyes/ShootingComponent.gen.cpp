// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeBodyes/Weapons/ShootingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingComponent() {}
// Cross Module References
	THREEBODYES_API UClass* Z_Construct_UClass_UShootingComponent_NoRegister();
	THREEBODYES_API UClass* Z_Construct_UClass_UShootingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ThreeBodyes();
// End Cross Module References
	DEFINE_FUNCTION(UShootingComponent::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	void UShootingComponent::StaticRegisterNativesUShootingComponent()
	{
		UClass* Class = UShootingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Shoot", &UShootingComponent::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShootingComponent_Shoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShootingComponent_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/ShootingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootingComponent_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShootingComponent, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShootingComponent_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootingComponent_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShootingComponent_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShootingComponent_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShootingComponent_NoRegister()
	{
		return UShootingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShootingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShootingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ThreeBodyes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShootingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShootingComponent_Shoot, "Shoot" }, // 3843562968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapons/ShootingComponent.h" },
		{ "ModuleRelativePath", "Weapons/ShootingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShootingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShootingComponent_Statics::ClassParams = {
		&UShootingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShootingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShootingComponent_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UShootingComponent, 2606016740);
	template<> THREEBODYES_API UClass* StaticClass<UShootingComponent>()
	{
		return UShootingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShootingComponent(Z_Construct_UClass_UShootingComponent, &UShootingComponent::StaticClass, TEXT("/Script/ThreeBodyes"), TEXT("UShootingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShootingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
