// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSparks/Private/RT/UGSRTData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGSRTData() {}
// Cross Module References
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTData_NoRegister();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_CreateRTData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetData();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetFloat();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetFVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetInt();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetString();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetVector();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTVector_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasData();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasFloat();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasInt();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasString();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasVector();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetData();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetFloat();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetFVector();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetInt();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetString();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetVector();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_ToString();
// End Cross Module References
	void UGSRTData::StaticRegisterNativesUGSRTData()
	{
		UClass* Class = UGSRTData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRTData", &UGSRTData::execCreateRTData },
			{ "GetData", &UGSRTData::execGetData },
			{ "GetFloat", &UGSRTData::execGetFloat },
			{ "GetFVector", &UGSRTData::execGetFVector },
			{ "GetInt", &UGSRTData::execGetInt },
			{ "GetString", &UGSRTData::execGetString },
			{ "GetVector", &UGSRTData::execGetVector },
			{ "HasData", &UGSRTData::execHasData },
			{ "HasFloat", &UGSRTData::execHasFloat },
			{ "HasInt", &UGSRTData::execHasInt },
			{ "HasString", &UGSRTData::execHasString },
			{ "HasVector", &UGSRTData::execHasVector },
			{ "SetData", &UGSRTData::execSetData },
			{ "SetFloat", &UGSRTData::execSetFloat },
			{ "SetFVector", &UGSRTData::execSetFVector },
			{ "SetInt", &UGSRTData::execSetInt },
			{ "SetString", &UGSRTData::execSetString },
			{ "SetVector", &UGSRTData::execSetVector },
			{ "ToString", &UGSRTData::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSRTData_CreateRTData_Statics
	{
		struct GSRTData_eventCreateRTData_Parms
		{
			UObject* WorldContextObject;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventCreateRTData_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventCreateRTData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Create GS RT Data" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
		{ "ToolTip", "Create a new GS Data object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "CreateRTData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(GSRTData_eventCreateRTData_Parms), Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_CreateRTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetData_Statics
	{
		struct GSRTData_eventGetData_Parms
		{
			int32 index;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_GetData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetData_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetData_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetData_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "GetData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventGetData_Parms), Z_Construct_UFunction_UGSRTData_GetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetFloat_Statics
	{
		struct GSRTData_eventGetFloat_Parms
		{
			int32 index;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTData_GetFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetFloat_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetFloat_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetFloat_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "GetFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventGetFloat_Parms), Z_Construct_UFunction_UGSRTData_GetFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetFVector_Statics
	{
		struct GSRTData_eventGetFVector_Parms
		{
			int32 index;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSRTData_GetFVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetFVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetFVector_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetFVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetFVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetFVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetFVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetFVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "GetFVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(GSRTData_eventGetFVector_Parms), Z_Construct_UFunction_UGSRTData_GetFVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetFVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetFVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetInt_Statics
	{
		struct GSRTData_eventGetInt_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetInt_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetInt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetInt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "GetInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventGetInt_Parms), Z_Construct_UFunction_UGSRTData_GetInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetString_Statics
	{
		struct GSRTData_eventGetString_Parms
		{
			int32 index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSRTData_GetString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetString_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetString_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetString_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "GetString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventGetString_Parms), Z_Construct_UFunction_UGSRTData_GetString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetVector_Statics
	{
		struct GSRTData_eventGetVector_Parms
		{
			int32 index;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_GetVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetVector_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetVector_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventGetVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "GetVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventGetVector_Parms), Z_Construct_UFunction_UGSRTData_GetVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasData_Statics
	{
		struct GSRTData_eventHasData_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTData_eventHasData_Parms), &Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventHasData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "HasData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventHasData_Parms), Z_Construct_UFunction_UGSRTData_HasData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasFloat_Statics
	{
		struct GSRTData_eventHasFloat_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTData_eventHasFloat_Parms), &Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventHasFloat_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "HasFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventHasFloat_Parms), Z_Construct_UFunction_UGSRTData_HasFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasInt_Statics
	{
		struct GSRTData_eventHasInt_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTData_eventHasInt_Parms), &Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventHasInt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "HasInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventHasInt_Parms), Z_Construct_UFunction_UGSRTData_HasInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasString_Statics
	{
		struct GSRTData_eventHasString_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTData_eventHasString_Parms), &Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventHasString_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "HasString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventHasString_Parms), Z_Construct_UFunction_UGSRTData_HasString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasVector_Statics
	{
		struct GSRTData_eventHasVector_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTData_eventHasVector_Parms), &Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventHasVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "HasVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventHasVector_Parms), Z_Construct_UFunction_UGSRTData_HasVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetData_Statics
	{
		struct GSRTData_eventSetData_Parms
		{
			int32 index;
			UGSRTData* value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetData_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetData_Parms, value), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "SetData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventSetData_Parms), Z_Construct_UFunction_UGSRTData_SetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetFloat_Statics
	{
		struct GSRTData_eventSetFloat_Parms
		{
			int32 index;
			float value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetFloat_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetFloat_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "SetFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventSetFloat_Parms), Z_Construct_UFunction_UGSRTData_SetFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetFVector_Statics
	{
		struct GSRTData_eventSetFVector_Parms
		{
			int32 index;
			FVector value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetFVector_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Struct, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetFVector_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetFVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetFVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetFVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "SetFVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C20401, sizeof(GSRTData_eventSetFVector_Parms), Z_Construct_UFunction_UGSRTData_SetFVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetInt_Statics
	{
		struct GSRTData_eventSetInt_Parms
		{
			int32 index;
			int32 value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetInt_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Int, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetInt_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetInt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "SetInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventSetInt_Parms), Z_Construct_UFunction_UGSRTData_SetInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetString_Statics
	{
		struct GSRTData_eventSetString_Parms
		{
			int32 index;
			FString value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetString_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetString_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetString_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "SetString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventSetString_Parms), Z_Construct_UFunction_UGSRTData_SetString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetVector_Statics
	{
		struct GSRTData_eventSetVector_Parms
		{
			int32 index;
			UGSRTVector* value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetVector_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetVector_Parms, value), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTData_eventSetVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "SetVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventSetVector_Parms), Z_Construct_UFunction_UGSRTData_SetVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_ToString_Statics
	{
		struct GSRTData_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSRTData_ToString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTData_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, "ToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTData_eventToString_Parms), Z_Construct_UFunction_UGSRTData_ToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_ToString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_ToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGSRTData_NoRegister()
	{
		return UGSRTData::StaticClass();
	}
	struct Z_Construct_UClass_UGSRTData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSRTData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSRTData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSRTData_CreateRTData, "CreateRTData" }, // 1466798418
		{ &Z_Construct_UFunction_UGSRTData_GetData, "GetData" }, // 1432865491
		{ &Z_Construct_UFunction_UGSRTData_GetFloat, "GetFloat" }, // 2713684511
		{ &Z_Construct_UFunction_UGSRTData_GetFVector, "GetFVector" }, // 256493983
		{ &Z_Construct_UFunction_UGSRTData_GetInt, "GetInt" }, // 1029956847
		{ &Z_Construct_UFunction_UGSRTData_GetString, "GetString" }, // 1315916069
		{ &Z_Construct_UFunction_UGSRTData_GetVector, "GetVector" }, // 1130118478
		{ &Z_Construct_UFunction_UGSRTData_HasData, "HasData" }, // 2769230876
		{ &Z_Construct_UFunction_UGSRTData_HasFloat, "HasFloat" }, // 2485784648
		{ &Z_Construct_UFunction_UGSRTData_HasInt, "HasInt" }, // 102237322
		{ &Z_Construct_UFunction_UGSRTData_HasString, "HasString" }, // 1811529931
		{ &Z_Construct_UFunction_UGSRTData_HasVector, "HasVector" }, // 1032925075
		{ &Z_Construct_UFunction_UGSRTData_SetData, "SetData" }, // 1094668934
		{ &Z_Construct_UFunction_UGSRTData_SetFloat, "SetFloat" }, // 3772256102
		{ &Z_Construct_UFunction_UGSRTData_SetFVector, "SetFVector" }, // 3749941092
		{ &Z_Construct_UFunction_UGSRTData_SetInt, "SetInt" }, // 2368599098
		{ &Z_Construct_UFunction_UGSRTData_SetString, "SetString" }, // 2399953954
		{ &Z_Construct_UFunction_UGSRTData_SetVector, "SetVector" }, // 308604831
		{ &Z_Construct_UFunction_UGSRTData_ToString, "ToString" }, // 3308662112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRTData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RT/UGSRTData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSRTData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSRTData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGSRTData_Statics::ClassParams = {
		&UGSRTData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGSRTData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGSRTData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSRTData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGSRTData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGSRTData, 3732026577);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGSRTData(Z_Construct_UClass_UGSRTData, &UGSRTData::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGSRTData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSRTData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
