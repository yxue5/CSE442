// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSparks/Private/GameSparksLogEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSparksLogEventData() {}
// Cross Module References
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksLogEventData_NoRegister();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksLogEventData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetNumber();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetObject();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksScriptData_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetString();
// End Cross Module References
	void UGameSparksLogEventData::StaticRegisterNativesUGameSparksLogEventData()
	{
		UClass* Class = UGameSparksLogEventData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSparksLogEventAttributes", &UGameSparksLogEventData::execCreateGameSparksLogEventAttributes },
			{ "SetNumber", &UGameSparksLogEventData::execSetNumber },
			{ "SetObject", &UGameSparksLogEventData::execSetObject },
			{ "SetString", &UGameSparksLogEventData::execSetString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics
	{
		struct GameSparksLogEventData_eventCreateGameSparksLogEventAttributes_Parms
		{
			UObject* WorldContextObject;
			UGameSparksLogEventData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventCreateGameSparksLogEventAttributes_Parms, ReturnValue), Z_Construct_UClass_UGameSparksLogEventData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventCreateGameSparksLogEventAttributes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks|Data" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Create Log Event Attributes" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
		{ "ToolTip", "Create a new Log Event Data object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksLogEventData, "CreateGameSparksLogEventAttributes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(GameSparksLogEventData_eventCreateGameSparksLogEventAttributes_Parms), Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics
	{
		struct GameSparksLogEventData_eventSetNumber_Parms
		{
			FString name;
			int32 value;
			UGameSparksLogEventData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetNumber_Parms, ReturnValue), Z_Construct_UClass_UGameSparksLogEventData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Int, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetNumber_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetNumber_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks|Data" },
		{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksLogEventData, "SetNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GameSparksLogEventData_eventSetNumber_Parms), Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksLogEventData_SetNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics
	{
		struct GameSparksLogEventData_eventSetObject_Parms
		{
			FString name;
			UGameSparksScriptData* value;
			UGameSparksLogEventData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetObject_Parms, ReturnValue), Z_Construct_UClass_UGameSparksLogEventData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetObject_Parms, value), Z_Construct_UClass_UGameSparksScriptData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetObject_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks|Data" },
		{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksLogEventData, "SetObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GameSparksLogEventData_eventSetObject_Parms), Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksLogEventData_SetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics
	{
		struct GameSparksLogEventData_eventSetString_Parms
		{
			FString name;
			FString value;
			UGameSparksLogEventData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetString_Parms, ReturnValue), Z_Construct_UClass_UGameSparksLogEventData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetString_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetString_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks|Data" },
		{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksLogEventData, "SetString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GameSparksLogEventData_eventSetString_Parms), Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksLogEventData_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSparksLogEventData_NoRegister()
	{
		return UGameSparksLogEventData::StaticClass();
	}
	struct Z_Construct_UClass_UGameSparksLogEventData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_objects;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_objects_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_objects_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_numbers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_numbers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_numbers_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_numbers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strings_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_strings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strings_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strings_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSparksLogEventData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSparksLogEventData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes, "CreateGameSparksLogEventAttributes" }, // 3674220734
		{ &Z_Construct_UFunction_UGameSparksLogEventData_SetNumber, "SetNumber" }, // 3505811380
		{ &Z_Construct_UFunction_UGameSparksLogEventData_SetObject, "SetObject" }, // 1275558731
		{ &Z_Construct_UFunction_UGameSparksLogEventData_SetString, "SetString" }, // 3066015607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSparksLogEventData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameSparksLogEventData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_objects_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_objects = { UE4CodeGen_Private::EPropertyClass::Map, "m_objects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameSparksLogEventData, m_objects), METADATA_PARAMS(Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_objects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_objects_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_objects_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "m_objects_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_objects_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "m_objects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UClass_UGameSparksScriptData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_numbers_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_numbers = { UE4CodeGen_Private::EPropertyClass::Map, "m_numbers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameSparksLogEventData, m_numbers), METADATA_PARAMS(Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_numbers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_numbers_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_numbers_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "m_numbers_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_numbers_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "m_numbers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_strings_MetaData[] = {
		{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_strings = { UE4CodeGen_Private::EPropertyClass::Map, "m_strings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameSparksLogEventData, m_strings), METADATA_PARAMS(Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_strings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_strings_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_strings_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "m_strings_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_strings_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "m_strings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSparksLogEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_objects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_objects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_numbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_numbers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_numbers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_strings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_strings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksLogEventData_Statics::NewProp_m_strings_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSparksLogEventData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSparksLogEventData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSparksLogEventData_Statics::ClassParams = {
		&UGameSparksLogEventData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGameSparksLogEventData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameSparksLogEventData_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameSparksLogEventData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameSparksLogEventData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSparksLogEventData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSparksLogEventData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSparksLogEventData, 1268822794);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSparksLogEventData(Z_Construct_UClass_UGameSparksLogEventData, &UGameSparksLogEventData::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGameSparksLogEventData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSparksLogEventData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
