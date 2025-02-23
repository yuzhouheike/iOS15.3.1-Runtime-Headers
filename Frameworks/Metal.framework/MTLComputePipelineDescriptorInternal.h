/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {
    struct FlatBufferBuilder { 
        struct vector_downward { 
            struct Allocator {} *allocator_; 
            bool own_allocator_; 
            unsigned long long initial_size_; 
            unsigned long long buffer_minalign_; 
            unsigned long long reserved_; 
            char *buf_; 
            char *cur_; 
            char *scratch_; 
        } buf_; 
        unsigned int num_field_loc; 
        unsigned short max_voffset_; 
        bool nested; 
        bool finished; 
        unsigned long long minalign_; 
        bool force_defaults_; 
        bool dedup_vtables_; 
        void *string_pool; 
    }  _builder;
    struct MTLComputePipelineDescriptorPrivate { 
        NSString *label; 
        <MTLFunction> *computeFunction; 
        bool threadGroupSizeIsMultipleOfThreadExecutionWidth; 
        unsigned short maxTotalThreadsPerThreadgroup; 
        MTLStageInputOutputDescriptor *stageInputDescriptor; 
        NSDictionary *driverCompilerOptions; 
        MTLPipelineBufferDescriptorArrayInternal *buffers; 
        NSArray *binaryArchives; 
        union { 
            NSArray *preloadedLibraries; 
            id insertLibraries; 
            /* Warning: Unrecognized filer type: ')' using 'void*' */ void*NSArray; 
            <MTLPipelineLibrary> *pipelineLibrary; 
            bool supportIndirectCommandBuffers; 
            long long textureWriteRoundingMode; 
            bool forceResourceIndex; 
            unsigned long long resourceIndex; 
            NSDictionary *pluginData; 
            bool needsCustomBorderColorSamplers; 
            unsigned int openGLMode : 1; 
            unsigned int openCLMode : 1; 
            unsigned int reserved : 30; 
            NSArray *functionPointers; 
            NSDictionary *functionPointerGroups; 
            MTLLinkedFunctions *linkedFunctions; 
            unsigned long long maxStackCallDepth; 
            bool supportAddingBinaryFunctions; 
        } ; 
    }  _private;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct MTLComputePipelineDescriptorPrivate { id x1; id x2; bool x3; unsigned short x4; id x5; id x6; id x7; id x8; union { id x_9_1_1; id x_9_1_2; } x9; id x10; bool x11; long long x12; bool x13; unsigned long long x14; id x15; bool x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 30; id x20; id x21; id x22; unsigned long long x23; bool x24; }*)_descriptorPrivate;
- (id)binaryArchives;
- (id)binaryLibraries;
- (id)buffers;
- (id)computeFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)driverCompilerOptions;
- (id)dynamicLibraries;
- (bool)forceResourceIndex;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionPointerGroups;
- (id)functionPointers;
- (const void*)getPipelineScript;
- (unsigned long long)hash;
- (id)init;
- (id)insertLibraries;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)linkedFunctions;
- (unsigned long long)maxCallStackDepth;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (bool)needsCustomBorderColorSamplers;
- (id)newSerializedComputeData;
- (id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (bool)openCLModeEnabled;
- (bool)openGLModeEnabled;
- (id)pipelineLibrary;
- (id)pluginData;
- (id)preloadedLibraries;
- (void)reset;
- (unsigned long long)resourceIndex;
- (void)setBinaryArchives:(id)arg1;
- (void)setBinaryLibraries:(id)arg1;
- (void)setComputeFunction:(id)arg1;
- (void)setDriverCompilerOptions:(id)arg1;
- (void)setDynamicLibraries:(id)arg1;
- (void)setForceResourceIndex:(bool)arg1;
- (void)setFunctionPointerGroups:(id)arg1;
- (void)setFunctionPointers:(id)arg1;
- (void)setInsertLibraries:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLinkedFunctions:(id)arg1;
- (void)setMaxCallStackDepth:(unsigned long long)arg1;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (void)setNeedsCustomBorderColorSamplers:(bool)arg1;
- (void)setOpenCLModeEnabled:(bool)arg1;
- (void)setOpenGLModeEnabled:(bool)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (void)setPluginData:(id)arg1;
- (void)setPreloadedLibraries:(id)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setStageInputDescriptor:(id)arg1;
- (void)setSupportAddingBinaryFunctions:(bool)arg1;
- (void)setSupportIndirectCommandBuffers:(bool)arg1;
- (void)setTextureWriteFPRoundingMode:(long long)arg1;
- (void)setTextureWriteRoundingMode:(long long)arg1;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg1;
- (id)stageInputDescriptor;
- (bool)supportAddingBinaryFunctions;
- (bool)supportIndirectCommandBuffers;
- (long long)textureWriteFPRoundingMode;
- (long long)textureWriteRoundingMode;
- (bool)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)validateWithDevice:(id)arg1;
- (bool)validateWithDevice:(id)arg1 error:(id*)arg2;

@end
