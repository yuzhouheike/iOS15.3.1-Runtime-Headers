/* Generated by RuntimeBrowser.
 */

@protocol MTLRenderPipelineState <NSObject>

@required

- (<MTLDevice> *)device;
- (<MTLFunctionHandle> *)functionHandleWithFunction:(id <MTLFunction>)arg1 stage:(unsigned long long)arg2;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (unsigned long long)imageblockSampleLength;
- (NSString *)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (<MTLIntersectionFunctionTable> *)newIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1 stage:(unsigned long long)arg2;
- (<MTLRenderPipelineState> *)newRenderPipelineStateWithAdditionalBinaryFunctions:(MTLRenderPipelineFunctionsDescriptor *)arg1 error:(id*)arg2;
- (<MTLVisibleFunctionTable> *)newVisibleFunctionTableWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1 stage:(unsigned long long)arg2;
- (bool)supportIndirectCommandBuffers;
- (bool)threadgroupSizeMatchesTileSize;

@end
