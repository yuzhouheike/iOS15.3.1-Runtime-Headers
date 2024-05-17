/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CULiveAudioSession : NSObject <AVVoiceControllerRecordDelegate, CUActivatable> {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    unsigned long long  _activateTicks;
    bool  _clinkActivated;
    RPCompanionLinkClient * _clinkClient;
    NSArray * _destinationDevices;
    NSArray * _destinationIDs;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSMutableSet * _peerSessionSet;
    bool  _peersActivated;
    CULiveAudioSession * _selfRef;
    bool  _sentTimingInfo;
    int  _sessionState;
    int  _startRecordingState;
    int  _stopRecordingState;
    AVVoiceController * _voiceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *destinationIDs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)_reportError:(id)arg1 where:(const char *)arg2;
- (void)_run;
- (void)_runCLinkActivateCompleted;
- (void)_runCLinkActivateStart;
- (void)_runCLinkPeersActivateStart;
- (bool)_voiceControllerSetup;
- (bool)_voiceControllerStart;
- (void)_voiceControllerTearDown;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)destinationIDs;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setDestinationIDs:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;

@end
