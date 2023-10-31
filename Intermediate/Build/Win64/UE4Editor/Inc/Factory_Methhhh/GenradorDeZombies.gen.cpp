// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory_Methhhh/GenradorDeZombies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenradorDeZombies() {}
// Cross Module References
	FACTORY_METHHHH_API UClass* Z_Construct_UClass_AGenradorDeZombies_NoRegister();
	FACTORY_METHHHH_API UClass* Z_Construct_UClass_AGenradorDeZombies();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Factory_Methhhh();
// End Cross Module References
	void AGenradorDeZombies::StaticRegisterNativesAGenradorDeZombies()
	{
	}
	UClass* Z_Construct_UClass_AGenradorDeZombies_NoRegister()
	{
		return AGenradorDeZombies::StaticClass();
	}
	struct Z_Construct_UClass_AGenradorDeZombies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenradorDeZombies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Factory_Methhhh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenradorDeZombies_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenradorDeZombies.h" },
		{ "ModuleRelativePath", "GenradorDeZombies.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenradorDeZombies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenradorDeZombies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGenradorDeZombies_Statics::ClassParams = {
		&AGenradorDeZombies::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGenradorDeZombies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGenradorDeZombies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenradorDeZombies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGenradorDeZombies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGenradorDeZombies, 2757452449);
	template<> FACTORY_METHHHH_API UClass* StaticClass<AGenradorDeZombies>()
	{
		return AGenradorDeZombies::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenradorDeZombies(Z_Construct_UClass_AGenradorDeZombies, &AGenradorDeZombies::StaticClass, TEXT("/Script/Factory_Methhhh"), TEXT("AGenradorDeZombies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenradorDeZombies);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
