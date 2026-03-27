// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TouchEngineInfo.h"

#ifdef TOUCHENGINE_TouchEngineInfo_generated_h
#error "TouchEngineInfo.generated.h already included, missing '#pragma once' in TouchEngineInfo.h"
#endif
#define TOUCHENGINE_TouchEngineInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTouchEngineInfo *********************************************************
TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineInfo_NoRegister();

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchEngineInfo(); \
	friend struct Z_Construct_UClass_UTouchEngineInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHENGINE_API UClass* Z_Construct_UClass_UTouchEngineInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchEngineInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchEngine"), Z_Construct_UClass_UTouchEngineInfo_NoRegister) \
	DECLARE_SERIALIZER(UTouchEngineInfo)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchEngineInfo(UTouchEngineInfo&&) = delete; \
	UTouchEngineInfo(const UTouchEngineInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchEngineInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchEngineInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTouchEngineInfo) \
	NO_API virtual ~UTouchEngineInfo();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h_51_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h_54_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchEngineInfo;

// ********** End Class UTouchEngineInfo ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
