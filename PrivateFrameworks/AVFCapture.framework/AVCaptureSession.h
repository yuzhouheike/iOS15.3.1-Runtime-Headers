/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureSession : NSObject {
    AVCaptureSessionInternal * _internal;
}

@property (nonatomic) bool automaticallyConfiguresApplicationAudioSession;
@property (nonatomic) bool automaticallyConfiguresCaptureDeviceForWideColor;
@property (nonatomic, readonly) NSArray *connections;
@property (nonatomic, readonly) NSArray *inputs;
@property (getter=isInterrupted, nonatomic, readonly) bool interrupted;
@property (nonatomic, readonly) struct OpaqueCMClock { }*masterClock;
@property (nonatomic, readonly) NSArray *outputs;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, copy) NSString *sessionPreset;
@property (nonatomic) bool usesApplicationAudioSession;

+ (void)_finishConfiguringProperty:(id)arg1 forDevice:(id)arg2;
+ (bool)_isConfiguringProperty:(id)arg1 forDevice:(id)arg2;
+ (void)_startConfiguringProperty:(id)arg1 forDevice:(id)arg2;
+ (id)allSessionPresets;
+ (bool)automaticallyNotifiesObserversOfMasterClock;
+ (bool)automaticallyNotifiesObserversOfRunning;
+ (id)dotString;
+ (void)initialize;

- (bool)_addConnection:(id)arg1 exceptionReason:(id*)arg2;
- (void)_addFakeOutputsIfNeededForCenterStageToSessionConfiguration:(id)arg1;
- (bool)_addInputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addOutputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addVideoPreviewLayer:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addVideoPreviewLayerWithNoConnection:(id)arg1 exceptionReason:(id*)arg2;
- (void)_beginConfiguration;
- (bool)_buildAndRunGraph:(bool)arg1;
- (bool)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id*)arg2;
- (void)_commitConfiguration;
- (id)_connectionsForNewInputPort:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (int)_createFigCaptureSession;
- (void)_determineMasterClock;
- (id)_figCaptureSessionConfiguration;
- (void)_handleBackgroundBlurActiveChangedForDevice:(id)arg1;
- (void)_handleCenterStageActiveChangedForDevice:(id)arg1;
- (void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1;
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1;
- (void)_handleDidStartRunningNotificationWithPayload:(id)arg1;
- (void)_handleDidStopRunningNotificationWithPayload:(id)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleServerConnectionDiedNotification;
- (void)_makeConfigurationLive:(id)arg1;
- (void)_notifyMediaServicesError;
- (void)_notifySessionStarted;
- (void)_notifySessionStopped;
- (id)_outputWithClass:(Class)arg1 forSourceDevice:(id)arg2;
- (void)_postRuntimeError:(id)arg1;
- (void)_rebuildGraph;
- (void)_reconnectAfterServerConnectionDied;
- (void)_removeAllPreviewLayers;
- (void)_removeConnection:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_removeInput:(id)arg1;
- (void)_removeVideoPreviewLayer:(id)arg1;
- (void)_setInterrupted:(bool)arg1 withReason:(int)arg2;
- (void)_setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)_setRunning:(bool)arg1;
- (bool)_shouldAutomaticallyAddConnection:(id)arg1;
- (bool)_startFigCaptureSession;
- (void)_stopAndTearDownGraph;
- (id)_stopError;
- (bool)_stopFigCaptureSession;
- (void)_teardownFigCaptureSession;
- (void)_updateCameraCalibrationDataDeliveryEnabledForAllConnectedSourceDevices;
- (void)_updateCameraCalibrationDataDeliveryEnabledForSourceDevice:(id)arg1;
- (void)_updateDepthDataDeliveryEnabledForAllConnectedSourceDevices;
- (void)_updateDepthDataDeliveryEnabledForSourceDevice:(id)arg1;
- (void)_updateDeviceActiveFormatsAndActiveConnections;
- (void)_updateVideoHDREnabledForDevice:(id)arg1 forceResetVideoHDRSuspended:(bool)arg2;
- (void)addConnection:(id)arg1;
- (void)addInput:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (bool)automaticallyConfiguresApplicationAudioSession;
- (bool)automaticallyConfiguresCaptureDeviceForWideColor;
- (void)beginConfiguration;
- (bool)canAddConnection:(id)arg1;
- (bool)canAddInput:(id)arg1;
- (bool)canAddOutput:(id)arg1;
- (bool)canSetSessionPreset:(id)arg1;
- (void)cancelForegroundAutoResumeAfterDate:(id)arg1;
- (void)commitConfiguration;
- (id)connections;
- (void)dealloc;
- (id)description;
- (void)handleVideoInputDevice:(id)arg1 activeDepthDataFormatChanged:(id)arg2;
- (void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2;
- (void)informSessionMembersOfChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (id)init;
- (id)initWithAssumedIdentity:(id)arg1;
- (id)inputs;
- (bool)isBeingConfigured;
- (bool)isInterrupted;
- (bool)isOverCost:(id*)arg1;
- (bool)isRunning;
- (bool)likelyToRecordProResMovies;
- (struct OpaqueCMClock { }*)masterClock;
- (bool)notifiesOnMainThread;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputs;
- (void)removeConnection:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (id)sessionPreset;
- (id)sessionVideoCaptureDevices;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(bool)arg1;
- (void)setAutomaticallyConfiguresCaptureDeviceForWideColor:(bool)arg1;
- (void)setSessionPreset:(id)arg1;
- (void)setUsesApplicationAudioSession:(bool)arg1;
- (void)startRunning;
- (void)stopRunning;
- (bool)usesApplicationAudioSession;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3;

@end
