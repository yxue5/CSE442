// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSparks/Private/RT/UGSRTVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGSRTVector() {}
// Cross Module References
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTVector_NoRegister();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_CreateRTVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_GetW();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_GetX();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_GetY();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_GetZ();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_HasW();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_HasX();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_HasY();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_HasZ();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_SetFromFVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_SetW();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_SetX();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_SetXY();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_SetXYZ();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_SetXYZW();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_SetY();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTVector_SetZ();
// End Cross Module References
	void UGSRTVector::StaticRegisterNativesUGSRTVector()
	{
		UClass* Class = UGSRTVector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRTVector", &UGSRTVector::execCreateRTVector },
			{ "GetW", &UGSRTVector::execGetW },
			{ "GetX", &UGSRTVector::execGetX },
			{ "GetY", &UGSRTVector::execGetY },
			{ "GetZ", &UGSRTVector::execGetZ },
			{ "HasW", &UGSRTVector::execHasW },
			{ "HasX", &UGSRTVector::execHasX },
			{ "HasY", &UGSRTVector::execHasY },
			{ "HasZ", &UGSRTVector::execHasZ },
			{ "SetFromFVector", &UGSRTVector::execSetFromFVector },
			{ "SetW", &UGSRTVector::execSetW },
			{ "SetX", &UGSRTVector::execSetX },
			{ "SetXY", &UGSRTVector::execSetXY },
			{ "SetXYZ", &UGSRTVector::execSetXYZ },
			{ "SetXYZW", &UGSRTVector::execSetXYZW },
			{ "SetY", &UGSRTVector::execSetY },
			{ "SetZ", &UGSRTVector::execSetZ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics
	{
		struct GSRTVector_eventCreateRTVector_Parms
		{
			UObject* WorldContextObject;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventCreateRTVector_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventCreateRTVector_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Create GS RT Vector" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
		{ "ToolTip", "Create a new GS Vector object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "CreateRTVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(GSRTVector_eventCreateRTVector_Parms), Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_CreateRTVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_CreateRTVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_GetW_Statics
	{
		struct GSRTVector_eventGetW_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_GetW_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventGetW_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_GetW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_GetW_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_GetW_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_GetW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "GetW", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventGetW_Parms), Z_Construct_UFunction_UGSRTVector_GetW_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_GetW_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_GetW_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_GetW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_GetW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_GetW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_GetX_Statics
	{
		struct GSRTVector_eventGetX_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_GetX_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventGetX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_GetX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_GetX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_GetX_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_GetX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "GetX", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventGetX_Parms), Z_Construct_UFunction_UGSRTVector_GetX_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_GetX_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_GetX_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_GetX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_GetX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_GetX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_GetY_Statics
	{
		struct GSRTVector_eventGetY_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_GetY_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventGetY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_GetY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_GetY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_GetY_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_GetY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "GetY", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventGetY_Parms), Z_Construct_UFunction_UGSRTVector_GetY_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_GetY_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_GetY_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_GetY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_GetY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_GetY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_GetZ_Statics
	{
		struct GSRTVector_eventGetZ_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_GetZ_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventGetZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_GetZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_GetZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_GetZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_GetZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "GetZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventGetZ_Parms), Z_Construct_UFunction_UGSRTVector_GetZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_GetZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_GetZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_GetZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_GetZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_GetZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_HasW_Statics
	{
		struct GSRTVector_eventHasW_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTVector_HasW_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTVector_eventHasW_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTVector_HasW_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTVector_eventHasW_Parms), &Z_Construct_UFunction_UGSRTVector_HasW_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_HasW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_HasW_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_HasW_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_HasW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "HasW", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventHasW_Parms), Z_Construct_UFunction_UGSRTVector_HasW_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_HasW_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_HasW_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_HasW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_HasW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_HasW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_HasX_Statics
	{
		struct GSRTVector_eventHasX_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTVector_HasX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTVector_eventHasX_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTVector_HasX_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTVector_eventHasX_Parms), &Z_Construct_UFunction_UGSRTVector_HasX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_HasX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_HasX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_HasX_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_HasX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "HasX", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventHasX_Parms), Z_Construct_UFunction_UGSRTVector_HasX_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_HasX_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_HasX_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_HasX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_HasX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_HasX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_HasY_Statics
	{
		struct GSRTVector_eventHasY_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTVector_HasY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTVector_eventHasY_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTVector_HasY_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTVector_eventHasY_Parms), &Z_Construct_UFunction_UGSRTVector_HasY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_HasY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_HasY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_HasY_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_HasY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "HasY", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventHasY_Parms), Z_Construct_UFunction_UGSRTVector_HasY_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_HasY_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_HasY_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_HasY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_HasY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_HasY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_HasZ_Statics
	{
		struct GSRTVector_eventHasZ_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTVector_HasZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTVector_eventHasZ_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTVector_HasZ_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTVector_eventHasZ_Parms), &Z_Construct_UFunction_UGSRTVector_HasZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_HasZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_HasZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_HasZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_HasZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "HasZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventHasZ_Parms), Z_Construct_UFunction_UGSRTVector_HasZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_HasZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_HasZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_HasZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_HasZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_HasZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics
	{
		struct GSRTVector_eventSetFromFVector_Parms
		{
			FVector v;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_v_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_v;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetFromFVector_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::NewProp_v_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::NewProp_v = { UE4CodeGen_Private::EPropertyClass::Struct, "v", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetFromFVector_Parms, v), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::NewProp_v_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::NewProp_v_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::NewProp_v,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "SetFromFVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C20401, sizeof(GSRTVector_eventSetFromFVector_Parms), Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_SetFromFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_SetFromFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_SetW_Statics
	{
		struct GSRTVector_eventSetW_Parms
		{
			float w;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_SetW_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetW_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetW_Statics::NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetW_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_SetW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetW_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetW_Statics::NewProp_w,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_SetW_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_SetW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "SetW", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventSetW_Parms), Z_Construct_UFunction_UGSRTVector_SetW_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetW_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_SetW_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_SetW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_SetW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_SetX_Statics
	{
		struct GSRTVector_eventSetX_Parms
		{
			float x;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_SetX_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetX_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetX_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetX_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_SetX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetX_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetX_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_SetX_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_SetX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "SetX", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventSetX_Parms), Z_Construct_UFunction_UGSRTVector_SetX_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetX_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_SetX_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_SetX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_SetX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_SetXY_Statics
	{
		struct GSRTVector_eventSetXY_Parms
		{
			float x;
			float y;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_SetXY_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXY_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetXY_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXY_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetXY_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXY_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_SetXY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXY_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXY_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXY_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_SetXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_SetXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "SetXY", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventSetXY_Parms), Z_Construct_UFunction_UGSRTVector_SetXY_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetXY_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_SetXY_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_SetXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_SetXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics
	{
		struct GSRTVector_eventSetXYZ_Parms
		{
			float x;
			float y;
			float z;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXYZ_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXYZ_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXYZ_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXYZ_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "SetXYZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventSetXYZ_Parms), Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_SetXYZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_SetXYZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics
	{
		struct GSRTVector_eventSetXYZW_Parms
		{
			float x;
			float y;
			float z;
			float w;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXYZW_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXYZW_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXYZW_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXYZW_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetXYZW_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "SetXYZW", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventSetXYZW_Parms), Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_SetXYZW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_SetXYZW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_SetY_Statics
	{
		struct GSRTVector_eventSetY_Parms
		{
			float y;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_SetY_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetY_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetY_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetY_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_SetY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetY_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetY_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_SetY_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_SetY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "SetY", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventSetY_Parms), Z_Construct_UFunction_UGSRTVector_SetY_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetY_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_SetY_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_SetY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_SetY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTVector_SetZ_Statics
	{
		struct GSRTVector_eventSetZ_Parms
		{
			float z;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTVector_SetZ_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetZ_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTVector_SetZ_Statics::NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTVector_eventSetZ_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTVector_SetZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetZ_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTVector_SetZ_Statics::NewProp_z,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTVector_SetZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Vector" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTVector_SetZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTVector, "SetZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTVector_eventSetZ_Parms), Z_Construct_UFunction_UGSRTVector_SetZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTVector_SetZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTVector_SetZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTVector_SetZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTVector_SetZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGSRTVector_NoRegister()
	{
		return UGSRTVector::StaticClass();
	}
	struct Z_Construct_UClass_UGSRTVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSRTVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSRTVector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSRTVector_CreateRTVector, "CreateRTVector" }, // 4198149791
		{ &Z_Construct_UFunction_UGSRTVector_GetW, "GetW" }, // 317415399
		{ &Z_Construct_UFunction_UGSRTVector_GetX, "GetX" }, // 2933899409
		{ &Z_Construct_UFunction_UGSRTVector_GetY, "GetY" }, // 2158575842
		{ &Z_Construct_UFunction_UGSRTVector_GetZ, "GetZ" }, // 4063412343
		{ &Z_Construct_UFunction_UGSRTVector_HasW, "HasW" }, // 949791585
		{ &Z_Construct_UFunction_UGSRTVector_HasX, "HasX" }, // 740569080
		{ &Z_Construct_UFunction_UGSRTVector_HasY, "HasY" }, // 3548801166
		{ &Z_Construct_UFunction_UGSRTVector_HasZ, "HasZ" }, // 3617701027
		{ &Z_Construct_UFunction_UGSRTVector_SetFromFVector, "SetFromFVector" }, // 861400670
		{ &Z_Construct_UFunction_UGSRTVector_SetW, "SetW" }, // 1167745681
		{ &Z_Construct_UFunction_UGSRTVector_SetX, "SetX" }, // 3420231779
		{ &Z_Construct_UFunction_UGSRTVector_SetXY, "SetXY" }, // 1154372478
		{ &Z_Construct_UFunction_UGSRTVector_SetXYZ, "SetXYZ" }, // 2254988039
		{ &Z_Construct_UFunction_UGSRTVector_SetXYZW, "SetXYZW" }, // 3848279339
		{ &Z_Construct_UFunction_UGSRTVector_SetY, "SetY" }, // 2063932835
		{ &Z_Construct_UFunction_UGSRTVector_SetZ, "SetZ" }, // 2930675284
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRTVector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RT/UGSRTVector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/RT/UGSRTVector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSRTVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSRTVector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGSRTVector_Statics::ClassParams = {
		&UGSRTVector::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGSRTVector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGSRTVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSRTVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGSRTVector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGSRTVector, 2212384775);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGSRTVector(Z_Construct_UClass_UGSRTVector, &UGSRTVector::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGSRTVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSRTVector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
