// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemGameSparks/Public/StateManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateManager() {}
// Cross Module References
	ONLINESUBSYSTEMGAMESPARKS_API UClass* Z_Construct_UClass_UStateManager_NoRegister();
	ONLINESUBSYSTEMGAMESPARKS_API UClass* Z_Construct_UClass_UStateManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemGameSparks();
// End Cross Module References
	void UStateManager::StaticRegisterNativesUStateManager()
	{
	}
	UClass* Z_Construct_UClass_UStateManager_NoRegister()
	{
		return UStateManager::StaticClass();
	}
	struct Z_Construct_UClass_UStateManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemGameSparks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateManager.h" },
		{ "ModuleRelativePath", "Public/StateManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStateManager_Statics::ClassParams = {
		&UStateManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStateManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStateManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStateManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateManager, 3354468442);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateManager(Z_Construct_UClass_UStateManager, &UStateManager::StaticClass, TEXT("/Script/OnlineSubsystemGameSparks"), TEXT("UStateManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
