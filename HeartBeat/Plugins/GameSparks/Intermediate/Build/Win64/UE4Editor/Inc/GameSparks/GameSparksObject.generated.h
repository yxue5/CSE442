// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMESPARKS_GameSparksObject_generated_h
#error "GameSparksObject.generated.h already included, missing '#pragma once' in GameSparksObject.h"
#endif
#define GAMESPARKS_GameSparksObject_generated_h

#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_56_DELEGATE \
struct GameSparksObject_eventOnGameSparksLogEvent_Parms \
{ \
	FString logMessage; \
}; \
static inline void FOnGameSparksLogEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGameSparksLogEvent, const FString& logMessage) \
{ \
	GameSparksObject_eventOnGameSparksLogEvent_Parms Parms; \
	Parms.logMessage=logMessage; \
	OnGameSparksLogEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_50_DELEGATE \
static inline void FOnGameSparksNotConnected_DelegateWrapper(const FMulticastScriptDelegate& OnGameSparksNotConnected) \
{ \
	OnGameSparksNotConnected.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_44_DELEGATE \
struct GameSparksObject_eventOnGameSparksAvailable_Parms \
{ \
	bool available; \
}; \
static inline void FOnGameSparksAvailable_DelegateWrapper(const FMulticastScriptDelegate& OnGameSparksAvailable, bool available) \
{ \
	GameSparksObject_eventOnGameSparksAvailable_Parms Parms; \
	Parms.available=available ? true : false; \
	OnGameSparksAvailable.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAuthenticated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAuthenticated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisconnect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Disconnect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Logout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetApiDomain) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_domain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetApiDomain(Z_Param_domain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetApiStage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_stage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetApiStage(Z_Param_stage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetApiCredential) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_credential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetApiCredential(Z_Param_credential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_apikey); \
		P_GET_PROPERTY(UStrProperty,Z_Param_secret); \
		P_GET_UBOOL(Z_Param_previewServer); \
		P_GET_UBOOL(Z_Param_clearCachedAuthentication); \
		P_GET_UBOOL(Z_Param_dontRetryAfterDisconnect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Connect(Z_Param_apikey,Z_Param_secret,Z_Param_previewServer,Z_Param_clearCachedAuthentication,Z_Param_dontRetryAfterDisconnect); \
		P_NATIVE_END; \
	}


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAuthenticated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAuthenticated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisconnect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Disconnect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Logout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetApiDomain) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_domain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetApiDomain(Z_Param_domain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetApiStage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_stage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetApiStage(Z_Param_stage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetApiCredential) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_credential); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetApiCredential(Z_Param_credential); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_apikey); \
		P_GET_PROPERTY(UStrProperty,Z_Param_secret); \
		P_GET_UBOOL(Z_Param_previewServer); \
		P_GET_UBOOL(Z_Param_clearCachedAuthentication); \
		P_GET_UBOOL(Z_Param_dontRetryAfterDisconnect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Connect(Z_Param_apikey,Z_Param_secret,Z_Param_previewServer,Z_Param_clearCachedAuthentication,Z_Param_dontRetryAfterDisconnect); \
		P_NATIVE_END; \
	}


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSparksObject(); \
	friend struct Z_Construct_UClass_UGameSparksObject_Statics; \
public: \
	DECLARE_CLASS(UGameSparksObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksObject)


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUGameSparksObject(); \
	friend struct Z_Construct_UClass_UGameSparksObject_Statics; \
public: \
	DECLARE_CLASS(UGameSparksObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksObject)


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSparksObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksObject(UGameSparksObject&&); \
	NO_API UGameSparksObject(const UGameSparksObject&); \
public:


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksObject(UGameSparksObject&&); \
	NO_API UGameSparksObject(const UGameSparksObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksObject)


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_PRIVATE_PROPERTY_OFFSET
#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_7_PROLOG
#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_PRIVATE_PROPERTY_OFFSET \
	HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_RPC_WRAPPERS \
	HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_INCLASS \
	HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_PRIVATE_PROPERTY_OFFSET \
	HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_INCLASS_NO_PURE_DECLS \
	HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HeartBeat_Plugins_GameSparks_Source_GameSparks_Private_GameSparksObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
