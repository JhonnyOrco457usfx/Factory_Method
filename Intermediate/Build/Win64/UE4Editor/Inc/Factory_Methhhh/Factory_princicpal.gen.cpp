// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory_Methhhh/Factory_princicpal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory_princicpal() {}
// Cross Module References
	FACTORY_METHHHH_API UClass* Z_Construct_UClass_AFactory_princicpal_NoRegister();
	FACTORY_METHHHH_API UClass* Z_Construct_UClass_AFactory_princicpal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Factory_Methhhh();
// End Cross Module References
	void AFactory_princicpal::StaticRegisterNativesAFactory_princicpal()
	{
	}
	UClass* Z_Construct_UClass_AFactory_princicpal_NoRegister()
	{
		return AFactory_princicpal::StaticClass();
	}
	struct Z_Construct_UClass_AFactory_princicpal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFactory_princicpal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Factory_Methhhh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFactory_princicpal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class AZombie;\n" },
		{ "IncludePath", "Factory_princicpal.h" },
		{ "ModuleRelativePath", "Factory_princicpal.h" },
		{ "ToolTip", "class AZombie;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFactory_princicpal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactory_princicpal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFactory_princicpal_Statics::ClassParams = {
		&AFactory_princicpal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFactory_princicpal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFactory_princicpal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFactory_princicpal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFactory_princicpal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFactory_princicpal, 3381104186);
	template<> FACTORY_METHHHH_API UClass* StaticClass<AFactory_princicpal>()
	{
		return AFactory_princicpal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFactory_princicpal(Z_Construct_UClass_AFactory_princicpal, &AFactory_princicpal::StaticClass, TEXT("/Script/Factory_Methhhh"), TEXT("AFactory_princicpal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFactory_princicpal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
