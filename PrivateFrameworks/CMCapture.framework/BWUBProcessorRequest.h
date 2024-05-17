/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWUBProcessorRequest : NSObject {
    UBDeepFusionOutput * _deepFusionOutput;
    <BWUBProcessorControllerDelegate> * _delegate;
    bool  _deliveredDeferredProxyImage;
    int  _err;
    BWUBProcessorInput * _input;
    float  _maxExposureTimesOfFramesAddedForMultiFrameProcessing;
    float  _minExposureTimesOfFramesAddedForMultiFrameProcessing;
    int  _numberOfFramesAddedForMultiFrameProcessing;
    UBFusionOutput * _output;
    bool  _processErrorRecoveryFrame;
    bool  _processOriginalImage;
    float  _totalExposureTimesOfFramesAddedForMultiFrameProcessing;
}

@property (nonatomic, readonly) UBDeepFusionOutput *deepFusionOutput;
@property (nonatomic) bool deliveredDeferredProxyImage;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWUBProcessorInput *input;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing;
@property (nonatomic, readonly) UBFusionOutput *output;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing;

- (void)dealloc;
- (id)deepFusionOutput;
- (id)delegate;
- (bool)deliveredDeferredProxyImage;
- (id)description;
- (int)err;
- (int)expectedFrameCount;
- (unsigned long long)fusionErrorRecoveryImageType;
- (unsigned long long)imageType;
- (id)initWithInput:(id)arg1 output:(id)arg2 deepFusionOutput:(id)arg3 processErrorRecoveryFrame:(bool)arg4 processOriginalImage:(bool)arg5 delegate:(id)arg6;
- (id)input;
- (bool)keepFramesUntilReferenceFrameSelected;
- (float)maxExposureTimesOfFramesAddedForMultiFrameProcessing;
- (float)minExposureTimesOfFramesAddedForMultiFrameProcessing;
- (int)numberOfFramesAddedForMultiFrameProcessing;
- (id)output;
- (bool)processErrorRecoveryFrame;
- (bool)processOriginalImage;
- (unsigned int)processingType;
- (bool)receivedAllFrames;
- (void)setDeliveredDeferredProxyImage:(bool)arg1;
- (void)setErr:(int)arg1;
- (void)setMaxExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1;
- (void)setMinExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1;
- (void)setNumberOfFramesAddedForMultiFrameProcessing:(int)arg1;
- (void)setTotalExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1;
- (float)totalExposureTimesOfFramesAddedForMultiFrameProcessing;
- (bool)useFrameForMultiFrameProcessing:(struct opaqueCMSampleBuffer { }*)arg1;

@end
