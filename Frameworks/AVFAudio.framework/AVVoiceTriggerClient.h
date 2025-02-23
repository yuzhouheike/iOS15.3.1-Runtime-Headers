/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVVoiceTriggerClient : NSObject <VoiceTriggerNotificationInterface> {
    int  _audioSeverUpNotificationToken;
    id /* block */  _serverCrashedBlock;
    id /* block */  _serverResetBlock;
    id /* block */  _siriClientRecordStateChangedBlock;
    id /* block */  _speakerMuteStateChangedBlock;
    id /* block */  _speakerStateChangedBlock;
    id /* block */  _voiceTriggerBlock;
    NSXPCConnection * _voiceTriggerServerConnection;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) int audioSeverUpNotificationToken;
@property (nonatomic, copy) id /* block */ serverCrashedBlock;
@property (nonatomic, copy) id /* block */ serverResetBlock;
@property (nonatomic, copy) id /* block */ siriClientRecordStateChangedBlock;
@property (nonatomic, copy) id /* block */ speakerMuteStateChangedBlock;
@property (nonatomic, copy) id /* block */ speakerStateChangedBlock;
@property (nonatomic, copy) id /* block */ voiceTriggerBlock;
@property (nonatomic, readonly) unsigned long long voiceTriggerPastDataFramesAvailable;
@property (nonatomic, retain) NSXPCConnection *voiceTriggerServerConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)isAPIAvailable;

- (int)audioSeverUpNotificationToken;
- (void)callServerCrashedBlock;
- (void)callServerResetBlock;
- (void)closeServerConnection;
- (void)dealloc;
- (void)enableBargeInMode:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)enableSpeakerStateListening:(bool)arg1;
- (void)enableSpeakerStateListening:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)enableVoiceTriggerListening:(bool)arg1;
- (void)enableVoiceTriggerListening:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)getInputChannelInfoCompletion:(id /* block */)arg1;
- (void)handleMediaServerDeath:(id)arg1;
- (void)handleMediaServerReset:(id)arg1;
- (bool)hasBargeInSupport;
- (void)hasBargeInSupportCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)listeningEnabledCompletionBlock:(id /* block */)arg1;
- (void)removeAudioServerUpNotificationHandler;
- (id /* block */)serverCrashedBlock;
- (id /* block */)serverResetBlock;
- (void)setAudioServerUpNotificationHandler;
- (void)setAudioSeverUpNotificationToken:(int)arg1;
- (void)setListeningProperty:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)setServerCrashedBlock:(id /* block */)arg1;
- (void)setServerResetBlock:(id /* block */)arg1;
- (void)setSiriClientRecordStateChangedBlock:(id /* block */)arg1;
- (void)setSpeakerMuteStateChangedBlock:(id /* block */)arg1;
- (void)setSpeakerStateChangedBlock:(id /* block */)arg1;
- (void)setVoiceTriggerBlock:(id /* block */)arg1;
- (void)setVoiceTriggerServerConnection:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id /* block */)siriClientRecordStateChangedBlock;
- (void)siriClientRecordStateChangedNotification:(bool)arg1 recordingCount:(unsigned long long)arg2;
- (void)siriClientsRecordingCompletionBlock:(id /* block */)arg1;
- (id /* block */)speakerMuteStateChangedBlock;
- (void)speakerMuteStateChangedNotification:(bool)arg1;
- (bool)speakerStateActive;
- (void)speakerStateActiveCompletionBlock:(id /* block */)arg1;
- (id /* block */)speakerStateChangedBlock;
- (void)speakerStateChangedNotification:(id)arg1;
- (bool)speakerStateMuted;
- (void)speakerStateMutedCompletionBlock:(id /* block */)arg1;
- (void)updateVoiceTriggerConfiguration:(id)arg1;
- (void)updateVoiceTriggerConfiguration:(id)arg1 completionBlock:(id /* block */)arg2;
- (id /* block */)voiceTriggerBlock;
- (void)voiceTriggerNotification:(id)arg1;
- (unsigned long long)voiceTriggerPastDataFramesAvailable;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(id /* block */)arg1;
- (id)voiceTriggerServerConnection;
- (id)workQueue;

@end
