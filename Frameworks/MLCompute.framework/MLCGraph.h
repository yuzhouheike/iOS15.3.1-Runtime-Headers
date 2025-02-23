/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface MLCGraph : NSObject {
    NSDictionary * _allInputs;
    NSDictionary * _allLossLabelWeights;
    NSDictionary * _allLossLabels;
    NSDictionary * _allOutputs;
    bool  _allocateDeviceMemoryForTensorsInGraph;
    unsigned long long  _compilerOptions;
    MLCDevice * _device;
    NSMutableArray * _freeResourceList;
    NSMutableArray * _graphLayerList;
    NSArray * _graphObjects;
    NSMutableDictionary * _layerChildMap;
    NSMutableDictionary * _layerParentMap;
    NSMutableArray * _lstmLayerIndexList;
    unsigned long long  _nextLayerID;
    bool  _readyForExecution;
    bool  _recompileAfterLinking;
    NSMutableArray * _rootLevelTensorNodes;
    bool  _staticBatchSizeInGraph;
}

@property (nonatomic, retain) NSDictionary *allInputs;
@property (nonatomic, retain) NSDictionary *allLossLabelWeights;
@property (nonatomic, retain) NSDictionary *allLossLabels;
@property (nonatomic, retain) NSDictionary *allOutputs;
@property (nonatomic) bool allocateDeviceMemoryForTensorsInGraph;
@property (nonatomic) unsigned long long compilerOptions;
@property (nonatomic, retain) MLCDevice *device;
@property (nonatomic, retain) NSMutableArray *freeResourceList;
@property (nonatomic, retain) NSMutableArray *graphLayerList;
@property (nonatomic, readonly, retain) NSArray *graphObjects;
@property (nonatomic, retain) NSMutableDictionary *layerChildMap;
@property (nonatomic, retain) NSMutableDictionary *layerParentMap;
@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic, retain) NSMutableArray *lstmLayerIndexList;
@property (nonatomic) unsigned long long nextLayerID;
@property (nonatomic) bool readyForExecution;
@property (nonatomic) bool recompileAfterLinking;
@property (nonatomic, retain) NSMutableArray *rootLevelTensorNodes;
@property (nonatomic) bool staticBatchSizeInGraph;
@property (nonatomic, readonly) NSString *summarizedDOTDescription;

+ (id)graph;
+ (id)graphWithGraphObjects:(id)arg1;

