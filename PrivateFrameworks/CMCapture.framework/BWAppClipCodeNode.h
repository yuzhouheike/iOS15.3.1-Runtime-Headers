/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWAppClipCodeNode : BWNode {
    bool  _appC3DAvailable;
    struct AppC3DSession { } * _appClipCodeSession;
    <BWMetadataDetectedResultsObserver> * _detectedResultsObserver;
    bool  _haveInputTransform;
    long long  _lastAppClipCodeCount;
    bool  _mirroringHorizontal;
    bool  _mirroringVertical;
    NSObject<OS_dispatch_queue> * _processingQueue;
    int  _rotationDegrees;
    FigWeakReference * _weakSelf;
}

@property (nonatomic) <BWMetadataDetectedResultsObserver> *detectedResultsObserver;

+ (void)initialize;

- (void)_endAppClipCodeSession;
- (id)_pixelFormatsSupportedByAppC3D;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)_shouldEmitSBufForAppClipCodeCount:(long long)arg1 originalPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_startAppClipCodeSession;
- (void)_updateInputRequirements;
- (void)dealloc;
- (id)detectedResultsObserver;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didReceiveAppC3DUpdate:(struct AppC3DTrackingResult { }*)arg1 userData:(id)arg2;
- (id)initWithProcessingQueuePriority:(unsigned int)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDetectedResultsObserver:(id)arg1;

@end
