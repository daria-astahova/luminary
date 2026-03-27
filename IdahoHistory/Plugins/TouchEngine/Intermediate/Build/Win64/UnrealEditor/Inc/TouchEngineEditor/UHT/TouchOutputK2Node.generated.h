// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/TouchOutputK2Node.h"

#ifdef TOUCHENGINEEDITOR_TouchOutputK2Node_generated_h
#error "TouchOutputK2Node.generated.h already included, missing '#pragma once' in TouchOutputK2Node.h"
#endif
#define TOUCHENGINEEDITOR_TouchOutputK2Node_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTouchOutputK2Node *******************************************************
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchOutputK2Node_NoRegister();

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchOutputK2Node(); \
	friend struct Z_Construct_UClass_UTouchOutputK2Node_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchOutputK2Node_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchOutputK2Node, UTouchK2NodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchEngineEditor"), Z_Construct_UClass_UTouchOutputK2Node_NoRegister) \
	DECLARE_SERIALIZER(UTouchOutputK2Node)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchOutputK2Node(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchOutputK2Node(UTouchOutputK2Node&&) = delete; \
	UTouchOutputK2Node(const UTouchOutputK2Node&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchOutputK2Node); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchOutputK2Node); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchOutputK2Node) \
	NO_API virtual ~UTouchOutputK2Node();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_24_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchOutputK2Node;

// ********** End Class UTouchOutputK2Node *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
