// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory_Methhhh/AGeneradorZombieEspeciales.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGeneradorZombieEspeciales() {}
// Cross Module References
	FACTORY_METHHHH_API UClass* Z_Construct_UClass_AAGeneradorZombieEspeciales_NoRegister();
	FACTORY_METHHHH_API UClass* Z_Construct_UClass_AAGeneradorZombieEspeciales();
	FACTORY_METHHHH_API UClass* Z_Construct_UClass_AGenradorDeZombies();
	UPackage* Z_Construct_UPackage__Script_Factory_Methhhh();
// End Cross Module References
	void AAGeneradorZombieEspeciales::StaticRegisterNativesAAGeneradorZombieEspeciales()
	{
	}
	UClass* Z_Construct_UClass_AAGeneradorZombieEspeciales_NoRegister()
	{
		return AAGeneradorZombieEspeciales::StaticClass();
	}
	struct Z_Construct_UClass_AAGeneradorZombieEspeciales_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAGeneradorZombieEspeciales_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGenradorDeZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_Factory_Methhhh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAGeneradorZombieEspeciales_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AGeneradorZombieEspeciales.h" },
		{ "ModuleRelativePath", "AGeneradorZombieEspeciales.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAGeneradorZombieEspeciales_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGeneradorZombieEspeciales>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAGeneradorZombieEspeciales_Statics::ClassParams = {
		&AAGeneradorZombieEspeciales::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAGeneradorZombieEspeciales_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAGeneradorZombieEspeciales_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAGeneradorZombieEspeciales()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAGeneradorZombieEspeciales_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAGeneradorZombieEspeciales, 1143175760);
	template<> FACTORY_METHHHH_API UClass* StaticClass<AAGeneradorZombieEspeciales>()
	{
		return AAGeneradorZombieEspeciales::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAGeneradorZombieEspeciales(Z_Construct_UClass_AAGeneradorZombieEspeciales, &AAGeneradorZombieEspeciales::StaticClass, TEXT("/Script/Factory_Methhhh"), TEXT("AAGeneradorZombieEspeciales"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAGeneradorZombieEspeciales);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
