// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPluginEditor/Public/AnimGraphNode_DragonWarpSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_DragonWarpSolver() {}
// Cross Module References
	DRAGONIKPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_NoRegister();
	DRAGONIKPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_DragonIKPluginEditor();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonWarpSolver();
// End Cross Module References
	void UAnimGraphNode_DragonWarpSolver::StaticRegisterNativesUAnimGraphNode_DragonWarpSolver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_DragonWarpSolver);
	UClass* Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_NoRegister()
	{
		return UAnimGraphNode_DragonWarpSolver::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPluginEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AnimGraphNode_DragonWarpSolver.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_DragonWarpSolver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::NewProp_ik_node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_DragonWarpSolver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::NewProp_ik_node = { "ik_node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_DragonWarpSolver, ik_node), Z_Construct_UScriptStruct_FAnimNode_DragonWarpSolver, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::NewProp_ik_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::NewProp_ik_node_MetaData)) }; // 2795930364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::NewProp_ik_node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_DragonWarpSolver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::ClassParams = {
		&UAnimGraphNode_DragonWarpSolver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_DragonWarpSolver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_DragonWarpSolver.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_DragonWarpSolver.OuterSingleton;
	}
	template<> DRAGONIKPLUGINEDITOR_API UClass* StaticClass<UAnimGraphNode_DragonWarpSolver>()
	{
		return UAnimGraphNode_DragonWarpSolver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_DragonWarpSolver);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonWarpSolver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonWarpSolver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_DragonWarpSolver, UAnimGraphNode_DragonWarpSolver::StaticClass, TEXT("UAnimGraphNode_DragonWarpSolver"), &Z_Registration_Info_UClass_UAnimGraphNode_DragonWarpSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_DragonWarpSolver), 3118931013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonWarpSolver_h_308323356(TEXT("/Script/DragonIKPluginEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonWarpSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPluginEditor_Public_AnimGraphNode_DragonWarpSolver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
