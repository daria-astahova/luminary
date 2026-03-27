// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factory/ToxAssetFactory.h"

#ifdef TOUCHENGINEEDITOR_ToxAssetFactory_generated_h
#error "ToxAssetFactory.generated.h already included, missing '#pragma once' in ToxAssetFactory.h"
#endif
#define TOUCHENGINEEDITOR_ToxAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToxAssetFactory *********************************************************
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UToxAssetFactory_NoRegister();

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToxAssetFactory(); \
	friend struct Z_Construct_UClass_UToxAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UToxAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UToxAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchEngineEditor"), Z_Construct_UClass_UToxAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UToxAssetFactory)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToxAssetFactory(UToxAssetFactory&&) = delete; \
	UToxAssetFactory(const UToxAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToxAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToxAssetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToxAssetFactory) \
	NO_API virtual ~UToxAssetFactory();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h_24_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToxAssetFactory;

// ********** End Class UToxAssetFactory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
