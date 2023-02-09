// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeBodyes/ThreeBodyesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThreeBodyesGameModeBase() {}
// Cross Module References
	THREEBODYES_API UClass* Z_Construct_UClass_AThreeBodyesGameModeBase_NoRegister();
	THREEBODYES_API UClass* Z_Construct_UClass_AThreeBodyesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThreeBodyes();
// End Cross Module References
	void AThreeBodyesGameModeBase::StaticRegisterNativesAThreeBodyesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AThreeBodyesGameModeBase_NoRegister()
	{
		return AThreeBodyesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AThreeBodyesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThreeBodyesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThreeBodyes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThreeBodyesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ThreeBodyesGameModeBase.h" },
		{ "ModuleRelativePath", "ThreeBodyesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThreeBodyesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThreeBodyesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThreeBodyesGameModeBase_Statics::ClassParams = {
		&AThreeBodyesGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AThreeBodyesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThreeBodyesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThreeBodyesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThreeBodyesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThreeBodyesGameModeBase, 488868311);
	template<> THREEBODYES_API UClass* StaticClass<AThreeBodyesGameModeBase>()
	{
		return AThreeBodyesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThreeBodyesGameModeBase(Z_Construct_UClass_AThreeBodyesGameModeBase, &AThreeBodyesGameModeBase::StaticClass, TEXT("/Script/ThreeBodyes"), TEXT("AThreeBodyesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThreeBodyesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
