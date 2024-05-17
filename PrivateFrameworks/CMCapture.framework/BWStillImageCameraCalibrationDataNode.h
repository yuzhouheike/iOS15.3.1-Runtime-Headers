/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImageCameraCalibrationDataNode : BWNode {
    NSDictionary * _baseZoomFactorsByPortType;
    FigCalibration * _calibrationProcessor;
    BWStillImageCaptureSettings * _captureSettings;
    NSSet * _expectedPortTypes;
    NSMutableDictionary * _inputSbufsByPortType;
    int  _processingMode;
    bool  _propagatesDetectedObjects;
    NSDictionary * _sensorConfigurationsByPortType;
}

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_computeCameraCalibrationDataBetweenReferenceSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 auxiliarySampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)_finishPendingProcessing;
- (int)_loadAndConfigureCalibrationBundle;
- (void)_propagateDetectedObjects;
- (bool)_receivedExpectedInputsForCaptureRequest;
- (void)_resolveProcessingMode;
- (id)_sensorConfigurationWithPortraitTuningParameters;
- (id)baseZoomFactorsByPortType;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorConfigurationsByPortType:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)processorOptions;
- (bool)propagatesDetectedObjects;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setBaseZoomFactorsByPortType:(id)arg1;
- (void)setPropagatesDetectedObjects:(bool)arg1;

@end
