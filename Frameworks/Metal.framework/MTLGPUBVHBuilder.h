/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLGPUBVHBuilder : MTLBVHBuilder {
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
    struct PipelineCache<PipelineKey> { 
        struct unordered_map<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, std::allocator<std::pair<const PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>>> { 
            struct __hash_table<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, std::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, true>, std::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, std::equal_to<PipelineCache<PipelineKey>::HashKey>, PipelineCache<PipelineKey>::Hasher, true>, std::allocator<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, true>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>>, std::equal_to<PipelineCache<PipelineKey>::HashKey>, PipelineCache<PipelineKey>::Hasher, true>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } map; 
    }  _pipelineCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pipelineCacheLock;
    unsigned long long  _threadgroupSize;
}

+ (unsigned long long)breadthFirstLayoutScratchBufferSizeWithLeafNodeCapacity:(unsigned long long)arg1;
+ (unsigned long long)getBatchCountForFragmentCapacity:(unsigned long long)arg1;
+ (unsigned long long)prefixSumScratchBufferSizeWithCapacity:(unsigned long long)arg1;
+ (bool)supportsDevice:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPrefixSumsWithEncoder:(id)arg1 inputBuffer:(id)arg2 inputBufferOffset:(unsigned long long)arg3 reducedBuffer:(id)arg4 reducedBufferOffset:(unsigned long long)arg5 countBuffer:(id)arg6 countBufferOffset:(unsigned long long)arg7 capacity:(unsigned long long)arg8;
- (void)buildGenericBVHWithEncoder:(id)arg1 descriptor:(id)arg2 outputBuffer:(id)arg3 outputBufferOffset:(unsigned long long)arg4 scratchBuffer:(id)arg5 scratchBufferOffset:(unsigned long long)arg6;
- (void)buildWithEncoder:(id)arg1 descriptor:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(unsigned long long)arg4 fragmentBuffer:(id)arg5 fragmentBufferOffset:(unsigned long long)arg6 sourceFragmentIndexBuffer:(id)arg7 sourceFragmentIndexBufferOffset:(unsigned long long)arg8 destinationFragmentIndexBuffer:(id)arg9 destinationFragmentIndexBufferOffset:(unsigned long long)arg10 nodeBuffer:(id)arg11 nodeBufferOffset:(unsigned long long)arg12 childIndexBuffer:(id)arg13 childIndexBufferOffset:(unsigned long long)arg14 counterBuffer:(id)arg15 counterBufferOffset:(unsigned long long)arg16 fragmentCountBuffer:(id)arg17 fragmentCountBufferOffset:(unsigned long long)arg18 boundsMinBuffer:(id)arg19 boundsMinBufferOffset:(unsigned long long)arg20 boundsMaxBuffer:(id)arg21 boundsMaxBufferOffset:(unsigned long long)arg22 boundsEndMinBuffer:(id)arg23 boundsEndMinBufferOffset:(unsigned long long)arg24 boundsEndMaxBuffer:(id)arg25 boundsEndMaxBufferOffset:(unsigned long long)arg26 boundsEndTimeBuffer:(id)arg27 boundsEndTimeBufferOffset:(unsigned long long)arg28 boundsStartTimeBuffer:(id)arg29 boundsStartTimeBufferOffset:(unsigned long long)arg30 resourceBuffer:(id)arg31;
- (void)copyAndCompactMTLSWBVHWithEncoder:(id)arg1 sourceBuffer:(id)arg2 sourceBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 destinationBufferOffset:(unsigned long long)arg5 destinationUniqueIdentifier:(unsigned long long)arg6;
- (void)copyFromBuffer:(id)arg1 sourceBufferOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationBufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 encoder:(id)arg6;
- (void)copyMTLSWBVHWithEncoder:(id)arg1 sourceBuffer:(id)arg2 sourceBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 destinationBufferOffset:(unsigned long long)arg5 destinationUniqueIdentifier:(unsigned long long)arg6;
- (void)copyMTLSWBVHWithEncoder:(id)arg1 sourceBuffer:(id)arg2 sourceBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 destinationBufferOffset:(unsigned long long)arg5 destinationUniqueIdentifier:(unsigned long long)arg6 compact:(bool)arg7;
- (void)dealloc;
- (void)dispatchIndirect64:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 threadCountBuffer:(id)arg4 threadCountBufferOffset:(unsigned long long)arg5 threadCountIndex:(unsigned long long)arg6 threadgroupDivisor:(unsigned long long)arg7 encoder:(id)arg8;
- (void)dispatchIndirect:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 counterBuffer:(id)arg4 counterBufferOffset:(unsigned long long)arg5 counterIndex:(unsigned long long)arg6 threadgroupDivisor:(unsigned long long)arg7 encoder:(id)arg8;
- (void)dispatchIndirect:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 threadCountBuffer:(id)arg4 threadCountBufferOffset:(unsigned long long)arg5 threadCountIndex:(unsigned long long)arg6 threadgroupDivisor:(unsigned long long)arg7 encoder:(id)arg8;
- (void)encodeMTLSWBVHWithEncoder:(id)arg1 descriptor:(id)arg2 outputBuffer:(id)arg3 outputBufferOffset:(unsigned long long)arg4 genericBVHBuffer:(id)arg5 genericBVHBufferOffset:(unsigned long long)arg6 scratchBuffer:(id)arg7 scratchBufferOffset:(unsigned long long)arg8 uniqueIdentifier:(unsigned long long)arg9;
- (void)fastIndirectGPUMemcpyWithEncoder:(id)arg1 srcBuffer:(id)arg2 srcBufferOffset:(unsigned long long)arg3 dstBuffer:(id)arg4 dstBufferOffset:(unsigned long long)arg5 lengthBuffer:(id)arg6 lengthOffset:(unsigned long long)arg7 retainedResources:(id)arg8;
- (void)getBoundingBoxFragmentsWithEncoder:(id)arg1 descriptor:(id)arg2 fragmentBuffer:(id)arg3 fragmentBufferOffset:(unsigned long long)arg4 fragmentCountBuffer:(id)arg5 fragmentCountBufferOffset:(unsigned long long)arg6 boundsMinBuffer:(id)arg7 boundsMinBufferOffset:(unsigned long long)arg8 boundsMaxBuffer:(id)arg9 boundsMaxBufferOffset:(unsigned long long)arg10 boundsEndMinBuffer:(id)arg11 boundsEndMinBufferOffset:(unsigned long long)arg12 boundsEndMaxBuffer:(id)arg13 boundsEndMaxBufferOffset:(unsigned long long)arg14 boundsEndTimeBuffer:(id)arg15 boundsEndTimeBufferOffset:(unsigned long long)arg16 boundsStartTimeBuffer:(id)arg17 boundsStartTimeBufferOffset:(unsigned long long)arg18 resourceBuffer:(id)arg19;
- (unsigned long long)getBuildScratchBufferSizeForDescriptor:(id)arg1;
- (unsigned long long)getEncodeMTLSWBVHScratchBufferSizeForDescriptor:(id)arg1;
- (unsigned long long)getGenericBVHSizeForDescriptor:(id)arg1;
- (unsigned long long)getGenericBVHSizeForDescriptor:(id)arg1 nodeOffset:(unsigned long long*)arg2 fragmentOffset:(unsigned long long*)arg3 fragmentIndexOffset:(unsigned long long*)arg4 childIndexOffset:(unsigned long long*)arg5;
- (void)getMTLInstanceBoundingBoxesWithEncoder:(id)arg1 descriptor:(id)arg2 boundingBoxBuffer:(id)arg3 boundingBoxBufferOffset:(unsigned long long)arg4;
- (unsigned long long)getMTLSWBVHSizeForDescriptor:(id)arg1;
- (unsigned long long)getMTLSWBVHSizeForDescriptor:(id)arg1 innerNodeOffset:(unsigned long long*)arg2 leafNodeOffset:(unsigned long long*)arg3 primitiveOffset:(unsigned long long*)arg4 geometryOffset:(unsigned long long*)arg5 primitiveBVHOffset:(unsigned long long*)arg6 transformOffset:(unsigned long long*)arg7;
- (id)getPipeline:(unsigned long long)arg1;
- (id)getPipeline:(unsigned long long)arg1 descriptor:(id)arg2;
- (id)getPipeline:(unsigned long long)arg1 motion:(bool)arg2;
- (id)getPipelineWithKey:(struct PipelineKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; bool x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; float x10; float x11; float x12; bool x13; bool x14; bool x15; unsigned int x16; bool x17; })arg1;
- (void)getPolygonFragmentsWithEncoder:(id)arg1 descriptor:(id)arg2 fragmentBuffer:(id)arg3 fragmentBufferOffset:(unsigned long long)arg4 fragmentCountBuffer:(id)arg5 fragmentCountBufferOffset:(unsigned long long)arg6 boundsMinBuffer:(id)arg7 boundsMinBufferOffset:(unsigned long long)arg8 boundsMaxBuffer:(id)arg9 boundsMaxBufferOffset:(unsigned long long)arg10 boundsEndMinBuffer:(id)arg11 boundsEndMinBufferOffset:(unsigned long long)arg12 boundsEndMaxBuffer:(id)arg13 boundsEndMaxBufferOffset:(unsigned long long)arg14 boundsEndTimeBuffer:(id)arg15 boundsEndTimeBufferOffset:(unsigned long long)arg16 boundsStartTimeBuffer:(id)arg17 boundsStartTimeBufferOffset:(unsigned long long)arg18 resourceBuffer:(id)arg19;
- (unsigned long long)getRefitScratchBufferSizeForDescriptor:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)layoutNodesBreadthFirstWithEncoder:(id)arg1 descriptor:(id)arg2 BVHBuffer:(id)arg3 BVHBufferOffset:(unsigned long long)arg4 counterBuffer:(id)arg5 counterBufferOffset:(unsigned long long)arg6 nodeMappingBuffer:(id)arg7 nodeMappingBufferOffset:(unsigned long long)arg8 scratchBuffer:(id)arg9 scratchBufferOffset:(unsigned long long)arg10;
- (id)newGeometryBufferWithGeometryDescriptors:(id)arg1 retainedResources:(id)arg2;
- (id)newIndirectBufferWithRetainedResources:(id)arg1;
- (id)newInstanceBufferWithBVHs:(id)arg1 retainedResources:(id)arg2 encoder:(id)arg3;
- (id)newPipelineWithKey:(struct PipelineKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; bool x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; float x10; float x11; float x12; bool x13; bool x14; bool x15; unsigned int x16; bool x17; })arg1;
- (id)newResourceBufferWithDescriptor:(id)arg1 retainedResources:(id)arg2;
- (void)prefixSumWithEncoder:(id)arg1 inputBuffer:(id)arg2 inputBufferOffset:(unsigned long long)arg3 reducedBuffer:(id)arg4 reducedBufferOffset:(unsigned long long)arg5 scratchBuffer:(id)arg6 scratchBufferOffset:(unsigned long long)arg7 countBuffer:(id)arg8 countBufferOffset:(unsigned long long)arg9 capacity:(unsigned long long)arg10;
- (void)refitMTLSWBVHWithEncoder:(id)arg1 descriptor:(id)arg2 sourceBuffer:(id)arg3 sourceBufferOffset:(unsigned long long)arg4 destinationBuffer:(id)arg5 destinationBufferOffset:(unsigned long long)arg6 destinationUniqueIdentifier:(unsigned long long)arg7 scratchBuffer:(id)arg8 scratchBufferOffset:(unsigned long long)arg9;
- (id)retainedResourcesArrayWithEncoder:(id)arg1;
- (void)setCounterInBuffer:(id)arg1 offset:(unsigned long long)arg2 index:(unsigned long long)arg3 value:(unsigned long long)arg4 encoder:(id)arg5;
- (void)swapCountersInBuffer:(id)arg1 offset:(unsigned long long)arg2 counterIndex1:(unsigned long long)arg3 counterIndex2:(unsigned long long)arg4 encoder:(id)arg5;
- (void)threadgroupPrefixSumWithEncoder:(id)arg1 inputBuffer:(id)arg2 inputBufferOffset:(unsigned long long)arg3 reducedBuffer:(id)arg4 reducedBufferOffset:(unsigned long long)arg5 countBuffer:(id)arg6 countBufferOffset:(unsigned long long)arg7 capacity:(unsigned long long)arg8;
- (bool)useResourceBufferForDescriptor:(id)arg1;
- (bool)useSpatialSplitsForDescriptor:(id)arg1;
- (void)writeBVHHeaderWithEncoder:(id)arg1 descriptor:(id)arg2 tmpCounterBuffer:(id)arg3 tmpCounterBufferOffset:(unsigned long long)arg4 nodeBuffer:(id)arg5 nodeBufferOffset:(unsigned long long)arg6 headerBuffer:(id)arg7 headerBufferOffset:(unsigned long long)arg8 nodeOffset:(unsigned long long)arg9 fragmentOffset:(unsigned long long)arg10 fragmentIndexOffset:(unsigned long long)arg11 childIndexOffset:(unsigned long long)arg12 size:(unsigned long long)arg13;
- (void)writeCompactedMTLSWBVHSizeWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 sizeBufferOffset:(unsigned long long)arg5 sizeDataType:(unsigned long long)arg6;
- (void)writeDeserializedMTLSWBVHSizeWithEncoder:(id)arg1 serializedBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 sizeBufferOffset:(unsigned long long)arg5;
- (void)writeDeserializedMTLSWBVHWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 primitiveAccelerationStructures:(id)arg4 fromBuffer:(id)arg5 serializedBufferOffset:(unsigned long long)arg6 uniqueIdentifier:(unsigned long long)arg7;
- (void)writeDeserializedMTLSWPrimitiveBVHSizesWithEncoder:(id)arg1 serializedBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 sizesBufferOffset:(unsigned long long)arg5;
- (void)writeGenericBVHStructureSizesWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 sizesBufferOffset:(unsigned long long)arg5;
- (void)writeGenericBVHStructureWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 header:(id)arg4 headerBufferOffset:(unsigned long long)arg5 innerNodes:(id)arg6 innerNodeBufferOffset:(unsigned long long)arg7 leafNodes:(id)arg8 leafNodeBufferOffset:(unsigned long long)arg9 primitives:(id)arg10 primitiveBufferOffset:(unsigned long long)arg11 geometry:(id)arg12 geometryOffset:(unsigned long long)arg13 instanceTransform:(id)arg14 instanceTransformOffset:(unsigned long long)arg15;
- (void)writeMTLSWBVHSizeWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 sizeBufferOffset:(unsigned long long)arg5;
- (void)writeSerializationDataWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 destinationBufferOffset:(unsigned long long)arg5;
- (void)writeSerializedGeometryPrimitiveCountWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 countBufferOffset:(unsigned long long)arg5;
- (void)writeSerializedGeometrySizeWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 sizeBufferOffset:(unsigned long long)arg5;
- (void)writeSerializedGeometryWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 geometryBufferOffset:(unsigned long long)arg5;
- (void)writeSerializedMTLSWBVHRawSizeWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 sizeBufferOffset:(unsigned long long)arg5;
- (void)writeSerializedMTLSWBVHSizeWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 toBuffer:(id)arg4 sizeBufferOffset:(unsigned long long)arg5;
- (void)writeSerializedMTLSWBVHWithEncoder:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(unsigned long long)arg3 primitiveAccelerationStructures:(id)arg4 toBuffer:(id)arg5 serializedBufferOffset:(unsigned long long)arg6;

@end
