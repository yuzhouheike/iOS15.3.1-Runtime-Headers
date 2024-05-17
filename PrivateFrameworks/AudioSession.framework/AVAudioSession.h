/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
 */

@interface AVAudioSession : NSObject {
    void * _impl;
}

@property (readonly) bool allowHapticsAndSystemSoundsDuringRecording;
@property (nonatomic, readonly) NSArray *availableCategories;
@property (readonly) NSArray *availableModes;
@property (readonly) NSString *category;
@property (readonly) unsigned long long categoryOptions;
@property (readonly) bool isPrimary;
@property (readonly) NSString *mode;
@property (readonly) AVAudioSessionPortDescription *preferredInput;
@property (nonatomic, readonly) bool prefersNoInterruptionsFromSystemAlerts;
@property (readonly) unsigned long long recordPermission;
@property (readonly) unsigned long long routeSharingPolicy;

+ (id)auxiliarySession;
+ (bool)categoryEnablesInput:(id)arg1;
+ (id)primarySession;
+ (id)retrieveSessionWithID:(unsigned int)arg1;
+ (id)sharedInstance;

- (double)IOBufferDuration;
- (unsigned long long)IOBufferFrameSize;
- (void)activateWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)activeSessionDisplayIDs;
- (bool)allowAllBuiltInDataSources;
- (bool)allowHapticsAndSystemSoundsDuringRecording;
- (bool)allowMixableAudioWhileRecording;
- (id)audioClockDevice;
- (long long)audioFormat;
- (id)audioFormats;
- (id)autorelease;
- (id)availableCategories;
- (id)availableInputs;
- (id)availableModes;
- (id)category;
- (unsigned long long)categoryOptions;
- (bool)clearInputPreferences:(id*)arg1;
- (id)consolidatedSourceContentInfo;
- (long long)currentHardwareInputNumberOfChannels;
- (long long)currentHardwareOutputNumberOfChannels;
- (double)currentHardwareSampleRate;
- (id)currentRoute;
- (bool)deactivateAndSetInterruptionPriority:(long long)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)decoupledIO;
- (id)delegate;
- (bool)eligibleForBTSmartRoutingConsideration;
- (bool)enableNotifications:(bool)arg1 error:(id*)arg2;
- (bool)fixHardwareFormatToMultiChannel:(bool)arg1 error:(id*)arg2;
- (bool)forceSoundCheck;
- (float)hapticThermalGain;
- (id)hostProcessAttribution;
- (id)init;
- (id)initAuxiliarySession;
- (id)initWithSessionID:(unsigned int)arg1;
- (id)initWithSessionType:(unsigned int)arg1;
- (id)initWithSessionType:(unsigned int)arg1 identifier:(id)arg2;
- (id)initWithSiriEndpointIdentifier:(id)arg1;
- (id)inputDataSource;
- (id)inputDataSources;
- (float)inputGain;
- (bool)inputIsAvailable;
- (double)inputLatency;
- (long long)inputNumberOfChannels;
- (long long)inputOrientation;
- (double)inputSafetyOffset;
- (double)inputSampleRate;
- (long long)interruptionPriority;
- (bool)isDolbyAtmosAvailable;
- (bool)isDolbyDigitalEncoderAvailable;
- (bool)isEarpieceActiveNoiseCancelationEnabled;
- (bool)isExpanseMediaSession;
- (bool)isHardwareFormatFixedToMultiChannel;
- (bool)isInputAvailable;
- (bool)isInputGainSettable;
- (bool)isOtherAudioPlaying;
- (bool)isPiPAvailable;
- (bool)isPrimary;
- (bool)isSessionInputMuted;
- (bool)lastActivationStoppedNowPlayingApp;
- (long long)maximumInputNumberOfChannels;
- (long long)maximumOutputNumberOfChannels;
- (id)mode;
- (bool)muteSessionInput:(bool)arg1 error:(id*)arg2;
- (bool)needsHighPowerBudgeting;
- (unsigned int)opaqueSessionID;
- (id)outputDataSource;
- (id)outputDataSources;
- (double)outputLatency;
- (long long)outputNumberOfChannels;
- (double)outputSafetyOffset;
- (double)outputSampleRate;
- (float)outputVolume;
- (bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id*)arg2;
- (bool)participatesInMutePriority;
- (bool)participatesInNowPlayingAppPolicy;
- (bool)participatesInVolumePolicy;
- (id)pickedRoute;
- (bool)preferDecoupledIO:(bool)arg1 error:(id*)arg2;
- (double)preferredHardwareSampleRate;
- (double)preferredIOBufferDuration;
- (unsigned long long)preferredIOBufferFrameSize;
- (id)preferredInput;
- (long long)preferredInputNumberOfChannels;
- (long long)preferredInputOrientation;
- (double)preferredInputSampleRate;
- (long long)preferredOutputNumberOfChannels;
- (double)preferredOutputSampleRate;
- (double)preferredSampleRate;
- (bool)prefersMultichannelAudio;
- (bool)prefersNoDucking;
- (bool)prefersNoInterruptionsByRingtonesAndAlerts;
- (bool)prefersNoInterruptionsFromSystemAlerts;
- (bool)prefersNoMicrophoneUsageIndicator;
- (bool)prefersToAcquireHWControlFromOtherSessions;
- (bool)prefersToVibeWhenVibrationsAreDisabled;
- (id)privateGetDataSources:(bool)arg1;
- (void*)privateGetImplementation;
- (id)privateGetSelectedDataSource:(bool)arg1;
- (void)privateHandleOtherPrimaryAudioPlayStateChange;
- (void)privateHandlePickableRoutesChange;
- (void)privateHandleRoutingContextChange;
- (void)privateHandleSecondaryAudioHintChange:(id)arg1;
- (void)privateHandleServerConnectionCompletion:(struct ConnectionResult { int x1; unsigned int x2; })arg1;
- (void)privateHandleServerDied;
- (void)privateInputIsAvailableChanged:(id)arg1;
- (void)privateInterruptionWithInfo:(id)arg1;
- (void)privateMarkKVOPropertiesDirty:(unsigned long long)arg1;
- (bool)privateNeedsTranslationForNoSpeakerCategory:(id)arg1;
- (id)privateRefreshAvailableInputs;
- (int)privateSetCategoryWithOptions:(id)arg1 modes:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (bool)privateSetPropertyValue:(unsigned int)arg1 withBool:(bool)arg2 error:(id*)arg3;
- (bool)privateSetRouteSharingPolicy:(unsigned long long)arg1 error:(id*)arg2;
- (void)privateUpdateAudioFormat:(id)arg1;
- (void)privateUpdateAudioFormats:(id)arg1;
- (void)privateUpdateDataSources:(id)arg1 forInput:(bool)arg2;
- (void)privateUpdateInputChannelCount:(id)arg1;
- (void)privateUpdateInputGain:(id)arg1;
- (void)privateUpdateOutputChannelCount:(id)arg1;
- (void)privateUpdateOutputVolume:(id)arg1;
- (void)privateUpdatePiPAvailabilityChange:(id)arg1;
- (void)privateUpdatePromptStyle:(id)arg1;
- (unsigned long long)promptStyle;
- (unsigned long long)recordPermission;
- (bool)recordingFromRemoteInput;
- (oneway void)release;
- (long long)reporterID;
- (void)requestRecordPermission:(id /* block */)arg1;
- (bool)requiresNoAudioResources;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)routeSharingPolicy;
- (id)routingContextUID;
- (double)sampleRate;
- (bool)secondaryAudioShouldBeSilencedHint;
- (bool)selectIndependentRoutingContext:(id*)arg1;
- (unsigned long long)sessionType;
- (bool)setActivationContext:(id)arg1 error:(id*)arg2;
- (bool)setActive:(bool)arg1 error:(id*)arg2;
- (bool)setActive:(bool)arg1 withFlags:(long long)arg2 error:(id*)arg3;
- (bool)setActive:(bool)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setAggregatedIOPreference:(unsigned long long)arg1 error:(id*)arg2;
- (void)setAllowAllBuiltInDataSources:(bool)arg1;
- (bool)setAllowHapticsAndSystemSoundsDuringRecording:(bool)arg1 error:(id*)arg2;
- (bool)setAllowMixableAudioWhileRecording:(bool)arg1 error:(id*)arg2;
- (bool)setAudioClockDevice:(id)arg1 error:(id*)arg2;
- (bool)setAudioHardwareControlFlags:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setBypassRingerSwitchPolicy:(bool)arg1 error:(id*)arg2;
- (bool)setCategory:(id)arg1 error:(id*)arg2;
- (bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setDefaultChatMode:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setDisallowedPorts:(id)arg1 error:(id*)arg2;
- (bool)setDuckingFadeOutDuration:(id)arg1 fadeInDuration:(id)arg2 error:(id*)arg3;
- (bool)setEligibleForBTSmartRoutingConsideration:(bool)arg1 error:(id*)arg2;
- (bool)setForceSoundCheck:(bool)arg1 error:(id*)arg2;
- (bool)setHapticThermalGain:(float)arg1 error:(id*)arg2;
- (bool)setHostProcessAttribution:(id)arg1 error:(id*)arg2;
- (bool)setIAmTheAssistant:(bool)arg1 error:(id*)arg2;
- (bool)setInputDataSource:(id)arg1 error:(id*)arg2;
- (bool)setInputGain:(float)arg1 error:(id*)arg2;
- (bool)setInterruptionFadeDuration:(id)arg1 error:(id*)arg2;
- (bool)setInterruptionPriority:(long long)arg1 error:(id*)arg2;
- (bool)setIsExpanseMediaSession:(bool)arg1 error:(id*)arg2;
- (bool)setMode:(id)arg1 error:(id*)arg2;
- (bool)setNeedsHighPowerBudgeting:(bool)arg1 error:(id*)arg2;
- (bool)setOutputDataSource:(id)arg1 error:(id*)arg2;
- (bool)setParticipatesInMutePriority:(bool)arg1 error:(id*)arg2;
- (bool)setParticipatesInNowPlayingAppPolicy:(bool)arg1 error:(id*)arg2;
- (bool)setParticipatesInVolumePolicy:(bool)arg1 error:(id*)arg2;
- (bool)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2;
- (bool)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2;
- (bool)setPreferredIOBufferFrameSize:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setPreferredInput:(id)arg1 error:(id*)arg2;
- (bool)setPreferredInputNumberOfChannels:(long long)arg1 error:(id*)arg2;
- (bool)setPreferredInputOrientation:(long long)arg1 error:(id*)arg2;
- (bool)setPreferredInputSampleRate:(double)arg1 error:(id*)arg2;
- (bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id*)arg2;
- (bool)setPreferredOutputSampleRate:(double)arg1 error:(id*)arg2;
- (bool)setPreferredSampleRate:(double)arg1 error:(id*)arg2;
- (bool)setPrefersMultichannelAudio:(bool)arg1 error:(id*)arg2;
- (bool)setPrefersNoDucking:(bool)arg1 error:(id*)arg2;
- (bool)setPrefersNoInterruptionsByRingtonesAndAlerts:(bool)arg1 error:(id*)arg2;
- (bool)setPrefersNoInterruptionsFromSystemAlerts:(bool)arg1 error:(id*)arg2;
- (bool)setPrefersNoMicrophoneUsageIndicator:(bool)arg1 error:(id*)arg2;
- (bool)setPrefersToAcquireHWControlFromOtherSessions:(bool)arg1 error:(id*)arg2;
- (bool)setPrefersToVibeWhenVibrationsAreDisabled:(bool)arg1 error:(id*)arg2;
- (bool)setRecordingFromRemoteInput:(bool)arg1 error:(id*)arg2;
- (bool)setReporterID:(long long)arg1 error:(id*)arg2;
- (bool)setRequiresNoAudioResources:(bool)arg1 error:(id*)arg2;
- (bool)setRoutingContextUID:(id)arg1 error:(id*)arg2;
- (bool)setSpeakerThermalGain:(float)arg1 error:(id*)arg2;
- (bool)setSupportsMultichannelContent:(bool)arg1 error:(id*)arg2;
- (bool)silenceOutput:(unsigned long long)arg1 error:(id*)arg2;
- (float)speakerThermalGain;
- (double)speechDetectionDeviceSampleRate;
- (bool)supportsMultichannelContent;

@end
