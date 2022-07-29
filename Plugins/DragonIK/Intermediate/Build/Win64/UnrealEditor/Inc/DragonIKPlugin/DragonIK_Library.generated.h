// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRAGONIKPLUGIN_DragonIK_Library_generated_h
#error "DragonIK_Library.generated.h already included, missing '#pragma once' in DragonIK_Library.h"
#endif
#define DRAGONIKPLUGIN_DragonIK_Library_generated_h

#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_340_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDragonData_WarpLimbsData_Statics; \
	DRAGONIKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<struct FDragonData_WarpLimbsData>();

#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_419_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDragonData_SingleArmElement_Statics; \
	DRAGONIKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<struct FDragonData_SingleArmElement>();

#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_444_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDragonData_Overrided_Location_Data_Statics; \
	DRAGONIKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<struct FDragonData_Overrided_Location_Data>();

#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_462_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDragonData_ArmsData_Statics; \
	DRAGONIKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<struct FDragonData_ArmsData>();

#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_738_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDragonData_FingerData_Statics; \
	DRAGONIKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<struct FDragonData_FingerData>();

#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_776_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDragonData_FootData_Statics; \
	DRAGONIKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<struct FDragonData_FootData>();

#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_927_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics; \
	DRAGONIKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<struct FDragonData_MultiInput>();

#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_956_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink_Statics; \
	DRAGONIKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<struct FCCDIK_Modified_ChainLink>();

#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_SPARSE_DATA
#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLookAtRotation_V3); \
	DECLARE_FUNCTION(execQuatLookXatLocation); \
	DECLARE_FUNCTION(execLookAtVector_V2); \
	DECLARE_FUNCTION(execCustomLookRotation);


#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLookAtRotation_V3); \
	DECLARE_FUNCTION(execQuatLookXatLocation); \
	DECLARE_FUNCTION(execLookAtVector_V2); \
	DECLARE_FUNCTION(execCustomLookRotation);


#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDragonIK_Library(); \
	friend struct Z_Construct_UClass_UDragonIK_Library_Statics; \
public: \
	DECLARE_CLASS(UDragonIK_Library, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DragonIKPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDragonIK_Library)


#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_INCLASS \
private: \
	static void StaticRegisterNativesUDragonIK_Library(); \
	friend struct Z_Construct_UClass_UDragonIK_Library_Statics; \
public: \
	DECLARE_CLASS(UDragonIK_Library, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DragonIKPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDragonIK_Library)


#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDragonIK_Library(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragonIK_Library) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDragonIK_Library); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragonIK_Library); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDragonIK_Library(UDragonIK_Library&&); \
	NO_API UDragonIK_Library(const UDragonIK_Library&); \
public:


#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDragonIK_Library(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDragonIK_Library(UDragonIK_Library&&); \
	NO_API UDragonIK_Library(const UDragonIK_Library&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDragonIK_Library); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragonIK_Library); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragonIK_Library)


#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1043_PROLOG
#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_SPARSE_DATA \
	FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_RPC_WRAPPERS \
	FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_INCLASS \
	FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_SPARSE_DATA \
	FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h_1046_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRAGONIKPLUGIN_API UClass* StaticClass<class UDragonIK_Library>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_DragonIK_Library_h


#define FOREACH_ENUM_ETWIST_TYPE_DRAGONIK(op) \
	op(ETwist_Type_DragonIK::ENUM_PoseAxisTwist) \
	op(ETwist_Type_DragonIK::ENUM_UpAxisTwist) 

enum class ETwist_Type_DragonIK : uint8;
template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<ETwist_Type_DragonIK>();

#define FOREACH_ENUM_EPOLE_SYSTEM_DRAGONIK(op) \
	op(EPole_System_DragonIK::ENUM_SinglePoleSystem) \
	op(EPole_System_DragonIK::ENUM_NSEWPoleSystem) 

enum class EPole_System_DragonIK : uint8;
template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EPole_System_DragonIK>();

#define FOREACH_ENUM_EROTATION_TYPE_DRAGONIK(op) \
	op(ERotation_Type_DragonIK::ENUM_AdditiveRotation) \
	op(ERotation_Type_DragonIK::ENUM_ReplaceRotation) 

enum class ERotation_Type_DragonIK : uint8;
template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<ERotation_Type_DragonIK>();

#define FOREACH_ENUM_EIKTRACE_TYPE_PLUGIN(op) \
	op(EIKTrace_Type_Plugin::ENUM_LineTrace_Type) \
	op(EIKTrace_Type_Plugin::ENUM_SphereTrace_Type) \
	op(EIKTrace_Type_Plugin::ENUM_BoxTrace_Type) 

enum class EIKTrace_Type_Plugin : uint8;
template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EIKTrace_Type_Plugin>();

#define FOREACH_ENUM_EINTERPOLOCATION_TYPE_PLUGIN(op) \
	op(EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp) \
	op(EInterpoLocation_Type_Plugin::ENUM_LegacyLoc_Interp) 

enum class EInterpoLocation_Type_Plugin : uint8;
template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EInterpoLocation_Type_Plugin>();

#define FOREACH_ENUM_EINTERPOROTATION_TYPE_PLUGIN(op) \
	op(EInterpoRotation_Type_Plugin::ENUM_DivisiveRot_Interp) \
	op(EInterpoRotation_Type_Plugin::ENUM_LegacyRot_Interp) 

enum class EInterpoRotation_Type_Plugin : uint8;
template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EInterpoRotation_Type_Plugin>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
