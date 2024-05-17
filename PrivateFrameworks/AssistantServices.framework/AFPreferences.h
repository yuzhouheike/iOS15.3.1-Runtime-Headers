/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPreferences : NSObject {
    AFInstanceContext * _instanceContext;
    int  _navToken;
    bool  _navTokenIsValid;
    NSObject<OS_dispatch_queue> * _navTokenQueue;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _registeredForAssistantEnablement;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _registeredForDictationEnablement;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _registeredForInternalPrefs;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _registeredForLanguageCode;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _registeredForNanoPrefs;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _registeredForOutputVoice;
    long long  _tlsSessionTicketFlushRequestPending;
}

+ (id)sharedPreferences;
+ (id)sharedPreferencesWithInstanceContext:(id)arg1;

- (void).cxx_destruct;
- (void)_assistantEnablementDidChangeExternally;
- (id)_bestSupportedLanguageCodeForLanguageCode:(id)arg1 isGoodFit:(bool*)arg2;
- (id)_bestSupportedLanguageCodeForLanguageCodes:(id)arg1 isGoodFit:(bool*)arg2;
- (void)_dictationEnablementDidChangeExternally;
- (bool)_dictationIsAllowed;
- (void)_internalPreferencesDidChangeExternally;
- (bool)_languageCode:(id)arg1 isGoodFitForPreferredLanguages:(id)arg2;
- (void)_languageCodeDidChangeExternally;
- (id)_languageCodeWithFallback:(bool)arg1;
- (id)_languagePreferencesForCurrentSystemConfiguration;
- (id)_nanoPreferencesValueForKey:(id)arg1;
- (void)_nanoPrefsDidChangeExternally;
- (void)_outputVoiceDidChangeExternally;
- (id)_outputVoiceWithFallback:(bool)arg1;
- (void)_preferencesDidChangeExternally;
- (void)_registerForAssistantEnablementChangeNotifications;
- (void)_registerForDictationEnablementChangeNotifications;
- (void)_registerForInternalPrefs;
- (void)_registerForLanguageCodeChangeNotifications;
- (void)_registerForNanoPrefsChangeNotifications;
- (void)_registerForNavStatusIfNeeded;
- (void)_registerForOutputVoice;
- (void)_setAssistantIsEnabledLocal:(bool)arg1;
- (void)_setDictationIsAllowed:(bool)arg1;
- (void)_setDictationIsEnabledLocal:(bool)arg1;
- (void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)_setNanoPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)_setOnDeviceDictationAvailableAlertPresentedLocal:(bool)arg1;
- (void)_setSuppressDictationOptInLocal:(bool)arg1;
- (id)allSiriLanguageCodesForSystemLanguageCode:(id)arg1 isGoodFit:(bool*)arg2;
- (bool)alwaysAllowVoiceActivation;
- (bool)alwaysObscureBackgroundContentWhenActive;
- (bool)alwaysShowRecognizedSpeech;
- (bool)assistantIsEnabled;
- (bool)assistantLanguageForceRTL;
- (bool)autoDismissal2018Enabled;
- (double)autoDismissalExtendedIdleTimeout;
- (double)autoDismissalIdleTimeout;
- (double)autoDismissalMaxAttentionSamplingTime;
- (bool)avvcLoggingEnabled;
- (id)bestSupportedLanguageCodeForLanguageCode:(id)arg1;
- (bool)cardLoggingEnabled;
- (void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;
- (void)clearAnnounceNotificationsInCarPlayType;
- (void)clearSpokenNotificationTemporarilyDisabledStatus;
- (bool)cloudSyncEnabled;
- (id)cloudSyncEnabledModificationDate;
- (bool)commandLoggingEnabled;
- (bool)companionConnectionsOverBLEEnabled;
- (id)configOverrides;
- (bool)crownActivationEnabled;
- (bool)curareOrchestrationEnabled;
- (unsigned long long)currentNavigationState;
- (bool)databaseSyncEnabled;
- (void)dealloc;
- (bool)debugButtonIsEnabled;
- (id)description;
- (bool)designModeIsEnabled;
- (bool)dictationIsEnabled;
- (id)dictationSLSLanguagesEnabled;
- (bool)disableAssistantWhilePasscodeLocked;
- (bool)disableMyriadBLEActivity;
- (bool)dismissWhenDeviceIsLoweredEnabled;
- (bool)dismissWhenFaceAttentionIsLostEnabled;
- (bool)enableDragAndDrop;
- (bool)enableNonFullScreenAppearance;
- (void)erasePreferences;
- (bool)fileLoggingIsEnabled;
- (bool)forceOfflineRecognitionEnabled;
- (void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(id /* block */)arg1;
- (void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(id /* block */)arg1;
- (void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(id)arg1 platform:(long long)arg2 completion:(id /* block */)arg3;
- (void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(long long)arg1 completion:(id /* block */)arg2;
- (void)getAnnounceNotificationsTemporarilyDisabledForApp:(id)arg1 platform:(long long)arg2 completion:(id /* block */)arg3;
- (void)getAnnounceNotificationsTemporarilyDisabledStatusForPlatform:(long long)arg1 completion:(id /* block */)arg2;
- (void)getExperimentForConfigurationIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)arg1;
- (void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(id /* block */)arg1;
- (void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(id /* block */)arg1;
- (void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(id /* block */)arg1;
- (void)getSpokenNotificationTemporarilyDisabledEndDateForApp:(id)arg1 completion:(id /* block */)arg2;
- (void)getSpokenNotificationTemporarilyDisabledEndDateWithCompletion:(id /* block */)arg1;
- (void)getSpokenNotificationTemporarilyDisabledForApp:(id)arg1 completion:(id /* block */)arg2;
- (void)getSpokenNotificationTemporarilyDisabledStatusWithCompletion:(id /* block */)arg1;
- (double)handsOffIdleTimeInterval;
- (double)handsOnIdleTimeInterval;
- (id)horsemanSupplementalLanguageDictionary;
- (bool)ignoreMyriadPlatformBias;
- (bool)ignoreServerManualEndpointingThreshold;
- (id)inProgressOutputVoice;
- (bool)includeProbePacketCaptureForABC;
- (id)init;
- (id)initWithInstanceContext:(id)arg1;
- (id)instanceContext;
- (unsigned long long)internalUserClassification;
- (bool)isCurrentLocaleNativelySupported;
- (bool)isDictationHIPAACompliant;
- (bool)isDictationOnDeviceSamplingDisabled;
- (bool)isLanguageDetectorEnabled;
- (bool)isLanguageDetectorEnabledByServer;
- (bool)isLocaleIdentifierNativelySupported:(id)arg1;
- (bool)isOnDeviceDictationForced;
- (bool)isSmartLanguageSelectionEnabled;
- (bool)keepRecordedAudioFiles;
- (id)languageCode;
- (bool)limitedAudioLoggingEnabled;
- (bool)listenAfterSpeakingDisabled;
- (id)manualEndpointingThreshold;
- (bool)mediaPlaybackEnabled;
- (int)myriadConstantGoodness;
- (bool)myriadCoordinationEnabled;
- (bool)myriadCoordinationEnabledForAccessoryLogging;
- (float)myriadDeviceAdjust;
- (unsigned char)myriadDeviceClass;
- (double)myriadDeviceDelay;
- (id)myriadDeviceGroup;
- (double)myriadDeviceSlowdown;
- (double)myriadDeviceTrumpDelay;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (bool)myriadDuckingEnabled;
- (id)myriadLastWin;
- (double)myriadMaxNoOperationDelay;
- (id)myriadMonitorTimeOutInterval;
- (bool)myriadServerHasProvisioned;
- (bool)myriadServerProvisioning;
- (bool)myriadShouldIgnoreAdjustedBoost;
- (double)myriadTestDeviceDelay;
- (bool)nanoAssistantEnabled;
- (bool)nanoCrownActivationEnabled;
- (bool)nanoDictationEnabled;
- (id)nanoLanguageCode;
- (id)nanoOfflineDictationStatus;
- (id)nanoOutputVoice;
- (bool)nanoPhraseSpotterEnabled;
- (bool)nanoRaiseToSpeakEnabled;
- (long long)nanoSiriDataSharingOptInStatus;
- (float)nanoTTSSpeakerVolume;
- (long long)nanoUseDeviceSpeakerForTTS;
- (bool)networkLoggingEnabled;
- (bool)offlineDictationOverride;
- (id)offlineDictationProfileOverridePath;
- (id)offlineDictationStatus;
- (bool)onDeviceDictationAvailableAlertPresented;
- (bool)opportuneSpeakingFileLoggingIsEnabled;
- (double)opportuneSpeakingPauseInterval;
- (double)opportuneSpeakingTimeoutInterval;
- (id)outputVoice;
- (bool)preferOnlineRecognitionEnabled;
- (void)removeConfigOverrideForKey:(id)arg1;
- (void)resetSessionLanguage;
- (void)setAVVCLoggingEnabled:(bool)arg1;
- (void)setAlwaysAllowVoiceActivation:(bool)arg1;
- (void)setAlwaysObscureBackgroundContentWhenActive:(bool)arg1;
- (void)setAlwaysShowRecognizedSpeech:(bool)arg1;
- (void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(bool)arg1;
- (void)setAnnounceNotificationsInCarPlayType:(long long)arg1;
- (void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 forApp:(id)arg2 platform:(long long)arg3;
- (void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 platform:(long long)arg2;
- (void)setAssistantIsEnabled:(bool)arg1;
- (void)setAssistantLanguageForceRTL:(bool)arg1;
- (void)setAutoDismissal2018Enabled:(bool)arg1;
- (void)setAutoDismissalExtendedIdleTimeout:(double)arg1;
- (void)setAutoDismissalIdleTimeout:(double)arg1;
- (void)setAutoDismissalMaxAttentionSamplingTime:(double)arg1;
- (void)setCardLoggingEnabled:(bool)arg1;
- (void)setCloudSyncEnabled:(bool)arg1;
- (void)setCommandLoggingEnabled:(bool)arg1;
- (void)setCompanionConnectionsOverBLEEnabled:(bool)arg1;
- (void)setConfigOverrideWithValue:(id)arg1 forKey:(id)arg2;
- (void)setConfigOverrides:(id)arg1;
- (void)setCrownActivationEnabled:(bool)arg1;
- (void)setCurareOrchestrationEnabled:(bool)arg1;
- (void)setCurrentNavigationState:(unsigned long long)arg1;
- (void)setDatabaseSyncEnabled:(bool)arg1;
- (void)setDebugButtonIsEnabled:(bool)arg1;
- (void)setDesignModeEnabled:(bool)arg1;
- (void)setDictationIsEnabled:(bool)arg1;
- (void)setDictationSLSLanguagesEnabled:(id)arg1;
- (void)setDisableAssistantWhilePasscodeLocked:(bool)arg1;
- (void)setDismissWhenDeviceIsLoweredEnabled:(bool)arg1;
- (void)setDismissWhenFaceAttentionIsLostEnabled:(bool)arg1;
- (void)setEnableDragAndDrop:(bool)arg1;
- (void)setEnableNonFullScreenAppearance:(bool)arg1;
- (void)setFileLoggingIsEnabled:(bool)arg1;
- (void)setForceOfflineRecognitionEnabled:(bool)arg1;
- (void)setHandsOffIdleTimeInterval:(double)arg1;
- (void)setHandsOnIdleTimeInterval:(double)arg1;
- (void)setIgnoreMyriadAdjustedBoost:(bool)arg1;
- (void)setIgnoreMyriadPlatformBias:(bool)arg1;
- (void)setIgnoreServerManualEndpointingThreshold:(bool)arg1;
- (void)setInProgressOutputVoice:(id)arg1;
- (void)setInternalUserClassification:(unsigned long long)arg1;
- (void)setKeepRecordedAudioFiles:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLanguageCode:(id)arg1 outputVoice:(id)arg2;
- (void)setLanguageDetectorEnabled:(bool)arg1;
- (void)setLimitedAudioLoggingEnabled:(bool)arg1;
- (void)setListenAfterSpeakingDisabled:(bool)arg1;
- (void)setManualEndpointingThreshold:(id)arg1;
- (void)setMediaPlaybackEnabled:(bool)arg1;
- (void)setMyriadConstantGoodness:(int)arg1;
- (void)setMyriadCoordinationEnabled:(bool)arg1;
- (void)setMyriadDeviceAdjust:(float)arg1;
- (void)setMyriadDeviceClass:(unsigned char)arg1;
- (void)setMyriadDeviceDelay:(double)arg1;
- (void)setMyriadDeviceGroup:(id)arg1;
- (void)setMyriadDeviceSlowdown:(double)arg1;
- (void)setMyriadDeviceTrumpDelay:(double)arg1;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)arg1;
- (void)setMyriadDuckingEnabled:(bool)arg1;
- (void)setMyriadLastWin;
- (void)setMyriadMaxNoOperationDelay:(double)arg1;
- (void)setMyriadServerHasProvisioned:(bool)arg1;
- (void)setMyriadServerProvisioning:(bool)arg1;
- (void)setMyriadTestDeviceDelay:(double)arg1;
- (void)setNanoAssistantEnabled:(bool)arg1;
- (void)setNanoCrownActivationEnabled:(bool)arg1;
- (void)setNanoDictationEnabled:(bool)arg1;
- (void)setNanoLanguageCode:(id)arg1;
- (void)setNanoLanguageCode:(id)arg1 outputVoice:(id)arg2 forTinkerDevice:(id)arg3;
- (void)setNanoOutputVoice:(id)arg1;
- (void)setNanoPhraseSpotterEnabled:(bool)arg1;
- (void)setNanoRaiseToSpeakEnabled:(bool)arg1;
- (void)setNanoSiriDataSharingOptInStatus:(long long)arg1;
- (void)setNanoTTSSpeakerVolume:(float)arg1;
- (void)setNanoUseDeviceSpeakerForTTS:(long long)arg1;
- (void)setNetworkLoggingEnabled:(bool)arg1;
- (void)setOfflineDictationOverride:(bool)arg1;
- (void)setOfflineDictationProfileOverridePath:(id)arg1;
- (void)setOfflineDictationStatus:(id)arg1;
- (void)setOnDeviceDictationAvailableAlertPresented:(bool)arg1;
- (void)setOpportuneSpeakingFileLoggingIsEnabled:(bool)arg1;
- (void)setOpportuneSpeakingPauseInterval:(double)arg1;
- (void)setOpportuneSpeakingTimeoutInterval:(double)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)setPreferOnlineRecognitionEnabled:(bool)arg1;
- (void)setShowServerOnUI:(bool)arg1;
- (void)setShowsHoldToTalkIndicator:(bool)arg1;
- (void)setSiriDataSharingHomePodSetupDeviceIsValid:(bool)arg1 completion:(id /* block */)arg2;
- (void)setSiriDataSharingOptInAlertPresented:(bool)arg1 completion:(id /* block */)arg2;
- (void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(id /* block */)arg2;
- (void)setSiriDebugUIEnabled:(bool)arg1;
- (void)setSiriResponseShouldAlwaysPrint:(bool)arg1;
- (void)setSiriSpeakerGradingDebugUIEnabled:(bool)arg1;
- (void)setSiriVocabularyEnabled:(bool)arg1;
- (void)setSmartLanguageSelection:(bool)arg1;
- (void)setSpokenNotificationIsAlwaysOpportune:(bool)arg1;
- (void)setSpokenNotificationShouldAnnounceAllNotifications:(bool)arg1;
- (void)setSpokenNotificationShouldSkipTriggerlessReplies:(bool)arg1;
- (void)setSpokenNotificationSkipTriggerlessReplyConfirmation:(bool)arg1;
- (void)setSpokenNotificationTemporarilyDisabledForApp:(id)arg1 until:(id)arg2;
- (void)setSpokenNotificationTemporarilyDisabledUntil:(id)arg1;
- (void)setSpokenNotificationsProxCardSeen;
- (void)setStartAlertEnabled:(bool)arg1;
- (void)setStreamingDictationEnabled:(bool)arg1;
- (void)setSuppressAssistantOptIn:(bool)arg1;
- (void)setSuppressDictationOptIn:(bool)arg1;
- (void)setTLSSessionTicketsFlushPending:(bool)arg1;
- (void)setUseDeviceSpeakerForTTS:(long long)arg1;
- (void)setUtteranceDetectionEnabled:(bool)arg1;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (bool)shouldLogForQA;
- (bool)shouldSuppressSiriDataSharingOptInAlert;
- (bool)showServerOnUI;
- (bool)showsHoldToTalkIndicator;
- (long long)siriDataSharingOptInStatus;
- (bool)siriDebugUIEnabled;
- (bool)siriResponseShouldAlwaysPrint;
- (bool)siriSpeakerGradingDebugUIEnabled;
- (bool)siriVocabularyEnabled;
- (bool)spokenNotificationSkipTriggerlessReplyConfirmation;
- (bool)startAlertEnabled;
- (bool)streamingDictationEnabled;
- (id)supplementalLanguageDictionaryForProduct:(id)arg1;
- (id)supplementalLanguages;
- (id)supplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2;
- (id)supplementalLanguagesModificationDate;
- (bool)suppressAssistantOptIn;
- (bool)suppressDictationOptIn;
- (void)synchronize;
- (void)synchronizeAVVCPreferencesDomain;
- (void)synchronizeLogPreferencesDomain;
- (void)synchronizeVoiceServicesLanguageCode;
- (bool)tlsSessionTicketsFlushPending;
- (long long)useDeviceSpeakerForTTS;
- (bool)utteranceDetectionEnabled;
- (id)valueForSessionContextPreferenceKey:(id)arg1;

@end
