// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory_Methhhh/Factory_MethhhhGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory_MethhhhGameModeBase() {}
// Cross Module References
	FACTORY_METHHHH_API UClass* Z_Construct_UClass_AFactory_MethhhhGameModeBase_NoRegister();
	FACTORY_METHHHH_API UClass* Z_Construct_UClass_AFactory_MethhhhGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Factory_Methhhh();
// End Cross Module References
	void AFactory_MethhhhGameModeBase::StaticRegisterNativesAFactory_MethhhhGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFactory_MethhhhGameModeBase_NoRegister()
	{
		return AFactory_MethhhhGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFactory_MethhhhGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFactory_MethhhhGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Factory_Methhhh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFactory_MethhhhGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Factory_MethhhhGameModeBase.h" },
		{ "ModuleRelativePath", "Factory_MethhhhGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFactory_MethhhhGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactory_MethhhhGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFactory_MethhhhGameModeBase_Statics::ClassParams = {
		&AFactory_MethhhhGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFactory_MethhhhGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFactory_MethhhhGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFactory_MethhhhGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFactory_MethhhhGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFactory_MethhhhGameModeBase, 2834259273);
	template<> FACTORY_METHHHH_API UClass* StaticClass<AFactory_MethhhhGameModeBase>()
	{
		return AFactory_MethhhhGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFactory_MethhhhGameModeBase(Z_Construct_UClass_AFactory_MethhhhGameModeBase, &AFactory_MethhhhGameModeBase::StaticClass, TEXT("/Script/Factory_Methhhh"), TEXT("AFactory_MethhhhGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFactory_MethhhhGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
