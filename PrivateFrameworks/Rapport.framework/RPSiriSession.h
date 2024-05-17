/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPSiriSession : NSObject <AVVoiceControllerRecordDelegate> {
    id /* block */  _activateCompletion;
    int  _activateState;
    AVAudioFormat * _audioFormat;
    NSString * _destinationID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    <RPMessageable> * _messenger;
    RPSiriSession * _selfRef;
    int  _startRecordingState;
    int  _stopRecordingState;
    AVVoiceController * _voiceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <RPMessageable> *messenger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate2;
- (void)_activateCompletedWithError:(id)arg1;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)_startActivationWithDestinationID:(id)arg1 messenger:(id)arg2 completion:(id /* block */)arg3;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)description;
- (id)destinationID;
- (id)init;
- (void)invalidate;
- (id)messenger;
- (void)prewarmWithCompletion:(id /* block */)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setMessenger:(id)arg1;
- (void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (bool)voiceControllerSetupAndReturnError:(id*)arg1;
- (void)voiceControllerTearDown;

@end
