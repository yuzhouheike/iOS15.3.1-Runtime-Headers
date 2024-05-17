/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWUBInferenceController : BWStillImageProcessorController <BWInferenceFormatProvider> {
    BWInferenceEngine * _inferenceEngine;
    bool  _inferenceEnginePrepared;
    NSDictionary * _inferenceOutputFormatByAttachedMediaKey;
    BWVideoFormat * _inputFormat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *providedAttachedMediaKeys;
@property (readonly) Class superclass;

+ (id)faceObservationsFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (void)initialize;
+ (id)lowResPersonInstanceBoundingBoxesFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)lowResPersonInstanceConfidencesFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)lowResPersonInstanceMasksFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (struct opaqueCMSampleBuffer { }*)lowResPersonMaskSbufFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (struct __CVBuffer { }*)lowResPersonSegmentationMaskFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (struct __CVBuffer { }*)personMaskFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (struct opaqueCMSampleBuffer { }*)personMaskSbufFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (struct __CVBuffer { }*)semanticSkinMatteFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (struct opaqueCMSampleBuffer { }*)semanticSkinMatteSbufFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (struct __CVBuffer { }*)semanticSkyMatteFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (struct opaqueCMSampleBuffer { }*)semanticSkyMatteSbufFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)skinToneClassificationsFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)smartCameraClassificationsFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;

- (int)_configureInferenceWithConfiguration:(id)arg1;
- (void)_releaseResources;
- (void)cancelProcessing;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (int)prepareWithPixelBufferPoolProvider:(id)arg1;
- (id)providedAttachedMediaKeys;
- (unsigned long long)type;

@end
