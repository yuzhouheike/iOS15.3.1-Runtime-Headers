/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWIntelligentDistortionCorrectionProcessorInput : BWStillImageProcessorInput {
    bool  _applyZoom;
    <BWIntelligentDistortionCorrectionProcessorInputDelegate> * _delegate;
    NSArray * _faceDetectionObservations;
    bool  _faceDetectionObservationsSet;
    struct opaqueCMSampleBuffer { } * _image;
    unsigned long long  _imageBufferType;
    bool  _imageSet;
    struct __CVBuffer { } * _lowResPersonSegmentationMask;
    bool  _lowResPersonSegmentationMaskSet;
    bool  _processGeometricDistortionCorrection;
    bool  _processIntelligentDistortionCorrection;
    bool  _receivedAllInputs;
}

@property (nonatomic) bool applyZoom;
@property (nonatomic, retain) <BWIntelligentDistortionCorrectionProcessorInputDelegate> *delegate;
@property (nonatomic, readonly) NSArray *faceDetectionObservations;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*image;
@property (nonatomic, readonly) unsigned long long imageBufferType;
@property (nonatomic, readonly) struct __CVBuffer { }*lowResPersonSegmentationMask;
@property (nonatomic) bool processGeometricDistortionCorrection;
@property (nonatomic) bool processIntelligentDistortionCorrection;
@property (nonatomic) bool receivedAllInputs;

- (void)addFaceDetectionObservations:(id)arg1;
- (void)addImage:(struct opaqueCMSampleBuffer { }*)arg1 imageBufferType:(unsigned long long)arg2;
- (void)addLowResPersonSegmentationMask:(struct __CVBuffer { }*)arg1;
- (bool)applyZoom;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)faceDetectionObservations;
- (struct opaqueCMSampleBuffer { }*)image;
- (unsigned long long)imageBufferType;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
- (struct __CVBuffer { }*)lowResPersonSegmentationMask;
- (bool)processGeometricDistortionCorrection;
- (bool)processIntelligentDistortionCorrection;
- (bool)receivedAllInputs;
- (void)setApplyZoom:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProcessGeometricDistortionCorrection:(bool)arg1;
- (void)setProcessIntelligentDistortionCorrection:(bool)arg1;
- (void)setReceivedAllInputs:(bool)arg1;

@end
