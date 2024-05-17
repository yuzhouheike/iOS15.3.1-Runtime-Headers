/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface MLCGPUDeviceOps : MLCDeviceOps {
    int  _arithmeticOp;
    NSArray * _begin;
    int  _biasesDataType;
    NSArray * _centerWeightVectors;
    id  _combinedForwardAndGradientLossKernel;
    bool  _computeWeightsAndBiasOnly;
    int  _constantArithmeticSourcesFlags;
    bool  _countIncludesPadding;
    unsigned long long  _dilationRateInX;
    unsigned long long  _dilationRateInY;
    NSArray * _end;
    id  _exportableState;
    id  _forwardKernel;
    id  _forwardStatisticsKernel;
    id  _gradientKernel;
    id  _gradientState;
    id  _gradientStatisticsKernel;
    float  _gramMatrixScale;
    bool  _isMPSGraph;
    bool  _isMPSKernel;
    unsigned long long  _kernelSizeInX;
    unsigned long long  _kernelSizeInY;
    _MLCGPULayer * _layer;
    id  _lossInitialGradientKernel;
    int  _metalKernelType;
    NSArray * _momentumVectors;
    id  _movingState;
    MLCActivationDescriptor * _neuronDescriptor;
    unsigned long long  _paddingBottom;
    unsigned long long  _paddingLeft;
    unsigned long long  _paddingRight;
    unsigned long long  _paddingTop;
    id  _poolingIndicesBuffer;
    bool  _recomputeResultTensor;
    id  _reduceLossKernel;
    unsigned long long  _scatterGatherDimension;
    int  _scatterReduceType;
    id  _secondaryGradientKernel;
    unsigned long long  _softmaxAxis;
    NSArray * _source0Shape;
    NSArray * _source1Shape;
    NSArray * _source2Shape;
    NSArray * _stride;
    unsigned long long  _strideInX;
    unsigned long long  _strideInY;
    unsigned long long  _temporaryHeapIndex;
    unsigned long long  _totalElementsPerChannel;
    NSMutableArray * _transposeGradientShape;
    NSMutableArray * _transposeShape;
    bool  _useSourceGradientDeviceMemoryForResultGradientTensor;
    bool  _useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
    NSArray * _velocityVectors;
    int  _weightsDataType;
}

@property (nonatomic) int arithmeticOp;
@property (nonatomic, copy) NSArray *begin;
@property (nonatomic) int biasesDataType;
@property (nonatomic, retain) NSArray *centerWeightVectors;
@property (nonatomic, retain) id combinedForwardAndGradientLossKernel;
@property (nonatomic) bool computeWeightsAndBiasOnly;
@property (nonatomic) int constantArithmeticSourcesFlags;
@property (nonatomic) bool countIncludesPadding;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic, copy) NSArray *end;
@property (nonatomic, retain) id exportableState;
@property (nonatomic, readonly, retain) id forwardKernel;
@property (nonatomic, retain) id forwardStatisticsKernel;
@property (nonatomic, readonly, retain) id gradientKernel;
@property (nonatomic, retain) id gradientState;
@property (nonatomic, retain) id gradientStatisticsKernel;
@property (nonatomic) float gramMatrixScale;
@property (nonatomic) bool isMPSGraph;
@property (nonatomic) bool isMPSKernel;
@property (nonatomic) unsigned long long kernelSizeInX;
@property (nonatomic) unsigned long long kernelSizeInY;
@property (nonatomic, retain) _MLCGPULayer *layer;
@property (nonatomic, retain) id lossInitialGradientKernel;
@property (nonatomic) int metalKernelType;
@property (nonatomic, retain) NSArray *momentumVectors;
@property (nonatomic, retain) id movingState;
@property (nonatomic, retain) MLCActivationDescriptor *neuronDescriptor;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic, retain) id poolingIndicesBuffer;
@property (nonatomic) bool recomputeResultTensor;
@property (nonatomic, retain) id reduceLossKernel;
@property (nonatomic) unsigned long long scatterGatherDimension;
@property (nonatomic) int scatterReduceType;
@property (nonatomic, readonly, retain) id secondaryGradientKernel;
@property (nonatomic) unsigned long long softmaxAxis;
@property (nonatomic, copy) NSArray *source0Shape;
@property (nonatomic, copy) NSArray *source1Shape;
@property (nonatomic, copy) NSArray *source2Shape;
@property (nonatomic, copy) NSArray *stride;
@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;
@property (nonatomic) unsigned long long temporaryHeapIndex;
@property (nonatomic) unsigned long long totalElementsPerChannel;
@property (nonatomic, retain) NSMutableArray *transposeGradientShape;
@property (nonatomic, retain) NSMutableArray *transposeShape;
@property (nonatomic) bool useSourceGradientDeviceMemoryForResultGradientTensor;
@property (nonatomic) bool useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
@property (nonatomic, retain) NSArray *velocityVectors;
@property (nonatomic) int weightsDataType;

+ (id)deviceOps;
+ (id)deviceOpsWithForwardKernel:(id)arg1;
+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3;
+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5;

