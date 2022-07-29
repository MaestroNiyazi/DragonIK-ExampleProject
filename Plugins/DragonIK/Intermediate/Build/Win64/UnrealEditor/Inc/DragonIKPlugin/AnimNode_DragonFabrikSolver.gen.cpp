// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/AnimNode_DragonFabrikSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_DragonFabrikSolver() {}
// Cross Module References
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_DragonFabrikSolver>() == std::is_polymorphic<FAnimNode_DragonControlBase>(), "USTRUCT FAnimNode_DragonFabrikSolver cannot be polymorphic unless super FAnimNode_DragonControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_DragonFabrikSolver;
class UScriptStruct* FAnimNode_DragonFabrikSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_DragonFabrikSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_DragonFabrikSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("AnimNode_DragonFabrikSolver"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_DragonFabrikSolver.OuterSingleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FAnimNode_DragonFabrikSolver>()
{
	return FAnimNode_DragonFabrikSolver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSplineBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartSplineBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndSplineBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndSplineBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintInternalUseOnly)\n" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFabrikSolver.h" },
		{ "ToolTip", "USTRUCT(BlueprintInternalUseOnly)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_DragonFabrikSolver>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_StartSplineBone_MetaData[] = {
		{ "Category", "ComponentDirectionSettings" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFabrikSolver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_StartSplineBone = { "StartSplineBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFabrikSolver, StartSplineBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_StartSplineBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_StartSplineBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_EndSplineBone_MetaData[] = {
		{ "Category", "ComponentDirectionSettings" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFabrikSolver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_EndSplineBone = { "EndSplineBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFabrikSolver, EndSplineBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_EndSplineBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_EndSplineBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "ComponentDirectionSettings" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFabrikSolver.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFabrikSolver, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "ComponentDirectionSettings" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFabrikSolver.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFabrikSolver, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Target_Transform_MetaData[] = {
		{ "Category", "ComponentDirectionSettings" },
		{ "DisplayName", "Transform Target" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFabrikSolver.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Target_Transform = { "Target_Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFabrikSolver, Target_Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Target_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Target_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_StartSplineBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_EndSplineBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewProp_Target_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		Z_Construct_UScriptStruct_FAnimNode_DragonControlBase,
		&NewStructOps,
		"AnimNode_DragonFabrikSolver",
		sizeof(FAnimNode_DragonFabrikSolver),
		alignof(FAnimNode_DragonFabrikSolver),
		Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_DragonFabrikSolver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_DragonFabrikSolver.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_DragonFabrikSolver.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonFabrikSolver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonFabrikSolver_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_DragonFabrikSolver::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver_Statics::NewStructOps, TEXT("AnimNode_DragonFabrikSolver"), &Z_Registration_Info_UScriptStruct_AnimNode_DragonFabrikSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_DragonFabrikSolver), 1006192385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonFabrikSolver_h_3821165242(TEXT("/Script/DragonIKPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonFabrikSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DragonIKPlugin_Source_DragonIKPlugin_Public_AnimNode_DragonFabrikSolver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
