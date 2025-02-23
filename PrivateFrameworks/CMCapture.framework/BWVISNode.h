/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWVISNode : BWNode <BWNodeBackPressureSource, BWVISProcessorDelegate> {
    NSData * _backgroundColorCube;
    NSNumber * _cachedLivePhotoKeyFrame;
    NSString * _cachedStillImageKeyFrameSettingsID;
    int  _cinematicLookAheadFrameCount;
    NSObject<OS_dispatch_semaphore> * _emitSampleBufferSemaphore;
    bool  _fillExtendedRowsOfOutputBuffer;
    bool  _flipHorizontalExcludingIris;
    bool  _flushingProcessor;
    NSData * _foregroundColorCube;
    struct BWVISMotionTensors { 
        NSDictionary *entries; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } framePTS; 
    }  _frameMotionTensorsRingBuffer;
    unsigned int  _frameMotionTensorsRingBufferWriteIndex;
    bool  _frameRateConversionEnabled;
    bool  _generatesDroppedSampleMarkerBuffers;
    int  _gpuPriority;
    BWStats * _ioSurfaceCompressionRatioStats;
    BWIrisStillImageMovieMetadataCache * _irisStillImageMovieMetadataCache;
    BWFigCaptureISPProcessingSession * _ispProcessingSession;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastEmittedPTS;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    bool  _liveFlipHorizontal;
    bool  _logStripProcessingTiming;
    int  _maxLossyCompressionLevel;
    int  _numberOfBuffersEmitted;
    int  _numberOfTimesWaited;
    NSDictionary * _offlineCameraInfoByPortType;
    bool  _onlyGeneratingTransforms;
    int  _outputColorSpaceProperties;
    struct { 
        int width; 
        int height; 
    }  _outputDepthDimensions;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    bool  _personSegmentationRenderingEnabled;
    int  _pipelineTraceID;
    int  _pixelBufferCompressionType;
    <BWVISProcessorController> * _processorController;
    BWVISProcessorControllerConfiguration * _processorControllerConfiguration;
    int  _processorType;
    NSMutableArray * _sbufsBeingProcessed;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sbufsBeingProcessedLock;
    bool  _sphereVideoEnabled;
    int  _stabilizationMethod;
    int  _stabilizationType;
    bool  _stabilizeDepthAttachments;
    bool  _stabilizeForLongPressVideo;
    bool  _stabilizeMetadata;
    NSArray * _supportedInputPixelFormats;
    NSArray * _supportedOutputPixelFormats;
    unsigned long long  _totalCompressedDataSize;
    unsigned long long  _totalUncompressedDataSize;
    bool  _usingExtendedCVISLivePhotoStabilization;
    bool  _videoSTFEnabled;
    float  _videoStabilizationOverscanOverride;
    int  _visExecutionMode;
    BWVideoFormatRequirements * _visOutputFormatRequirements;
}

@property (readonly) int cinematicLookAheadFrameCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_addMotionTensorsToRingBuffer:(id)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_addVISDigitalZoomToMetadata:(struct __CFDictionary { }*)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (int)_asynchronouslyStripProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withStabilizationParameters:(id)arg2;
- (int)_attachHarvestedStabilizationMetadataToCinematographyFrame:(id)arg1;
- (id)_cinematographyFrameForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_didStripProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_droppedSamplePTSFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_ensureSemaphoreIsBalanced;
- (int)_findBestMotionTensorsInRingBufferWithKey:(id)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_flushBuffers;
- (void)_handleIrisKeyFrameCachingForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_harvestMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_logAndEmitDropsForSampleBuffersStuckInISPProcessingSession;
- (struct __CVBuffer { }*)_newOutputPixelBuffer;
- (void)_prepareISPProcessingSession;
- (void)_reportIOSurfaceCompressionCoreAnalyticsData;
- (int)_setupVISProcessorController;
- (int)_stabilizeCinematographyMetadataInCinematographyFrame:(id)arg1;
- (int)_stabilizeMetadataForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_tallyAndEmitDroppedSample:(id)arg1;
- (void)_tallyAndEmitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_tallyCompressedIOSurfaceStatsForSBuf:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_tranformRectanglesInMetadata:(id)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_updateInputRequirements;
- (void)_updateOutputRequirements;
- (void)_updateSupportedPixelFormats;
- (void)_willStripProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)cinematicLookAheadFrameCount;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withStatus:(int)arg2;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)emitSampleBufferSemaphore;
- (bool)flipHorizontalExcludingIris;
- (bool)frameRateConversionEnabled;
- (bool)generatesDroppedSampleMarkerBuffers;
- (bool)gpuPriority;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorIDDict:(id)arg1 stabilizationMethod:(int)arg2 stabilizationType:(int)arg3 ispProcessingSession:(id)arg4 maxSupportedFrameRate:(float)arg5 activeMaxFrameRate:(float)arg6 gpuPriority:(int)arg7 motionAttachmentsSource:(int)arg8 fillExtendedRowsOfOutputBuffer:(bool)arg9 overCaptureEnabled:(bool)arg10 videoStabilizationOverscanOverride:(float)arg11 motionMetadataPreloadingEnabled:(bool)arg12 visExecutionMode:(int)arg13 livePhotoCleanOutputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg14 cameraInfoByPortType:(id)arg15 cvisExtendedLookAheadDuration:(float)arg16 distortionCompensationEnabledPortTypes:(id)arg17 minDistanceForBravoParallaxShift:(float)arg18;
- (id)irisStillImageMovieMetadataCache;
- (int)maxLossyCompressionLevel;
- (id)nodeSubType;
- (id)nodeType;
- (int)outputColorSpaceProperties;
- (struct { int x1; int x2; })outputDepthDimensions;
- (struct { int x1; int x2; })outputDimensions;
- (bool)personSegmentationRenderingEnabled;
- (int)pipelineTraceID;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setEmitSampleBufferSemaphore:(id)arg1;
- (void)setFlipHorizontalExcludingIris:(bool)arg1;
- (void)setFrameRateConversionEnabled:(bool)arg1;
- (void)setGeneratesDroppedSampleMarkerBuffers:(bool)arg1;
- (void)setGpuPriority:(int)arg1;
- (void)setIrisStillImageMovieMetadataCache:(id)arg1;
- (void)setMaxLossyCompressionLevel:(int)arg1;
- (void)setOutputColorSpaceProperties:(int)arg1;
- (void)setOutputDepthDimensions:(struct { int x1; int x2; })arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setPersonSegmentationRenderingEnabled:(bool)arg1;
- (void)setPipelineTraceID:(int)arg1;
- (void)setSphereVideoEnabled:(bool)arg1;
- (void)setStabilizeDepthAttachments:(bool)arg1;
- (void)setVideoSTFEnabled:(bool)arg1;
- (bool)sphereVideoEnabled;
- (bool)stabilizeDepthAttachments;
- (bool)videoSTFEnabled;

@end
