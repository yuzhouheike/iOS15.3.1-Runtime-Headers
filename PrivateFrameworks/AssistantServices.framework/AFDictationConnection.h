/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDictationConnection : NSObject <AFNetworkAvailabilityObserver> {
    double  _amountDataSent;
    double  _audioStartTime;
    NSMutableData * _buffer;
    NSObject<OS_dispatch_source> * _bufferTimer;
    NSXPCConnection * _connection;
    <AFDictationDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _forceOfflineRecognition;
    bool  _hasActiveRequest;
    AFCallSiteInfo * _initiationCallSiteInfo;
    AFAudioPowerUpdater * _inputAudioPowerUpdater;
    AFInstanceContext * _instanceContext;
    NSObject<OS_dispatch_queue> * _internalQueue;
    AFAnalyticsTurnBasedInstrumentationContext * _intstrumentationContext;
    bool  _isCapturingSpeech;
    bool  _isDetectingUtterances;
    bool  _isWaitingForAudioFile;
    bool  _isWaitingForKnownOfflineInstalledLanguages;
    NSSet * _knownOfflineInstalledLanguages;
    NSString * _lastUsedLanguage;
    bool  _narrowband;
    NSString * _onDeviceDictationUIInteractionIdentifier;
    AFAnalyticsEvent * _preheatEvent;
    NSArray * _previouslyRecognizedPhrases;
    bool  _recognizingIncrementally;
    NSString * _requestIdString;
    NSObject<OS_dispatch_group> * _speechCallbackGroup;
    AFSpeechRequestOptions * _stopOptions;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFDictationDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)dictationIsEnabled;
+ (bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (void)fetchSupportedLanguageCodes:(id /* block */)arg1;
+ (void)getForcedOfflineDictationSupportedLanguagesWithCompletion:(id /* block */)arg1;
+ (bool)languageDetectorIsEnabled;

- (void).cxx_destruct;
- (void)_LogUEIRequestCategorization:(int)arg1;
- (void)_addPreheatAnalyticsEvent;
- (void)_availabilityChanged;
- (void)_cancelBufferFlushTimer;
- (void)_cancelRequestTimeout;
- (void)_cancelTimerClearBuffer;
- (void)_checkAndSetIsCapturingSpeech:(bool)arg1;
- (void)_clearConnection;
- (id)_connection;
- (void)_connectionClearedForInterruption:(bool)arg1;
- (void)_delayedStopSpeechWithOptions:(id)arg1;
- (void)_delegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2 delegate:(id)arg3;
- (id)_dequeueAudioWithLength:(unsigned long long)arg1;
- (id)_dictationService;
- (id)_dictationServiceWithErrorHandler:(id /* block */)arg1;
- (void)_dispatchAsync:(id /* block */)arg1;
- (void)_dispatchCallbackGroupBlock:(id /* block */)arg1;
- (void)_extendRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_logRequestCompetionStatusWithEventType:(long long)arg1 error:(id)arg2;
- (void)_registerInvalidationHandlerForXPCConnection:(id)arg1;
- (void)_scheduleRequestTimeout;
- (void)_sendDataIfNeeded;
- (void)_sendPendingAnalyticsEvents;
- (void)_setActivationTimeOnOptionsIfNecessary:(id)arg1;
- (void)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1;
- (void)_stopInputAudioPowerUpdates;
- (void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2;
- (void)_tellSpeechDelegateAvailabilityChanged;
- (void)_tellSpeechDelegateDidBeginLocalRecognitionWithModelInfo:(id)arg1;
- (void)_tellSpeechDelegateDidProcessAudioDuration:(double)arg1;
- (void)_tellSpeechDelegateDidRecognizePackage:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizePartialResult:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 utterances:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 audioAnalytics:(id)arg5;
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateLanguageDetected:(id)arg1 confidenceScores:(id)arg2 isConfident:(bool)arg3;
- (void)_tellSpeechDelegateLanguageDetectorDidFail:(id)arg1;
- (void)_tellSpeechDelegateMultilingualSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBeginWithOptions:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellSpeechDelegateSearchResultsReceived:(id)arg1 recognitionText:(id)arg2 stable:(bool)arg3 final:(bool)arg4;
- (void)_tellSpeechDelegateSpeechRecognitionDidSucceed;
- (void)_updateBufferFlushTimerWithDelay:(double)arg1;
- (void)_willCancelDictation;
- (void)_willCompleteDictation;
- (void)_willFailDictationWithError:(id)arg1;
- (void)_willStartDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 machAbsoluteTime:(unsigned long long)arg4;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (float)averagePower;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)cancelSpeech;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (bool)dictationIsAvailableForLanguage:(id)arg1;
- (bool)dictationIsAvailableForLanguage:(id)arg1 synchronous:(bool)arg2;
- (void)endSession;
- (bool)forcedOfflineDictationIsAvailableForLanguage:(id)arg1;
- (bool)forcedOfflineDictationIsAvailableForLanguage:(id)arg1 synchronous:(bool)arg2;
- (id)init;
- (id)initWithInstanceContext:(id)arg1;
- (void)networkAvailability:(id)arg1 isAvailable:(bool)arg2;
- (float)peakPower;
- (void)preheat;
- (void)preheatForLanguageCode:(id)arg1;
- (void)preheatTestWithLanguage:(id)arg1 options:(id)arg2;
- (void)preheatWithRecordDeviceIdentifier:(id)arg1;
- (void)reportIssueForError:(id)arg1 eventType:(long long)arg2 context:(id)arg3;
- (void)reportIssueForError:(id)arg1 eventType:(long long)arg2 subtype:(id)arg3 context:(id)arg4;
- (void)requestOfflineAssistantSupportForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2;
- (void)sendUserSelectedAlternativeDictationLanguageCode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(bool)arg2 options:(id)arg3 forLanguage:(id)arg4;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(bool)arg3;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(bool)arg3 forceSampling:(bool)arg4;
- (id /* block */)startRecordingForPendingDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)updateSpeechOptions:(id)arg1;

@end
