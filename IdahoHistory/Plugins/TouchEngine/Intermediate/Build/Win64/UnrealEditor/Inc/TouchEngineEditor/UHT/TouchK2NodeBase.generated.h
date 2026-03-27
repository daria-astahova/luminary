// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/TouchK2NodeBase.h"

#ifdef TOUCHENGINEEDITOR_TouchK2NodeBase_generated_h
#error "TouchK2NodeBase.generated.h already included, missing '#pragma once' in TouchK2NodeBase.h"
#endif
#define TOUCHENGINEEDITOR_TouchK2NodeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTouchK2NodeBase *********************************************************
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase_NoRegister();

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchK2NodeBase(); \
	friend struct Z_Construct_UClass_UTouchK2NodeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchK2NodeBase, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchEngineEditor"), Z_Construct_UClass_UTouchK2NodeBase_NoRegister) \
	DECLARE_SERIALIZER(UTouchK2NodeBase)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchK2NodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchK2NodeBase(UTouchK2NodeBase&&) = delete; \
	UTouchK2NodeBase(const UTouchK2NodeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchK2NodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchK2NodeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchK2NodeBase) \
	NO_API virtual ~UTouchK2NodeBase();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h_24_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchK2NodeBase;

// ********** End Class UTouchK2NodeBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchK2NodeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
