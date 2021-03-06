//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUGLVariablesViewContentProvider : GPUVariablesViewContentProvider
{
    GPUGLStateMirror *_stateMirror;
    GPUGLStateMirror *_comparisonStateMirror;
    ContextStateMirror_e2d92de6 _defaultCtx;
    struct ProgramUniform<GPUGLSMObjectTypes> _defaultUniform;
    struct TextureLayer<GPUGLSMObjectTypes> _defaultTexLayer;
    TextureObject_d19e20a8 _defaultTex;
    SamplerObject_9ed82924 _defaultSampler;
    TransformFeedbackObject_66e309a2 _defaultTransformFeedback;
    BufferObject_20ffc69a _defaultBuffer;
    RenderbufferObject_9cc06c11 _defaultRenderbuffer;
    struct FramebufferAttachment<GPUGLSMObjectTypes> _defaultAttachment;
    FramebufferObject_36862a27 _defaultFramebuffer;
    struct ShaderObject<GPUGLSMObjectTypes> _defaultShader;
    ProgramObject_8ea7d896 _defaultProgram;
    ProgramUniformBlock_2e5dc428 _defaultUniformBlock;
    ProgramPipelineObject_da0e83c7 _defaultPipeline;
    VertexArrayObject_3583c142 _defaultVAO;
    QueryObject_91271560 _defaultQuery;
    struct SyncObject<GPUGLSMObjectTypes> _defaultSync;
    NSMutableSet *_activeUniformBlocks;
    NSMutableArray *_uniformBuffers;
    BOOL _drawCallFootprintIsAvailable;
    unsigned int _objectID;
    int _objectType;
}

