// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/TouchInputGetK2Node.h"

#ifdef TOUCHENGINEEDITOR_TouchInputGetK2Node_generated_h
#error "TouchInputGetK2Node.generated.h already included, missing '#pragma once' in TouchInputGetK2Node.h"
#endif
#define TOUCHENGINEEDITOR_TouchInputGetK2Node_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTouchInputGetK2Node *****************************************************
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchInputGetK2Node_NoRegister();

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchInputGetK2Node(); \
	friend struct Z_Construct_UClass_UTouchInputGetK2Node_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchInputGetK2Node_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchInputGetK2Node, UTouchK2NodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchEngineEditor"), Z_Construct_UClass_UTouchInputGetK2Node_NoRegister) \
	DECLARE_SERIALIZER(UTouchInputGetK2Node)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchInputGetK2Node(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchInputGetK2Node(UTouchInputGetK2Node&&) = delete; \
	UTouchInputGetK2Node(const UTouchInputGetK2Node&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchInputGetK2Node); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchInputGetK2Node); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchInputGetK2Node) \
	NO_API virtual ~UTouchInputGetK2Node();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_23_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_26_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchInputGetK2Node;

// ********** End Class UTouchInputGetK2Node *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
