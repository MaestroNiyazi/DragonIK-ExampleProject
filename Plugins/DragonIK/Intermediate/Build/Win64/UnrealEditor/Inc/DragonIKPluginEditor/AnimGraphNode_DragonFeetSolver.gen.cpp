// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPluginEditor/Public/AnimGraphNode_DragonFeetSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_DragonFeetSolver() {}
// Cross Module References
	DRAGONIKPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_NoRegister();
	DRAGONIKPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_DragonIKPluginEditor();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver();
// End Cross Module References
	void UAnimGraphNode_DragonFeetSolver::StaticRegisterNativesUAnimGraphNode_DragonFeetSolver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_DragonFeetSolver);
	UClass* Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_NoRegister()
	{
		return UAnimGraphNode_DragonFeetSolver::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ik_node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ik_node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPluginEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AnimGraphNode_DragonFeetSolver.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_DragonFeetSolver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::NewProp_ik_node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_DragonFeetSolver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::NewProp_ik_node = { "ik_node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_DragonFeetSolver, ik_node), Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::NewProp_ik_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::NewProp_ik_node_MetaData)) }; // 2149278070
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::NewProp_ik_node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_DragonFeetSolver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::ClassParams = {
		&UAnimGraphNode_DragonFeetSolver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_DragonFeetSolver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_DragonFeetSolver.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_DragonFeetSolver.OuterSingleton;
	}
	template<> DRAGONIKPLUGINEDITOR_API UClass* StaticClass<UAnimGraphNode_DragonFeetSolver>()
	{
		return UAnimGraphNode_DragonFeetSolver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_DragonFeetSolver);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonFeetSolver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonFeetSolver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_DragonFeetSolver, UAnimGraphNode_DragonFeetSolver::StaticClass, TEXT("UAnimGraphNode_DragonFeetSolver"), &Z_Registration_Info_UClass_UAnimGraphNode_DragonFeetSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_DragonFeetSolver), 1715553373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonFeetSolver_h_4159630855(TEXT("/Script/DragonIKPluginEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonFeetSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonFeetSolver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