- (void).cxx_destruct;
- (void)addGraphNodes:(id)arg1 withControlTreeNode:(id)arg2;
- (bool)addInputs:(id)arg1 lossLabels:(id)arg2;
- (bool)addInputs:(id)arg1 lossLabels:(id)arg2 lossLabelWeights:(id)arg3;
- (bool)addOutputs:(id)arg1;
- (id)allInputs;
- (id)allLossLabelWeights;
- (id)allLossLabels;
- (id)allOutputs;
- (void)allocateDeviceMemoryForTensor:(id)arg1 device:(id)arg2;
- (bool)allocateDeviceMemoryForTensorsInGraph;
- (bool)bindAndWriteData:(id)arg1 forInputs:(id)arg2 toDevice:(id)arg3 batchSize:(unsigned long long)arg4 synchronous:(bool)arg5;
- (bool)bindAndWriteData:(id)arg1 forInputs:(id)arg2 toDevice:(id)arg3 batchSize:(unsigned long long)arg4 synchronous:(bool)arg5 skipWrite:(bool)arg6;
- (bool)bindAndWriteData:(id)arg1 forInputs:(id)arg2 toDevice:(id)arg3 synchronous:(bool)arg4;
- (void)checkAndResetTensorsAssociatedWithLayer:(id)arg1 sources:(id)arg2;
- (bool)checkPageAlignmentAndSizeForOutputs:(id)arg1;
- (bool)checksBeforeAddLayerInGraph:(id)arg1 sources:(id)arg2 forTraining:(bool)arg3;
- (unsigned long long)compilerOptions;
- (id)concatenateWithSources:(id)arg1 dimension:(unsigned long long)arg2;
- (id)conditionalWithPredicate:(id)arg1 trueBranch:(id)arg2 falseBranch:(id)arg3;
- (id)createGradientSourceTensorWith:(id)arg1 source:(id)arg2;
- (id)createLossGradientSourceTensorWith:(id)arg1 source:(id)arg2 batchSize:(id)arg3;
- (id)createTensorWith:(id)arg1 sources:(id)arg2;
- (void)createVariableLengthSequenceTensorsForLayer:(id)arg1 withVariableSequenceLength:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)device;
- (bool)dispatchReadsForMultipleTensorOutputs:(id)arg1 finalTensorInGraph:(id)arg2 finalResultTensor:(id)arg3 batchSize:(unsigned long long)arg4;
- (void)enumerateInputsUsingBlock:(id /* block */)arg1;
- (void)enumerateLayersUsingBlock:(id /* block */)arg1;
- (void)enumerateOutputsUsingBlock:(id /* block */)arg1;
- (void)flattenConditionalLayer:(id)arg1;
- (void)freeDeviceMemoryForTensorIfSafe:(id)arg1 device:(id)arg2;
- (id)freeResourceList;
- (id)gatherWithDimension:(unsigned long long)arg1 source:(id)arg2 indices:(id)arg3;
- (id)graphLayerList;
- (id)graphObjects;
- (id)init;
- (id)initWithGraphObjects:(id)arg1;
- (void)insertPhis:(id)arg1;
- (bool)isLayerInGraphLayerList:(id)arg1 graphLayerList:(id)arg2;
- (id)layerChildMap;
- (id)layerParentMap;
- (id)layers;
- (void)linkRelatedTensorsForConcatLayer:(id)arg1 device:(id)arg2;
- (void)linkSourceTensorsWithLayer:(id)arg1 sources:(id)arg2;
- (id)lstmLayerIndexList;
- (unsigned long long)nextLayerID;
- (id)nodeWithLayer:(id)arg1 source:(id)arg2;
- (id)nodeWithLayer:(id)arg1 sources:(id)arg2;
- (id)nodeWithLayer:(id)arg1 sources:(id)arg2 disableUpdate:(bool)arg3;
- (id)nodeWithLayer:(id)arg1 sources:(id)arg2 forTraining:(bool)arg3;
- (id)nodeWithLayer:(id)arg1 sources:(id)arg2 lossLabels:(id)arg3;
- (id)nodeWithMultiOutputLayer:(id)arg1 source:(id)arg2 forTraining:(bool)arg3;
- (bool)readyForExecution;
- (bool)recompileAfterLinking;
- (id)reshapeWithShape:(id)arg1 source:(id)arg2;
- (id)resultTensorsForLayer:(id)arg1;
- (id)resultTensorsForLayer:(id)arg1 graphLayerList:(id)arg2;
- (id)rootLevelTensorNodes;
- (id)scatterWithDimension:(unsigned long long)arg1 source:(id)arg2 indices:(id)arg3 copyFrom:(id)arg4 reductionType:(int)arg5;
- (id)selectWithSources:(id)arg1 condition:(id)arg2;
- (void)setAllInputs:(id)arg1;
- (void)setAllLossLabelWeights:(id)arg1;
- (void)setAllLossLabels:(id)arg1;
- (void)setAllOutputs:(id)arg1;
- (void)setAllocateDeviceMemoryForTensorsInGraph:(bool)arg1;
- (void)setCompilerOptions:(unsigned long long)arg1;
- (void)setDevice:(id)arg1;
- (void)setFreeResourceList:(id)arg1;
- (void)setGraphLayerList:(id)arg1;
- (void)setLayerChildMap:(id)arg1;
- (void)setLayerParentMap:(id)arg1;
- (void)setLstmLayerIndexList:(id)arg1;
- (void)setNextLayerID:(unsigned long long)arg1;
- (void)setReadyForExecution:(bool)arg1;
- (void)setRecompileAfterLinking:(bool)arg1;
- (void)setRootLevelTensorNodes:(id)arg1;
- (void)setStaticBatchSizeInGraph:(bool)arg1;
- (id)sourceTensorsForLayer:(id)arg1;
- (id)sourceTensorsForLayer:(id)arg1 graphLayerList:(id)arg2;
- (id)splitWithSource:(id)arg1 splitCount:(unsigned long long)arg2 dimension:(unsigned long long)arg3;
- (id)splitWithSource:(id)arg1 splitSectionLengths:(id)arg2 dimension:(unsigned long long)arg3;
- (bool)staticBatchSizeInGraph;
- (id)summarizedDOTDescription;
- (id)transposeWithDimensions:(id)arg1 source:(id)arg2;
- (void)updateDeviceMemoryReadCountForGradientWithLayer:(id)arg1 tensor:(id)arg2 checkIfSourceNeeded:(bool)arg3 checkIfResultNeeded:(bool)arg4;
- (void)updateDeviceMemoryReadCountForTensor:(id)arg1;
- (void)updateLSTMLayersForVariableSequenceLengthInGraph:(id)arg1 withInputData:(id)arg2;
- (void)updateOutputTensorsDeviceMemoryWithData:(id)arg1;
- (void)writeAsyncToDevice:(id)arg1 dataForTensors:(id)arg2;

@end