- (void).cxx_destruct;
- (int)arithmeticOp;
- (id)begin;
- (int)biasesDataType;
- (id)centerWeightVectors;
- (id)combinedForwardAndGradientLossKernel;
- (bool)computeWeightsAndBiasOnly;
- (int)constantArithmeticSourcesFlags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)countIncludesPadding;
- (id)description;
- (unsigned long long)dilationRateInX;
- (unsigned long long)dilationRateInY;
- (id)end;
- (id)exportableState;
- (id)forwardKernel;
- (id)forwardStatisticsKernel;
- (id)gradientKernel;
- (id)gradientState;
- (id)gradientStatisticsKernel;
- (float)gramMatrixScale;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5;
- (bool)isMPSGraph;
- (bool)isMPSKernel;
- (unsigned long long)kernelSizeInX;
- (unsigned long long)kernelSizeInY;
- (id)layer;
- (id)lossInitialGradientKernel;
- (int)metalKernelType;
- (id)momentumVectors;
- (id)movingState;
- (id)neuronDescriptor;
- (unsigned long long)paddingBottom;
- (unsigned long long)paddingLeft;
- (unsigned long long)paddingRight;
- (unsigned long long)paddingTop;
- (id)poolingIndicesBuffer;
- (bool)recomputeResultTensor;
- (id)reduceLossKernel;
- (unsigned long long)scatterGatherDimension;
- (int)scatterReduceType;
- (id)secondaryGradientKernel;
- (void)setArithmeticOp:(int)arg1;
- (void)setBegin:(id)arg1;
- (void)setBiasesDataType:(int)arg1;
- (void)setCenterWeightVectors:(id)arg1;
- (void)setCombinedForwardAndGradientLossKernel:(id)arg1;
- (void)setComputeWeightsAndBiasOnly:(bool)arg1;
- (void)setConstantArithmeticSourcesFlags:(int)arg1;
- (void)setCountIncludesPadding:(bool)arg1;
- (void)setDilationRateInX:(unsigned long long)arg1;
- (void)setDilationRateInY:(unsigned long long)arg1;
- (void)setEnd:(id)arg1;
- (void)setExportableState:(id)arg1;
- (void)setForwardStatisticsKernel:(id)arg1;
- (void)setGradientState:(id)arg1;
- (void)setGradientStatisticsKernel:(id)arg1;
- (void)setGramMatrixScale:(float)arg1;
- (void)setIsMPSGraph:(bool)arg1;
- (void)setIsMPSKernel:(bool)arg1;
- (void)setKernelSizeInX:(unsigned long long)arg1;
- (void)setKernelSizeInY:(unsigned long long)arg1;
- (void)setLayer:(id)arg1;
- (void)setLossInitialGradientKernel:(id)arg1;
- (void)setMetalKernelType:(int)arg1;
- (void)setMomentumVectors:(id)arg1;
- (void)setMovingState:(id)arg1;
- (void)setNeuronDescriptor:(id)arg1;
- (void)setPaddingBottom:(unsigned long long)arg1;
- (void)setPaddingLeft:(unsigned long long)arg1;
- (void)setPaddingRight:(unsigned long long)arg1;
- (void)setPaddingTop:(unsigned long long)arg1;
- (void)setPoolingIndicesBuffer:(id)arg1;
- (void)setRecomputeResultTensor:(bool)arg1;
- (void)setReduceLossKernel:(id)arg1;
- (void)setScatterGatherDimension:(unsigned long long)arg1;
- (void)setScatterReduceType:(int)arg1;
- (void)setSoftmaxAxis:(unsigned long long)arg1;
- (void)setSource0Shape:(id)arg1;
- (void)setSource1Shape:(id)arg1;
- (void)setSource2Shape:(id)arg1;
- (void)setStride:(id)arg1;
- (void)setStrideInX:(unsigned long long)arg1;
- (void)setStrideInY:(unsigned long long)arg1;
- (void)setTemporaryHeapIndex:(unsigned long long)arg1;
- (void)setTotalElementsPerChannel:(unsigned long long)arg1;
- (void)setTransposeGradientShape:(id)arg1;
- (void)setTransposeShape:(id)arg1;
- (void)setUseSourceGradientDeviceMemoryForResultGradientTensor:(bool)arg1;
- (void)setUseSourceGradientDeviceMemoryForSecondaryResultGradientTensor:(bool)arg1;
- (void)setVelocityVectors:(id)arg1;
- (void)setWeightsDataType:(int)arg1;
- (unsigned long long)softmaxAxis;
- (id)source0Shape;
- (id)source1Shape;
- (id)source2Shape;
- (id)stride;
- (unsigned long long)strideInX;
- (unsigned long long)strideInY;
- (unsigned long long)temporaryHeapIndex;
- (unsigned long long)totalElementsPerChannel;
- (id)transposeGradientShape;
- (id)transposeShape;
- (bool)useSourceGradientDeviceMemoryForResultGradientTensor;
- (bool)useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
- (id)velocityVectors;
- (int)weightsDataType;

@end