@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
@property(nonatomic) unsigned int objectID; // @synthesize objectID=_objectID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)imageToUseInDefaultQuickLookForNode:(id)arg1;
- (id)imageForNode:(id)arg1;
- (BOOL)deleteNode:(id)arg1;
- (void)provideScopeChoices:(id)arg1;
- (void)updateFilteredList;
- (void)_updateFilteredListForContextInfo;
- (void)_updateFilteredListForAllObjects;
- (void)_updateFilteredListForBoundObjects;
- (void)_updateStateNameAndValue:(id)arg1 forBindPoint:(unsigned int)arg2;
- (id)_CreateProgramTransformFeedbackVaryings:(const ProgramObject_8ea7d896 *)arg1;
- (id)_generateFrameStatsContent:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_generateSyncContent:(unsigned int)arg1 usingContext:(ContextStateMirror_e2d92de6 *)arg2;
- (id)_generateQueryContent:(const QueryObject_91271560 *)arg1 queryID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_generateVAOContent:(const VertexArrayObject_3583c142 *)arg1 vaoID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_generateVAOArrayContent:(const VertexArrayObject_3583c142 *)arg1 vaoID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3 usingVAOArrayListIndex:(unsigned int)arg4 usingIndex:(unsigned int)arg5;
- (id)_generateProgramPipelineContent:(const ProgramPipelineObject_da0e83c7 *)arg1 pipelineID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_generateProgramContent:(const ProgramObject_8ea7d896 *)arg1 programID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3 withPrefix:(id)arg4;
- (id)_generateProgramPerformanceContent:(unsigned int)arg1 separable:(BOOL)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_generateShaderContent:(unsigned int)arg1 usingContext:(ContextStateMirror_e2d92de6 *)arg2;
- (id)_generateFramebufferContent:(const FramebufferObject_36862a27 *)arg1 framebufferID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_generateFramebufferAttachmentContent:(const FramebufferObject_36862a27 *)arg1 usingAttachment:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_generateRenderbufferContent:(const RenderbufferObject_9cc06c11 *)arg1 renderbufferID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_generateBufferContent:(const BufferObject_20ffc69a *)arg1 bufferID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_valueStringForBufferEnum:(const struct ObjectStateEnum *)arg1 buffer:(const BufferObject_20ffc69a *)arg2;
- (id)_generateTransformFeedbackContent:(const TransformFeedbackObject_66e309a2 *)arg1 transformFeedbackID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_generateSamplerContent:(const SamplerObject_9ed82924 *)arg1 samplerID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_generateTextureUnitContent:(unsigned int)arg1 usingContext:(ContextStateMirror_e2d92de6 *)arg2;
- (id)_generateTextureContent:(const TextureObject_d19e20a8 *)arg1 textureID:(unsigned int)arg2 usingContext:(ContextStateMirror_e2d92de6 *)arg3;
- (id)_getAnnotatedTextureName:(unsigned int)arg1 usingContext:(ContextStateMirror_e2d92de6 *)arg2;
- (id)_generateTextureLayerContent:(const TextureObject_d19e20a8 *)arg1 target:(unsigned int)arg2 level:(int)arg3 layer:(int)arg4 createSubgroup:(_Bool)arg5 usingContext:(ContextStateMirror_e2d92de6 *)arg6;
- (id)_generateActiveAttribContent:(const ProgramAttrib_445f7eb7 *)arg1 location:(int)arg2;
- (id)_generateUniformBlockContent:(const ProgramUniformBlock_2e5dc428 *)arg1 index:(unsigned int)arg2 comparisonUniformBlock:(const ProgramUniformBlock_2e5dc428 *)arg3 functionalityLevel:(int)arg4 isProgramUsedInDraw:(_Bool)arg5;
- (void)_EnumerateUniformBlockReferencingShaderBits:(CDUnknownBlockType)arg1;
- (void)_updateFilteredListForAuto;
- (void)_addEnumState:(unsigned int)arg1 toArray:(id)arg2;
- (void)addAnalyzerFindingContent:(id)arg1 toArray:(id)arg2;
- (void)addFrameStatsContent:(ContextStateMirror_e2d92de6 *)arg1 toArray:(id)arg2;
- (void)addTransformFeedbackContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addSamplerContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addSyncContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addQueryContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addShaderContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addProgramPerformanceContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addProgramContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addPipelinePerformanceContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addProgramPipelineContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addFramebufferContent:(unsigned long long)arg1 forBinding:(unsigned int)arg2 fromContext:(ContextStateMirror_e2d92de6 *)arg3 toArray:(id)arg4;
- (void)addFramebufferContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addRenderbufferContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addVAOContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addBufferContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addTextureUnitContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addTextureContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2 toArray:(id)arg3;
- (void)addBufferContent:(unsigned int)arg1 forBinding:(int)arg2 fromContext:(ContextStateMirror_e2d92de6 *)arg3 toArray:(id)arg4;
- (void)addBufferContent:(unsigned int)arg1 forTarget:(int)arg2 fromContext:(ContextStateMirror_e2d92de6 *)arg3 toArray:(id)arg4;
- (void)addObjectContent:(unsigned int)arg1 forType:(int)arg2 fromContext:(ContextStateMirror_e2d92de6 *)arg3 toArray:(id)arg4;
- (void)_updateFilteredListForContext;
- (void)_addExtensions:(id)arg1 forContext:(ContextStateMirror_e2d92de6 *)arg2;
- (void)_addContextState:(int)arg1 toArray:(id)arg2 unitIndex:(int)arg3;
- (void)_addContextState:(int)arg1 toArray:(id)arg2;
- (void)_addStateValue:(id)arg1 withName:(id)arg2 toArray:(id)arg3;
- (id)_convertEnumString:(basic_string_805fe43b *)arg1;
- (_Bool)_getStateElement:(int)arg1 usingIndex:(int)arg2 forStateGroup:(int)arg3 usingContext:(ContextStateMirror_e2d92de6 *)arg4 returningString:(basic_string_805fe43b *)arg5;
- (id)_getCondensedStateGroupSummary:(int)arg1 fromContext:(ContextStateMirror_e2d92de6 *)arg2;
- (id)_getCondensedFixedCurrentVertexSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedTexEnvSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedPerUnitTexEnvSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1 unitIndex:(int)arg2;
- (id)_getCondensedTexEnvChannelSummary:(ContextStateMirror_e2d92de6 *)arg1 channelSetup:(struct TexEnvChannelSetup *)arg2 isRGBA:(_Bool)arg3;
- (id)_getTexEnvSrcString:(unsigned int)arg1 operand:(unsigned int)arg2 isRGBA:(_Bool)arg3;
- (id)_getCondensedPointParamsSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedMatrixSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_classifyMatrix:(CDStruct_461fb6ec *)arg1;
- (id)_getCondensedMaterialSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedLightModelSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedPerLightSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1 index:(int)arg2;
- (id)_getCondensedLightSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedFogSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedClipDistanceSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedPerClipPlaneSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1 index:(int)arg2;
- (id)_getCondensedClipPlaneSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedAlphaTestSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedErrorStatusSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedScissorSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedMultisamplingSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedPolygonOffsetSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedColorSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedCullingSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedDepthSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedBlendSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedBlendResultForChannel:(struct BlendChannelSetup *)arg1;
- (id)_getCondensedStencilSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedStencilSummaryForSide:(struct StencilSideSetup *)arg1;
- (id)_getCondensedActiveSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_getCondensedViewportSummaryFromContext:(ContextStateMirror_e2d92de6 *)arg1;
- (id)_cullString:(unsigned int)arg1;
- (id)_blendFactorString:(unsigned int)arg1;
- (id)_actionString:(unsigned int)arg1;
- (id)_funcWordString:(unsigned int)arg1;
- (id)_stencilFuncString:(unsigned int)arg1;
- (id)_funcString:(unsigned int)arg1;
- (id)_stringFromEnum:(int)arg1 showFalseAsNone:(_Bool)arg2;
- (void)setSharedUIStateObj:(id)arg1;
- (void)_updateUniformValueAtIndex:(unsigned long long)arg1 parentValue:(id)arg2 buffer:(id)arg3 offset:(long long)arg4;
- (void)_updateUniformBlockValuesWithBuffer:(id)arg1;
- (void)updateCurrentLocation:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIdentifier:(id)arg1;

@end