/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImageMultiCameraDoserNode : BWNode {
    long long  _currentSettingsID;
    NSMutableArray * _inputIndicesForWhichDosingIsPerformed;
    NSArray * _portTypes;
    NSMutableArray * _stashedObjectsByInputIndex;
}

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2;
- (void)_emitStashedObjectsIfReady;
- (id)_outputForNodeInputIndex:(unsigned long long)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithPortTypes:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (unsigned long long)outputIndexForPortType:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
